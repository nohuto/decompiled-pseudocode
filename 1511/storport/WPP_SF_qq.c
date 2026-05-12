/*
 * XREFs of WPP_SF_qq @ 0x1C002796C
 * Callers:
 *     RaDriverScsiIrp @ 0x1C0002FE0 (RaDriverScsiIrp.c)
 *     RaUnitScsiIrp @ 0x1C0003080 (RaUnitScsiIrp.c)
 *     RaDriverDeviceControlIrp @ 0x1C0004430 (RaDriverDeviceControlIrp.c)
 *     RaDriverPowerIrp @ 0x1C0007AD0 (RaDriverPowerIrp.c)
 *     RaUnitPowerIrp @ 0x1C0007C30 (RaUnitPowerIrp.c)
 *     RaidUnitSetPowerIrp @ 0x1C0007D04 (RaidUnitSetPowerIrp.c)
 *     RaidUnitSetDevicePowerIrp @ 0x1C0007FCC (RaidUnitSetDevicePowerIrp.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x1C00080BC (RaidAdapterSetSystemPowerIrp.c)
 *     RaidAdapterSetDevicePowerIrp @ 0x1C0008184 (RaidAdapterSetDevicePowerIrp.c)
 *     RaidAdapterQuerySystemPowerIrp @ 0x1C0008384 (RaidAdapterQuerySystemPowerIrp.c)
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C00084A4 (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C00085A0 (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaidAdapterPowerUpDevice @ 0x1C00089EC (RaidAdapterPowerUpDevice.c)
 *     RaidAdapterPowerDownDevice @ 0x1C0008A94 (RaidAdapterPowerDownDevice.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0008BD0 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaidAdapterSetSystemPowerCompletion @ 0x1C0008F40 (RaidAdapterSetSystemPowerCompletion.c)
 *     RaidAdapterQuerySystemPowerCompletionRoutine @ 0x1C0009410 (RaidAdapterQuerySystemPowerCompletionRoutine.c)
 *     RaidAdapterPowerDownDeviceCompletion @ 0x1C00094E0 (RaidAdapterPowerDownDeviceCompletion.c)
 *     RaidAdapterSetDevicePowerCompletionRoutine @ 0x1C00095B0 (RaidAdapterSetDevicePowerCompletionRoutine.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C0009650 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterQueryDevicePowerCompletionRoutine @ 0x1C00096F0 (RaidAdapterQueryDevicePowerCompletionRoutine.c)
 *     StorpInitializeTimer @ 0x1C00098CC (StorpInitializeTimer.c)
 *     StorpInitializeWorkItem @ 0x1C000A02C (StorpInitializeWorkItem.c)
 *     RaDriverAddDevice @ 0x1C000A930 (RaDriverAddDevice.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C000B7E8 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C000D8A8 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C0011F28 (RaidAdapterStartDeviceIrp.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0014630 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     StorpFreeTimer @ 0x1C002B1F0 (StorpFreeTimer.c)
 *     StorpFreeWorkItem @ 0x1C002B414 (StorpFreeWorkItem.c)
 *     RaUnitRemoveDeviceIrp @ 0x1C00325CC (RaUnitRemoveDeviceIrp.c)
 *     RaDriverCloseIrp @ 0x1C0050650 (RaDriverCloseIrp.c)
 *     RaDriverCreateIrp @ 0x1C00506F0 (RaDriverCreateIrp.c)
 *     RaDriverSystemControlIrp @ 0x1C0052F10 (RaDriverSystemControlIrp.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C00530FC (RaUnitStorageDataSetManagementIoctl.c)
 *     RaidAdapterScsiIrp @ 0x1C0057188 (RaidAdapterScsiIrp.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C0057F80 (RaUnitStorageDiagnosticIoctl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015B60 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_qq(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))&WPP_MAIN_CB.ActiveThreadCount)(
           a1,
           43LL,
           a3,
           a2,
           (__int64 *)va,
           8LL,
           va1,
           8LL,
           0LL);
}
