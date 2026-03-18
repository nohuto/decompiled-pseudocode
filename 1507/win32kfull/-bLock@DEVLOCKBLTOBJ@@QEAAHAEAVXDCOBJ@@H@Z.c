/*
 * XREFs of ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00182A4
 * Callers:
 *     GreGradientFill @ 0x1C0033608 (GreGradientFill.c)
 *     GreStretchBltInternal @ 0x1C009DE20 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C00A1D64 (GreMaskBlt.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C00A289C (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 * Callees:
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C0018878 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     TrapAppContainerRenderingWrap @ 0x1C001A310 (TrapAppContainerRenderingWrap.c)
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bLock(DEVLOCKBLTOBJ *this, DC **a2)
{
  _QWORD *v2; // r14
  int v5; // esi
  DC *v6; // rcx
  DC *v7; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v12; // r8
  int v13; // edx
  bool v14; // zf
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

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
  *((_QWORD *)this + 30) = *(_QWORD *)*a2;
  if ( (unsigned int)TrapAppContainerRenderingWrap(a2, (char *)this + 232, (char *)this + 224, (char *)this + 248) != 1 )
    return 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  v6 = *a2;
  if ( (*((_DWORD *)*a2 + 9) & 0x200) != 0 )
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
    v7 = *a2;
    v15 = *((_QWORD *)*a2 + 6);
    if ( (*(_DWORD *)(*((_QWORD *)v7 + 10) + 8LL) & 0x4000) == 0 && (*((_DWORD *)v7 + 9) & 0x8000) == 0
      || !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v15) )
    {
      *(_QWORD *)this = *((_QWORD *)*a2 + 8);
      *((_QWORD *)this + 3) = *((_QWORD *)*a2 + 6);
      if ( v5 && *(_QWORD *)this == ghsemGreLock )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
        v5 = 0;
      }
      GreAcquireSemaphore(*(_QWORD *)this);
      v12 = 11LL;
      if ( *(_QWORD *)this == ghsemGreLock )
        v12 = 2LL;
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", *(_QWORD *)this, v12);
      v13 = *((_DWORD *)this + 28);
      if ( (v13 & 0x200) == 0 && (*((_DWORD *)*a2 + 9) & 0x4000) != 0 )
        *((_DWORD *)this + 28) = v13 | 0x200;
    }
    if ( !(unsigned int)GreGetLockCount() )
    {
      *((_DWORD *)this + 28) |= 0x1000u;
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      if ( ThreadWin32Thread )
      {
        *(_QWORD *)(ThreadWin32Thread + 320) = 0LL;
        *(_QWORD *)(ThreadWin32Thread + 312) = 0LL;
      }
      GreIncLockCount();
      GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
      EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
    }
    v6 = *a2;
    if ( (*((_DWORD *)*a2 + 9) & 0x5000) == 0x1000 )
    {
      v14 = (*((_DWORD *)this + 28) & 0x1000) == 0;
LABEL_49:
      if ( !v14 )
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
  if ( (*((_DWORD *)this + 28) & 0x1000) != 0 && (*((_DWORD *)v6 + 9) & 0x80000) != 0
    || ((*((_DWORD *)this + 28) & 0x1000) != 0 || !*((_QWORD *)this + 2))
    && (*((_DWORD *)v6 + 9) & 0x10) != 0
    && !DC::bCompute(v6) )
  {
    v14 = *((_QWORD *)this + 2) == 0LL;
    goto LABEL_49;
  }
  if ( (*((_DWORD *)*a2 + 9) & 0x200) == 0 )
    goto LABEL_25;
  if ( (*((_DWORD *)this + 28) & 0x1000) != 0 )
  {
    if ( !*v2 )
      DC::vSetRendering(*a2);
    v9 = W32GetThreadWin32Thread(KeGetCurrentThread());
    v10 = v9;
    if ( v9 )
    {
      *(_QWORD *)(v9 + 312) = (char *)this + 120;
      if ( (*((_DWORD *)*a2 + 9) & 0x4000) == 0 )
      {
        *(_BYTE *)(v9 + 328) = 1;
        *((_QWORD *)*a2 + 299) = 0LL;
        GreAcquireSemaphoreSharedInternal(ghsemVisRgnUniqueness);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness);
        *(_DWORD *)(v10 + 336) = giVisRgnUniqueness;
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
  if ( (*((_DWORD *)this + 28) & 0x1000) == 0
    || (unsigned int)DEVLOCKBLTOBJ::bPrepareTrgDco(this, (struct XDCOBJ *)a2, 0) )
  {
    return 1LL;
  }
  *((_DWORD *)this + 28) &= ~1u;
  return 0LL;
}
