/*
 * XREFs of ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x1C00FE8E8
 * Callers:
 *     GreHideSprites @ 0x1C00FE890 (GreHideSprites.c)
 * Callees:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C008A630 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C008A660 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vSpHook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00F4F24 (-vSpHook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00FE990 (-vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C02711A4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 */

void __fastcall vSpHideSprites(HDEV a1, int a2)
{
  HDEV v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rsi
  struct _SPRITESTATE *v6[24]; // [rsp+20h] [rbp-C8h] BYREF
  HDEV v7; // [rsp+F0h] [rbp+8h] BYREF

  v7 = a1;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v6, (struct PDEVOBJ *)&v7);
  v3 = v7;
  v4 = *((_QWORD *)v7 + 14);
  if ( v4 )
  {
    do
    {
      v5 = *(_QWORD *)(v4 + 24);
      if ( a2 )
        *(_DWORD *)v4 |= 0x10u;
      else
        *(_DWORD *)v4 &= ~0x10u;
      bSpUpdatePosition((struct SPRITE *)v4, (struct _POINTL *)(v4 + 112), 0, 1);
      v4 = v5;
    }
    while ( v5 );
  }
  if ( a2 )
  {
    if ( *((_DWORD *)v3 + 26) )
      vSpUnhook((struct _SPRITESTATE *)(v3 + 24));
  }
  else if ( !*((_DWORD *)v3 + 26) )
  {
    vSpHook((struct _SPRITESTATE *)(v3 + 24));
  }
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v6);
}
