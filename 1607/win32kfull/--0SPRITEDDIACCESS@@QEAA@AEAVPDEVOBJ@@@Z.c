/*
 * XREFs of ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0055D10
 * Callers:
 *     ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1C0055C24 (-vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C0075788 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0102D80 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x1C012BCA8 (-vSpHideSprites@@YAXPEAUHDEV__@@H@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C026A044 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C026A628 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C026CD50 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z @ 0x1C026DF68 (-bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z.c)
 *     ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C026E0F0 (-bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C026F61C (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C026FFEC (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1C027027C (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C0270534 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C027089C (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C027333C (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x1C02734C0 (-vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C0276D38 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x1C0278404 (-vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z.c)
 *     vSpUnTearDownSprites @ 0x1C02790C0 (vSpUnTearDownSprites.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C0055DD8 (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?bCurrentTlDriverCall@@YAHAEAVPDEVOBJ@@@Z @ 0x1C0056718 (-bCurrentTlDriverCall@@YAHAEAVPDEVOBJ@@@Z.c)
 */

SPRITEDDIACCESS *__fastcall SPRITEDDIACCESS::SPRITEDDIACCESS(
        SPRITEDDIACCESS *this,
        struct PDEVOBJ *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  __int64 v16; // rax

  *(_QWORD *)this = *(_QWORD *)a2 + 96LL;
  v6 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), a2, a3, a4);
  if ( ThreadWin32Thread )
    v6 = *ThreadWin32Thread;
  *((_DWORD *)this + 3) = 0;
  if ( v6 && PDEVOBJ::bAllowShareAccess(a2) && (*(_DWORD *)(v6 + 104) || *(_DWORD *)(v6 + 108)) )
  {
    if ( *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v9, v10) + 280) + 32LL) == *(_QWORD *)this )
      v14 = **(_DWORD **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12, v13) + 280);
    else
      v14 = 0;
    *((_DWORD *)this + 2) = v14;
    *((_DWORD *)this + 3) = bCurrentTlDriverCall(a2);
  }
  else
  {
    *((_DWORD *)this + 2) = *(_DWORD *)(*(_QWORD *)this + 96LL);
  }
  if ( *((_DWORD *)this + 3) == 1 )
  {
    v16 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v9, v10) + 280);
    *((_OWORD *)this + 1) = *(_OWORD *)v16;
    *((_OWORD *)this + 2) = *(_OWORD *)(v16 + 16);
    *((_OWORD *)this + 3) = *(_OWORD *)(v16 + 32);
    *((_OWORD *)this + 4) = *(_OWORD *)(v16 + 48);
    *((_OWORD *)this + 5) = *(_OWORD *)(v16 + 64);
    *((_OWORD *)this + 6) = *(_OWORD *)(v16 + 80);
    *((_OWORD *)this + 7) = *(_OWORD *)(v16 + 96);
    *((_OWORD *)this + 8) = *(_OWORD *)(v16 + 112);
    *((_OWORD *)this + 9) = *(_OWORD *)(v16 + 128);
    *((_OWORD *)this + 10) = *(_OWORD *)(v16 + 144);
    *((_QWORD *)this + 22) = *(_QWORD *)(v16 + 160);
  }
  if ( !*((_DWORD *)this + 2) )
    vSpDirectDriverAccess(*(struct _SPRITESTATE **)this, 1);
  return this;
}
