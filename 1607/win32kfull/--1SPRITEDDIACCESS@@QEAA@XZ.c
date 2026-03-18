/*
 * XREFs of ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0055CE0
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
 */

void __fastcall SPRITEDDIACCESS::~SPRITEDDIACCESS(struct _SPRITESTATE **this, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 v5; // xmm0
  struct _SPRITESTATE *v6; // rax
  _OWORD *v7; // rcx
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  struct _SPRITESTATE *v10; // rax
  __int128 v11; // [rsp+20h] [rbp-B8h]
  __int128 v12; // [rsp+30h] [rbp-A8h]
  __int128 v13; // [rsp+40h] [rbp-98h]
  __int128 v14; // [rsp+50h] [rbp-88h]
  __int128 v15; // [rsp+60h] [rbp-78h]
  __int128 v16; // [rsp+70h] [rbp-68h]
  __int128 v17; // [rsp+80h] [rbp-58h]
  __int128 v18; // [rsp+90h] [rbp-48h]
  __int128 v19; // [rsp+A0h] [rbp-38h] BYREF
  __int128 v20; // [rsp+B0h] [rbp-28h]
  struct _SPRITESTATE *v21; // [rsp+C0h] [rbp-18h]

  if ( !*((_DWORD *)this + 2) )
    vSpDirectDriverAccess(*this, 0);
  if ( *((_DWORD *)this + 3) == 1 )
  {
    v11 = *((_OWORD *)this + 1);
    v12 = *((_OWORD *)this + 2);
    v13 = *((_OWORD *)this + 3);
    v14 = *((_OWORD *)this + 4);
    v15 = *((_OWORD *)this + 5);
    v16 = *((_OWORD *)this + 6);
    v17 = *((_OWORD *)this + 7);
    v18 = *((_OWORD *)this + 8);
    v5 = *((_OWORD *)this + 10);
    v6 = this[22];
    v19 = *((_OWORD *)this + 9);
    v20 = v5;
    v21 = v6;
    v7 = *(_OWORD **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)&v19, a3, a4) + 280);
    *v7 = v11;
    v7[1] = v12;
    v7[2] = v13;
    v7[3] = v14;
    v7[4] = v15;
    v7[5] = v16;
    v7[6] = v17;
    v7 += 8;
    v8 = v19;
    *(v7 - 1) = v18;
    v9 = v20;
    v10 = v21;
    *v7 = v8;
    v7[1] = v9;
    *((_QWORD *)v7 + 4) = v10;
  }
}
