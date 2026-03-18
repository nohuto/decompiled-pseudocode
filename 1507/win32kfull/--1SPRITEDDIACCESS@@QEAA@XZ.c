/*
 * XREFs of ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C008A630
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
    v2 = *(_OWORD **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280);
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
