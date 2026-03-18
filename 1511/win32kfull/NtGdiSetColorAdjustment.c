/*
 * XREFs of NtGdiSetColorAdjustment @ 0x1C02A7CB0
 * Callers:
 *     <none>
 * Callees:
 *     GreSetColorAdjustment @ 0x1C0290E38 (GreSetColorAdjustment.c)
 */

__int64 __fastcall NtGdiSetColorAdjustment(HDC a1, unsigned __int64 a2)
{
  _OWORD v3[2]; // [rsp+28h] [rbp-20h] BYREF

  memset(v3, 0, 24);
  if ( a2 >= W32UserProbeAddress )
    a2 = W32UserProbeAddress;
  v3[0] = *(_OWORD *)a2;
  *(_QWORD *)&v3[1] = *(_QWORD *)(a2 + 16);
  if ( LOWORD(v3[0]) == 24
    && WORD2(v3[0]) <= 8u
    && (unsigned __int16)(WORD3(v3[0]) - 1344) <= 0xF8A8u
    && (unsigned __int16)(WORD4(v3[0]) - 1344) <= 0xF8A8u
    && (unsigned __int16)(WORD5(v3[0]) - 1344) <= 0xF8A8u
    && WORD6(v3[0]) <= 0xFA0u
    && (unsigned __int16)(HIWORD(v3[0]) - 6000) <= 0xFA0u
    && (unsigned __int16)(LOWORD(v3[1]) + 100) <= 0xC8u
    && (unsigned __int16)(WORD1(v3[1]) + 100) <= 0xC8u
    && (unsigned __int16)(WORD2(v3[1]) + 100) <= 0xC8u
    && (unsigned __int16)(WORD3(v3[1]) + 100) <= 0xC8u )
  {
    return GreSetColorAdjustment(a1, (__int64)v3);
  }
  else
  {
    return 0LL;
  }
}
