/*
 * XREFs of MiMapUserLargePages @ 0x14022F2A8
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x140406774 (MiCloneProcessAddressSpace.c)
 *     MiMapViewOfImageSection @ 0x140421990 (MiMapViewOfImageSection.c)
 *     MiAllocateVirtualMemory @ 0x1404BA9D0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x14005E6FC (MiMakeSystemAddressValid.c)
 *     MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER @ 0x14005E830 (MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockVad @ 0x1400894F0 (MiUnlockVad.c)
 *     MiLockVad @ 0x140089660 (MiLockVad.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiLocateVadEvent @ 0x140122918 (MiLocateVadEvent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MiLogPerfMemoryRangeEvent @ 0x140214958 (MiLogPerfMemoryRangeEvent.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void *__fastcall MiMapUserLargePages(__int64 a1, unsigned int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 v4; // r14
  __int64 v5; // r13
  ULONG_PTR v6; // rsi
  __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // r13
  volatile signed __int32 *v19; // r14
  unsigned __int8 CurrentIrql; // di
  unsigned int v21; // edi
  signed __int32 i; // edx
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rax
  unsigned int v27; // edi
  __int64 v28; // rcx
  unsigned __int64 *v29; // rdx
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned __int64 v34; // r12
  __int64 v35; // rdi
  unsigned __int64 v36; // rsi
  unsigned __int8 v37; // r15
  unsigned int v38; // r14d
  unsigned __int64 v39; // rax
  void *result; // rax
  unsigned __int64 v41; // [rsp+30h] [rbp-89h]
  unsigned __int8 v42; // [rsp+38h] [rbp-81h]
  __int64 v44; // [rsp+48h] [rbp-71h]
  unsigned __int64 v45; // [rsp+50h] [rbp-69h]
  __int64 v47; // [rsp+60h] [rbp-59h]
  _QWORD *v48; // [rsp+68h] [rbp-51h]
  __int64 v49; // [rsp+70h] [rbp-49h]
  ULONG_PTR v50; // [rsp+78h] [rbp-41h]
  __int64 v51; // [rsp+80h] [rbp-39h]
  __int64 v52; // [rsp+90h] [rbp-29h]
  __int64 v54; // [rsp+A0h] [rbp-19h]
  PVOID P; // [rsp+A8h] [rbp-11h]
  __int128 v56; // [rsp+B0h] [rbp-9h] BYREF
  __int128 v57; // [rsp+C0h] [rbp+7h]
  __int64 v58; // [rsp+D0h] [rbp+17h]

  CurrentThread = KeGetCurrentThread();
  v4 = a1;
  v5 = 0LL;
  v49 = (__int64)CurrentThread;
  v6 = (((*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12 >> 18) & 0x3FFFFFF8)
     - 0x904C0000000LL;
  v54 = (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12;
  v48 = (_QWORD *)v6;
  v7 = MmProtectToPteMask[MmMakeProtectNotWriteCopy[(*(_DWORD *)(a1 + 48) >> 3) & 0x1F]] | 0xFFFFFFFFF021LL;
  v8 = ((8 * (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32))) & 0x7FFFFFFFF8LL)
     - 0x98000000000LL;
  if ( v8 + 0x904C0000000LL <= 0x3FFFFFFF )
    v7 &= ~qword_1403D0220 & 0x7FFFFFFFFFFFFFFFLL;
  if ( v8 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
    && v8 >= 0xFFFFF68000000000uLL
    || v8 >= 0xFFFFF6FB40000000uLL
    && v8 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
    || v8 >= 0xFFFFF6FB7DA00000uLL
    && v8 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
    || v8 >= 0xFFFFF6FB7DBED000uLL
    && v8 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
  {
    v7 |= 4uLL;
  }
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v8) )
    v7 |= 0x100uLL;
  if ( (v9 & 4) != 0 )
    v7 |= 0x42uLL;
  v11 = v7 | 0xA0;
  MiLockVad((__int64)CurrentThread, v4, v9, v10);
  v12 = MiLocateVadEvent(v4, 16)[2];
  v56 = *(_OWORD *)v12;
  v57 = *(_OWORD *)(v12 + 16);
  v58 = *(_QWORD *)(v12 + 32);
  if ( *(_QWORD *)(*(_QWORD *)v12 + 8LL) != v12 || **(_QWORD **)(v12 + 8) != v12 )
    __fastfail(3u);
  *(_QWORD *)(v56 + 8) = &v56;
  **((_QWORD **)&v56 + 1) = &v56;
  memset((void *)v12, 0, 0x28uLL);
  *(_BYTE *)(v12 + 28) = BYTE12(v57);
  *(_QWORD *)(v12 + 32) = v58;
  MiUnlockVad((__int64)CurrentThread, v4);
  while ( 1 )
  {
    v13 = v56;
    P = (PVOID)v56;
    if ( (__int128 *)v56 == &v56 )
      break;
    v14 = *(_QWORD *)v56;
    if ( *(__int128 **)(v56 + 8) != &v56 || *(_QWORD *)(v14 + 8) != (_QWORD)v56 )
      __fastfail(3u);
    *(_QWORD *)&v56 = *(_QWORD *)v56;
    *(_QWORD *)(v14 + 8) = &v56;
    v15 = 0LL;
    v45 = 0LL;
    v11 ^= (v11 ^ (*(_QWORD *)(v13 + 16) << 12)) & 0xFFFFFFFFF000LL;
    v16 = *(_QWORD *)(v13 + 24);
    v17 = 48LL * *(_QWORD *)(v13 + 16) - 0x58000000000LL;
    v52 = v16 + v5;
    v18 = 0LL;
    v51 = v11;
    v41 = v17;
    v47 = 0LL;
    v50 = v6 + 8 * (v16 >> 9);
    MiLockVad(v49, v4, 0xFFFFFFFFF000LL, 0x58000000000LL);
    v19 = (volatile signed __int32 *)(a3 + 1272);
    CurrentIrql = KeGetCurrentIrql();
    v42 = CurrentIrql;
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a3 + 1272);
    }
    else
    {
      v21 = 0;
      if ( _interlockedbittestandset(v19, 0x1Fu) )
        v21 = ExpWaitForSpinLockExclusiveAndAcquire(v19);
      for ( i = *v19; (*v19 & 0xBFFFFFFF) != 0x80000000; i = *v19 )
      {
        if ( (i & 0x40000000) == 0 )
          _InterlockedCompareExchange(v19, i | 0x40000000, i);
        if ( (++v21 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v21);
      }
      CurrentIrql = v42;
    }
    if ( v6 < v50 )
    {
      do
      {
        if ( !v15 || (v6 & 0xFFF) == 0 )
        {
          v23 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v45 = v23;
          MiMakeSystemAddressValid(v6, 0LL, a2, CurrentIrql, 1);
          v24 = *(_QWORD *)v23;
          if ( v23 + 0x90482413000LL <= 0x7F8
            && (unsigned int)MiPteHasShadow()
            && (v24 & 1) != 0
            && ((v24 & 0x20) == 0 || (v24 & 0x42) == 0) )
          {
            v25 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
            if ( v25 )
            {
              v26 = *(_QWORD *)(v25 + 8 * ((v23 >> 3) & 0x1FF));
              if ( (v26 & 0x20) != 0 )
                v24 |= 0x20uLL;
              if ( (v26 & 0x42) != 0 )
                v24 |= 0x42uLL;
            }
          }
          v18 = 48 * ((v24 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          v47 = v18;
        }
        v27 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v27 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v27);
          }
          while ( (*(_QWORD *)(v18 + 24) & 0x8000000000000000uLL) != 0
               || _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) );
        }
        *(_QWORD *)(v18 + 24) ^= (*(_QWORD *)(v18 + 24) ^ (*(_QWORD *)(v18 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER(v18, 1u);
        v28 = (__int64)(v6 << 25) >> 16;
        v29 = (unsigned __int64 *)(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v44 = v28;
        v30 = *v29;
        if ( (unsigned __int64)(v29 + 0x12090482600LL) <= 0x7F8 )
        {
          if ( (unsigned int)MiPteHasShadow() && (v30 & 1) != 0 && ((v30 & 0x20) == 0 || (v30 & 0x42) == 0) )
          {
            v32 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
            if ( v32 )
            {
              v33 = *(_QWORD *)(v32 + 8 * ((v31 >> 3) & 0x1FF));
              if ( (v33 & 0x20) != 0 )
                v30 |= 0x20uLL;
              if ( (v33 & 0x42) != 0 )
                v30 |= 0x42uLL;
            }
          }
          v28 = (__int64)(v6 << 25) >> 16;
        }
        v34 = v17 + 24576;
        v35 = (v30 >> 12) & 0xFFFFFFFFFLL;
        v36 = v41 + 24;
        do
        {
          *(_QWORD *)(v36 - 8) = 0LL;
          v37 = KeGetCurrentIrql();
          __writecr8(2uLL);
          v38 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)v36, 0x3FuLL) )
          {
            do
            {
              if ( (++v38 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v38);
            }
            while ( (*(_QWORD *)v36 & 0x8000000000000000uLL) != 0
                 || _interlockedbittestandset64((volatile signed __int32 *)v36, 0x3FuLL) );
            v28 = v44;
          }
          v39 = *(_QWORD *)(v36 + 16) & 0xFFFFFFF000000000uLL;
          *(_QWORD *)(v36 - 16) = v28;
          *(_QWORD *)(v36 + 16) = v35 | v39;
          _InterlockedAnd64((volatile signed __int64 *)v36, 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v37);
          v28 += 8LL;
          v44 = v28;
          v36 += 48LL;
          v41 += 48LL;
        }
        while ( v41 < v34 );
        v18 = v47;
        *v48 = v51;
        if ( (unsigned __int64)(v48 + 0x12090482600LL) <= 0x7F8 )
          MiWritePteShadow((__int64)v48, v51);
        v15 = v45;
        v17 = v41;
        CurrentIrql = v42;
        v6 = (ULONG_PTR)(v48 + 1);
        v48 = (_QWORD *)v6;
        v11 = (v51 ^ ((v51 & 0xFFFFFFFFFFFFF000uLL) + 0x200000)) & 0xFFFFFFFFF000LL ^ v51;
        v51 = v11;
      }
      while ( v6 < v50 );
      v19 = (volatile signed __int32 *)(a3 + 1272);
    }
    MiUnlockWorkingSetExclusive((__int64)v19, v42);
    v4 = a1;
    MiUnlockVad(v49, a1);
    ExFreePoolWithTag(P, 0);
    v5 = v52;
  }
  result = (void *)DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    return MiLogPerfMemoryRangeEvent(v54, a3, 0x1Bu, v5);
  return result;
}
