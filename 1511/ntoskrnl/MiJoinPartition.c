/*
 * XREFs of MiJoinPartition @ 0x140018A58
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1403CB7AC (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

int *__fastcall MiJoinPartition(__int64 a1, __int64 a2)
{
  *(_WORD *)(a2 + 1460) = MiSystemPartition;
  return &MiSystemPartition;
}
