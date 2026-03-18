/*
 * XREFs of MiProcessWsInSwapRanges @ 0x1400B704C
 * Callers:
 *     MiProcessWsInSwapSupport @ 0x1400B6F90 (MiProcessWsInSwapSupport.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140013B70 (KiLeaveGuardedRegionUnsafe.c)
 *     MiReleaseOutSwapReservations @ 0x1400B70BC (MiReleaseOutSwapReservations.c)
 *     MmPrefetchVirtualMemory @ 0x1404F4680 (MmPrefetchVirtualMemory.c)
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
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    result = a3;
  }
  if ( (result & 1) == 0 )
    return MiReleaseOutSwapReservations(a1, a2);
  return result;
}
