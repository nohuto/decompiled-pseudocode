/*
 * XREFs of MiJoinPartition @ 0x140101364
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x14050921C (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

int *__fastcall MiJoinPartition(__int64 a1, __int64 a2)
{
  *(_WORD *)(a2 + 1444) = MiSystemPartition[0];
  return MiSystemPartition;
}
