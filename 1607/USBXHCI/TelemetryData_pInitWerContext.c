/*
 * XREFs of TelemetryData_pInitWerContext @ 0x1C0054EE0
 * Callers:
 *     TelemetryData_SubmitReport @ 0x1C0054B94 (TelemetryData_SubmitReport.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C00093B4 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C000FA40 (__security_check_cookie.c)
 *     memmove @ 0x1C000FEC0 (memmove.c)
 *     memset @ 0x1C0010200 (memset.c)
 *     RegFreeInfo @ 0x1C00552F8 (RegFreeInfo.c)
 *     RegRetrieveValueInfo @ 0x1C0055314 (RegRetrieveValueInfo.c)
 */

__int64 __fastcall TelemetryData_pInitWerContext(__int64 a1)
{
  int v2; // ebx
  _DWORD *v3; // rbx
  unsigned int v4; // eax
  size_t v5; // r8
  __int64 v6; // rdi
  NTSTATUS v7; // ebx
  NTSTATUS v8; // eax
  void *KeyHandle; // [rsp+78h] [rbp-90h] BYREF
  _DWORD *v11; // [rsp+80h] [rbp-88h]
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+98h] [rbp-70h] BYREF
  void *FileHandle; // [rsp+A8h] [rbp-60h] BYREF
  int v15; // [rsp+B0h] [rbp-58h] BYREF
  const wchar_t *v16; // [rsp+B8h] [rbp-50h]
  struct _UNICODE_STRING ValueName; // [rsp+C0h] [rbp-48h] BYREF
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
  v16 = L"LiveKernelReportsPath";
  ValueName.Buffer = L"LiveKernelReportsPath";
  *(_DWORD *)&ValueName.Length = 2883628;
  memset(pszDest, 0, 0x208uLL);
  KeyHandle = 0LL;
  memset(&ObjectAttributes.RootDirectory, 0, 0x28uLL);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v15;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0
    && (v11 = 0LL, v2 = RegRetrieveValueInfo(KeyHandle, &ValueName), ZwClose(KeyHandle), v2 >= 0)
    && (v3 = v11) != 0LL
    && v11[1] == 1 )
  {
    v4 = v11[2];
    v5 = 518LL;
    if ( v4 <= 0x206 )
      v5 = v4;
    v6 = a1 + 104;
    memmove((void *)(a1 + 104), v11 + 3, v5);
    RegFreeInfo(v3);
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
