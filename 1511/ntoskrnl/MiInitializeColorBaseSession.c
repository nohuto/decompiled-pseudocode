/*
 * XREFs of MiInitializeColorBaseSession @ 0x140019BD4
 * Callers:
 *     MiGetPageTablePages @ 0x1400185B8 (MiGetPageTablePages.c)
 *     MmAllocateSpecialPool @ 0x1401DAD04 (MmAllocateSpecialPool.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializeColorBaseSession(__int64 a1)
{
  return MI_INITIALIZE_COLOR_BASE(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 2968, 0LL, a1);
}
