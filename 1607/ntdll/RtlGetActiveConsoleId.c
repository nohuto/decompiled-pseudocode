/*
 * XREFs of RtlGetActiveConsoleId @ 0x1800863B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18002CD80 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtQueryInformationJobObject @ 0x1800A8AF0 (NtQueryInformationJobObject.c)
 */

__int64 RtlGetActiveConsoleId()
{
  _BYTE v1[4]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v2; // [rsp+34h] [rbp-34h]

  if ( !(unsigned int)RtlGetCurrentServiceSessionId() )
    return MEMORY[0x7FFE02D8];
  NtQueryInformationJobObject(0LL, 39LL, v1, 32LL, 0LL);
  return v2;
}
