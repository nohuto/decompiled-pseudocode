/*
 * XREFs of PsReturnPoolQuota @ 0x1400E2AE4
 * Callers:
 *     ExReturnPoolQuota @ 0x1400E2A64 (ExReturnPoolQuota.c)
 * Callees:
 *     PspReturnQuota @ 0x140089190 (PspReturnQuota.c)
 */

void __stdcall PsReturnPoolQuota(PEPROCESS Process, POOL_TYPE PoolType, ULONG_PTR Amount)
{
  if ( Process != PsInitialSystemProcess )
    PspReturnQuota((char *)Process[1].ActiveProcessors.Bitmap[4], (ULONG_PTR)Process, PoolType == PagedPool, Amount);
}
