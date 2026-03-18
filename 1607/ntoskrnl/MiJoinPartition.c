/*
 * XREFs of MiJoinPartition @ 0x1401035E4
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1405261BC (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

int *__fastcall MiJoinPartition(__int64 a1, __int64 a2)
{
  *(_WORD *)(a2 + 1444) = MiSystemPartition[0];
  return MiSystemPartition;
}
