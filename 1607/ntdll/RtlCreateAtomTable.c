/*
 * XREFs of RtlCreateAtomTable @ 0x1800677C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlCreateAtomTable(ULONG NumberOfBuckets, PVOID *AtomTableHandle)
{
  return RtlCreateAtomTableEx(NumberOfBuckets, AtomTableHandle, AtomTableHandle);
}
