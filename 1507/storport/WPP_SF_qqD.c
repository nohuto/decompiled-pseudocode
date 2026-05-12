/*
 * XREFs of WPP_SF_qqD @ 0x1C00258C8
 * Callers:
 *     RaDriverScsiIrp @ 0x1C0001810 (RaDriverScsiIrp.c)
 *     RaUnitScsiIrp @ 0x1C00018B0 (RaUnitScsiIrp.c)
 *     RaidUnitCompleteRequest @ 0x1C0002480 (RaidUnitCompleteRequest.c)
 *     RaDriverPnpIrp @ 0x1C0003380 (RaDriverPnpIrp.c)
 *     RaUnitPnpIrp @ 0x1C0003418 (RaUnitPnpIrp.c)
 *     RaDriverDeviceControlIrp @ 0x1C0003640 (RaDriverDeviceControlIrp.c)
 *     RaUnitDeviceControlIrp @ 0x1C00036E0 (RaUnitDeviceControlIrp.c)
 *     RaUnitStartIo @ 0x1C0003C00 (RaUnitStartIo.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0005C7C (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaDriverPowerIrp @ 0x1C0005DF0 (RaDriverPowerIrp.c)
 *     RaidAdapterPowerIrp @ 0x1C0005E90 (RaidAdapterPowerIrp.c)
 *     RaUnitPowerIrp @ 0x1C0005F50 (RaUnitPowerIrp.c)
 *     RaidUnitSetPowerIrp @ 0x1C0006024 (RaidUnitSetPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C00061A0 (RaidUnitSetSystemPowerIrp.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x1C00063DC (RaidAdapterSetSystemPowerIrp.c)
 *     RaidAdapterSetDevicePowerIrp @ 0x1C00064A4 (RaidAdapterSetDevicePowerIrp.c)
 *     RaidAdapterQuerySystemPowerIrp @ 0x1C0006674 (RaidAdapterQuerySystemPowerIrp.c)
 *     RaidAdapterDevicePowerDownSrbComplete @ 0x1C0006740 (RaidAdapterDevicePowerDownSrbComplete.c)
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C0006794 (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C000695C (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidAdapterPowerDownDevice @ 0x1C0006D38 (RaidAdapterPowerDownDevice.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0006E70 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaAdapterStartPowerIo @ 0x1C0007088 (RaAdapterStartPowerIo.c)
 *     RaidAdapterSetSystemPowerCompletion @ 0x1C0007170 (RaidAdapterSetSystemPowerCompletion.c)
 *     RaidAdapterQuerySystemPowerCompletionRoutine @ 0x1C00076B0 (RaidAdapterQuerySystemPowerCompletionRoutine.c)
 *     RaidAdapterSetDevicePowerCompletionRoutine @ 0x1C0007780 (RaidAdapterSetDevicePowerCompletionRoutine.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C0007820 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterPowerDownDeviceCompletion @ 0x1C00078C0 (RaidAdapterPowerDownDeviceCompletion.c)
 *     RaidAdapterQueryDevicePowerCompletionRoutine @ 0x1C0007970 (RaidAdapterQueryDevicePowerCompletionRoutine.c)
 *     RaidAdapterPnpIrp @ 0x1C00092D4 (RaidAdapterPnpIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C00095D4 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaUnitAsyncError @ 0x1C000EA18 (RaUnitAsyncError.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C0010300 (RaidAdapterStartDeviceIrp.c)
 *     RaUnitRemoveDeviceIrp @ 0x1C0031338 (RaUnitRemoveDeviceIrp.c)
 *     RaUnitStartResetIo @ 0x1C00315DC (RaUnitStartResetIo.c)
 *     RaidUnitCompleteResetRequest @ 0x1C0032710 (RaidUnitCompleteResetRequest.c)
 *     RaDriverCloseIrp @ 0x1C004C610 (RaDriverCloseIrp.c)
 *     RaDriverCreateIrp @ 0x1C004C6B0 (RaDriverCreateIrp.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C004CFA8 (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaDriverSystemControlIrp @ 0x1C004F1B0 (RaDriverSystemControlIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012F80 (_guard_dispatch_icall_nop.c)
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
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))&WPP_MAIN_CB.ActiveThreadCount)(
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
