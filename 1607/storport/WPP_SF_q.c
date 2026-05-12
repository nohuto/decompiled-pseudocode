/*
 * XREFs of WPP_SF_q @ 0x1C002AF28
 * Callers:
 *     StorpRequestTimer @ 0x1C0009378 (StorpRequestTimer.c)
 *     RaidUnitPendingDpcRoutine @ 0x1C00094B0 (RaidUnitPendingDpcRoutine.c)
 *     RaidpBuildAdapterBusRelations @ 0x1C000FC94 (RaidpBuildAdapterBusRelations.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C0012704 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     StorpInitializeTimer @ 0x1C00177B4 (StorpInitializeTimer.c)
 *     RaidSyncAcpiEvalMethod @ 0x1C0019A10 (RaidSyncAcpiEvalMethod.c)
 *     RaDriverUnload @ 0x1C002B6C0 (RaDriverUnload.c)
 *     StorPortReady @ 0x1C002DFC0 (StorPortReady.c)
 *     StorpFreeTimer @ 0x1C002ED34 (StorpFreeTimer.c)
 *     RaUnitAsyncNotificationWorkItemRoutine @ 0x1C0034C10 (RaUnitAsyncNotificationWorkItemRoutine.c)
 *     RaUnitAttributeManagement @ 0x1C0034D8C (RaUnitAttributeManagement.c)
 *     RaUnitClearUnresponsiveAttribute @ 0x1C0034FB4 (RaUnitClearUnresponsiveAttribute.c)
 *     RaUnitGetQOSIoctl @ 0x1C00353A8 (RaUnitGetQOSIoctl.c)
 *     RaUnitSetQOSIoctl @ 0x1C0035904 (RaUnitSetQOSIoctl.c)
 *     RaUnitSetUnresponsiveAttribute @ 0x1C0035EF4 (RaUnitSetUnresponsiveAttribute.c)
 *     RaUnitUnresponsiveAttributeMgmt @ 0x1C0036890 (RaUnitUnresponsiveAttributeMgmt.c)
 *     RaidUnitRequestTimeout @ 0x1C0037E64 (RaidUnitRequestTimeout.c)
 *     RaidUnitGetDeviceParameters @ 0x1C005A2F4 (RaidUnitGetDeviceParameters.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AA20 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_q(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           (__int64 *)va,
           8LL,
           0LL);
}
