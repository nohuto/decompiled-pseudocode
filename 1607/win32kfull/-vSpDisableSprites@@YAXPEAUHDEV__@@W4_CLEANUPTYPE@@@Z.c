/*
 * XREFs of ?vSpDisableSprites@@YAXPEAUHDEV__@@W4_CLEANUPTYPE@@@Z @ 0x1C0129D08
 * Callers:
 *     vSpDisableSpritesWrap @ 0x1C0129D00 (vSpDisableSpritesWrap.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0065F2C (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vSpDeleteExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C0129E3C (-vSpDeleteExMirror@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C0129E60 (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C027333C (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 */

void *__fastcall vSpDisableSprites(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  void *v8; // rcx
  REGION *v9; // rcx
  REGION *v10; // rcx
  REGION *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v15; // rbx
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF
  __int64 v17; // [rsp+50h] [rbp+18h] BYREF
  __int64 v18; // [rsp+58h] [rbp+20h] BYREF

  v2 = a1 + 96;
  v4 = *(_QWORD *)(a1 + 1192);
  *(_QWORD *)(v2 + 1096) = 0LL;
  *(_QWORD *)(v2 + 1088) = 0LL;
  *(_DWORD *)(v2 + 1104) = 0;
  if ( v4 )
  {
    do
    {
      v15 = *(_QWORD *)(v4 + 24);
      vSpDeleteSprite((struct SPRITE *)v4);
      v4 = v15;
    }
    while ( v15 );
  }
  vSpDeleteExMirror(*(HDEV *)v2);
  if ( a2 != 2 )
    vSpDeleteSurface(*(SURFOBJ **)(v2 + 1032));
  v16 = *(_QWORD *)(v2 + 704);
  v17 = *(_QWORD *)(v2 + 712);
  v18 = *(_QWORD *)(v2 + 872);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v16);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v17);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v18);
  GreDeleteObject(*(_QWORD *)(v2 + 1064));
  v7 = *(_QWORD *)(v2 + 144);
  if ( v7 )
    Win32FreePool(v7, v5, v6);
  v8 = *(void **)(v2 + 72);
  if ( v8 )
    EngFreeMem(v8);
  v9 = *(REGION **)(v2 + 1040);
  if ( v9 )
    REGION::vDeleteREGION(v9);
  v10 = *(REGION **)(v2 + 1048);
  if ( v10 )
    REGION::vDeleteREGION(v10);
  v11 = *(REGION **)(v2 + 1056);
  if ( v11 )
    REGION::vDeleteREGION(v11);
  v12 = *(_QWORD *)(v2 + 128);
  if ( v12 )
    GreDeleteSemaphore(v12);
  v13 = *(_QWORD *)(v2 + 136);
  if ( v13 )
    GreDeleteSemaphore(v13);
  return memset((void *)v2, 0, 0x558uLL);
}
