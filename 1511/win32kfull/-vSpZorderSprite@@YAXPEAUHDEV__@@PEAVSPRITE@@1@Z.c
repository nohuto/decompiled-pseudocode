/*
 * XREFs of ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x1C0279EB4
 * Callers:
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C026BB8C (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?GdiZorderSprite@@YAXPEAUHDEV__@@PEAUHWND__@@1@Z @ 0x1C026C87C (-GdiZorderSprite@@YAXPEAUHDEV__@@PEAUHWND__@@1@Z.c)
 * Callees:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0053D80 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0053DB0 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1C00FA73C (-vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00FADA4 (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C02771F0 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRenumberZOrder@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C0277F44 (-vSpRenumberZOrder@@YAXPEAU_SPRITESTATE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall vSpZorderSprite(_QWORD *a1, struct SPRITE *a2, struct SPRITE *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  struct _POINTL *v11; // rdx
  struct _SPRITESTATE *v12[24]; // [rsp+20h] [rbp-C8h] BYREF
  _QWORD *v13; // [rsp+F0h] [rbp+8h] BYREF

  v13 = a1;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v12, (struct PDEVOBJ *)&v13);
  v6 = a1[14];
  if ( a2 && v6 )
  {
    if ( (struct SPRITE *)v6 == a2 )
    {
      a1[14] = *(_QWORD *)(v6 + 24);
      v7 = *(_QWORD *)(v6 + 24);
      if ( v7 )
        *(_QWORD *)(v7 + 32) = 0LL;
      else
        a1[15] = 0LL;
      *(_QWORD *)(v6 + 24) = 0LL;
      *(_QWORD *)(v6 + 32) = 0LL;
    }
    else
    {
      v8 = *((_QWORD *)a2 + 4);
      if ( (struct SPRITE *)a1[15] == a2 )
        a1[15] = v8;
      else
        *(_QWORD *)(*((_QWORD *)a2 + 3) + 32LL) = v8;
      *(_QWORD *)(*((_QWORD *)a2 + 4) + 24LL) = *((_QWORD *)a2 + 3);
      *((_QWORD *)a2 + 3) = 0LL;
      *((_QWORD *)a2 + 4) = 0LL;
    }
    if ( !*((_QWORD *)a2 + 3) && !*((_QWORD *)a2 + 4) )
    {
      if ( a3 )
      {
        *((_QWORD *)a2 + 3) = *((_QWORD *)a3 + 3);
        v10 = *((_QWORD *)a3 + 3);
        if ( v10 )
          *(_QWORD *)(v10 + 32) = a2;
        *((_QWORD *)a3 + 3) = a2;
        *((_QWORD *)a2 + 4) = a3;
        if ( (struct SPRITE *)a1[15] == a3 )
          a1[15] = a2;
      }
      else
      {
        *((_QWORD *)a2 + 3) = a1[14];
        v9 = a1[14];
        if ( v9 )
          *(_QWORD *)(v9 + 32) = a2;
        else
          a1[15] = a2;
        a1[14] = a2;
      }
      vSpRenumberZOrder((struct _SPRITESTATE *)(a1 + 12));
      vSpRemoveAllSpriteOverlapPresents(a1, v11);
      ++giSpriteUniqueness;
      *((_DWORD *)a1 + 55) = 0;
      vSpComputeSpriteRanges((struct _SPRITESTATE *)(a1 + 12));
      vSpRedrawSprite(a2);
    }
  }
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v12);
}
