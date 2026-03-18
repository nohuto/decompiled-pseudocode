/*
 * XREFs of EraseBitmap @ 0x1C01103CC
 * Callers:
 *     xxxSwitchDesktop @ 0x1C0093754 (xxxSwitchDesktop.c)
 * Callees:
 *     NtGdiPatBlt @ 0x1C00412C0 (NtGdiPatBlt.c)
 *     GreExtGetObjectW @ 0x1C0042130 (GreExtGetObjectW.c)
 */

__int64 __fastcall EraseBitmap(HBRUSH a1)
{
  __int64 v2; // rbx
  int v4; // [rsp+30h] [rbp-28h] BYREF
  __int64 v5; // [rsp+34h] [rbp-24h]
  __int64 v6; // [rsp+3Ch] [rbp-1Ch]
  __int64 v7; // [rsp+44h] [rbp-14h]
  int v8; // [rsp+4Ch] [rbp-Ch]

  v4 = 0;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  GreExtGetObjectW(a1, 32LL, (unsigned __int16 *)&v4);
  v2 = GreSelectBitmap(ghdcMem, a1);
  NtGdiPatBlt(ghdcMem, 0, 0, v5, SHIDWORD(v5), 66);
  return GreSelectBitmap(ghdcMem, v2);
}
