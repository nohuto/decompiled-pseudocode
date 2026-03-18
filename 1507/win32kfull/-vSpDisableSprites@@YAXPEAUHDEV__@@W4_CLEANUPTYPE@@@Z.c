/*
 * XREFs of ?vSpDisableSprites@@YAXPEAUHDEV__@@W4_CLEANUPTYPE@@@Z @ 0x1C00FE0F8
 * Callers:
 *     vSpDisableSpritesWrap @ 0x1C00FE0F0 (vSpDisableSpritesWrap.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0010EEC (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vSpDeleteExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C00FE22C (-vSpDeleteExMirror@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C00FE250 (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0275DF4 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
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
  __int64 v11; // rbx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF
  __int64 v14; // [rsp+58h] [rbp+20h] BYREF

  v2 = a1 + 96;
  v4 = *(_QWORD *)(a1 + 1192);
  *(_QWORD *)(v2 + 1096) = 0LL;
  *(_QWORD *)(v2 + 1088) = 0LL;
  *(_DWORD *)(v2 + 1104) = 0;
  if ( v4 )
  {
    do
    {
      v11 = *(_QWORD *)(v4 + 24);
      vSpDeleteSprite((struct SPRITE *)v4);
      v4 = v11;
    }
    while ( v11 );
  }
  vSpDeleteExMirror(*(HDEV *)v2);
  if ( a2 != 2 )
    vSpDeleteSurface(*(SURFOBJ **)(v2 + 1032));
  v12 = *(_QWORD *)(v2 + 704);
  v13 = *(_QWORD *)(v2 + 712);
  v14 = *(_QWORD *)(v2 + 872);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v12);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v13);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v14);
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
  if ( *(_QWORD *)(v2 + 128) )
    GreDeleteSemaphore();
  if ( *(_QWORD *)(v2 + 136) )
    GreDeleteSemaphore();
  return memset((void *)v2, 0, 0x558uLL);
}
