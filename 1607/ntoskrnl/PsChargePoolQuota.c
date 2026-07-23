/*
 * XREFs of PsChargePoolQuota @ 0x14009C638
 * Callers:
 *     FsRtlCancelNotify @ 0x1400A0A1C (FsRtlCancelNotify.c)
 *     FsRtlNotifyFilterReportChange @ 0x1404AAFC0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLite @ 0x1404ABA5C (FsRtlNotifyFilterReportChangeLite.c)
 * Callees:
 *     PsChargeProcessPoolQuota @ 0x14009C654 (PsChargeProcessPoolQuota.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 */

void __stdcall PsChargePoolQuota(PEPROCESS Process, POOL_TYPE PoolType, ULONG_PTR Amount)
{
  int v3; // eax

  v3 = PsChargeProcessPoolQuota(Process, PoolType, Amount);
  if ( v3 < 0 )
    RtlRaiseStatus(v3);
}
