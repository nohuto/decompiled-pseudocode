/*
 * XREFs of MiGetVmPartition @ 0x1401E8344
 * Callers:
 *     MiCommitEnclavePages @ 0x14065E734 (MiCommitEnclavePages.c)
 *     MiCopyPagesIntoEnclave @ 0x14065E84C (MiCopyPagesIntoEnclave.c)
 *     MiCreateEnclave @ 0x14065EF30 (MiCreateEnclave.c)
 * Callees:
 *     <none>
 */

int *__fastcall MiGetVmPartition(__int64 a1)
{
  return MiPartitionIdToPointer(*(_WORD *)(a1 + 164));
}
