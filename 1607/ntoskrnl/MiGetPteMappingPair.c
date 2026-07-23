/*
 * XREFs of MiGetPteMappingPair @ 0x1401FCA20
 * Callers:
 *     MiSlowRotateCopy @ 0x1401E8874 (MiSlowRotateCopy.c)
 * Callees:
 *     MiAllocateHyperSpace @ 0x14009D96C (MiAllocateHyperSpace.c)
 *     MiCreatePteCopyList @ 0x140104EF8 (MiCreatePteCopyList.c)
 */

ULONG_PTR __fastcall MiGetPteMappingPair(int a1, unsigned __int64 a2)
{
  ULONG_PTR result; // rax
  unsigned __int8 CurrentIrql; // al

  if ( a1 != 1 || (result = MiCreatePteCopyList(2uLL, 2uLL, a2), !*(_DWORD *)(a2 + 4)) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    *(_BYTE *)(a2 + 8) = CurrentIrql;
    result = ((MiAllocateHyperSpace(2uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(_DWORD *)(a2 + 4) = 2;
    *(_DWORD *)a2 = 0;
    *(_QWORD *)(a2 + 16) = result;
    *(_BYTE *)(a2 + 9) = 1;
  }
  return result;
}
