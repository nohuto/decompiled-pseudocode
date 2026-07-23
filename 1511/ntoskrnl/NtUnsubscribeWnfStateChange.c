/*
 * XREFs of NtUnsubscribeWnfStateChange @ 0x1403E24A8
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ExpWnfDeleteSubscription @ 0x1403E2034 (ExpWnfDeleteSubscription.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x1403E254C (ExpWnfAcquireSubscriptionByName.c)
 *     ExpCaptureWnfStateName @ 0x1403E5210 (ExpCaptureWnfStateName.c)
 */

NTSTATUS __cdecl NtUnsubscribeWnfStateChange(PCWNF_STATE_NAME StateName)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v2; // ebx
  _KPROCESS *Process; // rdi
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = ExpCaptureWnfStateName(StateName, &v6);
  if ( v2 >= 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    Flink = Process[2].ReadyListHead.Flink;
    if ( Flink )
    {
      v2 = ExpWnfAcquireSubscriptionByName(v6, Flink, &P);
      if ( v2 >= 0 )
      {
        ExpWnfDeleteSubscription((struct _EX_RUNDOWN_REF *)P, Process);
        v2 = 0;
      }
    }
    else
    {
      v2 = -1073741772;
    }
  }
  KeLeaveCriticalRegion();
  return v2;
}
