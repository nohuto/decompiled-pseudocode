/*
 * XREFs of HUBDSM_WaitingForReportedMissingOnDetachInUnConfigured @ 0x1C0017690
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_NotifyDeviceDisconnected @ 0x1C00114F0 (HUBPDO_NotifyDeviceDisconnected.c)
 *     HUBPDO_ReportDeviceAsMissing @ 0x1C0014520 (HUBPDO_ReportDeviceAsMissing.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDSM_WaitingForReportedMissingOnDetachInUnConfigured(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBPDO_ReportDeviceAsMissing(v1);
  if ( *(_QWORD *)(v1 + 2136) )
    USBD_MarkDeviceAsDisconnected(v1);
  HUBPDO_NotifyDeviceDisconnected(v1);
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v1 + 8) + 1240LL))(*(_QWORD *)(v1 + 8), 3006LL);
  return 1000LL;
}
