/*
 * XREFs of ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x1C026D818
 * Callers:
 *     GreUpdateSprite @ 0x1C001B070 (GreUpdateSprite.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C012BAD0 (GreTransferDwmStateToSpriteState.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C0272120 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C0272F64 (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C0272FBC (-pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 */

__int64 __fastcall GdiUpdateSprite(
        HDEV a1,
        HWND a2,
        void *a3,
        HDC a4,
        struct _POINTL *a5,
        struct tagSIZE *a6,
        HDC a7,
        struct _POINTL *a8,
        unsigned int a9,
        struct _BLENDFUNCTION *a10,
        unsigned int a11,
        struct tagRECT *a12)
{
  unsigned int updated; // ebx
  struct _RECTL *v16; // rsi
  HDEV v17; // rdi
  const struct _SPRITESTATE *v18; // rcx
  int v19; // r9d
  struct _METASPRITE *MetaSprite; // r13
  __int64 v21; // r14
  struct _POINTL *v22; // r8
  __int64 v23; // rax
  struct SPRITE *Sprite; // rcx
  int v26; // [rsp+50h] [rbp-59h]
  HDEV v27; // [rsp+58h] [rbp-51h] BYREF
  struct _POINTL *v28; // [rsp+60h] [rbp-49h]
  struct tagSIZE *v29; // [rsp+68h] [rbp-41h]
  struct _BLENDFUNCTION *v30; // [rsp+70h] [rbp-39h]
  HDC v31; // [rsp+78h] [rbp-31h]
  HDC v32; // [rsp+80h] [rbp-29h]
  struct _POINTL v33; // [rsp+88h] [rbp-21h] BYREF
  _BYTE v34[8]; // [rsp+90h] [rbp-19h] BYREF
  struct _RECTL v35; // [rsp+98h] [rbp-11h] BYREF

  updated = 0;
  v26 = 0;
  v16 = (struct _RECTL *)a12;
  v29 = a6;
  v32 = a7;
  v28 = a8;
  v30 = a10;
  v31 = a4;
  if ( (a11 & 0x200000) == 0 )
  {
    GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreAcquireSemaphore(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
    v26 = 1;
  }
  if ( a12 )
  {
    v16 = &v35;
    v35 = (struct _RECTL)*a12;
  }
  v27 = a1;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v34, (struct PDEVOBJ *)&v27);
  PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v27);
  v17 = v27;
  v18 = (const struct _SPRITESTATE *)(v27 + 24);
  if ( *((_DWORD *)v27 + 41) )
  {
    MetaSprite = pSpGetMetaSprite(v18, a2, a3);
    if ( MetaSprite )
    {
      v21 = 0LL;
      updated = 1;
      if ( v19 )
      {
        do
        {
          v22 = 0LL;
          v23 = *(_QWORD *)(*((_QWORD *)v17 + 21) + 8 * v21);
          if ( a5 )
          {
            v22 = &v33;
            v33.x = a5->x - *(_DWORD *)(v23 + 2608);
            v33.y = a5->y - *(_DWORD *)(v23 + 2612);
          }
          updated &= bSpUpdateSprite(
                       *((struct SPRITE **)MetaSprite + v21 + 4),
                       v31,
                       v22,
                       v29,
                       v32,
                       v28,
                       a9,
                       v30,
                       a11,
                       v16);
          v21 = (unsigned int)(v21 + 1);
        }
        while ( (unsigned int)v21 < *((_DWORD *)v17 + 41) );
      }
    }
  }
  else
  {
    Sprite = pSpGetSprite(v18, a2, a3);
    if ( Sprite )
      updated = bSpUpdateSprite(Sprite, v31, a5, v29, v32, v28, a9, v30, a11, v16);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v34);
  if ( v26 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    GreReleaseSemaphoreInternal(ghsemGreLock);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
  return updated;
}
