/*
 * XREFs of MiAssignNonPagedPoolPtes @ 0x14001AF80
 * Callers:
 *     ExpAllocateBigPool @ 0x140011650 (ExpAllocateBigPool.c)
 *     MiAllocatePoolPages @ 0x14009D3EC (MiAllocatePoolPages.c)
 * Callees:
 *     MiSetPfnOwnedAndActive @ 0x14001B1C0 (MiSetPfnOwnedAndActive.c)
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1401E340C (MiLogPerfMemoryRangeEvent.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiAssignNonPagedPoolPtes(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 *a4)
{
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r14
  unsigned int v8; // r9d
  __int64 DemandZeroPte; // rdi
  unsigned int v10; // r12d
  __int64 v11; // rbx
  unsigned int v12; // ebp
  __int64 v13; // rax
  __int64 *v14; // r15
  __int64 v15; // r10
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 result; // rax
  unsigned int v21; // [rsp+80h] [rbp+18h]

  v5 = a2;
  v6 = a1;
  v7 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  DemandZeroPte = MiMakeDemandZeroPte(4LL, a2, a3, ~BYTE1(a3) & 2 | 4u);
  v10 = 0;
  v11 = MiMakeValidKernelPte(-1LL, v8, v7) | 0x42;
  if ( v5 )
  {
    do
    {
      v12 = (4096 - (v7 & 0xFFF)) >> 3;
      if ( v12 > v5 - v10 )
        v12 = v5 - v10;
      v21 = v12 + v10;
      do
      {
        v11 ^= (v11 ^ (((__int64)(a4 + 0xB000000000LL) / 48) << 12)) & 0xFFFFFFFFF000LL;
        if ( (*((_BYTE *)a4 + 35) & 0x10) == 0 )
        {
          a4[5] &= ~0x200000000000000uLL;
          a4[2] = DemandZeroPte;
          *((_WORD *)a4 + 16) = 1;
        }
        v13 = MI_GET_PAGE_FRAME_FROM_PTE(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v14 = (__int64 *)*a4;
        a4[5] ^= v15 & (a4[5] ^ v13);
        *a4 = 0LL;
        MiSetPfnOwnedAndActive((_DWORD)a4, 0, v7, 1, 1);
        *(_QWORD *)v7 = v11;
        if ( (unsigned int)MiPteInShadowRange(v7, v16) )
          MiWritePteShadow(v17, v11);
        v7 += 8LL;
        a4 = v14;
        --v12;
      }
      while ( v12 );
      v10 = v21;
      v5 = a2;
    }
    while ( v21 < a2 );
    v6 = a1;
  }
  result = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    return MiLogPerfMemoryRangeEvent(v6, 0LL, 11LL, v5);
  return result;
}
