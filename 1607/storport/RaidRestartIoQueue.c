/*
 * XREFs of RaidRestartIoQueue @ 0x1C0003964
 * Callers:
 *     StorPortUnitActiveConditionStep2 @ 0x1C0003468 (StorPortUnitActiveConditionStep2.c)
 *     RaUnitScsiIrp @ 0x1C0003BC0 (RaUnitScsiIrp.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C000A660 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidUnitProcessBusyRequest @ 0x1C000BDF0 (RaidUnitProcessBusyRequest.c)
 *     RaidUnitPauseTimerDpcRoutine @ 0x1C000BF60 (RaidUnitPauseTimerDpcRoutine.c)
 *     RaidSetUnitPauseTimer @ 0x1C000C0F8 (RaidSetUnitPauseTimer.c)
 *     RaidUnitRestartQueue @ 0x1C0010410 (RaidUnitRestartQueue.c)
 *     RaidAdapterDeferredRoutine @ 0x1C0018290 (RaidAdapterDeferredRoutine.c)
 *     RaidAdapterRestartQueues @ 0x1C0018684 (RaidAdapterRestartQueues.c)
 *     RaidCompletionDpcRoutine @ 0x1C00297C0 (RaidCompletionDpcRoutine.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1C0036C6C (RaidResumeAndRestartUnitQueue.c)
 *     RaidUnitReady @ 0x1C0037E20 (RaidUnitReady.c)
 *     RaidUnitRestartQueueDpcRoutine @ 0x1C0038620 (RaidUnitRestartQueueDpcRoutine.c)
 * Callees:
 *     RaidNormalizeDeviceQueue @ 0x1C0003A08 (RaidNormalizeDeviceQueue.c)
 *     StorSubmitIoGatewayItem @ 0x1C00077A0 (StorSubmitIoGatewayItem.c)
 *     _guard_dispatch_icall_nop @ 0x1C001AA20 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RaidRestartIoQueue(__int64 a1)
{
  KIRQL v2; // bp
  int v3; // edi
  __int64 v4; // rsi
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

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
  if ( v4 && !(unsigned __int8)StorSubmitIoGatewayItem(*(PKSPIN_LOCK *)(a1 + 408)) )
    (*(void (__fastcall **)(_QWORD, __int64, _BYTE *))(a1 + 392))(*(_QWORD *)(a1 + 384), v4 - 120, v5);
  if ( !v3 )
    KeLowerIrql(v2);
}
