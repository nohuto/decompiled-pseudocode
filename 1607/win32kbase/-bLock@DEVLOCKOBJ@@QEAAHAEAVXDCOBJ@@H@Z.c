/*
 * XREFs of ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C002F4A0
 * Callers:
 *     GreGetClipBox @ 0x1C0045240 (GreGetClipBox.c)
 * Callees:
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap_0 @ 0x1C0001100 (DEVLOCKOBJ_bPrepareTrgDcoWrap_0.c)
 *     IsDEVLOCKOBJ_bPrepareTrgDcoSupported_0 @ 0x1C0001108 (IsDEVLOCKOBJ_bPrepareTrgDcoSupported_0.c)
 *     TrapAppContainerRenderingWrap_0 @ 0x1C0001418 (TrapAppContainerRenderingWrap_0.c)
 *     IsTrapAppContainerRenderingSupported_0 @ 0x1C0001420 (IsTrapAppContainerRenderingSupported_0.c)
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0026BF0 (GreReleaseSemaphoreInternal.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C002BDE0 (-bCompute@DC@@QEAAHXZ.c)
 *     ?vSetRendering@DC@@QEAAXXZ @ 0x1C002C870 (-vSetRendering@DC@@QEAAXXZ.c)
 *     ?bAllowShareAccess@PDEVOBJ@@QEAAHXZ @ 0x1C0031AB0 (-bAllowShareAccess@PDEVOBJ@@QEAAHXZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00740D0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C00740F0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     Template_pz @ 0x1C00CC434 (Template_pz.c)
 */

__int64 __fastcall DEVLOCKOBJ::bLock(struct _POINTL *this, struct _POINTL **a2, int a3)
{
  struct _POINTL *v6; // rdx
  int v7; // edi
  PERESOURCE y; // rcx
  LONG v9; // edx
  __int64 *v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v15; // rax
  struct _ERESOURCE *v16; // rsi
  __int64 v17; // rcx
  struct _POINTL *v18; // rsi
  __int64 *v19; // rax
  __int64 v20; // rax
  __int64 *v21; // rax
  __int64 v22; // rax
  __int64 *v23; // rax
  __int64 v24; // rax
  PERESOURCE v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r8
  LONG x; // edx
  struct _POINTL v30; // [rsp+60h] [rbp+8h] BYREF

  this[3].x = 1;
  *this = 0LL;
  this[1] = 0LL;
  this[2] = 0LL;
  this[11] = 0LL;
  this[10] = 0LL;
  this[12] = **a2;
  if ( !a3
    && ((int)IsTrapAppContainerRenderingSupported_0() < 0 || (unsigned int)TrapAppContainerRenderingWrap_0() != 1) )
  {
    return 0LL;
  }
  if ( (int)IsDEVLOCKOBJ_bPrepareTrgDcoSupported_0() >= 0 )
    DEVLOCKOBJ_bPrepareTrgDcoWrap_0();
  if ( a3 == 1 )
    this[3].x |= 0x20000u;
  v6 = *a2;
  v7 = 0;
  y = (PERESOURCE)(unsigned int)(*a2)[4].y;
  if ( ((unsigned __int16)y & 0x200) != 0 )
  {
    this[1] = (struct _POINTL)ghsemDynamicModeChange;
    if ( ghsemDynamicModeChange )
      ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      Template_pz(y, &LockAcquireShared);
    this[3].x |= 8u;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( !ThreadWin32Thread || (v15 = *ThreadWin32Thread) == 0 || !*(_DWORD *)(v15 + 104) )
    {
      v16 = ghsemGreLock;
      if ( !ExIsResourceAcquiredExclusiveLite(ghsemGreLock) && !ExIsResourceAcquiredSharedLite(v16) )
      {
        if ( ghsemGreLock )
          ExEnterPriorityRegionAndAcquireResourceShared(ghsemGreLock);
        if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
          Template_pz(v17, &LockAcquireShared);
        v7 = 1;
      }
    }
    v18 = *a2;
    v30 = (*a2)[6];
    if ( (*(_DWORD *)(*(_QWORD *)&v18[10] + 8LL) & 0x4000) == 0 && (v18[4].y & 0x8000) == 0
      || !(unsigned int)PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v30) )
    {
      *this = v18[8];
      this[2] = (*a2)[6];
      if ( v7 == 1 && (PERESOURCE)*this == ghsemGreLock )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock");
        GreReleaseSemaphoreInternal(ghsemGreLock);
        v7 = 0;
      }
      EngAcquireSemaphore(*(HSEMAPHORE *)this);
      v28 = 11LL;
      if ( (PERESOURCE)*this == ghsemGreLock )
        v28 = 2LL;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))EtwTraceGreLockAcquireSemaphoreExclusive)(L"hsemTrg", *this, v28);
      x = this[3].x;
      if ( (x & 0x200) == 0 && ((*a2)[4].y & 0x4000) != 0 )
        this[3].x = x | 0x200;
    }
    v19 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( !v19 || (v20 = *v19) == 0 || !*(_DWORD *)(v20 + 104) )
    {
      this[3].x |= 0x1000u;
      v21 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v21 )
      {
        v22 = *v21;
        if ( v22 )
        {
          *(_QWORD *)(v22 + 320) = 0LL;
          *(_QWORD *)(v22 + 312) = 0LL;
        }
      }
      v23 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v23 )
      {
        v24 = *v23;
        if ( v24 )
          ++*(_DWORD *)(v24 + 104);
      }
      v25 = ghsemDCVisRgn;
      if ( ghsemDCVisRgn )
        ExEnterPriorityRegionAndAcquireResourceShared(ghsemDCVisRgn);
      if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        Template_pz(v25, &LockAcquireShared);
    }
    v6 = *a2;
    y = (PERESOURCE)(unsigned int)(*a2)[4].y;
    if ( ((*a2)[4].y & 0x5000) == 0x1000 )
    {
      if ( (this[3].x & 0x1000) == 0 )
        goto LABEL_94;
      goto LABEL_93;
    }
  }
  if ( (this[3].x & 0x1000) != 0 && ((unsigned int)y & 0x80000) != 0 )
  {
    if ( !*(_QWORD *)&this[1] )
      goto LABEL_94;
    goto LABEL_93;
  }
  if ( ((this[3].x & 0x1000) != 0 || !*(_QWORD *)&this[1])
    && ((unsigned __int8)y & 0x10) != 0
    && !(unsigned int)DC::bCompute(v6) )
  {
    if ( !*(_QWORD *)&this[1] )
    {
LABEL_94:
      this[3].x &= ~1u;
      if ( v7 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock");
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
      return 0LL;
    }
LABEL_93:
    EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn");
    GreReleaseSemaphoreInternal(ghsemDCVisRgn);
    goto LABEL_94;
  }
  v9 = this[3].x;
  if ( (v9 & 0x20000) == 0 )
  {
    y = (PERESOURCE)*a2;
    if ( ((*a2)[4].y & 0x200) != 0 && (v9 & 0x1000) != 0 )
    {
      if ( !*(_QWORD *)&this[10] )
        DC::vSetRendering((DC *)y);
      v11 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v11 )
      {
        v12 = *v11;
        if ( *v11 )
        {
          *(_QWORD *)(v12 + 312) = this + 4;
          if ( ((*a2)[4].y & 0x4000) == 0 )
          {
            *(_BYTE *)(v12 + 328) = 1;
            (*a2)[299] = 0LL;
            if ( ghsemVisRgnUniqueness )
              ExEnterPriorityRegionAndAcquireResourceShared(ghsemVisRgnUniqueness);
            EtwTraceGreLockAcquireSemaphoreShared(L"ghsemVisRgnUniqueness");
            *(_DWORD *)(v12 + 336) = giVisRgnUniqueness;
            EtwTraceGreLockReleaseSemaphore(L"ghsemVisRgnUniqueness");
            y = ghsemVisRgnUniqueness;
            if ( ghsemVisRgnUniqueness )
            {
              ExReleaseResourceAndLeaveCriticalRegion(ghsemVisRgnUniqueness);
              PsLeavePriorityRegion(v13);
            }
          }
        }
      }
    }
  }
  if ( *(_QWORD *)&this[1] && (this[3].x & 0x1000) != 0 )
  {
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      Template_pz(y, &LockRelease);
    y = ghsemDCVisRgn;
    if ( ghsemDCVisRgn )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
      PsLeavePriorityRegion(v26);
    }
  }
  if ( v7 )
  {
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      Template_pz(y, &LockRelease);
    if ( ghsemGreLock )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemGreLock);
      PsLeavePriorityRegion(v27);
    }
  }
  if ( (this[3].x & 0x20000) != 0
    || (int)IsDEVLOCKOBJ_bPrepareTrgDcoSupported_0() >= 0 && (unsigned int)DEVLOCKOBJ_bPrepareTrgDcoWrap_0() )
  {
    return 1LL;
  }
  this[3].x &= ~1u;
  return 0LL;
}
