/*
 * XREFs of WPP_SF_D @ 0x1C002AE50
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0007ED0 (StorPortExtendedFunction.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C000A578 (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaidLunQueueWaitForQuiescence @ 0x1C000B430 (RaidLunQueueWaitForQuiescence.c)
 *     RaidStallDeviceQueue @ 0x1C000BF84 (RaidStallDeviceQueue.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C001162C (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C0011FD0 (RaidBusEnumeratorVisitUnit.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C0012704 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidAdapterHack @ 0x1C0015B44 (RaidAdapterHack.c)
 *     RaWmiDispatchIrp @ 0x1C005B20C (RaWmiDispatchIrp.c)
 *     StorpRegisterShim @ 0x1C005BEC0 (StorpRegisterShim.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AA20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_D(__int64 a1, unsigned __int16 a2, __int64 a3, int a4)
{
  int v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           &v5,
           4LL,
           0LL);
}
