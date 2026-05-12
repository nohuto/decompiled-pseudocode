/*
 * XREFs of WPP_SF_qqD @ 0x1C002B0BC
 * Callers:
 *     RaDriverPnpIrp @ 0x1C0001990 (RaDriverPnpIrp.c)
 *     RaUnitPnpIrp @ 0x1C0001A28 (RaUnitPnpIrp.c)
 *     RaDriverDeviceControlIrp @ 0x1C0001C90 (RaDriverDeviceControlIrp.c)
 *     RaUnitDeviceControlIrp @ 0x1C0001D30 (RaUnitDeviceControlIrp.c)
 *     RaDriverScsiIrp @ 0x1C0003B20 (RaDriverScsiIrp.c)
 *     RaUnitScsiIrp @ 0x1C0003BC0 (RaUnitScsiIrp.c)
 *     RaUnitStartIo @ 0x1C0004940 (RaUnitStartIo.c)
 *     RaidUnitCompleteRequest @ 0x1C0006180 (RaidUnitCompleteRequest.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C000A01C (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaUnitPowerIrp @ 0x1C000A1B4 (RaUnitPowerIrp.c)
 *     RaidUnitSetPowerIrp @ 0x1C000A288 (RaidUnitSetPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C000A33C (RaidUnitSetSystemPowerIrp.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C000A660 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C000A980 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaAdapterStartPowerIo @ 0x1C000AB9C (RaAdapterStartPowerIo.c)
 *     RaidAdapterQuerySystemPowerIrp @ 0x1C000B0C0 (RaidAdapterQuerySystemPowerIrp.c)
 *     RaidAdapterSetSystemPowerCompletion @ 0x1C000B190 (RaidAdapterSetSystemPowerCompletion.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x1C000B2F4 (RaidAdapterSetSystemPowerIrp.c)
 *     RaidAdapterQuerySystemPowerCompletionRoutine @ 0x1C000B590 (RaidAdapterQuerySystemPowerCompletionRoutine.c)
 *     RaidAdapterSetDevicePowerCompletionRoutine @ 0x1C000B660 (RaidAdapterSetDevicePowerCompletionRoutine.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C000B700 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterQueryDevicePowerCompletionRoutine @ 0x1C000B7A0 (RaidAdapterQueryDevicePowerCompletionRoutine.c)
 *     RaidAdapterDevicePowerDownSrbComplete @ 0x1C000B890 (RaidAdapterDevicePowerDownSrbComplete.c)
 *     RaDriverPowerIrp @ 0x1C000B910 (RaDriverPowerIrp.c)
 *     RaidAdapterPowerIrp @ 0x1C000B9B0 (RaidAdapterPowerIrp.c)
 *     RaidAdapterSetDevicePowerIrp @ 0x1C000BB38 (RaidAdapterSetDevicePowerIrp.c)
 *     RaidAdapterPowerDownDevice @ 0x1C000BC44 (RaidAdapterPowerDownDevice.c)
 *     RaUnitAsyncError @ 0x1C000C3A0 (RaUnitAsyncError.c)
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C000C984 (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C000D588 (RaidAdapterStartDeviceIrp.c)
 *     RaidAdapterPnpIrp @ 0x1C000F7B0 (RaidAdapterPnpIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C000FB0C (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidAdapterPowerDownDeviceCompletion @ 0x1C0018870 (RaidAdapterPowerDownDeviceCompletion.c)
 *     RaUnitRemoveDeviceIrp @ 0x1C003573C (RaUnitRemoveDeviceIrp.c)
 *     RaUnitStartResetIo @ 0x1C0035FD4 (RaUnitStartResetIo.c)
 *     RaidUnitCompleteResetRequest @ 0x1C0037150 (RaidUnitCompleteResetRequest.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C0037760 (RaidUnitIdentityUpdateWorkRoutine.c)
 *     RaDriverCloseIrp @ 0x1C0057620 (RaDriverCloseIrp.c)
 *     RaDriverCreateIrp @ 0x1C00576C0 (RaDriverCreateIrp.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C0058020 (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaDriverSystemControlIrp @ 0x1C005B190 (RaDriverSystemControlIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AA20 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_qqD(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  __int64 v6; // [rsp+90h] [rbp+28h] BYREF
  va_list va1; // [rsp+90h] [rbp+28h]
  va_list va2; // [rsp+98h] [rbp+30h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v6 = va_arg(va2, _QWORD);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           8LL,
           va2,
           4LL,
           0LL);
}
