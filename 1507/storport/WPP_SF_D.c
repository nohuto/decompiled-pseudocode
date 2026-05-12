/*
 * XREFs of WPP_SF_D @ 0x1C00256F0
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0005260 (StorPortExtendedFunction.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C0006890 (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C000B640 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C000BDD8 (RaidBusEnumeratorVisitUnit.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C000C4E0 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidStallDeviceQueue @ 0x1C001099C (RaidStallDeviceQueue.c)
 *     RaidAdapterHack @ 0x1C00214D8 (RaidAdapterHack.c)
 *     RaidLunQueueWaitForQuiescence @ 0x1C0026698 (RaidLunQueueWaitForQuiescence.c)
 *     RaWmiDispatchIrp @ 0x1C004F22C (RaWmiDispatchIrp.c)
 *     StorpRegisterShim @ 0x1C00504B8 (StorpRegisterShim.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012F80 (_guard_dispatch_icall_nop.c)
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
