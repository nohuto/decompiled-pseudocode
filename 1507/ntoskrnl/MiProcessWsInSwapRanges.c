/*
 * XREFs of MiProcessWsInSwapRanges @ 0x1400DE9DC
 * Callers:
 *     MiProcessWsInSwapSupport @ 0x1400DE920 (MiProcessWsInSwapSupport.c)
 * Callees:
 *     MiReleaseOutSwapReservations @ 0x1400DEA4C (MiReleaseOutSwapReservations.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     MmPrefetchVirtualMemory @ 0x1404FB458 (MmPrefetchVirtualMemory.c)
 */

__int64 __fastcall MiProcessWsInSwapRanges(_QWORD *a1, __int64 a2, char a3)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v7; // rcx

  if ( (a3 & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
  }
  result = MmPrefetchVirtualMemory((HANDLE)-(__int64)(*a1 < 0xFFFF800000000000uLL));
  if ( (a3 & 2) != 0 )
  {
    v7 = KeGetCurrentThread();
    result = (unsigned int)++v7->SpecialApcDisable;
    if ( !(_WORD)result )
    {
      result = (__int64)&v7->152;
      if ( *(_QWORD *)result != result )
        result = KiCheckForKernelApcDelivery(v7);
    }
  }
  if ( (a3 & 1) == 0 )
    return MiReleaseOutSwapReservations(a1, a2);
  return result;
}
