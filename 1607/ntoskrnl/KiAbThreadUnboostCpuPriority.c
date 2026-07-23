/*
 * XREFs of KiAbThreadUnboostCpuPriority @ 0x14009FD10
 * Callers:
 *     ExReleaseCacheAwarePushLockSharedEx @ 0x140013520 (ExReleaseCacheAwarePushLockSharedEx.c)
 *     KeAbEntryFree @ 0x14002BFB0 (KeAbEntryFree.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 * Callees:
 *     KiClearPriorityFloor @ 0x14009FD80 (KiClearPriorityFloor.c)
 *     KiProcessDeferredReadyList @ 0x1400D12F0 (KiProcessDeferredReadyList.c)
 */

__int64 __fastcall KiAbThreadUnboostCpuPriority(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  unsigned __int8 CurrentIrql; // di
  unsigned int v7; // eax
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v4 = *(_WORD *)(a2 + 88) & 0x7FFF;
  v9 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  while ( _BitScanForward(&v7, v4) )
  {
    KiClearPriorityFloor(BugCheckParameter1);
    v4 &= v4 - 1;
  }
  LOBYTE(a3) = CurrentIrql;
  return KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v9, a3);
}
