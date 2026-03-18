/*
 * XREFs of MiSessionPoolVector @ 0x1404065D0
 * Callers:
 *     ExpAllocateBigPool @ 0x140041130 (ExpAllocateBigPool.c)
 *     ExAllocatePoolWithTagPriority @ 0x140041DC0 (ExAllocatePoolWithTagPriority.c)
 *     ExFreeLargePool @ 0x1400892D0 (ExFreeLargePool.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 * Callees:
 *     <none>
 */

unsigned __int64 MiSessionPoolVector()
{
  return KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3264;
}
