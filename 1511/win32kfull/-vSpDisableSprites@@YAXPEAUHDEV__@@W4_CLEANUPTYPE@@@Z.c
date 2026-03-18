/*
 * XREFs of ?vSpDisableSprites@@YAXPEAUHDEV__@@W4_CLEANUPTYPE@@@Z @ 0x1C0108738
 * Callers:
 *     vSpDisableSpritesWrap @ 0x1C0108730 (vSpDisableSpritesWrap.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C007B840 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vSpDeleteExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C010886C (-vSpDeleteExMirror@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C0108890 (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0274DE8 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 */

void *__fastcall vSpDisableSprites(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx
  void *v6; // rcx
  REGION *v7; // rcx
  REGION *v8; // rcx
  REGION *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v13; // rbx
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 v15; // [rsp+50h] [rbp+18h] BYREF
  __int64 v16; // [rsp+58h] [rbp+20h] BYREF

  v2 = a1 + 96;
  v4 = *(_QWORD *)(a1 + 1192);
  *(_QWORD *)(v2 + 1096) = 0LL;
  *(_QWORD *)(v2 + 1088) = 0LL;
  *(_DWORD *)(v2 + 1104) = 0;
  if ( v4 )
  {
    do
    {
      v13 = *(_QWORD *)(v4 + 24);
      vSpDeleteSprite((struct SPRITE *)v4);
      v4 = v13;
    }
    while ( v13 );
  }
  vSpDeleteExMirror(*(HDEV *)v2);
  if ( a2 != 2 )
    vSpDeleteSurface(*(SURFOBJ **)(v2 + 1032));
  v14 = *(_QWORD *)(v2 + 704);
  v15 = *(_QWORD *)(v2 + 712);
  v16 = *(_QWORD *)(v2 + 872);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v14);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v15);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v16);
  GreDeleteObject(*(_QWORD *)(v2 + 1064));
  v5 = *(_QWORD *)(v2 + 144);
  if ( v5 )
    Win32FreePool(v5);
  v6 = *(void **)(v2 + 72);
  if ( v6 )
    EngFreeMem(v6);
  v7 = *(REGION **)(v2 + 1040);
  if ( v7 )
    REGION::vDeleteREGION(v7);
  v8 = *(REGION **)(v2 + 1048);
  if ( v8 )
    REGION::vDeleteREGION(v8);
  v9 = *(REGION **)(v2 + 1056);
  if ( v9 )
    REGION::vDeleteREGION(v9);
  v10 = *(_QWORD *)(v2 + 128);
  if ( v10 )
    GreDeleteSemaphore(v10);
  v11 = *(_QWORD *)(v2 + 136);
  if ( v11 )
    GreDeleteSemaphore(v11);
  return memset((void *)v2, 0, 0x558uLL);
}
