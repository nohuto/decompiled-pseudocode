/*
 * XREFs of ?vSpHook@@YAXPEAU_SPRITESTATE@@@Z @ 0x140316F74
 * Callers:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1400801CC (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     bSpEnableSprites @ 0x140227250 (bSpEnableSprites.c)
 *     ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x14023EB9C (-vSpHideSprites@@YAXPEAUHDEV__@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vSpHook(struct _SPRITESTATE *a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax

  v1 = *(_QWORD **)a1;
  v2 = *(_QWORD *)(*(_QWORD *)a1 + 2544LL);
  *((_DWORD *)a1 + 26) = 1;
  *((_DWORD *)a1 + 25) = *(_DWORD *)(v2 + 112) | 0x3A5EF;
  v1[351] = SpStrokeAndFillPath;
  v1[349] = SpStrokePath;
  v1[350] = SpFillPath;
  v1[353] = SpBitBlt;
  v1[354] = SpCopyBits;
  v1[355] = SpStretchBlt;
  v1[358] = SpTextOut;
  v1[366] = SpLineTo;
  v1[409] = SpTransparentBlt;
  v1[406] = SpAlphaBlend;
  v1[405] = SpPlgBlt;
  v1[403] = SpGradientFill;
  v1[425] = SpDrawStream;
  v1[404] = SpStretchBltROP;
  v1[375] = SpSaveScreenBits;
  *((_DWORD *)a1 + 272) = 1;
}
