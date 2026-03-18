/*
 * XREFs of MiOutPageSingleKernelStack @ 0x1400EE63C
 * Callers:
 *     <none>
 * Callees:
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MiPfnShareCountIsZero @ 0x1400B2270 (MiPfnShareCountIsZero.c)
 *     MiLockAndDecrementShareCount @ 0x1400EF4F4 (MiLockAndDecrementShareCount.c)
 *     MiOutSwapKernelStackPage @ 0x14012C700 (MiOutSwapKernelStackPage.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 *     MiMakeTransitionPte @ 0x140225DF4 (MiMakeTransitionPte.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiOutPageSingleKernelStack(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r14
  unsigned int v7; // edi
  signed __int32 i; // edx
  __int64 v9; // rbp
  __int16 *v10; // rax
  __int64 v11; // rdx
  __int64 Process; // rcx
  __int64 v13; // r15
  volatile signed __int32 *v14; // rdi
  unsigned int v15; // esi
  __int64 v16; // r9
  __int64 v17; // r8
  unsigned __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 TransitionPte; // rax
  __int64 v25; // r9
  unsigned __int64 v26; // r15
  unsigned __int64 v27; // r12
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdi
  unsigned int v34; // ebp
  __int64 v35; // rsi
  __int64 v36; // r14
  __int64 v37; // rax
  unsigned __int64 v38; // r8
  __int64 v39; // rax
  bool v40; // zf
  __int64 v41; // r8
  int IsZero; // eax
  unsigned int v43; // edi
  __int64 v45; // [rsp+30h] [rbp-78h]
  __int64 DemandZeroPte; // [rsp+38h] [rbp-70h]
  __int16 *v47; // [rsp+40h] [rbp-68h]
  unsigned __int64 v48; // [rsp+48h] [rbp-60h]
  unsigned __int8 CurrentIrql; // [rsp+58h] [rbp-50h]
  void *retaddr; // [rsp+A8h] [rbp+0h]
  __int64 v51; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v52; // [rsp+B8h] [rbp+10h]
  __int64 v53; // [rsp+C0h] [rbp+18h]
  __int64 v54; // [rsp+C8h] [rbp+20h]

  v53 = a3;
  v5 = (((unsigned __int64)(*a2 - 4096LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v48 = (((unsigned __int64)(a2[2] - 8LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = v48;
  v54 = (__int64)(v48 << 25) >> 16;
  v45 = ((a2[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL;
  v52 = (unsigned int)((__int64)(v5 - v48) >> 3) + 1;
  DemandZeroPte = MiMakeDemandZeroPte(31LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(dword_14034FF40);
  }
  else
  {
    v7 = 0;
    if ( _interlockedbittestandset(dword_14034FF40, 0x1Fu) )
      v7 = ExpWaitForSpinLockExclusiveAndAcquire(dword_14034FF40);
    for ( i = dword_14034FF40[0]; (dword_14034FF40[0] & 0xBFFFFFFF) != 0x80000000; i = dword_14034FF40[0] )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(dword_14034FF40, i | 0x40000000, i);
      if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v7);
    }
  }
  *(_QWORD *)(a2[2] - 8LL) = a1;
  v9 = *(_QWORD *)(a1 + 544);
  v10 = MiPartitionIdToPointer(*(_WORD *)(v9 + 1452));
  v13 = 0LL;
  v47 = v10;
  if ( *(_QWORD *)(v9 + 1504) > 2uLL )
  {
    v14 = (volatile signed __int32 *)(v10 + 512);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v10 + 512);
    }
    else
    {
      v15 = 0;
      if ( _interlockedbittestandset(v14, 0x1Fu) )
        v15 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)v10 + 256);
      v11 = *(unsigned int *)v14;
      Process = v11 & 0xFFFFFFFFBFFFFFFFuLL;
      if ( (v11 & 0xBFFFFFFF) != 0x80000000 )
      {
        do
        {
          if ( (v11 & 0x40000000) == 0 )
          {
            Process = (unsigned int)v11 | 0x40000000;
            _InterlockedCompareExchange(v14, Process, v11);
          }
          if ( (++v15 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v15);
          v11 = *(unsigned int *)v14;
        }
        while ( (*v14 & 0xBFFFFFFF) != 0x80000000 );
      }
    }
    if ( *(_QWORD *)(v9 + 1504) <= 2uLL )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v14, retaddr);
      else
        *v14 = 0;
    }
    else
    {
      v13 = *(_QWORD *)(v9 + 1504);
    }
  }
  v16 = 0xFFFFFFFFFLL;
  v17 = 0x58000000000LL;
  do
  {
    v18 = *(_QWORD *)v6;
    if ( v6 + 0x90482413000LL <= 0x7F8
      && (unsigned int)MiPteHasShadow(Process, v11)
      && (v18 & 1) != 0
      && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
    {
      Process = (__int64)KeGetCurrentThread()->ApcState.Process;
      v11 = *(_QWORD *)(Process + 1520);
      if ( v11 )
      {
        v19 = *(_QWORD *)(v11 + 8 * ((v6 >> 3) & 0x1FF));
        if ( (v19 & 0x20) != 0 )
          v18 |= 0x20uLL;
        if ( (v19 & 0x42) != 0 )
          v18 |= 0x42uLL;
      }
    }
    v51 = v18;
    if ( (unsigned __int64)&STACK[0x904824130B0] <= 0x7F8
      && (unsigned int)MiPteHasShadow(Process, v11)
      && (v18 & 1) != 0
      && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
    {
      v20 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
      if ( v20 )
      {
        v21 = *(_QWORD *)(v20 + 8 * (((unsigned __int64)&v51 >> 3) & 0x1FF));
        if ( (v21 & 0x20) != 0 )
          v18 |= 0x20uLL;
        if ( (v21 & 0x42) != 0 )
          v18 |= 0x42uLL;
      }
    }
    v22 = v16 & (v18 >> 12);
    v23 = 48 * v22 - v17;
    if ( v13 )
      MiOutSwapKernelStackPage(v13, v6);
    TransitionPte = MiMakeTransitionPte(v22, 31LL);
    v51 = TransitionPte;
    *(_QWORD *)v6 = TransitionPte;
    if ( v6 + 0x90482413000LL <= 0x7F8 )
      MiWritePteShadow(v6, TransitionPte);
    MiLockAndDecrementShareCount(v23, 0LL);
    v6 += 8LL;
    v17 = 0x58000000000LL;
    v16 = 0xFFFFFFFFFLL;
  }
  while ( v6 <= v5 );
  v25 = 1LL;
  if ( v13 )
  {
    Process = (__int64)(v47 + 512);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(Process, retaddr);
      v25 = 1LL;
    }
    else
    {
      *(_DWORD *)Process = 0;
    }
  }
  v26 = v48 - 8;
  if ( v48 - 8 != v45 )
  {
    v27 = v26 + 0x90482413000LL;
    do
    {
      v28 = *(_QWORD *)v26;
      if ( ((unsigned __int8)*(_QWORD *)v26 & (unsigned __int8)v25) == 0 )
        break;
      v29 = 2040LL;
      if ( v27 <= 0x7F8
        && (unsigned int)MiPteHasShadow(Process, v11)
        && ((unsigned __int8)v28 & (unsigned __int8)v25) != 0
        && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
      {
        Process = (__int64)KeGetCurrentThread()->ApcState.Process;
        v11 = *(_QWORD *)(Process + 1520);
        if ( v11 )
        {
          v30 = *(_QWORD *)(v11 + 8 * ((v26 >> 3) & 0x1FF));
          if ( (v30 & 0x20) != 0 )
            v28 |= 0x20uLL;
          if ( (v30 & 0x42) != 0 )
            v28 |= 0x42uLL;
        }
      }
      v51 = v28;
      if ( (unsigned __int64)&STACK[0x904824130B0] <= v29
        && (unsigned int)MiPteHasShadow(Process, v11)
        && ((unsigned __int8)v28 & (unsigned __int8)v25) != 0
        && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
      {
        v31 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v31 )
        {
          v32 = *(_QWORD *)(v31 + 8 * (((unsigned __int64)&v51 >> 3) & 0x1FF));
          if ( (v32 & 0x20) != 0 )
            v28 |= 0x20uLL;
          if ( (v32 & 0x42) != 0 )
            v28 |= 0x42uLL;
        }
      }
      v11 = 0xFFFFFFFFFLL;
      v33 = (v28 >> 12) & 0xFFFFFFFFFLL;
      v34 = 0;
      v35 = 48 * v33 - 0x58000000000LL;
      v36 = 48 * (*(_QWORD *)(v35 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 24), 0x3FuLL) )
      {
        do
        {
          v34 += v25;
          if ( (v34 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          {
            _mm_pause();
          }
          else
          {
            HvlNotifyLongSpinWait(v34);
            v25 = 1LL;
          }
        }
        while ( (*(_QWORD *)(v35 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v35 + 24), 0x3FuLL) );
        v29 = 2040LL;
      }
      if ( *(_WORD *)(v35 + 32) == (_WORD)v25 )
      {
        *(_QWORD *)v26 = DemandZeroPte;
        if ( v27 <= v29 )
        {
          MiWritePteShadow(v26, DemandZeroPte);
          v25 = 1LL;
        }
        *(_QWORD *)(v35 + 24) |= 0x4000000000000000uLL;
        *(_QWORD *)(v35 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
        v41 = *(_QWORD *)(v35 + 24);
        if ( (*(_BYTE *)(v35 + 34) & 7) != 6 )
          KeBugCheckEx(0x4Eu, 0x99uLL, 48 * v33 / 48, *(_BYTE *)(v35 + 34) & 7, v41 & 0x3FFFFFFFFFFFFFFFLL);
        v39 = v41 ^ (v41 ^ ((v41 & 0x3FFFFFFFFFFFFFFFLL) - v25)) & 0x3FFFFFFFFFFFFFFFLL;
        v40 = (v41 & 0x3FFFFFFFFFFFFFFFLL) == v25;
      }
      else
      {
        v37 = MiMakeTransitionPte(v33, 31LL);
        v51 = v37;
        *(_QWORD *)v26 = v37;
        if ( v27 <= v38 )
        {
          MiWritePteShadow(v26, v37);
          v25 = 1LL;
        }
        if ( (*(_BYTE *)(v35 + 34) & 7) != 6 )
          KeBugCheckEx(
            0x4Eu,
            0x99uLL,
            48 * v33 / 48,
            *(_BYTE *)(v35 + 34) & 7,
            *(_QWORD *)(v35 + 24) & 0x3FFFFFFFFFFFFFFFLL);
        v11 = (*(_QWORD *)(v35 + 24) & 0x3FFFFFFFFFFFFFFFLL) - v25;
        v39 = *(_QWORD *)(v35 + 24) ^ (*(_QWORD *)(v35 + 24) ^ v11) & 0x3FFFFFFFFFFFFFFFLL;
        v40 = (*(_QWORD *)(v35 + 24) & 0x3FFFFFFFFFFFFFFFLL) == v25;
      }
      *(_QWORD *)(v35 + 24) = v39;
      if ( v40 )
      {
        IsZero = MiPfnShareCountIsZero(48 * v33 - 0x58000000000LL, 0LL);
        v25 = 1LL;
      }
      else
      {
        IsZero = 2;
      }
      Process = 0x7FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( IsZero != 3 )
      {
        v43 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) )
        {
          do
          {
            v43 += v25;
            if ( (v43 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            {
              _mm_pause();
            }
            else
            {
              HvlNotifyLongSpinWait(v43);
              v25 = 1LL;
            }
          }
          while ( (*(_QWORD *)(v36 + 24) & 0x8000000000000000uLL) != 0
               || _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) );
        }
        if ( (*(_BYTE *)(v36 + 34) & 7) != 6 )
          KeBugCheckEx(
            0x4Eu,
            0x99uLL,
            (v36 + 0x58000000000LL) / 48,
            *(_BYTE *)(v36 + 34) & 7,
            *(_QWORD *)(v36 + 24) & 0x3FFFFFFFFFFFFFFFLL);
        Process = *(_QWORD *)(v36 + 24);
        v11 = (Process & 0x3FFFFFFFFFFFFFFFLL) - v25;
        *(_QWORD *)(v36 + 24) = Process ^ (Process ^ v11) & 0x3FFFFFFFFFFFFFFFLL;
        if ( !v11 )
        {
          MiPfnShareCountIsZero(v36, 0LL);
          v25 = 1LL;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      LODWORD(v52) = v25 + v52;
      v26 -= 8LL;
      v54 -= 4096LL;
      v27 -= 8LL;
    }
    while ( v26 != v45 );
  }
  MiInsertTbFlushEntry(v53, v54, (unsigned int)v52, 0);
  return MiUnlockWorkingSetExclusive((__int64)dword_14034FF40, CurrentIrql);
}
