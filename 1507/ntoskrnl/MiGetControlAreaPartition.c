/*
 * XREFs of MiGetControlAreaPartition @ 0x140055BDC
 * Callers:
 *     MiPfPrepareSequentialReadList @ 0x14049D9A0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x14049E0C0 (MiPfPrepareReadList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetControlAreaPartition(__int64 a1)
{
  return MiPartitionIdToPointer(*(_WORD *)(a1 + 60) & 0x3FF);
}
