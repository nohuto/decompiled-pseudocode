/*
 * XREFs of PsChargePoolQuota @ 0x14009CE38
 * Callers:
 *     FsRtlCancelNotify @ 0x1400A20F4 (FsRtlCancelNotify.c)
 *     FsRtlNotifyFilterReportChange @ 0x1404BF290 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLite @ 0x1404BFD2C (FsRtlNotifyFilterReportChangeLite.c)
 * Callees:
 *     PsChargeProcessPoolQuota @ 0x14009CE54 (PsChargeProcessPoolQuota.c)
 *     RtlRaiseStatus @ 0x1400F6738 (RtlRaiseStatus.c)
 */

void __stdcall PsChargePoolQuota(PEPROCESS Process, POOL_TYPE PoolType, ULONG_PTR Amount)
{
  int v3; // eax

  v3 = PsChargeProcessPoolQuota(Process, PoolType, Amount);
  if ( v3 < 0 )
    RtlRaiseStatus(v3);
}
