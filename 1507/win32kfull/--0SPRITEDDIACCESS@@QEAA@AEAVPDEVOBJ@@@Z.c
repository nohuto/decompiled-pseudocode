/*
 * XREFs of ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C008A660
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C0061784 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1C008A574 (-vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x1C00FE8E8 (-vSpHideSprites@@YAXPEAUHDEV__@@H@Z.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C014C4D0 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C026D01C (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C026D600 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C026F850 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z @ 0x1C0270A68 (-bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z.c)
 *     ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C0270BF0 (-bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C0272120 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C0272ACC (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1C0272D5C (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C0273014 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C0273350 (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0275DF4 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x1C0275F78 (-vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C02797FC (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x1C027AEC0 (-vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z.c)
 *     vSpUnTearDownSprites @ 0x1C027BB80 (vSpUnTearDownSprites.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C008A720 (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?bCurrentTlDriverCall@@YAHAEAVPDEVOBJ@@@Z @ 0x1C008B038 (-bCurrentTlDriverCall@@YAHAEAVPDEVOBJ@@@Z.c)
 */

SPRITEDDIACCESS *__fastcall SPRITEDDIACCESS::SPRITEDDIACCESS(SPRITEDDIACCESS *this, struct PDEVOBJ *a2)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rdi
  int v6; // eax
  __int64 v8; // rax

  *(_QWORD *)this = *(_QWORD *)a2 + 96LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *((_DWORD *)this + 3) = 0;
  v5 = ThreadWin32Thread;
  if ( ThreadWin32Thread && PDEVOBJ::bAllowShareAccess(a2) && (*(_DWORD *)(v5 + 104) || *(_DWORD *)(v5 + 108)) )
  {
    if ( *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 32LL) == *(_QWORD *)this )
      v6 = **(_DWORD **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280);
    else
      v6 = 0;
    *((_DWORD *)this + 2) = v6;
    *((_DWORD *)this + 3) = bCurrentTlDriverCall(a2);
  }
  else
  {
    *((_DWORD *)this + 2) = *(_DWORD *)(*(_QWORD *)this + 96LL);
  }
  if ( *((_DWORD *)this + 3) == 1 )
  {
    v8 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280);
    *((_OWORD *)this + 1) = *(_OWORD *)v8;
    *((_OWORD *)this + 2) = *(_OWORD *)(v8 + 16);
    *((_OWORD *)this + 3) = *(_OWORD *)(v8 + 32);
    *((_OWORD *)this + 4) = *(_OWORD *)(v8 + 48);
    *((_OWORD *)this + 5) = *(_OWORD *)(v8 + 64);
    *((_OWORD *)this + 6) = *(_OWORD *)(v8 + 80);
    *((_OWORD *)this + 7) = *(_OWORD *)(v8 + 96);
    *((_OWORD *)this + 8) = *(_OWORD *)(v8 + 112);
    *((_OWORD *)this + 9) = *(_OWORD *)(v8 + 128);
    *((_OWORD *)this + 10) = *(_OWORD *)(v8 + 144);
    *((_QWORD *)this + 22) = *(_QWORD *)(v8 + 160);
  }
  if ( !*((_DWORD *)this + 2) )
    vSpDirectDriverAccess(*(struct _SPRITESTATE **)this, 1);
  return this;
}
