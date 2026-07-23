/*
 * XREFs of HvlpGetVpRegisterSelfFast @ 0x14023CCC4
 * Callers:
 *     HvlEnableVsmCalls @ 0x1407BD24C (HvlEnableVsmCalls.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     HvcallFastExtended @ 0x140231E68 (HvcallFastExtended.c)
 */

__int64 __fastcall HvlpGetVpRegisterSelfFast(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // ax
  unsigned int v3; // ecx
  __int64 v5; // [rsp+40h] [rbp-38h] BYREF
  int v6; // [rsp+48h] [rbp-30h]
  int v7; // [rsp+4Ch] [rbp-2Ch]
  int v8; // [rsp+50h] [rbp-28h]

  v5 = -1LL;
  v7 = 0;
  v6 = -2;
  v8 = 851970;
  v2 = HvcallFastExtended(0x100010050LL, &v5, 20LL, a2, 0x10u);
  v3 = 0;
  if ( v2 )
    return v2 | 0xC0350000;
  return v3;
}
