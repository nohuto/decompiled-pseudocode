/*
 * XREFs of RaCallMiniportAdapterControl @ 0x1C000AFB8
 * Callers:
 *     RaidAdapterStopAdapter @ 0x1C0008900 (RaidAdapterStopAdapter.c)
 *     RaidAdapterRestartAdapter @ 0x1C0008980 (RaidAdapterRestartAdapter.c)
 *     RaidIsAdapterControlSupported @ 0x1C000BBE4 (RaidIsAdapterControlSupported.c)
 *     RaidAdapterRescanBus @ 0x1C000BC4C (RaidAdapterRescanBus.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C0011F28 (RaidAdapterStartDeviceIrp.c)
 *     RaidCoalescingCallback @ 0x1C0025B50 (RaidCoalescingCallback.c)
 *     RaidPowerSettingCallback @ 0x1C0026BB0 (RaidPowerSettingCallback.c)
 *     RaidAdapterPerfStateCallback @ 0x1C002C8E0 (RaidAdapterPerfStateCallback.c)
 *     RaidAdapterSendPoFxActiveToMiniport @ 0x1C002C9A8 (RaidAdapterSendPoFxActiveToMiniport.c)
 *     RaidAdapterSendPoFxIdleStateToMiniport @ 0x1C002CA34 (RaidAdapterSendPoFxIdleStateToMiniport.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C002CAB0 (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     RaidAdapterSendPowerToMiniport @ 0x1C002CB2C (RaidAdapterSendPowerToMiniport.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C002CBB4 (RaidAdapterSetMaxOperationalPower.c)
 *     StorPortAdapterPowerControl @ 0x1C002E2E0 (StorPortAdapterPowerControl.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C0050D74 (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C0057390 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015B60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RaCallMiniportAdapterControl(__int64 a1)
{
  unsigned int (__fastcall *v1)(__int64); // rax

  v1 = *(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(a1 + 232) + 120LL);
  if ( v1 )
    return v1(*(_QWORD *)(a1 + 240) + 16LL) != 0 ? 0xC0000001 : 0;
  else
    return 3221225659LL;
}
