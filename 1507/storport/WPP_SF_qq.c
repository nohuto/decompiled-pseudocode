/*
 * XREFs of WPP_SF_qq @ 0x1C0025880
 * Callers:
 *     RaDriverScsiIrp @ 0x1C0001810 (RaDriverScsiIrp.c)
 *     RaUnitScsiIrp @ 0x1C00018B0 (RaUnitScsiIrp.c)
 *     RaDriverDeviceControlIrp @ 0x1C0003640 (RaDriverDeviceControlIrp.c)
 *     RaDriverPowerIrp @ 0x1C0005DF0 (RaDriverPowerIrp.c)
 *     RaUnitPowerIrp @ 0x1C0005F50 (RaUnitPowerIrp.c)
 *     RaidUnitSetPowerIrp @ 0x1C0006024 (RaidUnitSetPowerIrp.c)
 *     RaidUnitSetDevicePowerIrp @ 0x1C00062EC (RaidUnitSetDevicePowerIrp.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x1C00063DC (RaidAdapterSetSystemPowerIrp.c)
 *     RaidAdapterSetDevicePowerIrp @ 0x1C00064A4 (RaidAdapterSetDevicePowerIrp.c)
 *     RaidAdapterQuerySystemPowerIrp @ 0x1C0006674 (RaidAdapterQuerySystemPowerIrp.c)
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C0006794 (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C0006890 (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaidAdapterPowerUpDevice @ 0x1C0006C90 (RaidAdapterPowerUpDevice.c)
 *     RaidAdapterPowerDownDevice @ 0x1C0006D38 (RaidAdapterPowerDownDevice.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0006E70 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaidAdapterSetSystemPowerCompletion @ 0x1C0007170 (RaidAdapterSetSystemPowerCompletion.c)
 *     RaidAdapterQuerySystemPowerCompletionRoutine @ 0x1C00076B0 (RaidAdapterQuerySystemPowerCompletionRoutine.c)
 *     RaidAdapterSetDevicePowerCompletionRoutine @ 0x1C0007780 (RaidAdapterSetDevicePowerCompletionRoutine.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C0007820 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterPowerDownDeviceCompletion @ 0x1C00078C0 (RaidAdapterPowerDownDeviceCompletion.c)
 *     RaidAdapterQueryDevicePowerCompletionRoutine @ 0x1C0007970 (RaidAdapterQueryDevicePowerCompletionRoutine.c)
 *     RaDriverAddDevice @ 0x1C0008830 (RaDriverAddDevice.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C00095D4 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C000B640 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C0010300 (RaidAdapterStartDeviceIrp.c)
 *     StorpInitializeTimer @ 0x1C001176C (StorpInitializeTimer.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0012530 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     StorpInitializeWorkItem @ 0x1C001266C (StorpInitializeWorkItem.c)
 *     StorpFreeTimer @ 0x1C002900C (StorpFreeTimer.c)
 *     StorpFreeWorkItem @ 0x1C0029234 (StorpFreeWorkItem.c)
 *     RaUnitRemoveDeviceIrp @ 0x1C0031338 (RaUnitRemoveDeviceIrp.c)
 *     RaDriverCloseIrp @ 0x1C004C610 (RaDriverCloseIrp.c)
 *     RaDriverCreateIrp @ 0x1C004C6B0 (RaDriverCreateIrp.c)
 *     RaDriverSystemControlIrp @ 0x1C004F1B0 (RaDriverSystemControlIrp.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C004F39C (RaUnitStorageDataSetManagementIoctl.c)
 *     RaidAdapterScsiIrp @ 0x1C0053218 (RaidAdapterScsiIrp.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C0054040 (RaUnitStorageDiagnosticIoctl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012F80 (_guard_dispatch_icall_nop.c)
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
