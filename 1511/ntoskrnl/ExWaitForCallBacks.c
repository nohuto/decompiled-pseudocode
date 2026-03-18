/*
 * XREFs of ExWaitForCallBacks @ 0x14066C12C
 * Callers:
 *     IoUnregisterPriorityCallback @ 0x1401BB52C (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x1401C3BD4 (KeDeregisterBoundCallback.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ExWaitForCallBacks(PEX_RUNDOWN_REF RunRef)
{
  ExWaitForRundownProtectionRelease(RunRef);
}
