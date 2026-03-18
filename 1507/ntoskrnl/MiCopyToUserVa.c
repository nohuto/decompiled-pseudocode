/*
 * XREFs of MiCopyToUserVa @ 0x140061A10
 * Callers:
 *     MiCopyToCfgBitMap @ 0x1404B88E0 (MiCopyToCfgBitMap.c)
 * Callees:
 *     MiLockPageAndSetDirty @ 0x14003C7B8 (MiLockPageAndSetDirty.c)
 *     MiCopyOnWriteEx @ 0x140058250 (MiCopyOnWriteEx.c)
 *     MiLocateCloneAddress @ 0x140059A90 (MiLocateCloneAddress.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14005A4E0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMakeSystemAddressValid @ 0x14005E6FC (MiMakeSystemAddressValid.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiReservePtes @ 0x1400AAD50 (MiReservePtes.c)
 *     MiReleasePtes @ 0x1400B1800 (MiReleasePtes.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400E6520 (MiMapPageInHyperSpaceWorker.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiReturnFullProcessCommitment @ 0x14041AE3C (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x1404BBC10 (MiChargeFullProcessCommitment.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiCopyToUserVa(ULONG_PTR a1, __int64 a2, const void *a3, size_t a4)
{
  _KPROCESS *Process; // r14
  ULONG_PTR v5; // r13
  volatile signed __int32 *v6; // rbx
  unsigned __int8 CurrentIrql; // r12
  signed __int32 v8; // edx
  __int64 v9; // rdx
  _KPROCESS *v10; // rcx
  volatile unsigned __int64 v11; // rbx
  __int64 v12; // rax
  volatile signed __int32 *v13; // rbx
  unsigned __int8 v14; // di
  signed __int32 i; // edx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // r14
  _QWORD *v21; // rdi
  __int64 v22; // rdx
  _QWORD *CloneAddress; // rax
  volatile signed __int32 *v24; // rbx
  int v25; // edi
  signed __int32 v26; // edx
  __int64 v27; // rcx
  unsigned __int64 PteShadow; // rbx
  int v29; // r15d
  unsigned __int64 v30; // rax
  _QWORD *v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // r8
  unsigned __int64 v36; // rdx
  __int64 v37; // rcx
  int v39; // [rsp+30h] [rbp-68h]
  int v40; // [rsp+34h] [rbp-64h]
  int v41; // [rsp+38h] [rbp-60h]
  int v42; // [rsp+3Ch] [rbp-5Ch]
  unsigned __int64 v43; // [rsp+40h] [rbp-58h] BYREF
  _KPROCESS *v44; // [rsp+48h] [rbp-50h]
  _KPROCESS *v45; // [rsp+50h] [rbp-48h]

  Process = KeGetCurrentThread()->ApcState.Process;
  v44 = Process;
  v45 = Process;
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v39 = 0;
  v6 = (volatile signed __int32 *)&Process[1].IdealNode[8];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&Process[1].IdealNode[8]);
  }
  else
  {
    v42 = 0;
    if ( _interlockedbittestandset(v6, 0x1Fu) )
      v42 = ExpWaitForSpinLockExclusiveAndAcquire(&Process[1].IdealNode[8]);
    while ( 1 )
    {
      v8 = *v6;
      if ( (*v6 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v8 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v6, v8 | 0x40000000, v8);
      v37 = (unsigned int)(v42 + 1);
      v42 = v37;
      if ( ((unsigned int)v37 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v37);
    }
  }
  do
  {
    while ( 1 )
    {
      MiMakeSystemAddressValid(v5, 0LL, (*(_DWORD *)(a2 + 48) >> 8) & 0x3F, CurrentIrql, 1);
      v11 = *(_QWORD *)v5;
      if ( v5 + 0x90482413000LL <= 0x7F8
        && (unsigned int)MiPteHasShadow(v10, v9)
        && (v11 & 1) != 0
        && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
      {
        v10 = KeGetCurrentThread()->ApcState.Process;
        v9 = *(_QWORD *)&v10[2].ProcessLock;
        if ( v9 )
        {
          v12 = *(_QWORD *)(v9 + 8 * ((v5 >> 3) & 0x1FF));
          if ( (v12 & 0x20) != 0 )
            v11 |= 0x20uLL;
          if ( (v12 & 0x42) != 0 )
            v11 |= 0x42uLL;
        }
      }
      v43 = v11;
      if ( (v11 & 1) == 0 )
      {
        v13 = (volatile signed __int32 *)&Process[1].IdealNode[8];
        MiUnlockWorkingSetExclusive(&Process[1].IdealNode[8], CurrentIrql);
        v14 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          goto LABEL_18;
        v40 = 0;
        if ( _interlockedbittestandset(v13, 0x1Fu) )
          v40 = ExpWaitForSpinLockExclusiveAndAcquire(&Process[1].IdealNode[8]);
        for ( i = *v13; (*v13 & 0xBFFFFFFF) != 0x80000000; i = *v13 )
        {
          if ( (i & 0x40000000) == 0 )
            _InterlockedCompareExchange(v13, i | 0x40000000, i);
          v16 = (unsigned int)(v40 + 1);
          v40 = v16;
          if ( ((unsigned int)v16 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v16);
        }
        goto LABEL_29;
      }
      if ( (unsigned __int64)&STACK[0x90482413040] <= 0x7F8
        && (unsigned int)MiPteHasShadow(v10, v9)
        && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
      {
        v17 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v17 )
        {
          v18 = *(_QWORD *)(v17 + 8 * (((unsigned __int64)&v43 >> 3) & 0x1FF));
          if ( (v18 & 0x20) != 0 )
            v11 |= 0x20uLL;
          if ( (v18 & 0x42) != 0 )
            v11 |= 0x42uLL;
        }
      }
      v19 = (v11 >> 12) & 0xFFFFFFFFFLL;
      v20 = 48 * v19 - 0x58000000000LL;
      if ( (*(_QWORD *)(v20 + 40) & 0x200000000000000LL) == 0 )
      {
        v29 = v39;
        goto LABEL_68;
      }
      v21 = 0LL;
      v22 = *(_QWORD *)(v20 + 8);
      Process = v44;
      if ( v22 >= 0 )
        break;
      if ( !v44[1].Affinity.Bitmap[12] )
        break;
      CloneAddress = MiLocateCloneAddress((__int64)v44, v22 | 0x8000000000000000uLL);
      v21 = CloneAddress;
      if ( !CloneAddress )
        break;
      if ( MEMORY[0xFFFFF58010804258] <= CloneAddress[9] )
      {
        v21 = 0LL;
        break;
      }
      if ( v39 )
        break;
      v24 = (volatile signed __int32 *)&Process[1].IdealNode[8];
      MiUnlockWorkingSetExclusive(&Process[1].IdealNode[8], CurrentIrql);
      v25 = MiChargeFullProcessCommitment(Process, 1LL);
      if ( v25 < 0 )
      {
        v29 = 0;
        goto LABEL_96;
      }
      v39 = 1;
      v14 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
LABEL_18:
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&Process[1].IdealNode[8]);
        goto LABEL_29;
      }
      v41 = 0;
      if ( _interlockedbittestandset(v24, 0x1Fu) )
        v41 = ExpWaitForSpinLockExclusiveAndAcquire(&Process[1].IdealNode[8]);
      v26 = *v24;
      if ( (*v24 & 0xBFFFFFFF) == 0x80000000 )
      {
LABEL_29:
        CurrentIrql = v14;
      }
      else
      {
        do
        {
          if ( (v26 & 0x40000000) == 0 )
            _InterlockedCompareExchange(v24, v26 | 0x40000000, v26);
          v27 = (unsigned int)(v41 + 1);
          v41 = v27;
          if ( ((unsigned int)v27 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v27);
          v26 = *v24;
        }
        while ( (*v24 & 0xBFFFFFFF) != 0x80000000 );
        CurrentIrql = v14;
      }
    }
  }
  while ( (unsigned int)MiCopyOnWriteEx(a1, (volatile __int64 *)v5, -1LL, CurrentIrql, 0) != 1 );
  PteShadow = *(_QWORD *)v5;
  if ( v5 + 0x90482413000LL <= 0x7F8 )
    PteShadow = MiReadPteShadow(v5, *(_QWORD *)v5);
  v43 = PteShadow;
  if ( (unsigned __int64)&STACK[0x90482413040] <= 0x7F8 )
    PteShadow = MiReadPteShadow(&v43, PteShadow);
  v19 = (PteShadow >> 12) & 0xFFFFFFFFFLL;
  v20 = 48 * v19 - 0x58000000000LL;
  v29 = v39;
  if ( v21 )
    v29 = 0;
LABEL_68:
  v30 = MiReservePtes(&qword_14034FC70, 1LL);
  v31 = (_QWORD *)v30;
  if ( v30 )
  {
    v32 = (__int64)(v30 << 25) >> 16;
    v33 = qword_1403D0230 ^ (qword_1403D0230 ^ (v19 << 12)) & 0xFFFFFFFFF000LL | 0x21;
    v34 = 0x904C0000000LL;
    if ( v30 + 0x904C0000000LL <= 0x3FFFFFFF )
      v33 &= ~qword_1403D0220 & 0x7FFFFFFFFFFFFFFFLL;
    if ( v30 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
      && v30 >= 0xFFFFF68000000000uLL
      || v30 >= 0xFFFFF6FB40000000uLL
      && v30 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
      || v30 >= 0xFFFFF6FB7DA00000uLL
      && (v34 = 0x90482600000LL, v30 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL)
      || v30 >= 0xFFFFF6FB7DBED000uLL
      && v30 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
    {
      v33 |= 4uLL;
    }
    if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v30, v34, qword_1403D0220) )
      v33 |= 0x100uLL;
    v36 = ~v35 & (v33 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8) | 0x8000000000000042uLL);
    v43 = v36;
    *v31 = v36;
    if ( (unsigned __int64)(v31 + 0x12090482600LL) <= 0x7F8 )
      MiWritePteShadow(v31, v36);
  }
  else
  {
    v32 = MiMapPageInHyperSpaceWorker(v19, 0LL, 0x80000000LL);
  }
  memmove((void *)(v32 + (a1 & 0xFFF)), a3, a4);
  if ( v31 )
    MiReleasePtes(&qword_14034FC70, v31, 1LL);
  else
    MiUnmapPageInHyperSpaceWorker(v32, 0x11u);
  MiLockPageAndSetDirty(v20, 1);
  Process = v44;
  MiUnlockWorkingSetExclusive(&v44[1].IdealNode[8], CurrentIrql);
  v25 = 0;
LABEL_96:
  if ( v29 )
    MiReturnFullProcessCommitment(Process);
  return (unsigned int)v25;
}
