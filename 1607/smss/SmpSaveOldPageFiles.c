/*
 * XREFs of SmpSaveOldPageFiles @ 0x14000A108
 * Callers:
 *     SmpCreatePagingFiles @ 0x1400099F0 (SmpCreatePagingFiles.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140004D08 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x14000C850 (__security_check_cookie.c)
 *     memset_0 @ 0x14000CC60 (memset_0.c)
 *     SmpDeletePagingFile @ 0x14000FFFC (SmpDeletePagingFile.c)
 *     SmpQueryPathFromRegistry @ 0x140011098 (SmpQueryPathFromRegistry.c)
 *     SmpSaveOldPageFile @ 0x14001141C (SmpSaveOldPageFile.c)
 */

void SmpSaveOldPageFiles()
{
  struct _UNICODE_STRING *v0; // rsi
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  NTSTATUS v4; // ebx
  unsigned int i; // edi
  char v6; // al
  int PathFromRegistry; // eax
  __int64 v8; // rdi
  unsigned int v9; // edi
  unsigned int v10; // ebx
  USHORT Length; // ax
  struct _UNICODE_STRING Destination; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-C0h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v15[2]; // [rsp+58h] [rbp-B0h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v17[2]; // [rsp+78h] [rbp-90h] BYREF
  struct _UNICODE_STRING v18; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v19[16]; // [rsp+98h] [rbp-70h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-50h] BYREF
  _DWORD KeyValueInformation[4]; // [rsp+E8h] [rbp-20h] BYREF
  _DWORD v23[4]; // [rsp+F8h] [rbp-10h] BYREF
  PVOID BaseAddress[32]; // [rsp+108h] [rbp+0h]
  wchar_t pszDest[64]; // [rsp+208h] [rbp+100h] BYREF

  LODWORD(v15[0]) = 10092696;
  v15[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl\\MachineCrash";
  *(_DWORD *)&ValueName.Length = 2752552;
  ValueName.Buffer = L"SavePageFileContents";
  LODWORD(v17[0]) = 2359330;
  v17[1] = L"SavedPageFilePath";
  *(_DWORD *)&v18.Length = 1966108;
  v18.Buffer = L"SavedPageFiles";
  v0 = 0LL;
  memset_0(v23, 0, 0x108uLL);
  Destination.Length = 0;
  *(_QWORD *)&Destination.MaximumLength = 0LL;
  *(_DWORD *)((char *)&Destination.Buffer + 2) = 0;
  HIWORD(Destination.Buffer) = 0;
  Handle = 0LL;
  if ( SmpUseDedicatedDumpFile )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v15;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( NtOpenKey(&Handle, 0x20019u, &ObjectAttributes) >= 0
      && NtQueryValueKey(
           SmpCrashDumpKey,
           &ValueName,
           KeyValuePartialInformationAlign64,
           KeyValueInformation,
           0x10u,
           &ResultLength) >= 0
      && KeyValueInformation[0] == 4 )
    {
      v6 = SmpSavePageFiles;
      if ( KeyValueInformation[2] == 1 )
        v6 = 1;
      SmpSavePageFiles = v6;
    }
  }
  if ( SmpSavePageFiles )
  {
    PathFromRegistry = SmpQueryPathFromRegistry(v2, v17, 0LL, v19);
    v8 = SmpExistingPageFilesList;
    v0 = (struct _UNICODE_STRING *)v19;
    if ( PathFromRegistry < 0 )
      v0 = 0LL;
    while ( (__int64 *)v8 != &SmpExistingPageFilesList )
    {
      v4 = SmpSaveOldPageFile((PCUNICODE_STRING)(v8 + 16));
      if ( v4 < 0 )
        goto LABEL_4;
      v8 = *(_QWORD *)v8;
    }
    v4 = RtlStringCbPrintfW(pszDest, 0x80uLL, L"\\??\\%c:\\%s", (unsigned __int16)SmpOsVolumeLetter, L"swapfile.sys");
    if ( v4 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, pszDest);
      SmpSaveOldPageFile(&DestinationString);
      v9 = v23[1] + 2 * (v23[0] + 1);
      if ( v9 <= 0xFFFF )
      {
        Destination.Buffer = (PWSTR)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v9);
        if ( Destination.Buffer )
        {
          v10 = 0;
          Destination.MaximumLength = v9;
          if ( v23[0] )
          {
            do
            {
              RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)&v23[4 * v10++ + 2]);
              Length = Destination.Length + 2;
              Destination.Length += 2;
            }
            while ( v10 < v23[0] );
          }
          else
          {
            Length = Destination.Length;
          }
          Destination.Buffer[(unsigned __int64)Length >> 1] = 0;
          Destination.Length += 2;
          v4 = NtSetValueKey(SmpCrashDumpKey, &v18, 0, 7u, Destination.Buffer, v9);
          if ( v4 >= 0 )
            NtFlushKey(SmpCrashDumpKey);
        }
        else
        {
          v4 = -1073741670;
        }
      }
      else
      {
        v4 = -1073741562;
      }
    }
  }
  else
  {
    v4 = 0;
  }
LABEL_4:
  if ( Handle )
    NtClose(Handle);
  for ( i = 0; i < v23[0]; ++i )
  {
    if ( BaseAddress[2 * i] )
    {
      if ( v4 < 0LL )
        SmpDeletePagingFile(&v23[4 * i + 2], v1, v3);
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress[2 * i]);
    }
  }
  if ( Destination.Buffer )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Destination.Buffer);
  if ( v0 )
    RtlFreeUnicodeString(v0);
}
