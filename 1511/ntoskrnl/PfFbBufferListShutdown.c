/*
 * XREFs of PfFbBufferListShutdown @ 0x1401E6624
 * Callers:
 *     PfTCleanup @ 0x14063154C (PfTCleanup.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall PfFbBufferListShutdown(PEX_RUNDOWN_REF RunRef)
{
  ExWaitForRundownProtectionRelease(RunRef);
}
