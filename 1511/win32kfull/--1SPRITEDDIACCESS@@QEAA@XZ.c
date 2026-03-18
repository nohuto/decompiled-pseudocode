/*
 * XREFs of ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0053D80
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C004F4A0 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1C00685BC (-vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00EA480 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x1C010A108 (-vSpHideSprites@@YAXPEAUHDEV__@@H@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C026BB8C (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C026C170 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C026E880 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z @ 0x1C026FA94 (-bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z.c)
 *     ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C026FC1C (-bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C0271124 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C0271AC0 (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1C0271D50 (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C0272008 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C0272344 (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0274DE8 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x1C0274F6C (-vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C02787F0 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x1C0279EB4 (-vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z.c)
 *     vSpUnTearDownSprites @ 0x1C027AB70 (vSpUnTearDownSprites.c)
 * Callees:
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C0055270 (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 */

void __fastcall SPRITEDDIACCESS::~SPRITEDDIACCESS(struct _SPRITESTATE **this)
{
  _OWORD *v2; // rcx
  __int128 v3; // [rsp+20h] [rbp-B8h]
  __int128 v4; // [rsp+30h] [rbp-A8h]
  __int128 v5; // [rsp+40h] [rbp-98h]
  __int128 v6; // [rsp+50h] [rbp-88h]
  __int128 v7; // [rsp+60h] [rbp-78h]
  __int128 v8; // [rsp+70h] [rbp-68h]
  __int128 v9; // [rsp+80h] [rbp-58h]
  __int128 v10; // [rsp+90h] [rbp-48h]
  __int128 v11; // [rsp+A0h] [rbp-38h]
  __int128 v12; // [rsp+B0h] [rbp-28h]
  struct _SPRITESTATE *v13; // [rsp+C0h] [rbp-18h]

  if ( !*((_DWORD *)this + 2) )
    vSpDirectDriverAccess(*this, 0);
  if ( *((_DWORD *)this + 3) == 1 )
  {
    v3 = *((_OWORD *)this + 1);
    v4 = *((_OWORD *)this + 2);
    v5 = *((_OWORD *)this + 3);
    v6 = *((_OWORD *)this + 4);
    v7 = *((_OWORD *)this + 5);
    v8 = *((_OWORD *)this + 6);
    v9 = *((_OWORD *)this + 7);
    v10 = *((_OWORD *)this + 8);
    v11 = *((_OWORD *)this + 9);
    v12 = *((_OWORD *)this + 10);
    v13 = this[22];
    v2 = *(_OWORD **)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280);
    *v2 = v3;
    v2[1] = v4;
    v2[2] = v5;
    v2[3] = v6;
    v2[4] = v7;
    v2[5] = v8;
    v2[6] = v9;
    v2 += 8;
    *(v2 - 1) = v10;
    *v2 = v11;
    v2[1] = v12;
    *((_QWORD *)v2 + 4) = v13;
  }
}
