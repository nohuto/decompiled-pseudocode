/*
 * XREFs of ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x1C0278404
 * Callers:
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C026A044 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?GdiZorderSprite@@YAXPEAUHDEV__@@PEAUHWND__@@1@Z @ 0x1C026AD34 (-GdiZorderSprite@@YAXPEAUHDEV__@@PEAUHWND__@@1@Z.c)
 * Callees:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0055CE0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0055D10 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1C011C1AC (-vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C011C818 (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0275738 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRenumberZOrder@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C027648C (-vSpRenumberZOrder@@YAXPEAU_SPRITESTATE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall vSpZorderSprite(_QWORD *a1, struct SPRITE *a2, struct SPRITE *a3, __int64 a4)
{
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  struct _POINTL *v14; // rdx
  __int64 v15; // r8
  struct _SPRITESTATE *v16[24]; // [rsp+20h] [rbp-C8h] BYREF
  _QWORD *v17; // [rsp+F0h] [rbp+8h] BYREF

  v17 = a1;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v16, (struct PDEVOBJ *)&v17, (__int64)a3, a4);
  v9 = a1[14];
  if ( a2 && v9 )
  {
    if ( (struct SPRITE *)v9 == a2 )
    {
      a1[14] = *(_QWORD *)(v9 + 24);
      v10 = *(_QWORD *)(v9 + 24);
      if ( v10 )
        *(_QWORD *)(v10 + 32) = 0LL;
      else
        a1[15] = 0LL;
      *(_QWORD *)(v9 + 24) = 0LL;
      *(_QWORD *)(v9 + 32) = 0LL;
    }
    else
    {
      v11 = *((_QWORD *)a2 + 4);
      if ( (struct SPRITE *)a1[15] == a2 )
        a1[15] = v11;
      else
        *(_QWORD *)(*((_QWORD *)a2 + 3) + 32LL) = v11;
      *(_QWORD *)(*((_QWORD *)a2 + 4) + 24LL) = *((_QWORD *)a2 + 3);
      *((_QWORD *)a2 + 3) = 0LL;
      *((_QWORD *)a2 + 4) = 0LL;
    }
    if ( !*((_QWORD *)a2 + 3) && !*((_QWORD *)a2 + 4) )
    {
      if ( a3 )
      {
        *((_QWORD *)a2 + 3) = *((_QWORD *)a3 + 3);
        v13 = *((_QWORD *)a3 + 3);
        if ( v13 )
          *(_QWORD *)(v13 + 32) = a2;
        *((_QWORD *)a3 + 3) = a2;
        *((_QWORD *)a2 + 4) = a3;
        if ( (struct SPRITE *)a1[15] == a3 )
          a1[15] = a2;
      }
      else
      {
        *((_QWORD *)a2 + 3) = a1[14];
        v12 = a1[14];
        if ( v12 )
          *(_QWORD *)(v12 + 32) = a2;
        else
          a1[15] = a2;
        a1[14] = a2;
      }
      vSpRenumberZOrder((struct _SPRITESTATE *)(a1 + 12));
      vSpRemoveAllSpriteOverlapPresents(a1, v14, v15);
      ++giSpriteUniqueness;
      *((_DWORD *)a1 + 55) = 0;
      vSpComputeSpriteRanges((struct _SPRITESTATE *)(a1 + 12));
      vSpRedrawSprite(a2);
    }
  }
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v16, v9, v7, v8);
}
