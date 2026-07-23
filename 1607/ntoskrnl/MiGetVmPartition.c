/*
 * XREFs of MiGetVmPartition @ 0x1401E8170
 * Callers:
 *     MiCommitEnclavePages @ 0x14065E818 (MiCommitEnclavePages.c)
 *     MiCopyPagesIntoEnclave @ 0x14065E930 (MiCopyPagesIntoEnclave.c)
 *     MiCreateEnclave @ 0x14065F014 (MiCreateEnclave.c)
 * Callees:
 *     <none>
 */

int *__fastcall MiGetVmPartition(__int64 a1)
{
  return MiPartitionIdToPointer(*(_WORD *)(a1 + 164));
}
