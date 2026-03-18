/*
 * XREFs of KiAbThreadUnboostCpuPriority @ 0x140031C60
 * Callers:
 *     KeAbEntryFree @ 0x140033200 (KeAbEntryFree.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ExReleaseCacheAwarePushLockSharedEx @ 0x140042F70 (ExReleaseCacheAwarePushLockSharedEx.c)
 * Callees:
 *     KiClearPriorityFloor @ 0x140031CCC (KiClearPriorityFloor.c)
 *     KiProcessDeferredReadyList @ 0x14007DC70 (KiProcessDeferredReadyList.c)
 */

__int64 __fastcall KiAbThreadUnboostCpuPriority(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  unsigned __int8 CurrentIrql; // di
  unsigned int v7; // eax
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v4 = *(unsigned __int16 *)(a2 + 88) >> 1;
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
