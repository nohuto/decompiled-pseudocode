/*
 * XREFs of CcGetVacbMiss @ 0x14001872C
 * Callers:
 *     CcGetVirtualAddress @ 0x1400333C0 (CcGetVirtualAddress.c)
 * Callees:
 *     CcGetVacbLargeOffset @ 0x140018248 (CcGetVacbLargeOffset.c)
 *     CcSetVacbInFreeList @ 0x1400182B4 (CcSetVacbInFreeList.c)
 *     SetVacb @ 0x1400185FC (SetVacb.c)
 *     CcGetVacbFromFreeList @ 0x14001866C (CcGetVacbFromFreeList.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x140018910 (CcReleaseBcbLockAndVacbLock.c)
 *     CcIncrementVacbActiveCount @ 0x140018984 (CcIncrementVacbActiveCount.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x1400189B4 (CcAcquireBcbLockAndVacbLock.c)
 *     MmMapViewInSystemCache @ 0x140018A20 (MmMapViewInSystemCache.c)
 *     FsRtlIsNtstatusExpected @ 0x1400AB6F8 (FsRtlIsNtstatusExpected.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E8D30 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E8DA0 (KeReleaseQueuedSpinLock.c)
 *     RtlRaiseStatus @ 0x1400F6738 (RtlRaiseStatus.c)
 *     CcUnmapInactiveViews @ 0x14014199C (CcUnmapInactiveViews.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     CcUnmapVacb @ 0x14042B660 (CcUnmapVacb.c)
 */

_QWORD *__fastcall CcGetVacbMiss(_QWORD *a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned int v4; // r13d
  char v5; // r15
  int v6; // r12d
  __int64 v8; // rbx
  KIRQL v9; // di
  _QWORD *VacbFromFreeList; // rsi
  NTSTATUS v11; // r14d
  __int64 VacbLargeOffset; // r12
  KIRQL v14; // di
  KIRQL v15; // di
  KIRQL v16; // di
  __int64 v17; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v18[8]; // [rsp+38h] [rbp-40h] BYREF

  HIDWORD(v17) = HIDWORD(a2);
  v4 = 0;
  v5 = 0;
  v6 = a4;
  LODWORD(v17) = a2 - (a2 & 0x3FFFF);
  v8 = v17;
  while ( 1 )
  {
    v9 = KeAcquireQueuedSpinLock(4uLL);
    if ( v5 )
      v4 |= 2u;
    VacbFromFreeList = CcGetVacbFromFreeList(v5);
    KeReleaseQueuedSpinLock(4uLL, v9);
    if ( VacbFromFreeList )
      break;
    do
    {
      if ( !(unsigned int)CcUnmapInactiveViews(64LL, 0LL, 0LL) )
        break;
      v15 = KeAcquireQueuedSpinLock(4uLL);
      VacbFromFreeList = CcGetVacbFromFreeList(v5);
      KeReleaseQueuedSpinLock(4uLL, v15);
    }
    while ( !VacbFromFreeList );
    if ( VacbFromFreeList )
      break;
    if ( v6 == 1 )
      ++CcDbgNumberOfFailedHighPriorityMappingsDueToCcResources;
    v11 = -1073741670;
LABEL_35:
    if ( v5 || v6 != 1 )
      RtlRaiseStatus(v11);
    v5 = 1;
  }
  v18[0] = a1[4] - v8;
  if ( v18[0] > 0x40000 )
    LODWORD(v18[0]) = 0x40000;
  v11 = MmMapViewInSystemCache(a1[21], VacbFromFreeList, &v17, v18);
  CcAcquireBcbLockAndVacbLock(a3, a1);
  v8 = v17;
  if ( (__int64)a1[4] > 0x2000000 )
    VacbLargeOffset = CcGetVacbLargeOffset((__int64)a1, v17);
  else
    VacbLargeOffset = *(_QWORD *)(a1[11] + 8 * ((unsigned __int64)(unsigned int)v17 >> 18));
  if ( !VacbLargeOffset )
  {
    if ( v11 < 0 )
      goto LABEL_29;
    if ( !SetVacb((__int64)a1, v8, (unsigned __int64)VacbFromFreeList) )
    {
      v11 = -1073741670;
      CcUnmapVacb(VacbFromFreeList, a1, v4);
    }
  }
  if ( v11 >= 0 )
  {
    if ( VacbLargeOffset )
    {
      CcIncrementVacbActiveCount(VacbLargeOffset);
      CcReleaseBcbLockAndVacbLock(a3, a1);
      CcUnmapVacb(VacbFromFreeList, a1, v4);
      v14 = KeAcquireQueuedSpinLock(4uLL);
      CcSetVacbInFreeList(VacbFromFreeList, v5);
      KeReleaseQueuedSpinLock(4uLL, v14);
      VacbFromFreeList = (_QWORD *)VacbLargeOffset;
    }
    else
    {
      if ( VacbFromFreeList[1] != -1LL )
        KeBugCheckEx(0x34u, 0x73FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      VacbFromFreeList[1] = a1;
      VacbFromFreeList[2] = v8;
      CcIncrementVacbActiveCount(VacbFromFreeList);
      if ( v8 >= a1[46] )
        a1[46] = v8 + 0x40000;
      CcReleaseBcbLockAndVacbLock(a3, a1);
    }
    goto LABEL_19;
  }
LABEL_29:
  CcReleaseBcbLockAndVacbLock(a3, a1);
  if ( v5 )
    ++CcDbgNumberOfFailedHighPriorityMappingsDueToMmResources;
  else
    *VacbFromFreeList = 0LL;
  v16 = KeAcquireQueuedSpinLock(4uLL);
  CcSetVacbInFreeList(VacbFromFreeList, v5);
  KeReleaseQueuedSpinLock(4uLL, v16);
  VacbFromFreeList = 0LL;
  if ( !FsRtlIsNtstatusExpected(v11) )
    v11 = -1073741589;
LABEL_19:
  if ( v11 < 0 )
  {
    v6 = a4;
    goto LABEL_35;
  }
  return VacbFromFreeList;
}
