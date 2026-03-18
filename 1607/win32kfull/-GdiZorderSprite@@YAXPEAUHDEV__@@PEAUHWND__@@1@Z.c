/*
 * XREFs of ?GdiZorderSprite@@YAXPEAUHDEV__@@PEAUHWND__@@1@Z @ 0x1C026AD34
 * Callers:
 *     GreZorderSprite @ 0x1C0062B5C (GreZorderSprite.c)
 * Callees:
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C0270484 (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C02704DC (-pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x1C0278404 (-vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z.c)
 */

void __fastcall GdiZorderSprite(HDEV a1, HWND a2, HWND a3)
{
  HDEV v4; // rbx
  __int64 v6; // rbp
  struct _SPRITESTATE *v7; // rcx
  struct SPRITE *Sprite; // rax
  struct SPRITE *v9; // r9
  HDEV v10; // r10
  const struct _SPRITESTATE *v11; // rcx
  struct _METASPRITE *MetaSprite; // rax
  __int64 v13; // r10
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct _SPRITESTATE *v16; // rcx
  struct SPRITE *v17; // rax
  struct SPRITE *v18; // r9
  HDEV v19; // [rsp+40h] [rbp+8h] BYREF
  char v20; // [rsp+58h] [rbp+20h] BYREF

  v19 = a1;
  v4 = a1 + 24;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v20, (struct PDEVOBJ *)&v19);
  if ( *((_DWORD *)v4 + 17) )
  {
    v6 = 0LL;
    do
    {
      pSpGetSprite((struct _SPRITESTATE *)(*(_QWORD *)(*((_QWORD *)v4 + 9) + 8 * v6) + 96LL), a3, 0LL);
      Sprite = pSpGetSprite(v7, a2, 0LL);
      vSpZorderSprite(v10, Sprite, v9);
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v6 < *((_DWORD *)v4 + 17) );
    pSpGetMetaSprite((const struct _SPRITESTATE *)v4, a3, 0LL);
    MetaSprite = pSpGetMetaSprite(v11, a2, 0LL);
    v14 = *((_QWORD *)v4 + 10);
    if ( MetaSprite && v14 )
    {
      if ( (struct _METASPRITE *)v14 == MetaSprite )
      {
        *((_QWORD *)v4 + 10) = *(_QWORD *)(v14 + 16);
      }
      else
      {
        v15 = 0LL;
        while ( (struct _METASPRITE *)v14 != MetaSprite )
        {
          v15 = v14;
          v14 = *(_QWORD *)(v14 + 16);
          if ( !v14 )
            goto LABEL_14;
        }
        *(_QWORD *)(v15 + 16) = *(_QWORD *)(v14 + 16);
      }
      *(_QWORD *)(v14 + 16) = 0LL;
LABEL_14:
      if ( !*((_QWORD *)MetaSprite + 2) )
      {
        if ( v13 )
        {
          *((_QWORD *)MetaSprite + 2) = *(_QWORD *)(v13 + 16);
          *(_QWORD *)(v13 + 16) = MetaSprite;
        }
        else
        {
          *((_QWORD *)MetaSprite + 2) = *((_QWORD *)v4 + 10);
          *((_QWORD *)v4 + 10) = MetaSprite;
        }
      }
    }
  }
  else
  {
    pSpGetSprite((struct _SPRITESTATE *)v4, a3, 0LL);
    v17 = pSpGetSprite(v16, a2, 0LL);
    vSpZorderSprite(*(HDEV *)v4, v17, v18);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v20);
}
