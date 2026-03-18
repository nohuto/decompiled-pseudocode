/*
 * XREFs of MiGetControlAreaPartition @ 0x1400AA0F4
 * Callers:
 *     MiCreateSectionForDriver @ 0x1403CC5FC (MiCreateSectionForDriver.c)
 *     MiPfPrepareSequentialReadList @ 0x14042CB00 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x14042D190 (MiPfPrepareReadList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetControlAreaPartition(__int64 a1)
{
  return MiPartitionIdToPointer(*(_WORD *)(a1 + 60) & 0x3FF);
}
