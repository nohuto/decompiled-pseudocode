/*
 * XREFs of VerifierIoReplacePartitionUnit @ 0x1406C0824
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierIoReplacePartitionUnit(PDEVICE_OBJECT TargetPdo, PDEVICE_OBJECT SparePdo, ULONG Flags)
{
  return pXdvIoReplacePartitionUnit(TargetPdo, SparePdo, Flags);
}
