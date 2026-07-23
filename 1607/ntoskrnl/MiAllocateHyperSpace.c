/*
 * XREFs of MiAllocateHyperSpace @ 0x14009D96C
 * Callers:
 *     MiCopyPage @ 0x1400E1100 (MiCopyPage.c)
 *     MiGetPteMappingPair @ 0x1401FCA20 (MiGetPteMappingPair.c)
 * Callees:
 *     MiFlushHyperSpace @ 0x14009D9E8 (MiFlushHyperSpace.c)
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
