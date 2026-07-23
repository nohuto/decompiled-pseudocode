/*
 * XREFs of MiExchangeWsle @ 0x1400AFDA8
 * Callers:
 *     MiSwapWslEntries @ 0x1400499F0 (MiSwapWslEntries.c)
 * Callees:
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     MI_READ_PDE @ 0x1400E3E10 (MI_READ_PDE.c)
 *     MiWriteValidPteVolatile @ 0x1400FCE74 (MiWriteValidPteVolatile.c)
 *     MiReplaceWsleHash @ 0x1400FCEC4 (MiReplaceWsleHash.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiExchangeWsle(__int64 a1, char a2, __int64 a3)
{
  ULONG_PTR *SharedWorkingSetList; // rax
  __int64 v5; // rdx
  ULONG_PTR v6; // r10
  unsigned __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  SharedWorkingSetList = MiGetSharedWorkingSetList(a1);
  if ( (v5 & 0x800000000000LL) != 0 )
    v7 = v5 | 0xFFFF000000000000uLL;
  else
    v7 = v5 & 0xFFFFFFFFFFFFLL;
  v8 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(a3 * *((unsigned int *)SharedWorkingSetList + 8) + SharedWorkingSetList[10]) = v5;
  if ( (a2 & 8) != 0 )
  {
    v11 = MI_READ_PDE(v8);
    *(_QWORD *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(&v11) - 0x58000000000LL) = a3;
  }
  else
  {
    MiReplaceWsleHash(v6);
  }
  return MiWriteValidPteVolatile(v8, a3 | 0x80000000LL);
}
