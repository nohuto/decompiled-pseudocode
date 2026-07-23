/*
 * XREFs of MiGetThreadPartition @ 0x1401E815C
 * Callers:
 *     NtSetSystemInformation @ 0x1403EB59C (NtSetSystemInformation.c)
 * Callees:
 *     <none>
 */

int *__fastcall MiGetThreadPartition(__int64 a1)
{
  return MiPartitionIdToPointer(*(_WORD *)(*(_QWORD *)(a1 + 184) + 1444LL));
}
