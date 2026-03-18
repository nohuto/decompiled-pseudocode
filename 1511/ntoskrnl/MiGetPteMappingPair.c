/*
 * XREFs of MiGetPteMappingPair @ 0x1401E4DC8
 * Callers:
 *     MiSlowRotateCopy @ 0x1401D6D90 (MiSlowRotateCopy.c)
 * Callees:
 *     MiAllocateHyperSpace @ 0x14001242C (MiAllocateHyperSpace.c)
 *     MiCreatePteCopyList @ 0x1400BFE3C (MiCreatePteCopyList.c)
 */

ULONG_PTR __fastcall MiGetPteMappingPair(int a1, unsigned __int64 a2)
{
  ULONG_PTR result; // rax
  unsigned __int8 CurrentIrql; // al
  unsigned __int64 HyperSpace; // rax

  if ( a1 != 1 || (result = MiCreatePteCopyList(2uLL, 2uLL, a2), !*(_DWORD *)(a2 + 4)) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    *(_BYTE *)(a2 + 8) = CurrentIrql;
    HyperSpace = MiAllocateHyperSpace(2uLL);
    *(_DWORD *)(a2 + 4) = 2;
    *(_BYTE *)(a2 + 9) = 1;
    result = ((HyperSpace >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(_DWORD *)a2 = 0;
    *(_QWORD *)(a2 + 16) = result;
  }
  return result;
}
