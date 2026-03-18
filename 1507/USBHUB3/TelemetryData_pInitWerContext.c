/*
 * XREFs of TelemetryData_pInitWerContext @ 0x1C006FE8C
 * Callers:
 *     TelemetryData_SubmitReport @ 0x1C00702B0 (TelemetryData_SubmitReport.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C000EFEC (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C00341F0 (__security_check_cookie.c)
 *     memmove @ 0x1C0034300 (memmove.c)
 *     memset @ 0x1C0034640 (memset.c)
 *     RegRetrieveValueInfo @ 0x1C0070334 (RegRetrieveValueInfo.c)
 */

__int64 __fastcall TelemetryData_pInitWerContext(__int64 a1)
{
  size_t v2; // r14
  int v3; // ebx
  PVOID v4; // rbx
  unsigned int v5; // eax
  __int64 v6; // rdi
  NTSTATUS v7; // ebx
  NTSTATUS v8; // eax
  void *KeyHandle; // [rsp+78h] [rbp-90h] BYREF
  PVOID P; // [rsp+80h] [rbp-88h]
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+98h] [rbp-70h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+A8h] [rbp-60h] BYREF
  int v15; // [rsp+B8h] [rbp-50h] BYREF
  const wchar_t *v16; // [rsp+C0h] [rbp-48h]
  void *FileHandle; // [rsp+C8h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES v18; // [rsp+D0h] [rbp-38h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+100h] [rbp-8h] BYREF
  wchar_t pszDest[264]; // [rsp+138h] [rbp+30h] BYREF

  DestinationString.Length = 0;
  *(_QWORD *)&DestinationString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0;
  HIWORD(DestinationString.Buffer) = 0;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  v18.Length = 0;
  memset(&v18.RootDirectory, 0, 0x28uLL);
  v15 = 2883628;
  v2 = 518LL;
  v16 = L"LiveKernelReportsPath";
  ValueName.Buffer = L"LiveKernelReportsPath";
  *(_DWORD *)&ValueName.Length = 2883628;
  memset(pszDest, 0, 520);
  KeyHandle = 0LL;
  memset(&ObjectAttributes.RootDirectory, 0, 0x28uLL);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v15;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0
    && (P = 0LL, v3 = RegRetrieveValueInfo(KeyHandle, &ValueName), ZwClose(KeyHandle), v3 >= 0)
    && (v4 = P) != 0LL
    && *((_DWORD *)P + 1) == 1 )
  {
    v5 = *((_DWORD *)P + 2);
    if ( v5 <= 0x206 )
      v2 = v5;
    v6 = a1 + 104;
    memmove((void *)(a1 + 104), (char *)P + 12, v2);
    ExFreePoolWithTag(v4, 0x74614454u);
  }
  else
  {
    v6 = a1 + 104;
    RtlStringCbPrintfW((NTSTRSAFE_PWSTR)(a1 + 104), 0x208uLL, L"%ws", L"\\SystemRoot\\LiveKernelReports");
  }
  *(_WORD *)(a1 + 622) = 0;
  v7 = RtlStringCbPrintfW(pszDest, 0x208uLL, L"%ws\\%ws", v6, a1 + 624);
  if ( v7 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, pszDest);
    v18.Length = 48;
    v18.RootDirectory = 0LL;
    v18.Attributes = 576;
    v18.ObjectName = &DestinationString;
    *(_OWORD *)&v18.SecurityDescriptor = 0LL;
    v8 = IoCreateFile(
           &FileHandle,
           0x10000000u,
           &v18,
           &IoStatusBlock,
           0LL,
           0x80u,
           3u,
           2u,
           1u,
           0LL,
           0,
           CreateFileTypeNone,
           0LL,
           0x100u);
    v7 = v8;
    if ( v8 < 0 )
    {
      if ( v8 == -1073741771 || IoStatusBlock.Information == 4 )
        return 0;
    }
    else
    {
      ZwClose(FileHandle);
    }
  }
  return (unsigned int)v7;
}
