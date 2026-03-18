/*
 * XREFs of HvlpGetVpRegisterSelfFast @ 0x1401B377C
 * Callers:
 *     HvlEnableVsmCalls @ 0x1407724D0 (HvlEnableVsmCalls.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     HvcallFastExtended @ 0x140217E60 (HvcallFastExtended.c)
 */

__int64 __fastcall HvlpGetVpRegisterSelfFast(__int64 a1, int a2)
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
  v2 = HvcallFastExtended(65616, (unsigned int)&v5, 20, a2, 16);
  v3 = 0;
  if ( v2 )
    return v2 | 0xC0350000;
  return v3;
}
