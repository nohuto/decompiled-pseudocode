/*
 * XREFs of RaidAdapterRestartQueues @ 0x1C00131A0
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C00016A0 (RaidUnitCompleteRequest.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C000792C (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidAdapterDeferredRoutine @ 0x1C00147E0 (RaidAdapterDeferredRoutine.c)
 *     RaidAdapterSetPauseTimer @ 0x1C0014E40 (RaidAdapterSetPauseTimer.c)
 *     RaidPauseTimerDpcRoutine @ 0x1C0014E90 (RaidPauseTimerDpcRoutine.c)
 *     RaidAdapterCancelPauseTimer @ 0x1C00234C8 (RaidAdapterCancelPauseTimer.c)
 *     RaidAdapterRestartDpcRoutine @ 0x1C0024BC0 (RaidAdapterRestartDpcRoutine.c)
 *     RaidCompletionDpcRoutine @ 0x1C0025D20 (RaidCompletionDpcRoutine.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C0026E38 (RaidResumeAndRestartAdapterQueues.c)
 *     StorPortAdapterActiveCondition @ 0x1C002DF50 (StorPortAdapterActiveCondition.c)
 * Callees:
 *     RaidRestartIoQueue @ 0x1C000C030 (RaidRestartIoQueue.c)
 *     StorNextIoGatewayItem @ 0x1C001322C (StorNextIoGatewayItem.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015B60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RaidAdapterRestartQueues(__int64 a1)
{
  __int64 IoGatewayItem; // rax
  _QWORD **v3; // rdi
  _QWORD *i; // rbx
  __int64 v5; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v7[48]; // [rsp+38h] [rbp-30h] BYREF

  while ( 1 )
  {
    IoGatewayItem = StorNextIoGatewayItem((PKSPIN_LOCK)(a1 + 768));
    if ( !IoGatewayItem )
      break;
    v5 = *(_QWORD *)(*(_QWORD *)(IoGatewayItem - 120 + 184) + 32LL);
    (*(void (__fastcall **)(_QWORD, __int64, _BYTE *))(v5 + 392))(*(_QWORD *)(v5 + 384), IoGatewayItem - 120, v7);
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 112), &LockHandle);
  v3 = (_QWORD **)(a1 + 120);
  for ( i = *v3; i != v3; i = (_QWORD *)*i )
    RaidRestartIoQueue((__int64)(i - 6));
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
