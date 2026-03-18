/*
 * XREFs of HUBSM_EvtSmWorkItem @ 0x1C0009B90
 * Callers:
 *     <none>
 * Callees:
 *     HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x1C00094AC (HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState.c)
 *     HUBSM_RunStateMachine @ 0x1C000A018 (HUBSM_RunStateMachine.c)
 */

void __fastcall HUBSM_EvtSmWorkItem(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v3; // rdi
  unsigned int v4; // ebx
  KIRQL v5; // al
  __int64 v6; // r9
  KIRQL NewIrql; // [rsp+38h] [rbp+10h] BYREF

  v3 = (KSPIN_LOCK *)(a2 + 840);
  v4 = HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState(a2);
  v5 = KeAcquireSpinLockRaiseToDpc(v3);
  LOBYTE(v6) = 1;
  NewIrql = v5;
  HUBSM_RunStateMachine(a2, v4, &NewIrql, v6);
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 840), NewIrql);
}
