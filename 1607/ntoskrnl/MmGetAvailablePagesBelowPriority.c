/*
 * XREFs of MmGetAvailablePagesBelowPriority @ 0x1400C0E80
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x1404F4AF8 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetAvailablePagesBelowPriority(unsigned int a1)
{
  return MiGetAvailablePagesBelowPriority(MiSystemPartition, a1);
}
