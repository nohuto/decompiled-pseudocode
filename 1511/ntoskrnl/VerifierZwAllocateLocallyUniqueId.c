/*
 * XREFs of VerifierZwAllocateLocallyUniqueId @ 0x1406C0D14
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
