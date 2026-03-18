/*
 * XREFs of MiInitializeColorBaseSession @ 0x14012F804
 * Callers:
 *     MiInitializeColorBase @ 0x14006AB5C (MiInitializeColorBase.c)
 *     MmAllocateSpecialPool @ 0x14021F6C4 (MmAllocateSpecialPool.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall MiInitializeColorBaseSession(__int64 a1)
{
  return MI_INITIALIZE_COLOR_BASE(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 2968, 0, a1);
}
