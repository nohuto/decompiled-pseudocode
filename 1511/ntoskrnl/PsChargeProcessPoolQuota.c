/*
 * XREFs of PsChargeProcessPoolQuota @ 0x1400C904C
 * Callers:
 *     PsChargePoolQuota @ 0x1400C9030 (PsChargePoolQuota.c)
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
