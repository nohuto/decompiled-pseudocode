/*
 * XREFs of MiSwitchToTransition @ 0x140219964
 * Callers:
 *     MmRotatePhysicalView @ 0x140560980 (MmRotatePhysicalView.c)
 * Callees:
 *     MiGetEffectivePagePriorityThread @ 0x14003C720 (MiGetEffectivePagePriorityThread.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140055C20 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x140077838 (MiPageAttributeBatchChangeNeeded.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiObtainFaultCharges @ 0x14008F350 (MiObtainFaultCharges.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MiAddLockedPageCharge @ 0x1400B50C0 (MiAddLockedPageCharge.c)
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     MiChangePageAttributeBatch @ 0x1400E57F0 (MiChangePageAttributeBatch.c)
 *     MiReleaseFreshPage @ 0x1400FCD50 (MiReleaseFreshPage.c)
 *     MiSetPfnBlink @ 0x140100DBC (MiSetPfnBlink.c)
 *     MiReturnFaultCharges @ 0x14013019C (MiReturnFaultCharges.c)
 *     MiIsProbeActive @ 0x140135338 (MiIsProbeActive.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiAddMdlTracker @ 0x140213DCC (MiAddMdlTracker.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiGetContainingPageTable @ 0x140225A80 (MiGetContainingPageTable.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 *     MiMakeTransitionPte @ 0x140225DF4 (MiMakeTransitionPte.c)
 *     MiWaitForFreePage @ 0x14022ECFC (MiWaitForFreePage.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiGetReadyInPageBlock @ 0x1406A2FF8 (MiGetReadyInPageBlock.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiSwitchToTransition(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  __int64 *v4; // rsi
  __int64 v5; // r9
  __int64 ReadyInPageBlock; // rax
  unsigned __int8 v7; // bl
  ULONG_PTR v8; // r12
  __int64 v9; // rdi
  __int64 v10; // r9
  unsigned __int64 v11; // r11
  volatile signed __int32 *v12; // r15
  unsigned __int64 v13; // r13
  ULONG_PTR v14; // r14
  unsigned int v15; // r14d
  signed __int32 i; // edx
  __int64 v17; // rdx
  unsigned __int64 j; // r14
  _WORD *v19; // rax
  __int64 Page; // rax
  __int64 v21; // r15
  unsigned int v22; // r14d
  int v23; // r13d
  ULONG_PTR v24; // r14
  __int64 DemandZeroPte; // rax
  __int64 v26; // r9
  unsigned __int64 v27; // r15
  ULONG_PTR v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rax
  ULONG_PTR v31; // rdx
  char v32; // r9
  __int64 v33; // r8
  __int64 v34; // rax
  ULONG_PTR v35; // r9
  __int64 v36; // r10
  unsigned int v37; // r11d
  unsigned __int16 v38; // cx
  volatile signed __int32 *v39; // r13
  __int64 v40; // r14
  __int64 v41; // rax
  unsigned int v42; // r15d
  __int64 v43; // rax
  __int64 v44; // r8
  unsigned __int8 v45; // r11
  __int64 v46; // rdx
  struct _KTHREAD *v47; // rax
  __int64 ContainingPageTable; // rax
  unsigned int v49; // r11d
  __int64 v50; // r8
  unsigned int v51; // r14d
  char v52; // al
  __int64 v53; // r14
  __int64 TransitionPte; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rdx
  ULONG_PTR v58; // rbx
  __int64 v59; // rsi
  _KPROCESS *v60; // rdi
  ULONG_PTR v63; // [rsp+38h] [rbp-C8h]
  __int64 v64; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v65; // [rsp+40h] [rbp-C0h]
  volatile signed __int32 *v66; // [rsp+48h] [rbp-B8h]
  __int16 *v67; // [rsp+58h] [rbp-A8h]
  ULONG_PTR v68; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v69; // [rsp+68h] [rbp-98h]
  ULONG_PTR BugCheckParameter3; // [rsp+70h] [rbp-90h]
  int EffectivePagePriorityThread; // [rsp+78h] [rbp-88h]
  volatile signed __int32 *v72; // [rsp+80h] [rbp-80h]
  __int64 CurrentIrql; // [rsp+88h] [rbp-78h]
  __int64 v74; // [rsp+90h] [rbp-70h]
  __int64 v75; // [rsp+98h] [rbp-68h]
  _KPROCESS *Process; // [rsp+A0h] [rbp-60h]
  __int64 v77; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v78; // [rsp+B0h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+B8h] [rbp-48h]
  _WORD *v80; // [rsp+C0h] [rbp-40h] BYREF
  __int16 v81; // [rsp+C8h] [rbp-38h]
  unsigned __int16 v82; // [rsp+CAh] [rbp-36h]
  __int64 v83; // [rsp+D0h] [rbp-30h]
  int v84; // [rsp+E0h] [rbp-20h] BYREF
  __int16 v85; // [rsp+E4h] [rbp-1Ch]
  int v86; // [rsp+E8h] [rbp-18h]
  int v87; // [rsp+ECh] [rbp-14h]
  __int64 v88; // [rsp+F0h] [rbp-10h]
  __int64 v89; // [rsp+F8h] [rbp-8h]

  BugCheckParameter3 = a1;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  v4 = (__int64 *)(a1 + 48);
  ReadyInPageBlock = MiGetReadyInPageBlock(v5);
  v78 = *(_QWORD *)(a1 + 32);
  v7 = 0;
  v75 = ReadyInPageBlock;
  v72 = (volatile signed __int32 *)&Process[1].IdealNode[8];
  v8 = ((v78 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MI_INITIALIZE_COLOR_BASE((__int64)&Process[1].IdealNode[8], 0, (__int64)&v80);
  v64 = 0xFFFFFFFFFLL;
  v66 = 0LL;
  v9 = 0LL;
  v67 = MiPartitionIdToPointer(WORD2(Process[1].SecurePid));
  v12 = (volatile signed __int32 *)&Process[1].IdealNode[8];
  v13 = MiObtainFaultCharges(v67, v11, 2, v10);
  v69 = v13;
  v14 = v8 + 8 * v13;
  v63 = v14;
  while ( 2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v12);
    }
    else
    {
      v15 = 0;
      if ( _interlockedbittestandset(v12, 0x1Fu) )
        v15 = ExpWaitForSpinLockExclusiveAndAcquire(v12);
      for ( i = *v12; (*v12 & 0xBFFFFFFF) != 0x80000000; i = *v12 )
      {
        if ( (i & 0x40000000) == 0 )
          _InterlockedCompareExchange(v12, i | 0x40000000, i);
        if ( (++v15 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v15);
      }
      v14 = v63;
    }
    while ( (unsigned int)MiIsProbeActive((unsigned __int64 *)v8, v13, 3u) )
    {
      v14 -= 8LL;
      v63 = v14;
      if ( !--v13 )
      {
        v22 = 1;
        v23 = 1;
        goto LABEL_81;
      }
    }
    for ( j = 0LL; ; ++j )
    {
      if ( j >= v13 )
      {
        v24 = v63;
        goto LABEL_28;
      }
      v19 = v80;
      ++*v80;
      Page = MiGetPage((__int64)v67, v82 | (unsigned int)(unsigned __int16)(v81 & *v19), 0);
      v21 = Page;
      if ( Page == -1 )
        break;
      v9 = 48 * Page - 0x58000000000LL;
      if ( (unsigned int)MiPageAttributeBatchChangeNeeded(v9, a3) == 1 )
      {
        *(_QWORD *)(v9 + 16) = v66;
        v66 = (volatile signed __int32 *)v9;
      }
      MiSetPfnBlink(v9, v64, 0);
      v64 = v21;
    }
    if ( !j )
    {
      v12 = v72;
      MiUnlockWorkingSetExclusive((__int64)v72, CurrentIrql);
      MiWaitForFreePage(v67);
      v14 = v63;
      continue;
    }
    break;
  }
  v24 = v8 + 8 * j;
  v63 = v24;
LABEL_28:
  if ( v66 )
  {
    DemandZeroPte = MiMakeDemandZeroPte(4LL);
    MiChangePageAttributeBatch(v66, a3, DemandZeroPte, v26);
  }
  v23 = 1;
  if ( v8 >= v24 )
  {
LABEL_80:
    v22 = 0;
  }
  else
  {
    v27 = v8 + 0x90482413000LL;
    v65 = v8 + 0x90482413000LL;
    while ( 1 )
    {
      v28 = *(_QWORD *)v8;
      if ( v27 <= 0x7F8
        && (unsigned int)MiPteHasShadow(0x90482413000LL, v17)
        && (v28 & 1) != 0
        && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
      {
        v29 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v29 )
        {
          v30 = *(_QWORD *)(v29 + 8 * ((v8 >> 3) & 0x1FF));
          if ( (v30 & 0x20) != 0 )
            v28 |= 0x20uLL;
          if ( (v30 & 0x42) != 0 )
            v28 |= 0x42uLL;
        }
      }
      v68 = v28;
      if ( (v28 & 1) == 0 )
        KeBugCheckEx(0x1Au, 0x41200uLL, v8, v28, BugCheckParameter3);
      v31 = v28;
      if ( (unsigned __int64)&STACK[0x90482413060] <= 0x7F8
        && (unsigned int)MiPteHasShadow(0x90482413000LL, v28)
        && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
      {
        v33 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v33 )
        {
          v34 = *(_QWORD *)(v33 + 8 * (((unsigned __int64)&v68 >> 3) & 0x1FF));
          if ( (v34 & 0x20) != 0 )
            v31 |= 0x20uLL;
          if ( (v34 & 0x42) != 0 )
            v31 |= 0x42uLL;
        }
      }
      if ( MI_IS_PFN((v31 >> 12) & 0xFFFFFFFFFLL) )
      {
        if ( (*(_QWORD *)(v36 + 8) | 0x8000000000000000uLL) == v8 )
          KeBugCheckEx(0x1Au, 0x41200uLL, v8, v35, BugCheckParameter3);
        v38 = v37;
        if ( (*(_QWORD *)(v36 + 40) & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL )
          v38 = 2;
        if ( *(_WORD *)(v36 + 32) > v38 )
          break;
      }
      v39 = (volatile signed __int32 *)(v9 + 24);
      v77 = v9;
      v40 = v9;
      v41 = *(_QWORD *)(v9 + 24) & 0xFFFFFFFFFLL;
      if ( v41 == 0xFFFFFFFFFLL )
        v9 = 0LL;
      else
        v9 = 48 * v41 - 0x58000000000LL;
      v74 = (v40 + 0x58000000000LL) / 48;
      v42 = v37 + ((v35 & 0x800) != 0 ? 3 : 0);
      if ( a3 == 2 )
      {
        v42 |= 0x18u;
      }
      else if ( !a3 )
      {
        v42 |= 8u;
      }
      v43 = MiMakeDemandZeroPte(v42);
      v46 = v75;
      *(_BYTE *)(v40 + 34) |= 0x20u;
      v68 = v43;
      *(_QWORD *)(v40 + 16) = v43;
      *(_QWORD *)v40 = v46 + 32;
      if ( (v7 & v45) == 0 )
      {
        v47 = CurrentThread;
        *(_BYTE *)(v46 + 189) |= 0x10u;
        *(_DWORD *)(v46 + 80) = 0;
        *(_QWORD *)(v46 + 88) = 0LL;
        *(_QWORD *)(v46 + 152) = v47;
        v7 |= v45;
        *(_QWORD *)(v46 + 240) = v40;
      }
      ContainingPageTable = MiGetContainingPageTable(v8, v46, v44);
      v50 = 0xFFFFFFFFFLL;
      *(_QWORD *)(v40 + 40) ^= (*(_QWORD *)(v40 + 40) ^ ContainingPageTable) & 0xFFFFFFFFFLL;
      v83 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( _interlockedbittestandset64(v39, 0x3FuLL) )
      {
        v51 = 0;
        do
        {
          v51 += v49;
          if ( (v51 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          {
            _mm_pause();
          }
          else
          {
            HvlNotifyLongSpinWait(v51);
            v49 = 1;
          }
        }
        while ( (*(_QWORD *)v39 & 0x8000000000000000uLL) != 0 || _interlockedbittestandset64(v39, 0x3FuLL) );
        v40 = v77;
      }
      *(_QWORD *)v39 &= 0xC000000000000000uLL;
      MiAddLockedPageCharge(v40, v49, v50);
      v52 = *(_BYTE *)(v40 + 34) & 0xFA;
      *(_QWORD *)(v40 + 8) = v8;
      *(_BYTE *)(v40 + 34) = v52 | 2;
      *(_BYTE *)(v40 + 35) ^= (EffectivePagePriorityThread ^ *(_BYTE *)(v40 + 35)) & 7;
      _InterlockedAnd64((volatile signed __int64 *)v39, 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8((unsigned __int8)v83);
      v23 = 1;
      MiReturnFaultCharges((__int64)v67, 1uLL, 0);
      v53 = v74;
      --v69;
      TransitionPte = MiMakeTransitionPte(v74, v42);
      v68 = TransitionPte;
      *(_QWORD *)v8 = TransitionPte;
      if ( v65 <= 0x7F8 )
        MiWritePteShadow(v8, TransitionPte);
      v27 = v65 + 8;
      *v4++ = v53;
      v65 += 8LL;
      v8 += 8LL;
      if ( v8 >= v63 )
        goto LABEL_80;
    }
    v22 = v37;
    v23 = v37;
  }
LABEL_81:
  if ( v9 )
  {
    do
    {
      v55 = *(_QWORD *)(v9 + 24) & 0xFFFFFFFFFLL;
      if ( v55 == 0xFFFFFFFFFLL )
        v9 = 0LL;
      else
        v9 = 48 * v55 - 0x58000000000LL;
      v56 = MiMakeDemandZeroPte(4LL);
      *(_QWORD *)(v57 + 16) = v56;
      MiReleaseFreshPage(v57);
    }
    while ( v9 );
    v23 = 1;
  }
  MiUnlockWorkingSetExclusive((__int64)v72, CurrentIrql);
  if ( v69 )
    MiReturnFaultCharges((__int64)v67, v69, 0);
  v58 = BugCheckParameter3;
  v59 = (__int64)((__int64)v4 - BugCheckParameter3 - 48) >> 3;
  *(_DWORD *)(BugCheckParameter3 + 40) = (_DWORD)v59 << 12;
  if ( v59 )
  {
    v60 = Process;
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], v59);
    v87 = 0;
    v88 = 0LL;
    v89 = 0LL;
    v84 = v23;
    v85 = 0;
    v86 = 20;
    MiInsertTbFlushEntry((__int64)&v84, v78 & 0xFFFFFFFFFFFFF000uLL, v59, 0);
    MiFlushTbList((__int64)&v84);
    *(_QWORD *)(v58 + 16) = v60;
    *(_WORD *)(v58 + 10) |= 2u;
    _InterlockedExchangeAdd64((volatile signed __int64 *)&v60[1].Affinity.Bitmap[14], v59);
    if ( ((unsigned __int8)MmTrackLockedPages & (unsigned __int8)v23) != 0 )
      MiAddMdlTracker(v58, v59, 4);
  }
  return v22;
}
