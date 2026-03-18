/*
 * XREFs of ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C026D01C
 * Callers:
 *     EngpMovePointer @ 0x1C02621C4 (EngpMovePointer.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C026D600 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C008A54C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C008A630 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C008A660 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C008B008 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C02711A4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C0273A08 (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vLock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C0273A64 (-vLock@SINGLEREADERLOCK@@QEAAXXZ.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C02781FC (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x1C027AEC0 (-vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1C027B12C (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 *     ?vUnlock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C027B164 (-vUnlock@SINGLEREADERLOCK@@QEAAXXZ.c)
 */

void __fastcall GdiMovePointer(struct _SURFOBJ *a1, int a2, int a3, struct _RECTL *a4, int a5)
{
  HDEV v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 i; // rax
  struct SPRITE *v15; // r8
  int v16; // edi
  __int64 v17; // rsi
  struct _SPRITESTATE **v18; // rcx
  LONG v19; // r12d
  __int64 v20; // rsi
  HDEV v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rbx
  __int64 v24; // rdi
  __int64 v25; // rcx
  struct _SURFOBJ *v26; // rdx
  HDEV hdev; // [rsp+20h] [rbp-E0h] BYREF
  struct _POINTL v28; // [rsp+28h] [rbp-D8h] BYREF
  struct _RECTL v29; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+40h] [rbp-C0h] BYREF
  struct _SPRITESTATE *v31[24]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v32[192]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v33[192]; // [rsp+1D0h] [rbp+D0h] BYREF
  _QWORD v34[3]; // [rsp+290h] [rbp+190h] BYREF

  hdev = a1->hdev;
  v8 = hdev + 24;
  v9 = *((_QWORD *)hdev + 148);
  if ( v9 )
  {
    if ( *((_QWORD *)hdev + 149) != v9 )
    {
      v30 = ghsemSprite;
      GreAcquireSemaphore(ghsemSprite);
      v10 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      if ( (unsigned int)(v10 - *((_DWORD *)hdev + 301)) >= *((_DWORD *)hdev + 302) )
      {
        SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v31, (struct PDEVOBJ *)&hdev);
        v11 = *((_QWORD *)v8 + 137);
        v12 = *((_QWORD *)v8 + 136);
        v13 = v11;
        for ( i = *(_QWORD *)(v11 + 24); i != v12; i = *(_QWORD *)(i + 24) )
          v13 = i;
        if ( *(_DWORD *)(v13 + 80) == *(_DWORD *)(v12 + 80) && *(_DWORD *)(v13 + 84) == *(_DWORD *)(v12 + 84) )
        {
          while ( v11 != v12 )
          {
            if ( (*(_DWORD *)v11 & 0x20) != 0 )
            {
              bSpUpdatePosition((struct SPRITE *)v11, 0LL, 0, 0);
              break;
            }
            v11 = *(_QWORD *)(v11 + 24);
          }
        }
        else
        {
          bSpUpdatePosition(*((struct SPRITE **)v8 + 137), 0LL, 0, 0);
          v15 = (struct SPRITE *)*((_QWORD *)v8 + 136);
          *((_QWORD *)v8 + 137) = *(_QWORD *)(v11 + 24);
          vSpZorderSprite(a1->hdev, (struct SPRITE *)v11, v15);
          *((_QWORD *)v8 + 136) = v11;
        }
        *((_DWORD *)v8 + 277) = v10;
        SPRITEDDIACCESS::~SPRITEDDIACCESS(v31);
      }
      SEMOBJ::vUnlock((SEMOBJ *)&v30);
    }
    v16 = a5;
    if ( !a5 )
      v16 = GreIsSemaphoreOwnedByCurrentThread(ghsemSprite) != 0;
    if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&hdev) )
    {
      GreAcquireSemaphoreSharedStarveExclusiveInternal(ghsemSprite);
      EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive(L"ghsemSprite", ghsemSprite);
    }
    else
    {
      GreAcquireSemaphore(ghsemSprite);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
    }
    if ( !v16 )
      GreIncNonRBLockCount(ghsemSprite);
    memset(v34, 0, sizeof(v34));
    if ( a2 == -1 )
    {
      SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v32, (struct PDEVOBJ *)&hdev);
      v17 = *((_QWORD *)v8 + 137);
      v28.x = 0x7FFFFFFF;
      v28.y = 0x7FFFFFFF;
      while ( v17 )
      {
        if ( !v16 )
        {
          SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v8 + 32));
          PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v34, (struct _SPRITESTATE *)v8, (struct _RECTL *)(v17 + 80));
          SINGLEREADERLOCK::vLock((SINGLEREADERLOCK *)(v17 + 248));
          *((_QWORD *)v8 + 170) = v17;
        }
        if ( !v34[0] && !v16 || (bSpUpdatePosition((struct SPRITE *)v17, &v28, 0, 0), !v16) )
        {
          *((_QWORD *)v8 + 170) = 0LL;
          SINGLEREADERLOCK::vUnlock((SINGLEREADERLOCK *)(v17 + 248));
          PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v34);
          SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v8 + 32));
        }
        v17 = *(_QWORD *)(v17 + 24);
      }
      v18 = (struct _SPRITESTATE **)v32;
    }
    else
    {
      SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v33, (struct PDEVOBJ *)&hdev);
      v19 = a3 - *((_DWORD *)v8 + 271);
      v20 = *((_QWORD *)v8 + 136);
      v28.x = a2 - *((_DWORD *)v8 + 270);
      v28.y = v19;
      if ( !v16 )
      {
        SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v8 + 32));
        PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v34, (struct _SPRITESTATE *)v8, (struct _RECTL *)(v20 + 80));
        SINGLEREADERLOCK::vLock((SINGLEREADERLOCK *)(v20 + 248));
        *((_QWORD *)v8 + 170) = v20;
      }
      bSpUpdatePosition((struct SPRITE *)v20, &v28, 0, 0);
      if ( !v16 )
      {
        *((_QWORD *)v8 + 170) = 0LL;
        SINGLEREADERLOCK::vUnlock((SINGLEREADERLOCK *)(v20 + 248));
        PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v34);
        SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v8 + 32));
      }
      v29 = *(struct _RECTL *)(v20 + 80);
      if ( !v16 )
        PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v34, (struct _SPRITESTATE *)v8, &v29);
      if ( !v34[0] && !v16 || (vSpRedrawSprite((struct SPRITE *)v20), !v16) )
        PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v34);
      v18 = (struct _SPRITESTATE **)v33;
    }
    SPRITEDDIACCESS::~SPRITEDDIACCESS(v18);
    if ( !v16 )
      GreDecNonRBLockCount(ghsemSprite);
    EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
    GreReleaseSemaphoreInternal(ghsemSprite);
    v21 = hdev;
    if ( (*((_DWORD *)hdev + 538) & 0x80u) != 0 )
    {
      v22 = *((_QWORD *)hdev + 322);
      v23 = 0LL;
      if ( v22 )
      {
        v24 = v22 + 24;
        if ( v24 )
        {
          if ( ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v24) + 112) & 0x4000) != 0
             || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v24) + 112) < 0)
            && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v24) + 112) & 0x200) == 0 )
          {
            v23 = SURFOBJ_TO_SURFACE_NOT_NULL(v24);
            GreLockDisplayDevice(*(_QWORD *)(v23 + 48));
          }
          v21 = hdev;
        }
      }
      v25 = *((_QWORD *)v21 + 322);
      if ( v25 )
        v26 = (struct _SURFOBJ *)(v25 + 24);
      else
        v26 = 0LL;
      PDEVOBJ::vSync((PDEVOBJ *)&hdev, v26, 0LL, 1u);
      if ( v23 )
        GreUnlockDisplayDevice(*(_QWORD *)(v23 + 48));
    }
    PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v34);
  }
}
