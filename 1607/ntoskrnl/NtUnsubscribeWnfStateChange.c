/*
 * XREFs of NtUnsubscribeWnfStateChange @ 0x1404C1CA8
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     ExpCaptureWnfStateName @ 0x140462514 (ExpCaptureWnfStateName.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x1404C1D4C (ExpWnfAcquireSubscriptionByName.c)
 *     ExpWnfDeleteSubscription @ 0x1404C1E2C (ExpWnfDeleteSubscription.c)
 */

__int64 __fastcall NtUnsubscribeWnfStateChange(unsigned __int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v2; // ebx
  struct _SINGLE_LIST_ENTRY *Next; // rdx
  unsigned __int64 v5; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = ExpCaptureWnfStateName(a1, &v5, KeGetCurrentThread()->PreviousMode);
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
  return (unsigned int)v2;
}
