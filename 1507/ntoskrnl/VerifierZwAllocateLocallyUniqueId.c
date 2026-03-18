/*
 * XREFs of VerifierZwAllocateLocallyUniqueId @ 0x140742554
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierZwAllocateLocallyUniqueId(PLUID Luid)
{
  return pXdvZwAllocateLocallyUniqueId(Luid);
}
