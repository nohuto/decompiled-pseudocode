/*
 * XREFs of MiSessionPoolVector @ 0x14041BF20
 * Callers:
 *     ExFreeLargePool @ 0x140010BE0 (ExFreeLargePool.c)
 *     ExpAllocateBigPool @ 0x140011AD0 (ExpAllocateBigPool.c)
 *     ExAllocatePoolWithTagPriority @ 0x14007E210 (ExAllocatePoolWithTagPriority.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 * Callees:
 *     <none>
 */

unsigned __int64 MiSessionPoolVector()
{
  return KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3392;
}
