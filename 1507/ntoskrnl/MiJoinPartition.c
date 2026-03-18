/*
 * XREFs of MiJoinPartition @ 0x14006B09C
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1404A2834 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int16 *__fastcall MiJoinPartition(__int64 a1, __int64 a2)
{
  *(_WORD *)(a2 + 1452) = MiSystemPartition[0];
  return MiSystemPartition;
}
