/*
 * XREFs of ?vVecSquareCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z @ 0x1C02C88A0
 * Callers:
 *     ?vAddEndCap@WIDENER@@IEAAXXZ @ 0x1C02C815C (-vAddEndCap@WIDENER@@IEAAXXZ.c)
 *     ?vAddStartCap@WIDENER@@IEAAXXZ @ 0x1C02C84B4 (-vAddStartCap@WIDENER@@IEAAXXZ.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C00327F4 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     bFToL @ 0x1C00A95A4 (bFToL.c)
 *     ?efWorldLength@STYLER@@IEAA?AVEFLOAT@@VEVECTORFX@@@Z @ 0x1C02C801C (-efWorldLength@STYLER@@IEAA-AVEFLOAT@@VEVECTORFX@@@Z.c)
 */

void __fastcall WIDENER::vVecSquareCompute(WIDENER *this, struct LINEDATA *a2)
{
  float v3; // xmm6_4
  float v4; // xmm1_4
  float v5; // xmm6_4
  int v6; // r11d
  char v7; // r8
  float v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((float *)this + 331);
  v4 = *(float *)STYLER::efWorldLength((__int64)this, (EFLOAT *)&v8, *((_QWORD *)a2 + 6));
  v8 = v4;
  if ( EFLOAT::bIsZero((EFLOAT *)&v8) )
    v5 = FP_0_0;
  else
    v5 = v3 / v4;
  bFToL((float)*((int *)a2 + 12) * v5, (_DWORD *)a2 + 14, 6);
  bFToL((float)v6 * v5, (_DWORD *)a2 + 15, v7);
  *(_DWORD *)a2 |= 2u;
}
