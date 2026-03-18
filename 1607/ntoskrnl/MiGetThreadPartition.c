/*
 * XREFs of MiGetThreadPartition @ 0x1401E8330
 * Callers:
 *     NtSetSystemInformation @ 0x1403E9F6C (NtSetSystemInformation.c)
 * Callees:
 *     <none>
 */

int *__fastcall MiGetThreadPartition(__int64 a1)
{
  return MiPartitionIdToPointer(*(_WORD *)(*(_QWORD *)(a1 + 184) + 1444LL));
}
