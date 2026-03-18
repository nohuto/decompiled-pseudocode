/*
 * XREFs of ?vSpHook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00F4F24
 * Callers:
 *     bSpEnableSprites @ 0x1C00F4BC0 (bSpEnableSprites.c)
 *     ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x1C00FE8E8 (-vSpHideSprites@@YAXPEAUHDEV__@@H@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C02711A4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C008A54C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C008B008 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00F5B88 (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z.c)
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
  v1[356] = SpStrokeAndFillPath;
  v1[354] = SpStrokePath;
  v1[355] = SpFillPath;
  v1[358] = SpBitBlt;
  v1[359] = SpCopyBits;
  v1[360] = SpStretchBlt;
  v1[363] = SpTextOut;
  v1[371] = SpLineTo;
  v1[414] = SpTransparentBlt;
  v1[411] = SpAlphaBlend;
  v1[410] = SpPlgBlt;
  v1[408] = SpGradientFill;
  v1[430] = SpDrawStream;
  v1[409] = SpStretchBltROP;
  v1[380] = SpSaveScreenBits;
  v4 = *((_DWORD *)a1 + 31) == 0;
  *((_DWORD *)a1 + 2) = 1;
  if ( v4 )
  {
    SPRITERANGELOCK::vLockExclusive((struct _SPRITESTATE *)((char *)a1 + 128));
    vSpComputeSpriteRanges(a1);
    SPRITERANGELOCK::vUnlock((struct _SPRITESTATE *)((char *)a1 + 128));
  }
}
