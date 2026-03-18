/*
 * XREFs of ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C002B990
 * Callers:
 *     GreGetClipBox @ 0x1C0014B60 (GreGetClipBox.c)
 * Callees:
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap_0 @ 0x1C0001100 (DEVLOCKOBJ_bPrepareTrgDcoWrap_0.c)
 *     IsDEVLOCKOBJ_bPrepareTrgDcoSupported_0 @ 0x1C0001108 (IsDEVLOCKOBJ_bPrepareTrgDcoSupported_0.c)
 *     TrapAppContainerRenderingWrap_0 @ 0x1C00013A8 (TrapAppContainerRenderingWrap_0.c)
 *     IsTrapAppContainerRenderingSupported_0 @ 0x1C00013B0 (IsTrapAppContainerRenderingSupported_0.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C002CD50 (-bCompute@DC@@QEAAHXZ.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0037280 (GreReleaseSemaphoreInternal.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C006EA70 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     Template_pz @ 0x1C00C00D4 (Template_pz.c)
 */

__int64 __fastcall DEVLOCKOBJ::bLock(DEVLOCKOBJ *this, struct XDCOBJ *a2, int a3)
{
  __int64 v7; // r8
  DC *v8; // rdx
  int v9; // esi
  __int64 v10; // rcx
  PERESOURCE v11; // r9
  __int64 *ThreadWin32Thread; // rax
  PERESOURCE v13; // rdx
  __int64 v14; // rax
  struct _ERESOURCE *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // r8
  PERESOURCE v18; // r9
  _QWORD *v19; // r8
  __int64 v20; // rax
  __int64 v21; // rcx
  struct _ERESOURCE *v22; // r8
  PERESOURCE v23; // rcx
  struct _ERESOURCE *v24; // rdi
  __int64 v25; // r8
  __int64 *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 *v33; // rax
  __int64 v34; // rax
  PERESOURCE v35; // rcx
  bool v36; // zf
  PERESOURCE v37; // rcx
  _QWORD *v38; // rdi
  int v39; // edx
  _QWORD *v40; // rcx
  __int64 v41; // rcx
  __int64 *v42; // rax
  __int64 v43; // rdi
  PERESOURCE v44; // r9
  __int128 v45; // [rsp+30h] [rbp-38h]

  *((_DWORD *)this + 6) = 1;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 8) = **(_QWORD **)a2;
  if ( !a3
    && ((int)IsTrapAppContainerRenderingSupported_0() < 0 || (unsigned int)TrapAppContainerRenderingWrap_0() != 1) )
  {
    return 0LL;
  }
  if ( (int)IsDEVLOCKOBJ_bPrepareTrgDcoSupported_0() >= 0 )
    DEVLOCKOBJ_bPrepareTrgDcoWrap_0();
  if ( a3 == 1 )
    *((_DWORD *)this + 6) |= 0x20000u;
  v8 = *(DC **)a2;
  v9 = 0;
  v10 = *(unsigned int *)(*(_QWORD *)a2 + 36LL);
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
      Template_pz(v10, &LockAcquireShared, v7, v11, L"ghsemDynamicModeChange");
    *((_DWORD *)this + 6) |= 8u;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v8, v7);
    if ( !ThreadWin32Thread || (v14 = *ThreadWin32Thread) == 0 || !*(_DWORD *)(v14 + 104) )
    {
      v15 = ghsemGreLock;
      if ( !ExIsResourceAcquiredExclusiveLite(ghsemGreLock) && !ExIsResourceAcquiredSharedLite(v15) )
      {
        v18 = ghsemGreLock;
        if ( ghsemGreLock )
        {
          ExEnterPriorityRegionAndAcquireResourceShared(ghsemGreLock);
          v18 = ghsemGreLock;
        }
        if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
          Template_pz(v16, &LockAcquireShared, v17, v18, L"ghsemGreLock");
        v9 = 1;
      }
    }
    v19 = *(_QWORD **)a2;
    v20 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 8LL) & 0x4000) == 0 && (*((_DWORD *)v19 + 9) & 0x8000) == 0
      || (v13 = (PERESOURCE)*(unsigned int *)(v20 + 56), ((unsigned __int8)v13 & 1) == 0)
      || ((unsigned int)v13 & 0x1000000) != 0
      || *(_DWORD *)(v20 + 2636) != 5
      && ((unsigned int)v13 & 0x20000) == 0
      && ((v21 = *(_QWORD *)(v20 + 2600)) == 0 || (*(_DWORD *)(v21 + 160) & 0x800000) == 0)
      || (*(_DWORD *)(v20 + 2152) & 0x400) != 0
      || (*(_DWORD *)(v20 + 1848) & 0x8000000) != 0
      || ((unsigned int)v13 & 0x48000000) != 0
      || (*(_DWORD *)(*(_QWORD *)(v20 + 40) + 56LL) & 0x1000000) != 0 )
    {
      v22 = (struct _ERESOURCE *)v19[8];
      *(_QWORD *)this = v22;
      v23 = *(PERESOURCE *)(*(_QWORD *)a2 + 48LL);
      *((_QWORD *)this + 2) = v23;
      if ( v9 == 1 )
      {
        v13 = ghsemGreLock;
        if ( v22 == ghsemGreLock )
        {
          EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock");
          v23 = ghsemGreLock;
          if ( ghsemGreLock )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemGreLock);
            PsLeavePriorityRegion();
          }
          v9 = 0;
        }
      }
      v24 = *(struct _ERESOURCE **)this;
      if ( *(_QWORD *)this )
      {
        PsEnterPriorityRegion(v23, v13);
        ExEnterCriticalRegionAndAcquireResourceExclusive(v24);
      }
      v25 = 11LL;
      if ( *(PERESOURCE *)this == ghsemGreLock )
        v25 = 2LL;
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", *(_QWORD *)this, v25);
      v13 = (PERESOURCE)*((unsigned int *)this + 6);
      if ( ((unsigned __int16)v13 & 0x200) == 0 && (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x4000) != 0 )
      {
        LODWORD(v13) = (unsigned int)v13 | 0x200;
        *((_DWORD *)this + 6) = (_DWORD)v13;
      }
    }
    v26 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v13, v19);
    if ( !v26 || (v28 = *v26) == 0 || !*(_DWORD *)(v28 + 104) )
    {
      *((_DWORD *)this + 6) |= 0x1000u;
      v29 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v27, v7);
      if ( v29 )
      {
        v32 = *v29;
        if ( v32 )
        {
          *(_QWORD *)(v32 + 320) = 0LL;
          *(_QWORD *)(v32 + 312) = 0LL;
        }
      }
      v33 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v30, v31);
      if ( v33 )
      {
        v34 = *v33;
        if ( v34 )
          ++*(_DWORD *)(v34 + 104);
      }
      v35 = ghsemDCVisRgn;
      if ( ghsemDCVisRgn )
        ExEnterPriorityRegionAndAcquireResourceShared(ghsemDCVisRgn);
      if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        Template_pz(v35, &LockAcquireShared, v7, ghsemDCVisRgn, L"ghsemDCVisRgn");
    }
    v8 = *(DC **)a2;
    LODWORD(v10) = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
    if ( (v10 & 0x5000) == 0x1000 )
    {
      v36 = (*((_DWORD *)this + 6) & 0x1000) == 0;
LABEL_73:
      if ( !v36 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn");
        GreReleaseSemaphoreInternal(ghsemDCVisRgn);
      }
      *((_DWORD *)this + 6) &= ~1u;
      if ( v9 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock");
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
    v36 = *((_QWORD *)this + 1) == 0LL;
    goto LABEL_73;
  }
  v37 = (PERESOURCE)*((unsigned int *)this + 6);
  if ( ((unsigned int)v37 & 0x20000) == 0 )
  {
    v38 = *(_QWORD **)a2;
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) != 0 && ((unsigned __int16)v37 & 0x1000) != 0 )
    {
      if ( !*((_QWORD *)this + 6) )
      {
        v39 = *((_DWORD *)v38 + 10);
        v40 = v38 + 177;
        if ( (v39 & 1) == 0 )
          v40 = v38 + 176;
        v8 = (DC *)(v39 | 1u);
        v36 = (*((_DWORD *)v38 + 9) & 0x4000) == 0;
        v38[177] = *v40;
        v45 = *((_OWORD *)v38 + 89);
        *((_DWORD *)v38 + 10) = (_DWORD)v8;
        *((_OWORD *)v38 + 90) = v45;
        if ( !v36 )
        {
          v41 = v38[64];
          if ( *(_QWORD *)(v41 + 240) || (*(_DWORD *)(v41 + 116) & 1) != 0 )
          {
            KeWaitForSingleObject((PVOID)(*(_QWORD *)(v41 + 304) + 64LL), UserRequest, 0, 0, 0LL);
            ++*(_DWORD *)(v38[64] + 316LL);
            KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(v38[64] + 304LL) + 64LL), 0);
          }
        }
      }
      v42 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v8, v7);
      if ( v42 )
      {
        v43 = *v42;
        if ( *v42 )
        {
          *(_QWORD *)(v43 + 312) = (char *)this + 32;
          if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x4000) == 0 )
          {
            *(_BYTE *)(v43 + 328) = 1;
            *(_QWORD *)(*(_QWORD *)a2 + 2368LL) = 0LL;
            v44 = ghsemVisRgnUniqueness;
            if ( ghsemVisRgnUniqueness )
            {
              ExEnterPriorityRegionAndAcquireResourceShared(ghsemVisRgnUniqueness);
              v44 = ghsemVisRgnUniqueness;
            }
            if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
              Template_pz(v37, &LockAcquireShared, v7, v44, L"ghsemVisRgnUniqueness");
            *(_DWORD *)(v43 + 336) = giVisRgnUniqueness;
            if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
              Template_pz(v37, &LockRelease, v7, ghsemVisRgnUniqueness, L"ghsemVisRgnUniqueness");
            v37 = ghsemVisRgnUniqueness;
            if ( ghsemVisRgnUniqueness )
            {
              ExReleaseResourceAndLeaveCriticalRegion(ghsemVisRgnUniqueness);
              PsLeavePriorityRegion();
            }
          }
        }
      }
    }
  }
  if ( *((_QWORD *)this + 1) && (*((_DWORD *)this + 6) & 0x1000) != 0 )
  {
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      Template_pz(v37, &LockRelease, v7, ghsemDCVisRgn, L"ghsemDCVisRgn");
    v37 = ghsemDCVisRgn;
    if ( ghsemDCVisRgn )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
      PsLeavePriorityRegion();
    }
  }
  if ( v9 )
  {
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      Template_pz(v37, &LockRelease, v7, ghsemGreLock, L"ghsemGreLock");
    if ( ghsemGreLock )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemGreLock);
      PsLeavePriorityRegion();
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
