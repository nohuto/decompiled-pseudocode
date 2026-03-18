/*
 * XREFs of PsChargePoolQuota @ 0x1400C9030
 * Callers:
 *     FsRtlCancelNotify @ 0x1400C94AC (FsRtlCancelNotify.c)
 *     FsRtlNotifyFilterReportChange @ 0x14048CA00 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLite @ 0x14048D904 (FsRtlNotifyFilterReportChangeLite.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     PsChargeProcessPoolQuota @ 0x1400C904C (PsChargeProcessPoolQuota.c)
 */

void __stdcall PsChargePoolQuota(PEPROCESS Process, POOL_TYPE PoolType, ULONG_PTR Amount)
{
  int v3; // eax

  v3 = PsChargeProcessPoolQuota(Process, PoolType, Amount);
  if ( v3 < 0 )
    RtlRaiseStatus(v3);
}
