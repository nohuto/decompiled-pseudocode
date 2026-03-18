/*
 * XREFs of CcGetVacbMiss @ 0x14003F1B0
 * Callers:
 *     CcGetVirtualAddress @ 0x1400501E0 (CcGetVirtualAddress.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     CcGetVacbFromFreeList @ 0x14003D58C (CcGetVacbFromFreeList.c)
 *     MmMapViewInSystemCache @ 0x14003D650 (MmMapViewInSystemCache.c)
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     SetVacb @ 0x140078644 (SetVacb.c)
 *     CcGetVacbLargeOffset @ 0x1400855D0 (CcGetVacbLargeOffset.c)
 *     CcSetVacbInFreeList @ 0x140086BB4 (CcSetVacbInFreeList.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     FsRtlIsNtstatusExpected @ 0x140128CBC (FsRtlIsNtstatusExpected.c)
 *     CcUnmapInactiveViews @ 0x140167FCC (CcUnmapInactiveViews.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     CcUnmapVacb @ 0x1404B2D44 (CcUnmapVacb.c)
 */

_QWORD *__fastcall CcGetVacbMiss(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned __int8 v4; // r12
  unsigned int v5; // ebx
  int v6; // r14d
  KIRQL v9; // bp
  _QWORD *VacbFromFreeList; // rdi
  volatile signed __int64 **v11; // rbx
  __int64 v12; // rax
  NTSTATUS v13; // r15d
  signed __int64 *v14; // r14
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rbx
  __int64 VacbLargeOffset; // rbp
  signed __int64 v19; // rax
  signed __int64 v20; // rcx
  signed __int64 v21; // rtt
  __int64 v23; // rbx
  unsigned __int8 CurrentIrql; // r14
  unsigned __int8 v25; // bp
  unsigned __int32 v26; // eax
  signed __int64 v27; // rax
  signed __int64 v28; // rcx
  signed __int64 v29; // rtt
  KIRQL v30; // bl
  unsigned __int8 v31; // r14
  unsigned __int32 v32; // eax
  KIRQL v33; // bl
  signed __int64 v34; // rax
  signed __int64 v35; // rcx
  signed __int64 v36; // rtt
  unsigned __int8 v37; // bp
  unsigned __int32 v38; // eax
  KIRQL v39; // bl
  unsigned int v40; // [rsp+30h] [rbp-48h]
  __int64 v41; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int64 v42; // [rsp+40h] [rbp-38h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  HIDWORD(v41) = HIDWORD(a2);
  v4 = 0;
  v5 = 0;
  v40 = 0;
  LODWORD(v41) = a2 - (a2 & 0x3FFFF);
  v6 = a4;
  while ( 1 )
  {
    v9 = KeAcquireQueuedSpinLock(4uLL);
    if ( v4 )
      v40 = v5 | 2;
    VacbFromFreeList = CcGetVacbFromFreeList(v4);
    v11 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 64);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(v11, retaddr);
    }
    else
    {
      _m_prefetchw(v11);
      v12 = (__int64)*v11;
      if ( !*v11 )
      {
        if ( v11 == (volatile signed __int64 **)_InterlockedCompareExchange64(v11[1], 0LL, (signed __int64)v11) )
          goto LABEL_7;
        v12 = KxWaitForLockChainValid(v11);
      }
      *v11 = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v12 + 8), 1uLL);
    }
LABEL_7:
    __writecr8(v9);
    if ( VacbFromFreeList )
      break;
    while ( (unsigned int)CcUnmapInactiveViews(64LL, 0LL, 0LL) )
    {
      v33 = KeAcquireQueuedSpinLock(4uLL);
      VacbFromFreeList = CcGetVacbFromFreeList(v4);
      KeReleaseQueuedSpinLock(4uLL, v33);
      if ( VacbFromFreeList )
        goto LABEL_8;
    }
    if ( v6 == 1 )
      ++CcDbgNumberOfFailedHighPriorityMappingsDueToCcResources;
    v13 = -1073741670;
LABEL_80:
    if ( v4 || v6 != 1 )
      RtlRaiseStatus(v13);
    v5 = v40;
    v4 = 1;
  }
LABEL_8:
  v42 = *(_QWORD *)(a1 + 32) - v41;
  if ( v42 > 0x40000 )
    LODWORD(v42) = 0x40000;
  v13 = MmMapViewInSystemCache(*(_QWORD *)(a1 + 168), VacbFromFreeList, &v41);
  if ( a3 )
  {
    v23 = KeAbPreAcquire(a1 + 280);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)(a1 + 280), 0) )
      ExpAcquireFastMutexContended(a1 + 280);
    if ( v23 )
      *(_BYTE *)(v23 + 26) |= 1u;
    *(_QWORD *)(a1 + 288) = KeGetCurrentThread();
    *(_DWORD *)(a1 + 328) = CurrentIrql;
  }
  v14 = (signed __int64 *)(a1 + 104);
  v15 = KeAbPreAcquire(a1 + 104);
  v16 = v15;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 104), 0LL) )
    ExfAcquirePushLockExclusiveEx(a1 + 104, v15, a1 + 104);
  if ( v16 )
    *(_BYTE *)(v16 + 26) |= 1u;
  v17 = v41;
  if ( *(__int64 *)(a1 + 32) > 0x2000000 )
    VacbLargeOffset = CcGetVacbLargeOffset(a1, v41);
  else
    VacbLargeOffset = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)(unsigned int)v41 >> 18));
  if ( VacbLargeOffset )
  {
LABEL_20:
    if ( v13 < 0 )
      goto LABEL_64;
    if ( VacbLargeOffset )
    {
      if ( !(unsigned __int16)_InterlockedIncrement((volatile signed __int32 *)(VacbLargeOffset + 16)) )
        KeBugCheckEx(0x34u, 0x96AuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      _m_prefetchw(v14);
      v27 = *v14;
      if ( (*v14 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v28 = v27 - 16;
      else
        v28 = 0LL;
      if ( (v27 & 2) != 0 || (v29 = *v14, v29 != _InterlockedCompareExchange64(v14, v28, v27)) )
        ExfReleasePushLock(a1 + 104);
      KeAbPostRelease(a1 + 104);
      if ( a3 )
      {
        v31 = *(_BYTE *)(a1 + 328);
        *(_QWORD *)(a1 + 288) = 0LL;
        v32 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 280), 1, 0);
        if ( v32 )
          ExpReleaseFastMutexContended(a1 + 280, v32);
        __writecr8(v31);
        KeAbPostRelease(a1 + 280);
      }
      CcUnmapVacb(VacbFromFreeList, a1, v40);
      v30 = KeAcquireQueuedSpinLock(4uLL);
      CcSetVacbInFreeList(VacbFromFreeList, v4);
      KeReleaseQueuedSpinLock(4uLL, v30);
      VacbFromFreeList = (_QWORD *)VacbLargeOffset;
    }
    else
    {
      if ( VacbFromFreeList[1] != -1LL )
        KeBugCheckEx(0x34u, 0x741uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      VacbFromFreeList[1] = a1;
      VacbFromFreeList[2] = v17;
      if ( !(unsigned __int16)_InterlockedIncrement((volatile signed __int32 *)VacbFromFreeList + 4) )
        KeBugCheckEx(0x34u, 0x96AuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      if ( v41 >= *(_QWORD *)(a1 + 368) )
        *(_QWORD *)(a1 + 368) = v41 + 0x40000;
      _m_prefetchw(v14);
      v19 = *v14;
      if ( (*v14 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v20 = v19 - 16;
      else
        v20 = 0LL;
      if ( (v19 & 2) != 0 || (v21 = *v14, v21 != _InterlockedCompareExchange64(v14, v20, v19)) )
        ExfReleasePushLock(a1 + 104);
      KeAbPostRelease(a1 + 104);
      if ( a3 )
      {
        v25 = *(_BYTE *)(a1 + 328);
        *(_QWORD *)(a1 + 288) = 0LL;
        v26 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 280), 1, 0);
        if ( v26 )
          ExpReleaseFastMutexContended(a1 + 280, v26);
        __writecr8(v25);
        KeAbPostRelease(a1 + 280);
      }
    }
  }
  else
  {
    if ( v13 >= 0 )
    {
      if ( (unsigned __int8)SetVacb(a1, v17, VacbFromFreeList, 0LL) )
        goto LABEL_20;
      v13 = -1073741670;
      CcUnmapVacb(VacbFromFreeList, a1, v40);
    }
LABEL_64:
    _m_prefetchw(v14);
    v34 = *v14;
    if ( (*v14 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v35 = 0LL;
    else
      v35 = v34 - 16;
    if ( (v34 & 2) != 0 || (v36 = *v14, v36 != _InterlockedCompareExchange64(v14, v35, v34)) )
      ExfReleasePushLock(a1 + 104);
    KeAbPostRelease(a1 + 104);
    if ( a3 )
    {
      v37 = *(_BYTE *)(a1 + 328);
      *(_QWORD *)(a1 + 288) = 0LL;
      v38 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 280), 1, 0);
      if ( v38 )
        ExpReleaseFastMutexContended(a1 + 280, v38);
      __writecr8(v37);
      KeAbPostRelease(a1 + 280);
    }
    if ( v4 )
      ++CcDbgNumberOfFailedHighPriorityMappingsDueToMmResources;
    else
      *VacbFromFreeList = 0LL;
    v39 = KeAcquireQueuedSpinLock(4uLL);
    CcSetVacbInFreeList(VacbFromFreeList, v4);
    KeReleaseQueuedSpinLock(4uLL, v39);
    VacbFromFreeList = 0LL;
    if ( !FsRtlIsNtstatusExpected(v13) )
    {
      v13 = -1073741589;
      goto LABEL_79;
    }
  }
  if ( v13 < 0 )
  {
LABEL_79:
    v6 = a4;
    goto LABEL_80;
  }
  return VacbFromFreeList;
}
