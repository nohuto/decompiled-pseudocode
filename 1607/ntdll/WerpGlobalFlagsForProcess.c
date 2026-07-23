/*
 * XREFs of WerpGlobalFlagsForProcess @ 0x1800075BC
 * Callers:
 *     RtlReportSilentProcessExit @ 0x180007300 (RtlReportSilentProcessExit.c)
 * Callees:
 *     WerpPathTail @ 0x1800077E0 (WerpPathTail.c)
 *     RtlInitUnicodeStringEx @ 0x180011900 (RtlInitUnicodeStringEx.c)
 *     RtlAppendUnicodeToString @ 0x180013C80 (RtlAppendUnicodeToString.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtOpenKey @ 0x1800A6660 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A6700 (NtQueryValueKey.c)
 *     NtQueryInformationProcess @ 0x1800A6740 (NtQueryInformationProcess.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall WerpGlobalFlagsForProcess(HANDLE ProcessHandle)
{
  unsigned int v2; // edi
  __int64 v4; // rax
  const WCHAR *v5; // rbx
  __int64 v6; // rcx
  unsigned int v7; // esi
  _UNICODE_STRING v8; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-C0h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-B8h] BYREF
  _UNICODE_STRING v11; // [rsp+58h] [rbp-B0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD ProcessInformation[68]; // [rsp+98h] [rbp-70h] BYREF
  int KeyValueInformation; // [rsp+2B8h] [rbp+1B0h] BYREF
  __int64 v15; // [rsp+2BCh] [rbp+1B4h]
  __int64 v16; // [rsp+2C4h] [rbp+1BCh]

  KeyHandle = 0LL;
  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  KeyValueInformation = 0;
  v15 = 0LL;
  v16 = 0LL;
  v11.Length = 0;
  *(_QWORD *)&v11.MaximumLength = 0LL;
  v2 = 0;
  *(_DWORD *)((char *)&v11.Buffer + 2) = 0;
  HIWORD(v11.Buffer) = 0;
  v8.Length = 0;
  *(_QWORD *)&v8.MaximumLength = 0LL;
  *(_DWORD *)((char *)&v8.Buffer + 2) = 0;
  HIWORD(v8.Buffer) = 0;
  if ( (NtQueryInformationProcess(ProcessHandle, ProcessImageFileNameWin32, ProcessInformation, 0x218u, 0LL) & 0xC0000000) != 0xC0000000 )
  {
    v4 = WerpPathTail(ProcessInformation[1]);
    v5 = (const WCHAR *)v4;
    if ( v4 )
    {
      v6 = -1LL;
      do
        ++v6;
      while ( *(_WORD *)(v4 + 2 * v6) );
      v7 = 2 * v6 + 202;
      v8.Length = 0;
      v8.Buffer = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
      if ( v8.Buffer )
      {
        v8.MaximumLength = v7;
        if ( RtlAppendUnicodeToString(
               &v8,
               L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\") >= 0
          && RtlAppendUnicodeToString(&v8, v5) >= 0 )
        {
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &v8;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 64;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          if ( NtOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
          {
            ResultLength = 0;
            if ( (RtlInitUnicodeStringEx(&v11, L"GlobalFlag") & 0xC0000000) != 0xC0000000
              && NtQueryValueKey(
                   KeyHandle,
                   &v11,
                   KeyValuePartialInformation,
                   &KeyValueInformation,
                   0x14u,
                   &ResultLength) >= 0
              && (_DWORD)v15 == 4 )
            {
              v2 = v16;
            }
          }
        }
      }
    }
  }
  if ( KeyHandle )
  {
    NtClose(KeyHandle);
    KeyHandle = 0LL;
  }
  if ( v8.Buffer )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8.Buffer);
  return v2;
}
