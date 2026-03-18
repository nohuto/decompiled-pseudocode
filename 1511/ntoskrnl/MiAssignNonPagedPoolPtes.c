/*
 * XREFs of MiAssignNonPagedPoolPtes @ 0x1400D22E0
 * Callers:
 *     MiAllocatePoolPages @ 0x140040F90 (MiAllocatePoolPages.c)
 * Callees:
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MiChangePageAttribute @ 0x1400AA634 (MiChangePageAttribute.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1401D3510 (MiLogPerfMemoryRangeEvent.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiAssignNonPagedPoolPtes(unsigned __int64 a1, unsigned __int64 a2, __int16 a3, __int64 a4)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // r13
  __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  unsigned int v8; // r12d
  unsigned __int64 v9; // rbx
  unsigned int v10; // ebp
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r14
  unsigned __int8 CurrentIrql; // r15
  unsigned __int64 v16; // rax
  __int64 result; // rax
  int v20; // [rsp+80h] [rbp+18h] BYREF
  unsigned int v21; // [rsp+88h] [rbp+20h]

  v4 = a1;
  v5 = a2;
  v6 = a4;
  v7 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = 0;
  v9 = MiMakeValidKernelPte(-1LL, ~HIBYTE(a3) & 2 | 4u, v7, a4) | 0x42;
  if ( v5 )
  {
    do
    {
      v10 = (4096 - (v7 & 0xFFF)) >> 3;
      if ( v10 > v5 - v8 )
        v10 = v5 - v8;
      v21 = v10 + v8;
      do
      {
        v9 ^= (v9 ^ (((v6 + 0x58000000000LL) / 48) << 12)) & 0xFFFFFFFFF000LL;
        if ( (*(_BYTE *)(v6 + 35) & 0x10) == 0 )
        {
          *(_QWORD *)(v6 + 40) &= ~0x200000000000000uLL;
          *(_QWORD *)(v6 + 16) = 128LL;
          *(_WORD *)(v6 + 32) = 1;
        }
        v11 = MI_READ_PTE_LOCK_FREE(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v14 = *(_QWORD *)v6;
        *(_QWORD *)(v6 + 40) ^= (*(_QWORD *)(v6 + 40) ^ (v11 >> 12)) & 0xFFFFFFFFFLL;
        *(_QWORD *)v6 = 0LL;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v20 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v20, v12, v13);
          while ( (*(_QWORD *)(v6 + 24) & 0x8000000000000000uLL) != 0 );
        }
        if ( (*(_QWORD *)(v6 + 40) & 0xFFFFFFFFFLL) == 0xFFFFFFFFELL )
          *(_QWORD *)(v6 + 40) &= 0xFFFFFFF000000000uLL;
        if ( (*(_BYTE *)(v6 + 34) & 0xC0) != 0x40 )
          MiChangePageAttribute(v6, 1, 1u);
        v16 = *(_QWORD *)(v6 + 24) & 0xC000000000000001uLL;
        *(_WORD *)(v6 + 32) = 1;
        *(_QWORD *)(v6 + 8) = v7;
        *(_QWORD *)(v6 + 24) = v16 | 1;
        *(_BYTE *)(v6 + 34) = *(_BYTE *)(v6 + 34) & 0xF8 | 6;
        _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(CurrentIrql);
        *(_QWORD *)v7 = v9;
        if ( (unsigned int)MiPteInShadowRange(v7) )
          MiWritePteShadow(v7, v9);
        v7 += 8LL;
        v6 = v14;
        --v10;
      }
      while ( v10 );
      v8 = v21;
      v5 = a2;
    }
    while ( v21 < a2 );
    v4 = a1;
  }
  result = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    return MiLogPerfMemoryRangeEvent(v4, 0LL, 11LL, v5);
  return result;
}
