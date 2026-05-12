/*
 * XREFs of RaidRestartIoQueue @ 0x1C0009DF8
 * Callers:
 *     RaUnitScsiIrp @ 0x1C00018B0 (RaUnitScsiIrp.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C000695C (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidUnitRestartQueue @ 0x1C0009DF0 (RaidUnitRestartQueue.c)
 *     RaidUnitProcessBusyRequest @ 0x1C0010838 (RaidUnitProcessBusyRequest.c)
 *     RaidSetUnitPauseTimer @ 0x1C0010A8C (RaidSetUnitPauseTimer.c)
 *     RaidAdapterRestartQueues @ 0x1C0010C48 (RaidAdapterRestartQueues.c)
 *     RaidUnitPauseTimerDpcRoutine @ 0x1C0011A40 (RaidUnitPauseTimerDpcRoutine.c)
 *     RaidAdapterDeferredRoutine @ 0x1C0012790 (RaidAdapterDeferredRoutine.c)
 *     RaidCompletionDpcRoutine @ 0x1C00238C0 (RaidCompletionDpcRoutine.c)
 *     StorPortUnitActiveConditionStep2 @ 0x1C002CA48 (StorPortUnitActiveConditionStep2.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1C00321AC (RaidResumeAndRestartUnitQueue.c)
 *     RaidUnitReady @ 0x1C0033240 (RaidUnitReady.c)
 *     RaidUnitRestartQueueDpcRoutine @ 0x1C00339D0 (RaidUnitRestartQueueDpcRoutine.c)
 * Callees:
 *     RaidNormalizeDeviceQueue @ 0x1C0001670 (RaidNormalizeDeviceQueue.c)
 *     StorSubmitIoGatewayItem @ 0x1C000319C (StorSubmitIoGatewayItem.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012F80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RaidRestartIoQueue(__int64 a1)
{
  KIRQL v2; // bp
  int v3; // edi
  KSPIN_LOCK *v4; // rax
  KSPIN_LOCK *v5; // rsi
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
  v4 = (KSPIN_LOCK *)RaidNormalizeDeviceQueue(a1 + 400);
  v5 = v4;
  if ( v4 && !StorSubmitIoGatewayItem(*(PKSPIN_LOCK *)(a1 + 408), v4, v6) )
    (*(void (__fastcall **)(_QWORD, KSPIN_LOCK *, _QWORD *))(a1 + 392))(*(_QWORD *)(a1 + 384), v5 - 15, v6);
  if ( !v3 )
    KeLowerIrql(v2);
}
