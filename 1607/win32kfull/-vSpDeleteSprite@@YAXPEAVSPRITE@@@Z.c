/*
 * XREFs of ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C027333C
 * Callers:
 *     vSpDynamicModeChange @ 0x1C011BCF0 (vSpDynamicModeChange.c)
 *     ?vSpDisableSprites@@YAXPEAUHDEV__@@W4_CLEANUPTYPE@@@Z @ 0x1C0129D08 (-vSpDisableSprites@@YAXPEAUHDEV__@@W4_CLEANUPTYPE@@@Z.c)
 *     ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x1C0269664 (-GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C02697A8 (-GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 *     ?GdiDeleteSpriteDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C0269A38 (-GdiDeleteSpriteDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C026A628 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z @ 0x1C026FE30 (-pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C026FFEC (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpMoveSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@K@Z @ 0x1C0270774 (-pSpMoveSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@K@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C027089C (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z @ 0x1C0270C64 (-pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z.c)
 * Callees:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0055CE0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0055D10 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0065F2C (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vSpDeleteExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C0129E3C (-vSpDeleteExMirror@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C0129E60 (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C026E6A4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpDeleteShape@@YAXPEAVSPRITE@@@Z @ 0x1C02732CC (-vSpDeleteShape@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpFreeClipResources@@YAXPEAVSPRITE@@@Z @ 0x1C02741E8 (-vSpFreeClipResources@@YAXPEAVSPRITE@@@Z.c)
 */

void __fastcall vSpDeleteSprite(struct SPRITE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  SURFOBJ **v16; // rsi
  __int64 v17; // rbp
  __int64 v18; // rdx
  struct _SPRITESTATE *v19[24]; // [rsp+20h] [rbp-C8h] BYREF
  _QWORD *v20; // [rsp+F0h] [rbp+8h] BYREF

  if ( a1 )
  {
    v4 = (__int64 *)*((_QWORD *)a1 + 2);
    v20 = (_QWORD *)*v4;
    if ( !gbGreSessionCleanup )
    {
      SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v19, (struct PDEVOBJ *)&v20, a3, a4);
      bSpUpdatePosition(a1, 0LL, 0, 0);
      SPRITEDDIACCESS::~SPRITEDDIACCESS(v19, v6, v7, v8);
    }
    if ( (struct SPRITE *)v4[2] == a1 )
    {
      v4[2] = *((_QWORD *)a1 + 3);
      v9 = *((_QWORD *)a1 + 3);
      if ( v9 )
        *(_QWORD *)(v9 + 32) = 0LL;
      if ( !v4[2] )
        v4[3] = 0LL;
    }
    else
    {
      v10 = *((_QWORD *)a1 + 4);
      if ( (struct SPRITE *)v4[3] == a1 )
        v4[3] = v10;
      else
        *(_QWORD *)(*((_QWORD *)a1 + 3) + 32LL) = v10;
      *(_QWORD *)(*((_QWORD *)a1 + 4) + 24LL) = *((_QWORD *)a1 + 3);
    }
    v11 = *((_QWORD *)a1 + 5);
    v12 = *((_QWORD *)a1 + 6);
    if ( v11 )
      *(_QWORD *)(v11 + 48) = v12;
    if ( v12 )
      *(_QWORD *)(v12 + 40) = v11;
    else
      v4[4] = v11;
    if ( (*(_DWORD *)a1 & 0x100) != 0 )
      vSpDeleteExMirror((_QWORD *)*v4);
    vSpFreeClipResources(a1);
    REGION::vDeleteREGION(*((REGION **)a1 + 24));
    vSpDeleteShape(a1);
    vSpDeleteSurface(*((SURFOBJ **)a1 + 20));
    v14 = *((_QWORD *)a1 + 15);
    if ( v14 )
    {
      bDeleteSurface(*(_QWORD *)(v14 + 8));
      *((_QWORD *)a1 + 15) = 0LL;
    }
    v15 = *((_QWORD *)a1 + 31);
    if ( v15 )
      Win32FreePool(v15, v13);
    v16 = (SURFOBJ **)(v4 + 20);
    v17 = 64LL;
    do
    {
      vSpDeleteSurface(*v16);
      *v16++ = 0LL;
      --v17;
    }
    while ( v17 );
    RtlClearAllBits((PRTL_BITMAP)v4 + 42);
    Win32FreePool(a1, v18);
  }
}
