/*
 * XREFs of ExWaitForCallBacks @ 0x1406AFD38
 * Callers:
 *     IoUnregisterPriorityCallback @ 0x1401C91C8 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x1401D259C (KeDeregisterBoundCallback.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ExWaitForCallBacks(PEX_RUNDOWN_REF RunRef)
{
  ExWaitForRundownProtectionRelease(RunRef);
}
