/*
 * XREFs of ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00460FC
 * Callers:
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C000F1C8 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     GreStretchBltInternal @ 0x1C004DDF0 (GreStretchBltInternal.c)
 *     GreGradientFill @ 0x1C005FD04 (GreGradientFill.c)
 *     GreMaskBlt @ 0x1C010ED68 (GreMaskBlt.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     TrapAppContainerRenderingWrap @ 0x1C0044F10 (TrapAppContainerRenderingWrap.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C0046768 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bLock(DEVLOCKBLTOBJ *this, struct XDCOBJ *a2)
{
  _QWORD *v2; // r14
  int v5; // esi
  __int64 v6; // r8
  __int64 v7; // r9
  DC *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 v16; // r8
  int v17; // edx
  bool v18; // zf
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF

  *((_DWORD *)this + 28) = 1;
  v2 = (_QWORD *)((char *)this + 224);
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  v5 = 0;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = **(_QWORD **)a2;
  if ( !TrapAppContainerRenderingWrap(a2, (HSURF *)this + 29, (HSURF *)this + 28, (unsigned int *)this + 62) )
    return 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  v8 = *(DC **)a2;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) != 0 )
  {
    *((_QWORD *)this + 2) = ghsemDynamicModeChange;
    GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    *((_DWORD *)this + 28) |= 8u;
    if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
    {
      GreAcquireSemaphoreSharedInternal(ghsemGreLock);
      EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
      v5 = 1;
    }
    v9 = *(_QWORD *)a2;
    v19 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
    if ( (*(_DWORD *)(*(_QWORD *)(v9 + 80) + 8LL) & 0x4000) == 0 && (*(_DWORD *)(v9 + 36) & 0x8000) == 0
      || !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v19) )
    {
      *(_QWORD *)this = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
      *((_QWORD *)this + 3) = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
      if ( v5 && *(_QWORD *)this == ghsemGreLock )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
        v5 = 0;
      }
      GreAcquireSemaphore(*(_QWORD *)this);
      v16 = 11LL;
      if ( *(_QWORD *)this == ghsemGreLock )
        v16 = 2LL;
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", *(_QWORD *)this, v16);
      v17 = *((_DWORD *)this + 28);
      if ( (v17 & 0x200) == 0 && (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x4000) != 0 )
        *((_DWORD *)this + 28) = v17 | 0x200;
    }
    if ( !(unsigned int)GreGetLockCount() )
    {
      *((_DWORD *)this + 28) |= 0x1000u;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v6, v7);
      if ( ThreadWin32Thread )
      {
        *(_QWORD *)(ThreadWin32Thread + 320) = 0LL;
        *(_QWORD *)(ThreadWin32Thread + 312) = 0LL;
      }
      GreIncLockCount();
      GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
      EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
    }
    v8 = *(DC **)a2;
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x5000) == 0x1000 )
    {
      v18 = (*((_DWORD *)this + 28) & 0x1000) == 0;
LABEL_49:
      if ( !v18 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
        GreReleaseSemaphoreInternal(ghsemDCVisRgn);
      }
      *((_DWORD *)this + 28) &= ~1u;
      if ( v5 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
      return 0LL;
    }
  }
  v12 = *((_DWORD *)this + 28) & 0x1000;
  if ( (*((_DWORD *)this + 28) & 0x1000) != 0 && (*((_DWORD *)v8 + 9) & 0x80000) != 0
    || ((_DWORD)v12 || !*((_QWORD *)this + 2)) && (*((_DWORD *)v8 + 9) & 0x10) != 0 && !DC::bCompute(v8) )
  {
    v18 = *((_QWORD *)this + 2) == 0LL;
    goto LABEL_49;
  }
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) == 0 )
    goto LABEL_25;
  if ( (*((_DWORD *)this + 28) & 0x1000) != 0 )
  {
    if ( !*v2 )
      DC::vSetRendering(*(DC **)a2);
    v13 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v6, v7);
    v14 = v13;
    if ( v13 )
    {
      *(_QWORD *)(v13 + 312) = (char *)this + 120;
      if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x4000) == 0 )
      {
        *(_BYTE *)(v13 + 328) = 1;
        *(_QWORD *)(*(_QWORD *)a2 + 2392LL) = 0LL;
        GreAcquireSemaphoreSharedInternal(ghsemVisRgnUniqueness);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness);
        *(_DWORD *)(v14 + 336) = giVisRgnUniqueness;
        EtwTraceGreLockReleaseSemaphore(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness);
        GreReleaseSemaphoreInternal(ghsemVisRgnUniqueness);
      }
    }
LABEL_25:
    if ( (*((_DWORD *)this + 28) & 0x1000) != 0 && *((_QWORD *)this + 2) )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
      GreReleaseSemaphoreInternal(ghsemDCVisRgn);
    }
  }
  if ( v5 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    GreReleaseSemaphoreInternal(ghsemGreLock);
  }
  if ( (*((_DWORD *)this + 28) & 0x1000) == 0 || (unsigned int)DEVLOCKBLTOBJ::bPrepareTrgDco(this, a2, 0) )
    return 1LL;
  *((_DWORD *)this + 28) &= ~1u;
  return 0LL;
}
