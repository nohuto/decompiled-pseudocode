/*
 * XREFs of WPP_SF_q @ 0x1C002786C
 * Callers:
 *     StorpRequestTimer @ 0x1C00064C0 (StorpRequestTimer.c)
 *     RaidUnitPendingDpcRoutine @ 0x1C0006610 (RaidUnitPendingDpcRoutine.c)
 *     StorpInitializeTimer @ 0x1C00098CC (StorpInitializeTimer.c)
 *     RaidpBuildAdapterBusRelations @ 0x1C000B970 (RaidpBuildAdapterBusRelations.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C000E750 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaDriverUnload @ 0x1C0028040 (RaDriverUnload.c)
 *     StorPortReady @ 0x1C002A300 (StorPortReady.c)
 *     StorpFreeTimer @ 0x1C002B1F0 (StorpFreeTimer.c)
 *     RaUnitAsyncNotificationWorkItemRoutine @ 0x1C0031A60 (RaUnitAsyncNotificationWorkItemRoutine.c)
 *     RaUnitGetQOSIoctl @ 0x1C0032070 (RaUnitGetQOSIoctl.c)
 *     RaUnitRestoreUnresponsiveDeviceIoctl @ 0x1C0032754 (RaUnitRestoreUnresponsiveDeviceIoctl.c)
 *     RaUnitSetQOSIoctl @ 0x1C0032864 (RaUnitSetQOSIoctl.c)
 *     RaidSyncAcpiEvalMethod @ 0x1C0033AC8 (RaidSyncAcpiEvalMethod.c)
 *     RaidUnitRequestTimeout @ 0x1C0034BF4 (RaidUnitRequestTimeout.c)
 *     RaidUnitGetDeviceParameters @ 0x1C00533C8 (RaidUnitGetDeviceParameters.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015B60 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_q(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, _QWORD))&WPP_MAIN_CB.ActiveThreadCount)(
           a1,
           43LL,
           a3,
           a2,
           (__int64 *)va,
           8LL,
           0LL);
}
