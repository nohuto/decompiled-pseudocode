/*
 * XREFs of ?DrawCaptionButtons@@YAXHHH@Z @ 0x1C011D5A8
 * Callers:
 *     ?CreateDPIBitmapStrip@@YAHH@Z @ 0x1C0060E84 (-CreateDPIBitmapStrip@@YAHH@Z.c)
 * Callees:
 *     ?GFCM_SYSMET@@YAHHH@Z @ 0x1C00614B8 (-GFCM_SYSMET@@YAHHH@Z.c)
 *     BitBltSysBmp @ 0x1C011D69C (BitBltSysBmp.c)
 */

void __fastcall DrawCaptionButtons(__int64 a1, __int64 a2, int a3)
{
  GFCM_SYSMET(0x2Du, a3);
  GFCM_SYSMET(0x2Eu, a3);
  BitBltSysBmp(*(HDC *)(gpDispInfo + 32LL));
  GFCM_SYSMET(0x2Du, a3);
  GFCM_SYSMET(0x1Eu, a3);
  BitBltSysBmp(*(HDC *)(gpDispInfo + 32LL));
  GFCM_SYSMET(0x1Eu, a3);
  BitBltSysBmp(*(HDC *)(gpDispInfo + 32LL));
  GFCM_SYSMET(0x1Eu, a3);
  BitBltSysBmp(*(HDC *)(gpDispInfo + 32LL));
}
