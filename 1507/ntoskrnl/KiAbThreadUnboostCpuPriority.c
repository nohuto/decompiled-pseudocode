/*
 * XREFs of KiAbThreadUnboostCpuPriority @ 0x14011B984
 * Callers:
 *     MiSectionCreated @ 0x14002E3D0 (MiSectionCreated.c)
 *     ExReleaseCacheAwarePushLockSharedEx @ 0x14004EAF0 (ExReleaseCacheAwarePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KeAbEntryFree @ 0x1400F4C90 (KeAbEntryFree.c)
 * Callees:
 *     KiProcessDeferredReadyList @ 0x14009BE20 (KiProcessDeferredReadyList.c)
 *     KiClearPriorityFloor @ 0x14011B9F0 (KiClearPriorityFloor.c)
 */

void __fastcall KiAbThreadUnboostCpuPriority(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  unsigned int v3; // ebx
  unsigned __int8 CurrentIrql; // di
  unsigned int v6; // eax
  _QWORD *v7; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(unsigned __int16 *)(a2 + 88) >> 1;
  v7 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  while ( _BitScanForward(&v6, v3) )
  {
    KiClearPriorityFloor(BugCheckParameter1);
    v3 &= v3 - 1;
  }
  KiProcessDeferredReadyList((__int64)KeGetCurrentPrcb(), &v7, CurrentIrql);
}
