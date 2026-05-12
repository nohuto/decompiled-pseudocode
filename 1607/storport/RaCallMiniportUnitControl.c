/*
 * XREFs of RaCallMiniportUnitControl @ 0x1C0011128
 * Callers:
 *     RaidUnitSendPoFxActiveToMiniport @ 0x1C0009820 (RaidUnitSendPoFxActiveToMiniport.c)
 *     RaidIsUnitControlSupported @ 0x1C00110A8 (RaidIsUnitControlSupported.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0011168 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C0011FD0 (RaidBusEnumeratorVisitUnit.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x1C0030230 (RaUnitDeregisterFromIdleDetection.c)
 *     RaidUnitSendPoFxIdleStateToMiniport @ 0x1C003134C (RaidUnitSendPoFxIdleStateToMiniport.c)
 *     RaidUnitSendPoFxPowerControlToMiniport @ 0x1C00313DC (RaidUnitSendPoFxPowerControlToMiniport.c)
 *     RaidUnitSendPoFxPowerRequiredToMiniport @ 0x1C00314C0 (RaidUnitSendPoFxPowerRequiredToMiniport.c)
 *     RaidUnitSendPowerToMiniport @ 0x1C0031544 (RaidUnitSendPowerToMiniport.c)
 *     RaUnitAdapterRemove @ 0x1C0034B50 (RaUnitAdapterRemove.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C0035068 (RaUnitDeleteDeviceIrp.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C0058AB4 (RaUnitRegisterForIdleDetection.c)
 *     RaUnitStartDeviceIrp @ 0x1C0058E58 (RaUnitStartDeviceIrp.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C005F7C0 (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AA20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RaCallMiniportUnitControl(__int64 a1)
{
  unsigned int (__fastcall *v1)(__int64); // rax

  v1 = *(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(a1 + 232) + 200LL);
  if ( v1 )
    return v1(*(_QWORD *)(a1 + 240) + 16LL) != 0 ? 0xC0000001 : 0;
  else
    return 3221225659LL;
}
