/*
 * XREFs of ESM_SmWorker @ 0x1C0039F70
 * Callers:
 *     <none>
 * Callees:
 *     ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x1C00394F8 (ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState.c)
 *     ESM_RunStateMachine @ 0x1C0039CE8 (ESM_RunStateMachine.c)
 */

void __fastcall ESM_SmWorker(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  int v3; // ebx
  KIRQL NewIrql; // [rsp+38h] [rbp+10h] BYREF

  v3 = ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState((unsigned int *)Context);
  NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 105);
  ESM_RunStateMachine((unsigned __int8 *)Context, v3, &NewIrql);
  KeReleaseSpinLock((PKSPIN_LOCK)Context + 105, NewIrql);
}
