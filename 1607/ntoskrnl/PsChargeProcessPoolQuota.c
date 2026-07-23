/*
 * XREFs of PsChargeProcessPoolQuota @ 0x14009C654
 * Callers:
 *     PsChargePoolQuota @ 0x14009C638 (PsChargePoolQuota.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall PsChargeProcessPoolQuota(PEPROCESS Process, POOL_TYPE PoolType, ULONG_PTR Amount)
{
  if ( Process == PsInitialSystemProcess )
    return 0;
  else
    return PspChargeQuota(Process[1].ActiveProcessors.Bitmap[4], (__int64)Process, PoolType == PagedPool, Amount);
}
