/*
 * XREFs of PsReturnPoolQuota @ 0x140119324
 * Callers:
 *     ExReturnPoolQuota @ 0x140119294 (ExReturnPoolQuota.c)
 * Callees:
 *     PspReturnQuota @ 0x140045E50 (PspReturnQuota.c)
 */

void __stdcall PsReturnPoolQuota(PEPROCESS Process, POOL_TYPE PoolType, ULONG_PTR Amount)
{
  if ( Process != PsInitialSystemProcess )
    PspReturnQuota((char *)Process[1].ActiveProcessors.Bitmap[4], (ULONG_PTR)Process, PoolType == PagedPool, Amount);
}
