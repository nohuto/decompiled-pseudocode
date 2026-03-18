/*
 * XREFs of PsReturnPoolQuota @ 0x1400F95E4
 * Callers:
 *     ExReturnPoolQuota @ 0x1400F9564 (ExReturnPoolQuota.c)
 * Callees:
 *     PspReturnQuota @ 0x140010AA0 (PspReturnQuota.c)
 */

void __stdcall PsReturnPoolQuota(PEPROCESS Process, POOL_TYPE PoolType, ULONG_PTR Amount)
{
  if ( Process != PsInitialSystemProcess )
    PspReturnQuota((char *)Process[1].ActiveProcessors.Bitmap[4], (ULONG_PTR)Process, PoolType == PagedPool, Amount);
}
