/*
 * XREFs of ?DrawCaptionButtons@@YAXHHH@Z @ 0x1C00F4884
 * Callers:
 *     ?CreateDPIBitmapStrip@@YAHH@Z @ 0x1C0055E40 (-CreateDPIBitmapStrip@@YAHH@Z.c)
 * Callees:
 *     ?GFCM_SYSMET@@YAHHH@Z @ 0x1C005647C (-GFCM_SYSMET@@YAHHH@Z.c)
 *     BitBltSysBmp @ 0x1C00F4978 (BitBltSysBmp.c)
 */

void __fastcall DrawCaptionButtons(int a1, int a2, int a3)
{
  int v5; // edi
  int v6; // ebp
  int v7; // edi
  int v8; // ebx
  int v9; // ebx
  int v10; // eax

  v5 = GFCM_SYSMET(0x2Du, a3) + a1;
  v6 = GFCM_SYSMET(0x2Eu, a3) + a2;
  BitBltSysBmp(*(HDC *)(gpDispInfo + 32LL), v5, v6);
  v7 = v5 - GFCM_SYSMET(0x2Du, a3);
  v8 = v7 + GFCM_SYSMET(0x1Eu, a3);
  BitBltSysBmp(*(HDC *)(gpDispInfo + 32LL), v8, v6);
  v9 = GFCM_SYSMET(0x1Eu, a3) + v8;
  BitBltSysBmp(*(HDC *)(gpDispInfo + 32LL), v9, v6);
  v10 = GFCM_SYSMET(0x1Eu, a3);
  BitBltSysBmp(*(HDC *)(gpDispInfo + 32LL), v10 + v9, v6);
}
