/*
 * XREFs of MmGetAvailablePagesBelowPriority @ 0x140025FA4
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x1404567D0 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetAvailablePagesBelowPriority(unsigned int a1)
{
  return MiGetAvailablePagesBelowPriority(&MiSystemPartition, a1);
}
