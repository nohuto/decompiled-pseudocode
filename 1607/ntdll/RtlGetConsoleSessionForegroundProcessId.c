/*
 * XREFs of RtlGetConsoleSessionForegroundProcessId @ 0x1800EEE80
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18002CD70 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtQueryInformationJobObject @ 0x1800A8AF0 (NtQueryInformationJobObject.c)
 */

ULONGLONG RtlGetConsoleSessionForegroundProcessId(void)
{
  _BYTE JobObjectInformation[8]; // [rsp+30h] [rbp-38h] BYREF
  ULONGLONG v2; // [rsp+38h] [rbp-30h]

  if ( !RtlGetCurrentServiceSessionId() )
    return MEMORY[0x7FFE0338];
  NtQueryInformationJobObject(0LL, JobObjectServerSiloUserSharedData, JobObjectInformation, 0x20u, 0LL);
  return v2;
}
