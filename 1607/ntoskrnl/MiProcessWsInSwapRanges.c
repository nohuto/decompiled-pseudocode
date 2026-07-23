/*
 * XREFs of MiProcessWsInSwapRanges @ 0x1400B4E74
 * Callers:
 *     MiProcessWsInSwapSupport @ 0x1400B4DB8 (MiProcessWsInSwapSupport.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiReleaseOutSwapReservations @ 0x1400B4EE4 (MiReleaseOutSwapReservations.c)
 *     MmPrefetchVirtualMemory @ 0x1404D760C (MmPrefetchVirtualMemory.c)
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
