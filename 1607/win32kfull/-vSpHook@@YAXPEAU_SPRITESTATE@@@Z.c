/*
 * XREFs of ?vSpHook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C011BBB0
 * Callers:
 *     bSpEnableSprites @ 0x1C011B850 (bSpEnableSprites.c)
 *     ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x1C012BCA8 (-vSpHideSprites@@YAXPEAUHDEV__@@H@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C026E6A4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0055BFC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00566E8 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C011C818 (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z.c)
 */

void __fastcall vSpHook(struct _SPRITESTATE *a1)
{
  _QWORD *v1; // rax
  __int64 v3; // rdx
  bool v4; // zf

  v1 = *(_QWORD **)a1;
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 2576LL);
  *((_DWORD *)a1 + 28) = 1;
  *((_DWORD *)a1 + 27) = *(_DWORD *)(v3 + 112) | 0x3A5EF;
  v1[355] = SpStrokeAndFillPath;
  v1[353] = SpStrokePath;
  v1[354] = SpFillPath;
  v1[357] = SpBitBlt;
  v1[358] = SpCopyBits;
  v1[359] = SpStretchBlt;
  v1[362] = SpTextOut;
  v1[370] = SpLineTo;
  v1[413] = SpTransparentBlt;
  v1[410] = SpAlphaBlend;
  v1[409] = SpPlgBlt;
  v1[407] = SpGradientFill;
  v1[429] = SpDrawStream;
  v1[408] = SpStretchBltROP;
  v1[379] = SpSaveScreenBits;
  v4 = *((_DWORD *)a1 + 31) == 0;
  *((_DWORD *)a1 + 2) = 1;
  if ( v4 )
  {
    SPRITERANGELOCK::vLockExclusive((struct _SPRITESTATE *)((char *)a1 + 128));
    vSpComputeSpriteRanges(a1);
    SPRITERANGELOCK::vUnlock((struct _SPRITESTATE *)((char *)a1 + 128));
  }
}
