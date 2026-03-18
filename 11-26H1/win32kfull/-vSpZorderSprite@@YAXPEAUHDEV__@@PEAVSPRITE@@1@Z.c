/*
 * XREFs of ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x140186134
 * Callers:
 *     ?GdiZorderSprite@@YAXPEAUHDEV__@@PEAUHWND__@@1@Z @ 0x140186004 (-GdiZorderSprite@@YAXPEAUHDEV__@@PEAUHWND__@@1@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x14028DA20 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 * Callees:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1400BBFE0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400BC0EC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1401862C8 (-vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpRenumberZOrder@@YAXPEAU_SPRITESTATE@@@Z @ 0x1401863A0 (-vSpRenumberZOrder@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1401863C4 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@W4vSpComputeSpriteRangesOptions@@@Z @ 0x140186748 (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@W4vSpComputeSpriteRangesOptions@@@Z.c)
 */

void __fastcall vSpZorderSprite(HDEV a1, struct SPRITE *a2, struct SPRITE *a3)
{
  Gre::Base *v6; // rcx
  struct Gre::Base::SESSION_GLOBALS *v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  struct _SPRITESTATE *v13[24]; // [rsp+20h] [rbp-D8h] BYREF
  HDEV v14; // [rsp+100h] [rbp+8h] BYREF

  v14 = a1;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v13, (struct PDEVOBJ *)&v14);
  v7 = Gre::Base::Globals(v6);
  if ( a2 )
  {
    v8 = *((_QWORD *)a1 + 11);
    if ( v8 )
    {
      if ( (struct SPRITE *)v8 == a2 )
      {
        *((_QWORD *)a1 + 11) = *(_QWORD *)(v8 + 24);
        v9 = *(_QWORD *)(v8 + 24);
        if ( v9 )
          *(_QWORD *)(v9 + 32) = 0LL;
        else
          *((_QWORD *)a1 + 12) = 0LL;
        *(_QWORD *)(v8 + 24) = 0LL;
        *(_QWORD *)(v8 + 32) = 0LL;
      }
      else
      {
        v11 = *((_QWORD *)a2 + 4);
        if ( *((struct SPRITE **)a1 + 12) == a2 )
          *((_QWORD *)a1 + 12) = v11;
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
          v12 = *((_QWORD *)a3 + 3);
          if ( v12 )
            *(_QWORD *)(v12 + 32) = a2;
          *((_QWORD *)a3 + 3) = a2;
          *((_QWORD *)a2 + 4) = a3;
          if ( *((struct SPRITE **)a1 + 12) == a3 )
            *((_QWORD *)a1 + 12) = a2;
        }
        else
        {
          *((_QWORD *)a2 + 3) = *((_QWORD *)a1 + 11);
          v10 = *((_QWORD *)a1 + 11);
          if ( v10 )
            *(_QWORD *)(v10 + 32) = a2;
          else
            *((_QWORD *)a1 + 12) = a2;
          *((_QWORD *)a1 + 11) = a2;
        }
        vSpRenumberZOrder((struct _SPRITESTATE *)(a1 + 20));
        vSpRemoveAllSpriteOverlapPresents(a1);
        ++*((_DWORD *)v7 + 1088);
        *((_DWORD *)a1 + 49) = 0;
        vSpComputeSpriteRanges(a1 + 20);
        vSpRedrawSprite(a2);
      }
    }
  }
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v13);
}
