/*
 * XREFs of MiInitializeColorBaseSession @ 0x1400B1908
 * Callers:
 *     MiInitializeColorBase @ 0x140100744 (MiInitializeColorBase.c)
 *     MmAllocateSpecialPool @ 0x1401EB90C (MmAllocateSpecialPool.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializeColorBaseSession(__int64 a1)
{
  return MiInitializePageColorBase(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008, 0LL, a1);
}
