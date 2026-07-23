/*
 * XREFs of RtlGetConsoleSessionForegroundProcessId @ 0x140689190
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x140076520 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwQueryInformationJobObject @ 0x14015C8D0 (ZwQueryInformationJobObject.c)
 */

ULONGLONG RtlGetConsoleSessionForegroundProcessId(void)
{
  _BYTE JobInformation[8]; // [rsp+30h] [rbp-38h] BYREF
  ULONGLONG v2; // [rsp+38h] [rbp-30h]

  if ( !RtlGetCurrentServiceSessionId() )
    return MEMORY[0xFFFFF78000000338];
  ZwQueryInformationJobObject(0LL, JobObjectServerSiloUserSharedData, JobInformation, 0x20u, 0LL);
  return v2;
}
