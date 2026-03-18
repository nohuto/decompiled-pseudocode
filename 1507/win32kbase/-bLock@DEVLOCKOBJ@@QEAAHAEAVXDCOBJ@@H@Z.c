/*
 * XREFs of ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0027140
 * Callers:
 *     GreGetClipBox @ 0x1C0026E80 (GreGetClipBox.c)
 * Callees:
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap_0 @ 0x1C0001100 (DEVLOCKOBJ_bPrepareTrgDcoWrap_0.c)
 *     IsDEVLOCKOBJ_bPrepareTrgDcoSupported_0 @ 0x1C0001108 (IsDEVLOCKOBJ_bPrepareTrgDcoSupported_0.c)
 *     TrapAppContainerRenderingWrap_0 @ 0x1C0001408 (TrapAppContainerRenderingWrap_0.c)
 *     IsTrapAppContainerRenderingSupported_0 @ 0x1C0001410 (IsTrapAppContainerRenderingSupported_0.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000B590 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003AA20 (GreReleaseSemaphoreInternal.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C003D0A0 (-bCompute@DC@@QEAAHXZ.c)
 *     Template_pz @ 0x1C00BECC4 (Template_pz.c)
 */

__int64 __fastcall DEVLOCKOBJ::bLock(DEVLOCKOBJ *this, DC **a2, int a3)
{
  __int64 v7; // r8
  DC *v8; // rdx
  int v9; // esi
  __int64 v10; // rcx
  PERESOURCE v11; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // rax
  struct _ERESOURCE *v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // r8
  PERESOURCE v17; // r9
  DC *v18; // r8
  __int64 v19; // rax
  int v20; // edx
  __int64 v21; // rcx
  struct _ERESOURCE *v22; // r8
  int v23; // r8d
  int v24; // edx
  __int64 *v25; // rax
  __int64 v26; // rax
  __int64 *v27; // rax
  __int64 v28; // rax
  __int64 *v29; // rax
  __int64 v30; // rax
  PERESOURCE v31; // rcx
  bool v32; // zf
  PERESOURCE v33; // rcx
  DC *v34; // rdi
  int v35; // edx
  _QWORD *v36; // rcx
  __int64 v37; // rcx
  __int64 *v38; // rax
  __int64 v39; // rdi
  PERESOURCE v40; // r9
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int128 v44; // [rsp+30h] [rbp-38h]

  *((_DWORD *)this + 6) = 1;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 12) = *(_QWORD *)*a2;
  if ( !a3
    && ((int)IsTrapAppContainerRenderingSupported_0() < 0 || (unsigned int)TrapAppContainerRenderingWrap_0() != 1) )
  {
    return 0LL;
  }
  if ( (int)IsDEVLOCKOBJ_bPrepareTrgDcoSupported_0() >= 0 )
    DEVLOCKOBJ_bPrepareTrgDcoWrap_0();
  if ( a3 == 1 )
    *((_DWORD *)this + 6) |= 0x20000u;
  v8 = *a2;
  v9 = 0;
  v10 = *((unsigned int *)*a2 + 9);
  if ( (v10 & 0x200) != 0 )
  {
    *((_QWORD *)this + 1) = ghsemDynamicModeChange;
    v11 = ghsemDynamicModeChange;
    if ( ghsemDynamicModeChange )
    {
      ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
      v11 = ghsemDynamicModeChange;
    }
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      Template_pz(v10, &LockAcquireShared, v7, v11);
    *((_DWORD *)this + 6) |= 8u;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( !ThreadWin32Thread || (v13 = *ThreadWin32Thread) == 0 || !*(_DWORD *)(v13 + 104) )
    {
      v14 = ghsemGreLock;
      if ( !ExIsResourceAcquiredExclusiveLite(ghsemGreLock) && !ExIsResourceAcquiredSharedLite(v14) )
      {
        v17 = ghsemGreLock;
        if ( ghsemGreLock )
        {
          ExEnterPriorityRegionAndAcquireResourceShared(ghsemGreLock);
          v17 = ghsemGreLock;
        }
        if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
          Template_pz(v15, &LockAcquireShared, v16, v17);
        v9 = 1;
      }
    }
    v18 = *a2;
    v19 = *((_QWORD *)*a2 + 6);
    if ( (*(_DWORD *)(*((_QWORD *)*a2 + 10) + 8LL) & 0x4000) == 0 && (*((_DWORD *)v18 + 9) & 0x8000) == 0
      || (v20 = *(_DWORD *)(v19 + 56), (v20 & 1) == 0)
      || (v20 & 0x1000000) != 0
      || *(_DWORD *)(v19 + 2636) != 5
      && (v20 & 0x20000) == 0
      && ((v21 = *(_QWORD *)(v19 + 2600)) == 0 || (*(_DWORD *)(v21 + 160) & 0x800000) == 0)
      || (*(_DWORD *)(v19 + 2152) & 0x400) != 0
      || (*(_DWORD *)(v19 + 1848) & 0x8000000) != 0
      || (v20 & 0x48000000) != 0
      || (*(_DWORD *)(*(_QWORD *)(v19 + 40) + 56LL) & 0x1000000) != 0 )
    {
      v22 = (struct _ERESOURCE *)*((_QWORD *)v18 + 8);
      *(_QWORD *)this = v22;
      *((_QWORD *)this + 2) = *((_QWORD *)*a2 + 6);
      if ( v9 == 1 && v22 == ghsemGreLock )
      {
        EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemGreLock", (__int64)ghsemGreLock, (__int64)v22);
        GreReleaseSemaphoreInternal(ghsemGreLock);
        v9 = 0;
      }
      EngAcquireSemaphore(*(HSEMAPHORE *)this);
      v23 = 11;
      if ( *(PERESOURCE *)this == ghsemGreLock )
        v23 = 2;
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"hsemTrg", *(_QWORD *)this, v23);
      v24 = *((_DWORD *)this + 6);
      if ( (v24 & 0x200) == 0 && (*((_DWORD *)*a2 + 9) & 0x4000) != 0 )
        *((_DWORD *)this + 6) = v24 | 0x200;
    }
    v25 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( !v25 || (v26 = *v25) == 0 || !*(_DWORD *)(v26 + 104) )
    {
      *((_DWORD *)this + 6) |= 0x1000u;
      v27 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v27 )
      {
        v28 = *v27;
        if ( v28 )
        {
          *(_QWORD *)(v28 + 320) = 0LL;
          *(_QWORD *)(v28 + 312) = 0LL;
        }
      }
      v29 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v29 )
      {
        v30 = *v29;
        if ( v30 )
          ++*(_DWORD *)(v30 + 104);
      }
      v31 = ghsemDCVisRgn;
      if ( ghsemDCVisRgn )
        ExEnterPriorityRegionAndAcquireResourceShared(ghsemDCVisRgn);
      if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        Template_pz(v31, &LockAcquireShared, v7, ghsemDCVisRgn);
    }
    v8 = *a2;
    LODWORD(v10) = *((_DWORD *)*a2 + 9);
    if ( (v10 & 0x5000) == 0x1000 )
    {
      v32 = (*((_DWORD *)this + 6) & 0x1000) == 0;
LABEL_69:
      if ( !v32 )
      {
        EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDCVisRgn", (__int64)ghsemDCVisRgn, v7);
        GreReleaseSemaphoreInternal(ghsemDCVisRgn);
      }
      *((_DWORD *)this + 6) &= ~1u;
      if ( v9 )
      {
        EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemGreLock", (__int64)ghsemGreLock, v7);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
      return 0LL;
    }
  }
  if ( (*((_DWORD *)this + 6) & 0x1000) != 0 && (v10 & 0x80000) != 0
    || ((*((_DWORD *)this + 6) & 0x1000) != 0 || !*((_QWORD *)this + 1))
    && (v10 & 0x10) != 0
    && !(unsigned int)DC::bCompute(v8) )
  {
    v32 = *((_QWORD *)this + 1) == 0LL;
    goto LABEL_69;
  }
  v33 = (PERESOURCE)*((unsigned int *)this + 6);
  if ( ((unsigned int)v33 & 0x20000) == 0 )
  {
    v34 = *a2;
    if ( (*((_DWORD *)*a2 + 9) & 0x200) != 0 && ((unsigned __int16)v33 & 0x1000) != 0 )
    {
      if ( !*((_QWORD *)this + 10) )
      {
        v35 = *((_DWORD *)v34 + 10);
        v36 = (_QWORD *)((char *)v34 + 1416);
        if ( (v35 & 1) == 0 )
          v36 = (_QWORD *)((char *)v34 + 1408);
        v32 = (*((_DWORD *)v34 + 9) & 0x4000) == 0;
        *((_QWORD *)v34 + 177) = *v36;
        v44 = *((_OWORD *)v34 + 89);
        *((_DWORD *)v34 + 10) = v35 | 1;
        *((_OWORD *)v34 + 90) = v44;
        if ( !v32 )
        {
          v37 = *((_QWORD *)v34 + 64);
          if ( *(_QWORD *)(v37 + 240) || (*(_DWORD *)(v37 + 116) & 1) != 0 )
          {
            KeWaitForSingleObject((PVOID)(*(_QWORD *)(v37 + 304) + 64LL), UserRequest, 0, 0, 0LL);
            ++*(_DWORD *)(*((_QWORD *)v34 + 64) + 316LL);
            KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(*((_QWORD *)v34 + 64) + 304LL) + 64LL), 0);
          }
        }
      }
      v38 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v38 )
      {
        v39 = *v38;
        if ( *v38 )
        {
          *(_QWORD *)(v39 + 312) = (char *)this + 32;
          if ( (*((_DWORD *)*a2 + 9) & 0x4000) == 0 )
          {
            *(_BYTE *)(v39 + 328) = 1;
            *((_QWORD *)*a2 + 299) = 0LL;
            v40 = ghsemVisRgnUniqueness;
            if ( ghsemVisRgnUniqueness )
            {
              ExEnterPriorityRegionAndAcquireResourceShared(ghsemVisRgnUniqueness);
              v40 = ghsemVisRgnUniqueness;
            }
            if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
              Template_pz(v33, &LockAcquireShared, v7, v40);
            *(_DWORD *)(v39 + 336) = giVisRgnUniqueness;
            if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
              Template_pz(v33, &LockRelease, v7, ghsemVisRgnUniqueness);
            v33 = ghsemVisRgnUniqueness;
            if ( ghsemVisRgnUniqueness )
            {
              ExReleaseResourceAndLeaveCriticalRegion(ghsemVisRgnUniqueness);
              PsLeavePriorityRegion(v41);
            }
          }
        }
      }
    }
  }
  if ( *((_QWORD *)this + 1) && (*((_DWORD *)this + 6) & 0x1000) != 0 )
  {
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      Template_pz(v33, &LockRelease, v7, ghsemDCVisRgn);
    v33 = ghsemDCVisRgn;
    if ( ghsemDCVisRgn )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
      PsLeavePriorityRegion(v42);
    }
  }
  if ( v9 )
  {
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      Template_pz(v33, &LockRelease, v7, ghsemGreLock);
    if ( ghsemGreLock )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemGreLock);
      PsLeavePriorityRegion(v43);
    }
  }
  if ( (*((_DWORD *)this + 6) & 0x20000) != 0
    || (int)IsDEVLOCKOBJ_bPrepareTrgDcoSupported_0() >= 0 && (unsigned int)DEVLOCKOBJ_bPrepareTrgDcoWrap_0() )
  {
    return 1LL;
  }
  *((_DWORD *)this + 6) &= ~1u;
  return 0LL;
}
