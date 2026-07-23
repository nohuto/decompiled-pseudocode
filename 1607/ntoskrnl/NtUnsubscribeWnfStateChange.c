/*
 * XREFs of NtUnsubscribeWnfStateChange @ 0x1404AD9D8
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     ExpCaptureWnfStateName @ 0x1404613E4 (ExpCaptureWnfStateName.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x1404ADA7C (ExpWnfAcquireSubscriptionByName.c)
 *     ExpWnfDeleteSubscription @ 0x1404ADB5C (ExpWnfDeleteSubscription.c)
 */

NTSTATUS __cdecl NtUnsubscribeWnfStateChange(PCWNF_STATE_NAME StateName)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v2; // ebx
  struct _SINGLE_LIST_ENTRY *Next; // rdx
  unsigned __int64 v5; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = ExpCaptureWnfStateName((unsigned __int64)StateName, &v5, KeGetCurrentThread()->PreviousMode);
  if ( v2 >= 0 )
  {
    Next = KeGetCurrentThread()->ApcState.Process[2].SwapListEntry.Next;
    if ( Next )
    {
      v2 = ExpWnfAcquireSubscriptionByName(v5, Next, &P);
      if ( v2 >= 0 )
      {
        ExpWnfDeleteSubscription(P);
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
