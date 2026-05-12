/*
 * XREFs of RaCallMiniportAdapterControl @ 0x1C000EE90
 * Callers:
 *     RaidAdapterRestartAdapter @ 0x1C000A914 (RaidAdapterRestartAdapter.c)
 *     RaidAdapterStopAdapter @ 0x1C000CAC8 (RaidAdapterStopAdapter.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C000D588 (RaidAdapterStartDeviceIrp.c)
 *     RaidIsAdapterControlSupported @ 0x1C000FF08 (RaidIsAdapterControlSupported.c)
 *     RaidAdapterRescanBus @ 0x1C000FF70 (RaidAdapterRescanBus.c)
 *     RaidPowerSettingCallback @ 0x1C0018A10 (RaidPowerSettingCallback.c)
 *     RaidAdapterSendPoFxActiveToMiniport @ 0x1C0019620 (RaidAdapterSendPoFxActiveToMiniport.c)
 *     RaidAdapterSendPowerToMiniport @ 0x1C0019DEC (RaidAdapterSendPowerToMiniport.c)
 *     RaidCoalescingCallback @ 0x1C00295F0 (RaidCoalescingCallback.c)
 *     RaidAdapterPerfStateCallback @ 0x1C0030740 (RaidAdapterPerfStateCallback.c)
 *     RaidAdapterSendPoFxIdleStateToMiniport @ 0x1C0030808 (RaidAdapterSendPoFxIdleStateToMiniport.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C0030890 (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C003090C (RaidAdapterSetMaxOperationalPower.c)
 *     StorPortAdapterPowerControl @ 0x1C0031920 (StorPortAdapterPowerControl.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C0058020 (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1C0058960 (RaidGetStorageAdapterSerialNumberProperty.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C005E6F0 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AA20 (_guard_dispatch_icall_nop.c)
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
