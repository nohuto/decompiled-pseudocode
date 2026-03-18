/*
 * XREFs of MiExchangeWsle @ 0x140106588
 * Callers:
 *     MiSwapWslEntries @ 0x140057020 (MiSwapWslEntries.c)
 * Callees:
 *     MI_READ_PDE @ 0x14006DE04 (MI_READ_PDE.c)
 *     MI_WRITE_VALID_PTE_VOLATILE @ 0x1400B8CFC (MI_WRITE_VALID_PTE_VOLATILE.c)
 *     MiReplaceWsleHash @ 0x1400E5794 (MiReplaceWsleHash.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiExchangeWsle(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, ULONG_PTR a4)
{
  unsigned __int64 v5; // rbx
  volatile signed __int64 *v6; // rbx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h]

  v9 = a2;
  if ( (a2 & 0x800000000000LL) != 0 )
    v5 = a2 | 0xFFFF000000000000uLL;
  else
    v5 = a2 & 0xFFFFFFFFFFFFLL;
  v6 = (volatile signed __int64 *)(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  *(_QWORD *)(a3 * *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 184) + 64LL)
            + *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 184) + 496LL)) = a2;
  if ( (v9 & 8) != 0 )
  {
    v8 = MI_READ_PDE(v6);
    *(_QWORD *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(&v8) - 0x58000000000LL) = a3;
  }
  else
  {
    MiReplaceWsleHash(BugCheckParameter2, v9, a3, a4);
  }
  return MI_WRITE_VALID_PTE_VOLATILE(v6, a3 | 0x80000000LL);
}
