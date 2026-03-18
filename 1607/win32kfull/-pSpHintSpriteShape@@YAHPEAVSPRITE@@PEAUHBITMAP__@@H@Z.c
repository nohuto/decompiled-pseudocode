/*
 * XREFs of ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C0270534
 * Callers:
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C0269CEC (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     ?GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z @ 0x1C0269EF0 (-GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z.c)
 *     ?pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z @ 0x1C026FE30 (-pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C026FFEC (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpMoveSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@K@Z @ 0x1C0270774 (-pSpMoveSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@K@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C027089C (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z @ 0x1C0270C64 (-pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z.c)
 * Callees:
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C0033D28 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?vRefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C003A954 (-vRefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0055CE0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0055D10 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C026E6A4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpDeleteShape@@YAXPEAVSPRITE@@@Z @ 0x1C02732CC (-vSpDeleteShape@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRemoveShapeHint@@YAXPEAVSPRITE@@H@Z @ 0x1C0276410 (-vSpRemoveShapeHint@@YAXPEAVSPRITE@@H@Z.c)
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
  SURFOBJ *v14; // rsi
  __int64 v15; // rbx
  __int64 *v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  struct _SPRITESTATE *v22[29]; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v23; // [rsp+110h] [rbp+8h] BYREF
  __int64 v24; // [rsp+128h] [rbp+20h] BYREF

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
        goto LABEL_33;
      if ( (*(_DWORD *)a1 & 0x40) == 0 )
        vSpDeleteShape(a1);
      if ( !*((_QWORD *)a1 + 16) )
      {
LABEL_33:
        if ( (*(_DWORD *)a1 & 0x40) == 0 )
        {
          v13 = EngLockSurface(hsurf);
          v14 = v13;
          if ( v13 )
          {
            if ( v13->iType == 3 && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v13) + 116) & 1) != 0 )
            {
              EngUnlockSurface(v14);
              v14 = 0LL;
            }
            if ( v14 )
            {
              *(_DWORD *)a1 |= 0x40u;
              *((_QWORD *)a1 + 16) = v14;
              if ( a3 )
                *(_DWORD *)a1 |= 0x80u;
              *((_QWORD *)a1 + 30) = hsurf;
              *((_QWORD *)a1 + 12) = 0LL;
              *((_DWORD *)a1 + 26) = v14->sizlBitmap.cx;
              *((_DWORD *)a1 + 27) = v14->sizlBitmap.cy;
              *((POINTL *)a1 + 17) = gptlZero;
              v15 = *(_QWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v14) + 120);
              v23 = v15;
              XEPALOBJ::vRefPalette((XEPALOBJ *)&v23);
              v16 = (__int64 *)*((_QWORD *)a1 + 2);
              *((_QWORD *)a1 + 18) = v15;
              v24 = *v16;
              SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v22, (struct PDEVOBJ *)&v24, v17, v18);
              bSpUpdatePosition(a1, (struct _POINTL *)a1 + 14, 0, 0);
              SPRITEDDIACCESS::~SPRITEDDIACCESS(v22, v19, v20, v21);
            }
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
  v10 = (W32PIDLOCK *)(v9 + 272);
  W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v9 + 272));
  if ( !*(_DWORD *)(v8 + 324) )
  {
    if ( (*(_DWORD *)a1 & 0x200) != 0 )
    {
      vSpRemoveShapeHint(a1, 0);
      *(_DWORD *)a1 &= ~0x200u;
    }
    W32PIDLOCK::vUnlockSingleThread(v10);
    goto LABEL_13;
  }
  *(_QWORD *)(v8 + 328) = UserGetHDEV();
  *(_QWORD *)(v8 + 336) = *((_QWORD *)a1 + 9);
  *(_QWORD *)(v8 + 344) = hsurf;
  memset((void *)(v8 + 352), 0, 0x38uLL);
  v11 = *(_DWORD *)(v8 + 112);
  *(_QWORD *)(v8 + 408) = 0LL;
  if ( (v11 & 0x2000000) == 0 )
    *(_DWORD *)(v8 + 112) = v11 | 0x2000000;
  if ( (*(_DWORD *)a1 & 0x200) == 0 )
    *(_DWORD *)a1 |= 0x200u;
  W32PIDLOCK::vUnlockSingleThread(v10);
  return 1LL;
}
