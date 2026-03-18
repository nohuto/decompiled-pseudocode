/*
 * XREFs of KiAbThreadUnboostCpuPriority @ 0x1400A13E8
 * Callers:
 *     ExReleaseCacheAwarePushLockSharedEx @ 0x1400139A0 (ExReleaseCacheAwarePushLockSharedEx.c)
 *     KeAbEntryFree @ 0x14002C430 (KeAbEntryFree.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 * Callees:
 *     KiClearPriorityFloor @ 0x1400A1458 (KiClearPriorityFloor.c)
 *     KiProcessDeferredReadyList @ 0x1400D3450 (KiProcessDeferredReadyList.c)
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
