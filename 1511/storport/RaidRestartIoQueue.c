/*
 * XREFs of RaidRestartIoQueue @ 0x1C000C030
 * Callers:
 *     RaUnitScsiIrp @ 0x1C0003080 (RaUnitScsiIrp.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C0008688 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidUnitProcessBusyRequest @ 0x1C000999C (RaidUnitProcessBusyRequest.c)
 *     RaidSetUnitPauseTimer @ 0x1C0009BF0 (RaidSetUnitPauseTimer.c)
 *     RaidUnitPauseTimerDpcRoutine @ 0x1C0009DA0 (RaidUnitPauseTimerDpcRoutine.c)
 *     RaidUnitRestartQueue @ 0x1C000C028 (RaidUnitRestartQueue.c)
 *     RaidAdapterRestartQueues @ 0x1C00131A0 (RaidAdapterRestartQueues.c)
 *     RaidAdapterDeferredRoutine @ 0x1C00147E0 (RaidAdapterDeferredRoutine.c)
 *     RaidCompletionDpcRoutine @ 0x1C0025D20 (RaidCompletionDpcRoutine.c)
 *     StorPortUnitActiveConditionStep2 @ 0x1C002E7B8 (StorPortUnitActiveConditionStep2.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1C0033A0C (RaidResumeAndRestartUnitQueue.c)
 *     RaidUnitReady @ 0x1C0034BB0 (RaidUnitReady.c)
 *     RaidUnitRestartQueueDpcRoutine @ 0x1C0035410 (RaidUnitRestartQueueDpcRoutine.c)
 * Callees:
 *     RaidNormalizeDeviceQueue @ 0x1C0002DFC (RaidNormalizeDeviceQueue.c)
 *     StorSubmitIoGatewayItem @ 0x1C0009F7C (StorSubmitIoGatewayItem.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015B60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RaidRestartIoQueue(__int64 a1)
{
  KIRQL v2; // bp
  int v3; // edi
  KSPIN_LOCK v4; // rax
  KSPIN_LOCK v5; // rsi
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  if ( KeGetCurrentIrql() == 2 )
  {
    v3 = 1;
  }
  else
  {
    v3 = 0;
    v2 = KfRaiseIrql(2u);
  }
  v4 = RaidNormalizeDeviceQueue(a1 + 400);
  v5 = v4;
  if ( v4 && !StorSubmitIoGatewayItem(*(PKSPIN_LOCK *)(a1 + 408), v4, v6) )
    (*(void (__fastcall **)(_QWORD, KSPIN_LOCK, _QWORD *))(a1 + 392))(*(_QWORD *)(a1 + 384), v5 - 120, v6);
  if ( !v3 )
    KeLowerIrql(v2);
}
