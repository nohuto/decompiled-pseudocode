/*
 * XREFs of VerifierProbeForWrite @ 0x1406C0BDC
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
