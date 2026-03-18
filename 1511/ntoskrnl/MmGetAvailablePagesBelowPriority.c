/*
 * XREFs of MmGetAvailablePagesBelowPriority @ 0x1400F2654
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x1404DEC44 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetAvailablePagesBelowPriority(unsigned int a1)
{
  return MiGetAvailablePagesBelowPriority(MiSystemPartition, a1);
}
