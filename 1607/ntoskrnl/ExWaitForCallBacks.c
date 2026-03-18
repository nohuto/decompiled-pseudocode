/*
 * XREFs of ExWaitForCallBacks @ 0x1406AFC00
 * Callers:
 *     IoUnregisterPriorityCallback @ 0x1401C9328 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x1401D2770 (KeDeregisterBoundCallback.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ExWaitForCallBacks(PEX_RUNDOWN_REF RunRef)
{
  ExWaitForRundownProtectionRelease(RunRef);
}
