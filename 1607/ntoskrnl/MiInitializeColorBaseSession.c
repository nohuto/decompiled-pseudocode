/*
 * XREFs of MiInitializeColorBaseSession @ 0x1400B3A88
 * Callers:
 *     MiInitializeColorBase @ 0x1401029C4 (MiInitializeColorBase.c)
 *     MmAllocateSpecialPool @ 0x1401EBAE0 (MmAllocateSpecialPool.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializeColorBaseSession(__int64 a1)
{
  return MiInitializePageColorBase(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008, 0LL, a1);
}
