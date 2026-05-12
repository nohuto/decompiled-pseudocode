/*
 * XREFs of WPP_SF_D @ 0x1C0027BA0
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0006190 (StorPortExtendedFunction.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C00085A0 (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaidStallDeviceQueue @ 0x1C0009B00 (RaidStallDeviceQueue.c)
 *     RaidAdapterHack @ 0x1C000AAD8 (RaidAdapterHack.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C000D8A8 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C000E040 (RaidBusEnumeratorVisitUnit.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C000E750 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidLunQueueWaitForQuiescence @ 0x1C0028890 (RaidLunQueueWaitForQuiescence.c)
 *     RaWmiDispatchIrp @ 0x1C0052F8C (RaWmiDispatchIrp.c)
 *     StorpRegisterShim @ 0x1C0054538 (StorpRegisterShim.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015B60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_D(__int64 a1, unsigned __int16 a2, __int64 a3, int a4)
{
  int v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int *, __int64, _QWORD))&WPP_MAIN_CB.ActiveThreadCount)(
           a1,
           43LL,
           a3,
           a2,
           &v5,
           4LL,
           0LL);
}
