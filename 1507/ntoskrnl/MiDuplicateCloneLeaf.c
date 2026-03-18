/*
 * XREFs of MiDuplicateCloneLeaf @ 0x140004A08
 * Callers:
 *     MiBuildForkPte @ 0x14000253C (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x140004220 (MiHandleForkTransitionPte.c)
 * Callees:
 *     MiCopyPage @ 0x140058ED0 (MiCopyPage.c)
 *     MiInitializePfnForOtherProcess @ 0x14006A908 (MiInitializePfnForOtherProcess.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiPfnShareCountIsZero @ 0x1400B2270 (MiPfnShareCountIsZero.c)
 *     MiChangePageAttribute @ 0x1400E5678 (MiChangePageAttribute.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiMakeTransitionPte @ 0x140225DF4 (MiMakeTransitionPte.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 *     MiUpdateTransitionPteFrame @ 0x1402260DC (MiUpdateTransitionPteFrame.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiDuplicateCloneLeaf(unsigned __int64 *a1, __int64 *a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v5; // r10
  unsigned __int64 *v7; // r12
  unsigned __int64 PteShadow; // rbx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // r15
  __int64 v11; // r13
  unsigned int v12; // eax
  char v13; // r9
  __int64 v14; // rdx
  volatile signed __int32 *v15; // rbx
  signed __int32 i; // edx
  __int64 v17; // rcx
  __int64 v19; // rdi
  __int64 v20; // rcx
  unsigned int v21; // edx
  char v22; // al
  char v23; // r15
  int v24; // ebx
  __int64 v25; // r13
  __int64 TransitionPte; // rax
  unsigned __int64 v27; // rcx
  __int64 v28; // rsi
  unsigned __int64 *v29; // rcx
  unsigned __int64 v30; // rsi
  unsigned __int64 *CurrentIrql; // rbx
  __int64 v32; // rcx
  char v33; // cl
  __int64 v34; // rdx
  int v35; // [rsp+30h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+38h] [rbp-50h]
  unsigned int v37; // [rsp+38h] [rbp-50h]
  unsigned int v38; // [rsp+38h] [rbp-50h]
  int v39; // [rsp+40h] [rbp-48h]
  unsigned __int64 v40; // [rsp+48h] [rbp-40h] BYREF
  volatile signed __int32 *v41; // [rsp+50h] [rbp-38h]
  unsigned __int64 *v42; // [rsp+58h] [rbp-30h]
  int v43; // [rsp+90h] [rbp+8h]

  v5 = a3;
  v7 = a1;
  v42 = a1;
  PteShadow = *a1;
  if ( (unsigned __int64)(a1 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(a1, PteShadow);
  v40 = PteShadow;
  if ( (PteShadow & 1) != 0 )
  {
    v9 = PteShadow;
    if ( (unsigned __int64)&STACK[0x90482413048] <= 0x7F8 )
      v9 = MiReadPteShadow(&v40, PteShadow);
    v10 = (v9 >> 12) & 0xFFFFFFFFFLL;
    v11 = 48 * v10 - 0x58000000000LL;
    v41 = (volatile signed __int32 *)((*(_DWORD *)(v11 + 16) >> 5) & 0x1F);
    v12 = 1;
    goto LABEL_22;
  }
  v10 = ((unsigned __int64)MiReverseSwizzleInvalidPte(PteShadow, a2, a3, a4) >> 12) & 0xFFFFFFFFFLL;
  v14 = 0x58000000000LL;
  v11 = 48 * v10 - 0x58000000000LL;
  if ( (*(_BYTE *)(v11 + 34) & 0x20) == 0 )
  {
    LODWORD(v41) = (PteShadow >> 5) & 0x1F;
    v12 = 0;
LABEL_22:
    v37 = v12;
    v19 = 48 * v5 - 0x58000000000LL;
    if ( v12 != 1 )
    {
      v12 = 4;
      v35 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
      {
        do
        {
          v20 = (unsigned int)(v35 + 1);
          v35 = v20;
          if ( ((unsigned int)v20 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v20);
        }
        while ( (*(_QWORD *)(v19 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) );
        v7 = v42;
        v12 = 4;
        v5 = a3;
      }
    }
    MiCopyPage(v5, v10, 0LL, v12);
    v21 = v37;
    if ( !v37 )
      _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v22 = *(_BYTE *)(v11 + 35);
    if ( (v22 & 8) != 0 )
      v23 = 5;
    else
      v23 = v22 & 7;
    v38 = *(unsigned __int8 *)(v11 + 34) >> 6;
    if ( v21 == 1 )
    {
      v24 = (int)v41;
      v25 = a3;
      TransitionPte = MiMakeTransitionPte(a3, (unsigned int)v41);
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(a5);
      v25 = a3;
      TransitionPte = MiUpdateTransitionPteFrame(PteShadow, a3);
      v24 = (int)v41;
    }
    v40 = TransitionPte;
    *a2 = TransitionPte;
    if ( (unsigned __int64)(a2 + 0x12090482600LL) <= 0x7F8 )
      MiWritePteShadow(a2, TransitionPte);
    if ( (*(_BYTE *)(8 * (((unsigned __int64)a2 >> 39) & 0x1FF) - 0x90482413000LL) & 1) != 0
      && (*(_BYTE *)((((unsigned __int64)a2 >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) != 0
      && (v27 = *(_QWORD *)((((unsigned __int64)a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL), (v27 & 0x81) == 0x81) )
    {
      v28 = ((v27 >> 12) & 0xFFFFFFFFFLL) + (((unsigned __int64)a2 >> 12) & 0x1FF);
    }
    else
    {
      v29 = (unsigned __int64 *)((((unsigned __int64)a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v30 = *v29;
      if ( (unsigned __int64)(v29 + 0x12090482600LL) <= 0x7F8 )
        v30 = MiReadPteShadow(v29, *v29);
      v28 = (v30 >> 12) & 0xFFFFFFFFFLL;
    }
    MiInitializePfnForOtherProcess(v25, v7, v28, 16LL);
    *(_QWORD *)(v19 + 16) ^= (*(_DWORD *)(v19 + 16) ^ (32 * v24)) & 0x3E0;
    CurrentIrql = (unsigned __int64 *)KeGetCurrentIrql();
    v42 = CurrentIrql;
    __writecr8(2uLL);
    v39 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
    {
      do
      {
        v32 = (unsigned int)(v39 + 1);
        v39 = v32;
        if ( ((unsigned int)v32 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v32);
      }
      while ( (*(_QWORD *)(v19 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) );
      LOBYTE(CurrentIrql) = (_BYTE)v42;
    }
    if ( *(unsigned __int8 *)(v19 + 34) >> 6 != v38 )
      MiChangePageAttribute(v19, v38, 3LL);
    *(_BYTE *)(v19 + 35) ^= (*(_BYTE *)(v19 + 35) ^ v23) & 7;
    v33 = *(_BYTE *)(v19 + 34) & 0xF8 | 6;
    *(_BYTE *)(v19 + 34) = v33;
    if ( (v33 & 7) != 6 )
      KeBugCheckEx(0x4Eu, 0x99uLL, (v19 + 0x58000000000LL) / 48, v33 & 7, *(_QWORD *)(v19 + 24) & 0x3FFFFFFFFFFFFFFFLL);
    v34 = (*(_QWORD *)(v19 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
    *(_QWORD *)(v19 + 24) ^= (v34 ^ *(_QWORD *)(v19 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
    if ( !v34 )
      MiPfnShareCountIsZero(v19, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8((unsigned __int8)CurrentIrql);
    return 1LL;
  }
  v15 = (volatile signed __int32 *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[8];
  v41 = v15;
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v14) = v13;
  MiUnlockWorkingSetExclusive(v15, v14);
  CurrentThread = KeGetCurrentThread();
  ++BYTE2(CurrentThread[1].Teb);
  --BYTE2(CurrentThread[1].Teb);
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v15);
  }
  else
  {
    v43 = 0;
    if ( _interlockedbittestandset(v15, 0x1Fu) )
      v43 = ExpWaitForSpinLockExclusiveAndAcquire(v15);
    for ( i = *v15; (*v15 & 0xBFFFFFFF) != 0x80000000; i = *v15 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(v15, i | 0x40000000, i);
      v17 = (unsigned int)(v43 + 1);
      v43 = v17;
      if ( ((unsigned int)v17 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v17);
    }
  }
  return 0LL;
}
