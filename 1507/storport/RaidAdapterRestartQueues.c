/*
 * XREFs of RaidAdapterRestartQueues @ 0x1C0010C48
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0002480 (RaidUnitCompleteRequest.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0005C7C (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidAdapterDeferredRoutine @ 0x1C0012790 (RaidAdapterDeferredRoutine.c)
 *     RaidAdapterSetPauseTimer @ 0x1C0012D20 (RaidAdapterSetPauseTimer.c)
 *     RaidPauseTimerDpcRoutine @ 0x1C0012D70 (RaidPauseTimerDpcRoutine.c)
 *     RaidAdapterCancelPauseTimer @ 0x1C002110C (RaidAdapterCancelPauseTimer.c)
 *     RaidAdapterRestartDpcRoutine @ 0x1C0022680 (RaidAdapterRestartDpcRoutine.c)
 *     RaidCompletionDpcRoutine @ 0x1C00238C0 (RaidCompletionDpcRoutine.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C0024998 (RaidResumeAndRestartAdapterQueues.c)
 *     StorPortAdapterActiveCondition @ 0x1C002C1E0 (StorPortAdapterActiveCondition.c)
 * Callees:
 *     RaidRestartIoQueue @ 0x1C0009DF8 (RaidRestartIoQueue.c)
 *     StorNextIoGatewayItem @ 0x1C0010CD4 (StorNextIoGatewayItem.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012F80 (_guard_dispatch_icall_nop.c)
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
