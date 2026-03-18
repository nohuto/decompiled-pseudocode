/*
 * XREFs of ?DrawCaptionButtons@@YAXHHH@Z @ 0x1C00FB7E0
 * Callers:
 *     ?CreateDPIBitmapStrip@@YAHH@Z @ 0x1C0017A20 (-CreateDPIBitmapStrip@@YAHH@Z.c)
 * Callees:
 *     ?GFCM_SYSMET@@YAHHH@Z @ 0x1C001805C (-GFCM_SYSMET@@YAHHH@Z.c)
 *     BitBltSysBmp @ 0x1C00FB8D4 (BitBltSysBmp.c)
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
