/*
 * XREFs of RtlCreateAtomTable @ 0x1800443B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlCreateAtomTable(ULONG NumberOfBuckets, PVOID *AtomTableHandle)
{
  return RtlCreateAtomTableEx(NumberOfBuckets, (__int64)AtomTableHandle, AtomTableHandle);
}
