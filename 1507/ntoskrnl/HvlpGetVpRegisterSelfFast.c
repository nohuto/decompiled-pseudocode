/*
 * XREFs of HvlpGetVpRegisterSelfFast @ 0x1401EE124
 * Callers:
 *     HvlEnableVsmCalls @ 0x1407E9058 (HvlEnableVsmCalls.c)
 * Callees:
 *     HvlpFastHypercall @ 0x1401E5834 (HvlpFastHypercall.c)
 */

__int64 __fastcall HvlpGetVpRegisterSelfFast(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // ax
  unsigned int v3; // ecx
  __int64 v5; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+38h] [rbp-20h]
  int v7; // [rsp+3Ch] [rbp-1Ch]
  int v8; // [rsp+40h] [rbp-18h]

  v5 = -1LL;
  v7 = 0;
  v6 = -2;
  v8 = 851970;
  v2 = HvlpFastHypercall(0x100010050LL, &v5, 20LL, a2, 0x10u);
  v3 = 0;
  if ( v2 )
    return v2 | 0xC0350000;
  return v3;
}
