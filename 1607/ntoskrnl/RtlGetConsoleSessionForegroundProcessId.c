/*
 * XREFs of RtlGetConsoleSessionForegroundProcessId @ 0x1406890AC
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x1400764A0 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ZwQueryInformationJobObject @ 0x14015C360 (ZwQueryInformationJobObject.c)
 */

__int64 RtlGetConsoleSessionForegroundProcessId()
{
  _BYTE JobInformation[8]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v2; // [rsp+38h] [rbp-30h]

  if ( !(unsigned int)RtlGetCurrentServiceSessionId() )
    return MEMORY[0xFFFFF78000000338];
  ZwQueryInformationJobObject(0LL, JobObjectServerSiloUserSharedData, JobInformation, 0x20u, 0LL);
  return v2;
}
