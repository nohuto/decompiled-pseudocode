/*
 * XREFs of MiAllocateHyperSpace @ 0x14001242C
 * Callers:
 *     MiCopyPage @ 0x1400701E0 (MiCopyPage.c)
 *     MiGetPteMappingPair @ 0x1401E4DC8 (MiGetPteMappingPair.c)
 * Callees:
 *     MiFlushHyperSpace @ 0x140010528 (MiFlushHyperSpace.c)
 */

unsigned __int64 __fastcall MiAllocateHyperSpace(unsigned __int64 a1)
{
  unsigned __int64 HyperPte; // rbx
  unsigned __int64 result; // rax

  HyperPte = (unsigned __int64)KeGetCurrentPrcb()->HyperPte;
  if ( 64 - (HyperPte & 0xFFF) <= a1 )
  {
    MiFlushHyperSpace();
    HyperPte &= 0xFFFFFFFFFFFFF000uLL;
    result = HyperPte;
  }
  else
  {
    result = (HyperPte & 0xFFFFFFFFFFFFF000uLL) + ((HyperPte & 0xFFF) << 12);
  }
  KeGetCurrentPrcb()->HyperPte = (void *)(HyperPte + a1);
  return result;
}
