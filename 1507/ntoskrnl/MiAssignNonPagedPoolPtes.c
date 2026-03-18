/*
 * XREFs of MiAssignNonPagedPoolPtes @ 0x14010B830
 * Callers:
 *     MiAllocatePoolPages @ 0x140046C90 (MiAllocatePoolPages.c)
 * Callees:
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiChangePageAttribute @ 0x1400E5678 (MiChangePageAttribute.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiAssignNonPagedPoolPtes(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // r15
  __int64 DemandZeroPte; // rdi
  __int64 v7; // rdx
  __int64 v8; // r9
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rbx
  unsigned int v11; // edx
  __int64 v12; // rbx
  unsigned int v13; // r10d
  __int64 v14; // r11
  unsigned int v15; // r13d
  unsigned __int64 *v16; // r8
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbp
  __int64 v22; // rdx
  unsigned __int8 CurrentIrql; // r12
  unsigned int v24; // esi
  unsigned __int64 v25; // rax
  __int64 result; // rax
  unsigned int v29; // [rsp+70h] [rbp+18h]

  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  DemandZeroPte = MiMakeDemandZeroPte(4LL);
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v5) )
    v7 |= 0x100uLL;
  v10 = v7 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8);
  v11 = 0;
  v12 = v10 | 0x42;
  if ( v8 )
  {
    v13 = 1;
    v14 = 0xFFFFFFFFFLL;
    do
    {
      v15 = (4096 - (v5 & 0xFFF)) >> 3;
      if ( v15 > v8 - (unsigned __int64)v11 )
        v15 = v8 - v11;
      v29 = v15 + v11;
      do
      {
        v12 ^= (v12 ^ (((a4 + 0x58000000000LL) / 48) << 12)) & 0xFFFFFFFFF000LL;
        if ( (*(_BYTE *)(a4 + 35) & 0x10) == 0 )
        {
          *(_QWORD *)(a4 + 40) &= ~0x200000000000000uLL;
          *(_QWORD *)(a4 + 16) = DemandZeroPte;
          *(_WORD *)(a4 + 32) = v13;
        }
        v16 = (unsigned __int64 *)(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v17 = *v16;
        if ( (unsigned __int64)(v16 + 0x12090482600LL) <= 0x7F8
          && (unsigned int)MiPteHasShadow(a4 + 0x58000000000LL, v17)
          && (v17 & 1) != 0
          && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
        {
          v19 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( v19 )
          {
            v20 = *(_QWORD *)(v19 + 8 * ((v18 >> 3) & 0x1FF));
            if ( (v20 & 0x20) != 0 )
              v17 |= 0x20uLL;
            if ( (v20 & 0x42) != 0 )
              v17 |= 0x42uLL;
          }
        }
        v21 = *(_QWORD *)a4;
        v22 = v14 & (*(_QWORD *)(a4 + 40) ^ (v17 >> 12));
        *(_QWORD *)a4 = 0LL;
        *(_QWORD *)(a4 + 40) ^= v22;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v24 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(a4 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v24 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v24);
          }
          while ( (*(_QWORD *)(a4 + 24) & 0x8000000000000000uLL) != 0
               || _interlockedbittestandset64((volatile signed __int32 *)(a4 + 24), 0x3FuLL) );
          v13 = 1;
          v14 = 0xFFFFFFFFFLL;
        }
        if ( (v14 & *(_QWORD *)(a4 + 40)) == 0xFFFFFFFFELL )
          *(_QWORD *)(a4 + 40) &= 0xFFFFFFF000000000uLL;
        if ( (*(_BYTE *)(a4 + 34) & 0xC0) != 0x40 )
        {
          MiChangePageAttribute(a4, v13, v13, v8);
          v13 = 1;
        }
        v25 = *(_QWORD *)(a4 + 24) & 0xC000000000000001uLL;
        *(_WORD *)(a4 + 32) = v13;
        *(_QWORD *)(a4 + 8) = v5;
        *(_QWORD *)(a4 + 24) = v25 | 1;
        *(_BYTE *)(a4 + 34) = *(_BYTE *)(a4 + 34) & 0xF8 | 6;
        _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(CurrentIrql);
        *(_QWORD *)v5 = v12;
        if ( v5 + 0x90482413000LL <= 0x7F8 )
        {
          MiWritePteShadow(v5, v12);
          v13 = 1;
        }
        v5 += 8LL;
        a4 = v21;
        v14 = 0xFFFFFFFFFLL;
        --v15;
      }
      while ( v15 );
      v11 = v29;
      v8 = a2;
    }
    while ( v29 < a2 );
    v9 = a1;
  }
  result = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    return MiLogPerfMemoryRangeEvent(v9, 0LL, 11LL, v8);
  return result;
}
