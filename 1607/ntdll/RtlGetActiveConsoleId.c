/*
 * XREFs of RtlGetActiveConsoleId @ 0x1800863A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18002CD70 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtQueryInformationJobObject @ 0x1800A8AF0 (NtQueryInformationJobObject.c)
 */

ULONG RtlGetActiveConsoleId(void)
{
  _BYTE JobObjectInformation[4]; // [rsp+30h] [rbp-38h] BYREF
  ULONG v2; // [rsp+34h] [rbp-34h]

  if ( !RtlGetCurrentServiceSessionId() )
    return MEMORY[0x7FFE02D8];
  NtQueryInformationJobObject(0LL, JobObjectServerSiloUserSharedData, JobObjectInformation, 0x20u, 0LL);
  return v2;
}
