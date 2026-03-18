/*
 * XREFs of ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x1C012BCA8
 * Callers:
 *     GreHideSprites @ 0x1C012BC50 (GreHideSprites.c)
 * Callees:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0055CE0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0055D10 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vSpHook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C011BBB0 (-vSpHook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C012BD50 (-vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C026E6A4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 */

void __fastcall vSpHideSprites(HDEV a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  HDEV v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rsi
  struct _SPRITESTATE *v11[24]; // [rsp+20h] [rbp-C8h] BYREF
  HDEV v12; // [rsp+F0h] [rbp+8h] BYREF

  v12 = a1;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v11, (struct PDEVOBJ *)&v12, a3, a4);
  v8 = v12;
  v9 = *((_QWORD *)v12 + 14);
  if ( v9 )
  {
    do
    {
      v10 = *(_QWORD *)(v9 + 24);
      if ( a2 )
        *(_DWORD *)v9 |= 0x10u;
      else
        *(_DWORD *)v9 &= ~0x10u;
      bSpUpdatePosition((struct SPRITE *)v9, (struct _POINTL *)(v9 + 112), 0, 1);
      v9 = v10;
    }
    while ( v10 );
  }
  if ( a2 )
  {
    if ( *((_DWORD *)v8 + 26) )
      vSpUnhook((struct _SPRITESTATE *)(v8 + 24));
  }
  else if ( !*((_DWORD *)v8 + 26) )
  {
    vSpHook((struct _SPRITESTATE *)(v8 + 24));
  }
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v11, v5, v6, v7);
}
