/*
 * XREFs of VerifierProbeForWrite @ 0x14074241C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall VerifierProbeForWrite(volatile void *Address, SIZE_T Length, ULONG Alignment)
{
  pXdvProbeForWrite(Address, Length, Alignment);
}
