/*
 * XREFs of WPP_SF_qq @ 0x1C002B074
 * Callers:
 *     RaDriverDeviceControlIrp @ 0x1C0001C90 (RaDriverDeviceControlIrp.c)
 *     RaDriverScsiIrp @ 0x1C0003B20 (RaDriverScsiIrp.c)
 *     RaUnitScsiIrp @ 0x1C0003BC0 (RaUnitScsiIrp.c)
 *     RaUnitPowerIrp @ 0x1C000A1B4 (RaUnitPowerIrp.c)
 *     RaidUnitSetPowerIrp @ 0x1C000A288 (RaidUnitSetPowerIrp.c)
 *     RaidUnitSetDevicePowerIrp @ 0x1C000A488 (RaidUnitSetDevicePowerIrp.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C000A578 (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C000A980 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaidAdapterQuerySystemPowerIrp @ 0x1C000B0C0 (RaidAdapterQuerySystemPowerIrp.c)
 *     RaidAdapterSetSystemPowerCompletion @ 0x1C000B190 (RaidAdapterSetSystemPowerCompletion.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x1C000B2F4 (RaidAdapterSetSystemPowerIrp.c)
 *     RaidAdapterPowerUpDevice @ 0x1C000B4DC (RaidAdapterPowerUpDevice.c)
 *     RaidAdapterQuerySystemPowerCompletionRoutine @ 0x1C000B590 (RaidAdapterQuerySystemPowerCompletionRoutine.c)
 *     RaidAdapterSetDevicePowerCompletionRoutine @ 0x1C000B660 (RaidAdapterSetDevicePowerCompletionRoutine.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C000B700 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterQueryDevicePowerCompletionRoutine @ 0x1C000B7A0 (RaidAdapterQueryDevicePowerCompletionRoutine.c)
 *     RaDriverPowerIrp @ 0x1C000B910 (RaDriverPowerIrp.c)
 *     RaidAdapterSetDevicePowerIrp @ 0x1C000BB38 (RaidAdapterSetDevicePowerIrp.c)
 *     RaidAdapterPowerDownDevice @ 0x1C000BC44 (RaidAdapterPowerDownDevice.c)
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C000C984 (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C000D588 (RaidAdapterStartDeviceIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C000FB0C (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C001162C (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaDriverAddDevice @ 0x1C00159A0 (RaDriverAddDevice.c)
 *     StorpInitializeTimer @ 0x1C00177B4 (StorpInitializeTimer.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C00184CC (RaUnitScsiFreeDumpPointersIoctl.c)
 *     StorpInitializeWorkItem @ 0x1C0018568 (StorpInitializeWorkItem.c)
 *     RaidAdapterPowerDownDeviceCompletion @ 0x1C0018870 (RaidAdapterPowerDownDeviceCompletion.c)
 *     StorpFreeTimer @ 0x1C002ED34 (StorpFreeTimer.c)
 *     StorpFreeWorkItem @ 0x1C002EF54 (StorpFreeWorkItem.c)
 *     RaUnitRemoveDeviceIrp @ 0x1C003573C (RaUnitRemoveDeviceIrp.c)
 *     RaDriverCloseIrp @ 0x1C0057620 (RaDriverCloseIrp.c)
 *     RaDriverCreateIrp @ 0x1C00576C0 (RaDriverCreateIrp.c)
 *     RaDriverSystemControlIrp @ 0x1C005B190 (RaDriverSystemControlIrp.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C005B9CC (RaUnitStorageDataSetManagementIoctl.c)
 *     RaidAdapterScsiIrp @ 0x1C005E4E8 (RaidAdapterScsiIrp.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C005F2E0 (RaUnitStorageDiagnosticIoctl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AA20 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_qq(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
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
