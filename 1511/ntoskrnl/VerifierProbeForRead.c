/*
 * XREFs of VerifierProbeForRead @ 0x1406C0BD4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall VerifierProbeForRead(volatile void *Address, SIZE_T Length, ULONG Alignment)
{
  pXdvProbeForRead(Address, Length, Alignment);
}
