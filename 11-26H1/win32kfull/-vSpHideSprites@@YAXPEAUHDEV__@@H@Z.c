/*
 * XREFs of ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x14023EB9C
 * Callers:
 *     GreHideSprites @ 0x14023EB30 (GreHideSprites.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1400801CC (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1400BBFE0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400BC0EC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@W4vSpComputeSpriteRangesOptions@@@Z @ 0x140186748 (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@W4vSpComputeSpriteRangesOptions@@@Z.c)
 *     ?vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z @ 0x14028D51C (-vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ??0?$SEMOBJ@$08@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x140312B1C (--0-$SEMOBJ@$08@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vSpHook@@YAXPEAU_SPRITESTATE@@@Z @ 0x140316F74 (-vSpHook@@YAXPEAU_SPRITESTATE@@@Z.c)
 */

void __fastcall vSpHideSprites(HDEV a1, int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rbx
  unsigned int v6; // edx
  int v7; // eax
  HSEMAPHORE v8; // rbx
  struct _GRETHREAD *v9; // rax
  struct _SPRITESTATE *v11[27]; // [rsp+20h] [rbp-D8h] BYREF
  HDEV v12; // [rsp+100h] [rbp+8h] BYREF
  HSEMAPHORE v13; // [rsp+110h] [rbp+18h] BYREF

  v12 = a1;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v11, (struct PDEVOBJ *)&v12);
  v3 = (__int64)(v12 + 20);
  *((_BYTE *)v12 + 208) = 1;
  v4 = *(_QWORD *)(v3 + 8);
  if ( v4 )
  {
    do
    {
      v5 = *(_QWORD *)(v4 + 24);
      v6 = *(_DWORD *)v4 | 0x10;
      if ( !a2 )
        v6 = *(_DWORD *)v4 & 0xFFFFFFEF;
      *(_DWORD *)v4 = v6;
      bSpUpdatePosition((struct SPRITE *)v4, (struct _POINTL *)(v4 + 112), 0, 1);
      v4 = v5;
    }
    while ( v5 );
  }
  v7 = *(_DWORD *)(v3 + 1088);
  if ( a2 )
  {
    if ( v7 )
      vSpUnhook((struct _SPRITESTATE *)v3);
  }
  else if ( !v7 )
  {
    vSpHook((struct _SPRITESTATE *)v3);
    if ( !*(_DWORD *)(v3 + 116) )
    {
      SEMOBJ<9>::SEMOBJ<9>(&v13, *(_QWORD *)(v3 + 120));
      vSpComputeSpriteRanges(v3);
      v8 = v13;
      if ( v13 )
      {
        EtwTraceGreLockReleaseSemaphore(L"SpriteRangeLock", v13);
        v9 = GreGetCurrentThreadCrossSessionCheck();
        if ( v9 )
        {
          if ( (*((_BYTE *)v9 + 17))-- == 1 )
            *(_QWORD *)v9 &= ~0x200uLL;
          if ( !*(_QWORD *)v9 )
            GrepOnAllLocksReleased();
        }
        GreReleaseSemaphoreExclusiveInternal(v8);
      }
    }
  }
  *(_BYTE *)(v3 + 128) = 0;
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v11);
}
