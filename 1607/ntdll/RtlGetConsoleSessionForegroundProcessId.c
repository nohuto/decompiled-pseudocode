/*
 * XREFs of RtlGetConsoleSessionForegroundProcessId @ 0x1800EEE80
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18002CD80 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtQueryInformationJobObject @ 0x1800A8AF0 (NtQueryInformationJobObject.c)
 */

__int64 RtlGetConsoleSessionForegroundProcessId()
{
  __int64 v1; // [rsp+38h] [rbp-30h]

  if ( !(unsigned int)RtlGetCurrentServiceSessionId() )
    return MEMORY[0x7FFE0338];
  NtQueryInformationJobObject();
  return v1;
}
