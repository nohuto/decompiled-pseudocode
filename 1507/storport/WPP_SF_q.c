/*
 * XREFs of WPP_SF_q @ 0x1C0025780
 * Callers:
 *     StorpRequestTimer @ 0x1C0005590 (StorpRequestTimer.c)
 *     RaidUnitPendingDpcRoutine @ 0x1C00059D0 (RaidUnitPendingDpcRoutine.c)
 *     RaidpBuildAdapterBusRelations @ 0x1C0009738 (RaidpBuildAdapterBusRelations.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C000C4E0 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     StorpInitializeTimer @ 0x1C001176C (StorpInitializeTimer.c)
 *     RaDriverUnload @ 0x1C00260A0 (RaDriverUnload.c)
 *     StorPortReady @ 0x1C0028090 (StorPortReady.c)
 *     StorpFreeTimer @ 0x1C002900C (StorpFreeTimer.c)
 *     RaUnitAsyncNotificationWorkItemRoutine @ 0x1C0030940 (RaUnitAsyncNotificationWorkItemRoutine.c)
 *     RaidSyncAcpiEvalMethod @ 0x1C0032268 (RaidSyncAcpiEvalMethod.c)
 *     RaidUnitGetDeviceParameters @ 0x1C004F668 (RaidUnitGetDeviceParameters.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012F80 (_guard_dispatch_icall_nop.c)
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
