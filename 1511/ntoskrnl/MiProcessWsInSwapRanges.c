/*
 * XREFs of MiProcessWsInSwapRanges @ 0x140001DD4
 * Callers:
 *     MiProcessWsInSwapSupport @ 0x140001D18 (MiProcessWsInSwapSupport.c)
 * Callees:
 *     MiReleaseOutSwapReservations @ 0x140001E44 (MiReleaseOutSwapReservations.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmPrefetchVirtualMemory @ 0x1404B70E8 (MmPrefetchVirtualMemory.c)
 */

__int64 __fastcall MiProcessWsInSwapRanges(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax

  if ( (a3 & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
  }
  MmPrefetchVirtualMemory((HANDLE)-(__int64)(*a1 < 0xFFFF800000000000uLL));
  result = a3;
  if ( (a3 & 2) != 0 )
  {
    KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
    result = a3;
  }
  if ( (result & 1) == 0 )
    return MiReleaseOutSwapReservations(a1, a2);
  return result;
}
