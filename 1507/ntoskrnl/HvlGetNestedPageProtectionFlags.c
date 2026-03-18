/*
 * XREFs of HvlGetNestedPageProtectionFlags @ 0x14015A5A4
 * Callers:
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 *     PopAllocateHiberContext @ 0x14056A188 (PopAllocateHiberContext.c)
 *     PsLocateSystemDlls @ 0x1405B5788 (PsLocateSystemDlls.c)
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1401289D4 (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 HvlGetNestedPageProtectionFlags()
{
  unsigned int v0; // ebx
  unsigned __int8 v2[16]; // [rsp+20h] [rbp-88h] BYREF
  int v3; // [rsp+30h] [rbp-78h]

  v0 = 0;
  if ( HvlpVsmVtlCallVa && HvlpEnterIumSecureMode(1u, 231, 0, v2) >= 0 )
  {
    v0 = 4;
    if ( (v3 & 1) != 0 )
      v0 = 6;
    if ( (v3 & 2) != 0 )
      v0 |= 0x20u;
    if ( (v3 & 4) == 0 )
      v0 |= 0x10u;
  }
  return v0;
}
