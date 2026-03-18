/*
 * XREFs of CcGetVacbMiss @ 0x1400AEA80
 * Callers:
 *     CcGetVirtualAddress @ 0x1400A39E0 (CcGetVirtualAddress.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     CcIncrementVacbActiveCount @ 0x1400B0DD4 (CcIncrementVacbActiveCount.c)
 *     MmMapViewInSystemCache @ 0x1400B0E10 (MmMapViewInSystemCache.c)
 *     CcGetVacbFromFreeList @ 0x1400B1CB8 (CcGetVacbFromFreeList.c)
 *     SetVacb @ 0x1400B1DAC (SetVacb.c)
 *     CcGetVacbLargeOffset @ 0x1400B2174 (CcGetVacbLargeOffset.c)
 *     CcSetVacbInFreeList @ 0x1400B21E0 (CcSetVacbInFreeList.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1400E10E8 (CcReleaseBcbLockAndVacbLock.c)
 *     FsRtlIsNtstatusExpected @ 0x1400E9E10 (FsRtlIsNtstatusExpected.c)
 *     CcUnmapInactiveViews @ 0x140138B9C (CcUnmapInactiveViews.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     CcUnmapVacb @ 0x14047B6A0 (CcUnmapVacb.c)
 */

_QWORD *__fastcall CcGetVacbMiss(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned int v4; // edi
  unsigned __int8 v5; // r12
  int v6; // ebp
  KIRQL v9; // bl
  _QWORD *VacbFromFreeList; // rdi
  NTSTATUS v11; // r15d
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 VacbLargeOffset; // rbp
  signed __int64 v16; // rax
  signed __int64 v17; // rcx
  __int64 v18; // rtt
  KIRQL v20; // bl
  KIRQL v21; // bl
  KIRQL v22; // bl
  unsigned int v23; // [rsp+30h] [rbp-48h]
  __int64 v24; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int64 v25[7]; // [rsp+40h] [rbp-38h] BYREF

  HIDWORD(v24) = HIDWORD(a2);
  v4 = 0;
  v23 = 0;
  v5 = 0;
  v6 = a4;
  LODWORD(v24) = a2 - (a2 & 0x3FFFF);
  while ( 1 )
  {
    v9 = KeAcquireQueuedSpinLock(4uLL);
    if ( v5 )
      v23 = v4 | 2;
    VacbFromFreeList = (_QWORD *)CcGetVacbFromFreeList(v5);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)KeGetPcr()->NtTib.ArbitraryUserPointer + 8);
    __writecr8(v9);
    if ( VacbFromFreeList )
      break;
    while ( (unsigned int)CcUnmapInactiveViews(64LL, 0LL, 0LL) )
    {
      v21 = KeAcquireQueuedSpinLock(4uLL);
      VacbFromFreeList = (_QWORD *)CcGetVacbFromFreeList(v5);
      KeReleaseQueuedSpinLock(4uLL, v21);
      if ( VacbFromFreeList )
        goto LABEL_5;
    }
    if ( v6 == 1 )
      ++CcDbgNumberOfFailedHighPriorityMappingsDueToCcResources;
    v11 = -1073741670;
LABEL_48:
    if ( v5 || v6 != 1 )
      RtlRaiseStatus(v11);
    v4 = v23;
    v5 = 1;
  }
LABEL_5:
  v25[0] = *(_QWORD *)(a1 + 32) - v24;
  if ( v25[0] > 0x40000 )
    LODWORD(v25[0]) = 0x40000;
  v11 = MmMapViewInSystemCache(*(_QWORD *)(a1 + 168), VacbFromFreeList, &v24, v25);
  if ( a3 )
    ExAcquireFastMutex((PFAST_MUTEX)(a1 + 280));
  v12 = KeAbPreAcquire(a1 + 104, 0LL, 0LL);
  v13 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 104), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 104), v12, a1 + 104);
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  v14 = v24;
  if ( *(__int64 *)(a1 + 32) > 0x2000000 )
    VacbLargeOffset = CcGetVacbLargeOffset(a1, v24);
  else
    VacbLargeOffset = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)(unsigned int)v24 >> 18));
  if ( VacbLargeOffset )
    goto LABEL_18;
  if ( v11 < 0 )
    goto LABEL_42;
  if ( (unsigned __int8)SetVacb(a1, v14, VacbFromFreeList, 0LL) )
  {
LABEL_18:
    if ( v11 >= 0 )
    {
      if ( VacbLargeOffset )
      {
        CcIncrementVacbActiveCount(VacbLargeOffset);
        CcReleaseBcbLockAndVacbLock(a3, a1);
        CcUnmapVacb(VacbFromFreeList, a1, v23);
        v20 = KeAcquireQueuedSpinLock(4uLL);
        CcSetVacbInFreeList(VacbFromFreeList, v5);
        KeReleaseQueuedSpinLock(4uLL, v20);
        VacbFromFreeList = (_QWORD *)VacbLargeOffset;
      }
      else
      {
        if ( VacbFromFreeList[1] != -1LL )
          KeBugCheckEx(0x34u, 0x741uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        VacbFromFreeList[1] = a1;
        VacbFromFreeList[2] = v14;
        CcIncrementVacbActiveCount(VacbFromFreeList);
        if ( v14 >= *(_QWORD *)(a1 + 368) )
          *(_QWORD *)(a1 + 368) = v14 + 0x40000;
        _m_prefetchw((const void *)(a1 + 104));
        v16 = *(_QWORD *)(a1 + 104);
        if ( (v16 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
          v17 = v16 - 16;
        else
          v17 = 0LL;
        if ( (v16 & 2) != 0
          || (v18 = *(_QWORD *)(a1 + 104),
              v18 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 104), v17, v16)) )
        {
          ExfReleasePushLock((_QWORD *)(a1 + 104));
        }
        KeAbPostRelease(a1 + 104);
        if ( a3 )
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
      }
      goto LABEL_29;
    }
  }
  else
  {
    v11 = -1073741670;
    CcUnmapVacb(VacbFromFreeList, a1, v23);
  }
LABEL_42:
  CcReleaseBcbLockAndVacbLock(a3, a1);
  if ( v5 )
    ++CcDbgNumberOfFailedHighPriorityMappingsDueToMmResources;
  else
    *VacbFromFreeList = 0LL;
  v22 = KeAcquireQueuedSpinLock(4uLL);
  CcSetVacbInFreeList(VacbFromFreeList, v5);
  KeReleaseQueuedSpinLock(4uLL, v22);
  VacbFromFreeList = 0LL;
  if ( !FsRtlIsNtstatusExpected(v11) )
  {
    v11 = -1073741589;
    goto LABEL_47;
  }
LABEL_29:
  if ( v11 < 0 )
  {
LABEL_47:
    v6 = a4;
    goto LABEL_48;
  }
  return VacbFromFreeList;
}
