/*
 * XREFs of WerpGlobalFlagsForProcess @ 0x18005B83C
 * Callers:
 *     RtlReportSilentProcessExit @ 0x18005B560 (RtlReportSilentProcessExit.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180018130 (RtlInitUnicodeStringEx.c)
 *     RtlAppendUnicodeToString @ 0x180019AF0 (RtlAppendUnicodeToString.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     WerpPathTail @ 0x18005BACC (WerpPathTail.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtOpenKey @ 0x1800A5300 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A53A0 (NtQueryValueKey.c)
 *     NtQueryInformationProcess @ 0x1800A53E0 (NtQueryInformationProcess.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall WerpGlobalFlagsForProcess(HANDLE ProcessHandle)
{
  unsigned int v1; // edi
  __int64 v3; // rax
  const WCHAR *v4; // rbx
  __int64 v5; // rcx
  unsigned int v6; // esi
  _UNICODE_STRING v7; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-C0h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-B8h] BYREF
  _UNICODE_STRING ValueName; // [rsp+58h] [rbp-B0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD ProcessInformation[68]; // [rsp+98h] [rbp-70h] BYREF
  int KeyValueInformation; // [rsp+2B8h] [rbp+1B0h] BYREF
  __int64 v14; // [rsp+2BCh] [rbp+1B4h]
  __int64 v15; // [rsp+2C4h] [rbp+1BCh]

  KeyHandle = 0LL;
  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  KeyValueInformation = 0;
  v14 = 0LL;
  v15 = 0LL;
  ValueName.Length = 0;
  *(_QWORD *)&ValueName.MaximumLength = 0LL;
  v1 = 0;
  *(_DWORD *)((char *)&ValueName.Buffer + 2) = 0;
  HIWORD(ValueName.Buffer) = 0;
  v7.Length = 0;
  *(_QWORD *)&v7.MaximumLength = 0LL;
  *(_DWORD *)((char *)&v7.Buffer + 2) = 0;
  HIWORD(v7.Buffer) = 0;
  if ( (NtQueryInformationProcess(ProcessHandle, ProcessImageFileNameWin32, ProcessInformation, 0x218u, 0LL) & 0xC0000000) != 0xC0000000 )
  {
    v3 = WerpPathTail(ProcessInformation[1]);
    v4 = (const WCHAR *)v3;
    if ( v3 )
    {
      v5 = -1LL;
      do
        ++v5;
      while ( *(_WORD *)(v3 + 2 * v5) );
      v6 = 2 * v5 + 202;
      v7.Length = 0;
      v7.Buffer = (unsigned __int16 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
      if ( v7.Buffer )
      {
        v7.MaximumLength = v6;
        if ( RtlAppendUnicodeToString(
               &v7,
               L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\") >= 0
          && RtlAppendUnicodeToString(&v7, v4) >= 0 )
        {
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &v7;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 64;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          if ( NtOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
          {
            ResultLength = 0;
            if ( (RtlInitUnicodeStringEx(&ValueName, L"GlobalFlag") & 0xC0000000) != 0xC0000000
              && NtQueryValueKey(
                   KeyHandle,
                   &ValueName,
                   KeyValuePartialInformation,
                   &KeyValueInformation,
                   0x14u,
                   &ResultLength) >= 0
              && (_DWORD)v14 == 4 )
            {
              v1 = v15;
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
  if ( v7.Buffer )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7.Buffer);
  return v1;
}
