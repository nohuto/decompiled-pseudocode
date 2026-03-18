/*
 * XREFs of ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C0272008
 * Callers:
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C026B82C (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     ?GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z @ 0x1C026BA34 (-GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z.c)
 *     ?pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z @ 0x1C0271904 (-pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C0271AC0 (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpMoveSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@K@Z @ 0x1C027221C (-pSpMoveSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@K@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C0272344 (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z @ 0x1C027270C (-pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z.c)
 * Callees:
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C0038E2C (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?vRefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C0041764 (-vRefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0053D80 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0053DB0 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C02701D0 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpDeleteShape@@YAXPEAVSPRITE@@@Z @ 0x1C0274D78 (-vSpDeleteShape@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRemoveShapeHint@@YAXPEAVSPRITE@@H@Z @ 0x1C0277EC8 (-vSpRemoveShapeHint@@YAXPEAVSPRITE@@H@Z.c)
 */

__int64 __fastcall pSpHintSpriteShape(struct SPRITE *a1, HSURF hsurf, int a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rcx
  W32PIDLOCK *v10; // rbp
  int v11; // eax
  SURFOBJ *v13; // rax
  __int64 v14; // rbx
  __int64 *v15; // rax
  struct _SPRITESTATE *v16[29]; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v17; // [rsp+110h] [rbp+8h] BYREF
  __int64 v18; // [rsp+128h] [rbp+20h] BYREF

  v3 = 0;
  if ( !a1 )
    return v3;
  v7 = *((_QWORD *)a1 + 16);
  if ( !v7 || (v8 = SURFOBJ_TO_SURFACE_NOT_NULL(v7), !(unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)v8)) )
  {
LABEL_13:
    if ( hsurf )
    {
      if ( !*((_QWORD *)a1 + 16) )
        goto LABEL_29;
      if ( (*(_DWORD *)a1 & 0x40) == 0 )
        vSpDeleteShape(a1);
      if ( !*((_QWORD *)a1 + 16) )
      {
LABEL_29:
        if ( (*(_DWORD *)a1 & 0x40) == 0 )
        {
          v13 = EngLockSurface(hsurf);
          *((_QWORD *)a1 + 16) = v13;
          if ( v13 )
          {
            *(_DWORD *)a1 |= 0x40u;
            if ( a3 )
              *(_DWORD *)a1 |= 0x80u;
            *((_QWORD *)a1 + 30) = hsurf;
            *((_QWORD *)a1 + 12) = 0LL;
            *((_DWORD *)a1 + 26) = v13->sizlBitmap.cx;
            *((_DWORD *)a1 + 27) = v13->sizlBitmap.cy;
            *((POINTL *)a1 + 17) = gptlZero;
            v14 = *(_QWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v13) + 120);
            v17 = v14;
            XEPALOBJ::vRefPalette((XEPALOBJ *)&v17);
            v15 = (__int64 *)*((_QWORD *)a1 + 2);
            *((_QWORD *)a1 + 18) = v14;
            v18 = *v15;
            SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v16, (struct PDEVOBJ *)&v18);
            bSpUpdatePosition(a1, (struct _POINTL *)a1 + 14, 0, 0);
            SPRITEDDIACCESS::~SPRITEDDIACCESS(v16);
          }
        }
      }
    }
    else if ( *((_QWORD *)a1 + 16) )
    {
      vSpRemoveShapeHint(a1, a3);
    }
    return 1;
  }
  v10 = (W32PIDLOCK *)(v9 + 264);
  W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v9 + 264));
  if ( !*(_DWORD *)(v8 + 316) )
  {
    if ( (*(_DWORD *)a1 & 0x200) != 0 )
    {
      vSpRemoveShapeHint(a1, 0);
      *(_DWORD *)a1 &= ~0x200u;
    }
    W32PIDLOCK::vUnlockSingleThread(v10);
    goto LABEL_13;
  }
  *(_QWORD *)(v8 + 320) = UserGetHDEV();
  *(_QWORD *)(v8 + 328) = *((_QWORD *)a1 + 9);
  *(_QWORD *)(v8 + 336) = hsurf;
  memset((void *)(v8 + 344), 0, 0x38uLL);
  v11 = *(_DWORD *)(v8 + 112);
  *(_QWORD *)(v8 + 400) = 0LL;
  if ( (v11 & 0x2000000) == 0 )
    *(_DWORD *)(v8 + 112) = v11 | 0x2000000;
  if ( (*(_DWORD *)a1 & 0x200) == 0 )
    *(_DWORD *)a1 |= 0x200u;
  W32PIDLOCK::vUnlockSingleThread(v10);
  return 1LL;
}
