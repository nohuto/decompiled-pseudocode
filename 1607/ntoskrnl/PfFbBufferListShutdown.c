/*
 * XREFs of PfFbBufferListShutdown @ 0x1401FEFC4
 * Callers:
 *     PfTCleanup @ 0x140669770 (PfTCleanup.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall PfFbBufferListShutdown(PEX_RUNDOWN_REF RunRef)
{
  ExWaitForRundownProtectionRelease(RunRef);
}
