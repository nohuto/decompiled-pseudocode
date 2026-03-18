/*
 * XREFs of ?GdiAdjustSpriteDirtyAccum@@YAHPEAUHDEV__@@PEAUHWND__@@PEAU_RECTL@@2PEAU_POINTL@@3@Z @ 0x1C02694FC
 * Callers:
 *     GreAdjustSpriteDirtyAccum @ 0x1C00D80F0 (GreAdjustSpriteDirtyAccum.c)
 * Callees:
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C0270484 (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C02704DC (-pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?vSpAdjustSpriteDirtyAccum@@YAXPEAVSPRITE@@PEAU_RECTL@@1PEAU_POINTL@@2@Z @ 0x1C0271654 (-vSpAdjustSpriteDirtyAccum@@YAXPEAVSPRITE@@PEAU_RECTL@@1PEAU_POINTL@@2@Z.c)
 */

__int64 __fastcall GdiAdjustSpriteDirtyAccum(
        HDEV a1,
        HWND a2,
        struct _RECTL *a3,
        struct _RECTL *a4,
        struct _POINTL *a5,
        struct _POINTL *a6)
{
  HDEV v8; // rdi
  unsigned int v9; // ebx
  const struct _SPRITESTATE *v10; // rcx
  struct _METASPRITE *MetaSprite; // rsi
  int v12; // r9d
  struct _POINTL *v13; // r14
  __int64 v14; // rax
  struct SPRITE *v15; // rcx
  LONG v16; // r8d
  struct _RECTL *v17; // rdx
  struct _RECTL *v18; // rdx
  struct SPRITE *Sprite; // rcx
  _BYTE v21[40]; // [rsp+30h] [rbp-28h] BYREF
  struct _POINTL v22; // [rsp+60h] [rbp+8h] BYREF
  HDEV v23; // [rsp+78h] [rbp+20h] BYREF

  v23 = a1;
  GreAcquireSemaphore(ghsemGreLock);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v21, (struct PDEVOBJ *)&v23);
  v8 = v23;
  v9 = 0;
  v10 = (const struct _SPRITESTATE *)(v23 + 24);
  if ( *((_DWORD *)v23 + 41) )
  {
    MetaSprite = pSpGetMetaSprite(v10, a2, 0LL);
    if ( MetaSprite && v12 )
    {
      v13 = a6;
      do
      {
        v14 = *(_QWORD *)(*((_QWORD *)v8 + 21) + 8LL * v9);
        v15 = (struct SPRITE *)*((_QWORD *)MetaSprite + v9 + 4);
        v16 = v13->x - *(_DWORD *)(v14 + 2608);
        v17 = (struct _RECTL *)*(unsigned int *)(v14 + 2612);
        LODWORD(v14) = v13->y - (_DWORD)v17;
        v22.x = v16;
        v22.y = v14;
        vSpAdjustSpriteDirtyAccum(v15, v17, a3, a5, &v22);
        ++v9;
      }
      while ( v9 < *((_DWORD *)v8 + 41) );
    }
  }
  else
  {
    Sprite = pSpGetSprite(v10, a2, 0LL);
    if ( Sprite )
      vSpAdjustSpriteDirtyAccum(Sprite, v18, a3, a5, a6);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v21);
  EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
  GreReleaseSemaphoreInternal(ghsemGreLock);
  return 1LL;
}
