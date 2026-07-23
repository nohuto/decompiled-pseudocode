/*
 * XREFs of PfFbBufferListShutdown @ 0x1401FEDF0
 * Callers:
 *     PfTCleanup @ 0x140669854 (PfTCleanup.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall PfFbBufferListShutdown(PEX_RUNDOWN_REF RunRef)
{
  ExWaitForRundownProtectionRelease(RunRef);
}
