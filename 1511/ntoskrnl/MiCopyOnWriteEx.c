/*
 * XREFs of MiCopyOnWriteEx @ 0x14006EE60
 * Callers:
 *     MiSystemFault @ 0x1400097D0 (MiSystemFault.c)
 *     MiWalkVaRange @ 0x14001C524 (MiWalkVaRange.c)
 *     MiSplitPrivatePage @ 0x14001E7D0 (MiSplitPrivatePage.c)
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MiCompleteProtoPteFault @ 0x140054EB0 (MiCompleteProtoPteFault.c)
 *     MiSetProtectionOnSection @ 0x14005BC70 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x1400614B0 (MiProtectPrivateMemory.c)
 *     MiValidFault @ 0x140070910 (MiValidFault.c)
 *     MiProtectPool @ 0x140078150 (MiProtectPool.c)
 *     MiLockPagedAddress @ 0x14009A36C (MiLockPagedAddress.c)
 *     MiProbeLeafFrame @ 0x1400A7660 (MiProbeLeafFrame.c)
 *     MiCopyToUserVa @ 0x1400B55D0 (MiCopyToUserVa.c)
 *     MiLockCode @ 0x1400B7B30 (MiLockCode.c)
 *     MiMakeDriverPagesPrivate @ 0x1400BDAC8 (MiMakeDriverPagesPrivate.c)
 *     MiProtoFault @ 0x1400EA824 (MiProtoFault.c)
 *     MmReplaceImportEntry @ 0x1401CF09C (MmReplaceImportEntry.c)
 *     MiSplitReducedCommitClonePage @ 0x1401D2E94 (MiSplitReducedCommitClonePage.c)
 *     MiValidVirtualizationFault @ 0x1401DEFD0 (MiValidVirtualizationFault.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiDecrementCloneBlockReference @ 0x140011D94 (MiDecrementCloneBlockReference.c)
 *     MiUnlockPageTableCharges @ 0x140021978 (MiUnlockPageTableCharges.c)
 *     MiLocateAddress @ 0x140038340 (MiLocateAddress.c)
 *     EtwpLogKernelEvent @ 0x140044C80 (EtwpLogKernelEvent.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiIdentifyPfn @ 0x140050C60 (MiIdentifyPfn.c)
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MiLocateWsle @ 0x140058C00 (MiLocateWsle.c)
 *     MiLogPageAccess @ 0x14005A690 (MiLogPageAccess.c)
 *     MiUpdateWsleHash @ 0x14005A900 (MiUpdateWsleHash.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiPfnShareCountIsZero @ 0x14006A920 (MiPfnShareCountIsZero.c)
 *     MI_READ_PDE @ 0x14006DE04 (MI_READ_PDE.c)
 *     PsGetPagePriorityThread @ 0x140070140 (PsGetPagePriorityThread.c)
 *     MiCopyPage @ 0x1400701E0 (MiCopyPage.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140070760 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiComputeFaultNode @ 0x1400707F0 (MiComputeFaultNode.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiChangePageAttribute @ 0x1400AA634 (MiChangePageAttribute.c)
 *     MiDecrementCombinedPte @ 0x14012B580 (MiDecrementCombinedPte.c)
 *     MiWaitForForkToComplete @ 0x14012FC18 (MiWaitForForkToComplete.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x1401D1940 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiWaitForFreePage @ 0x1401E4C20 (MiWaitForFreePage.c)
 */

__int64 __fastcall MiCopyOnWriteEx(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, unsigned __int8 a4, char a5)
{
  __int16 v7; // bx
  unsigned __int64 v8; // rax
  __int64 v9; // r14
  unsigned int v10; // esi
  __int64 v11; // rdx
  _KPROCESS *Process; // r8
  unsigned __int64 v13; // rax
  LONG *v14; // r13
  int v15; // ecx
  unsigned __int16 SignalState; // ax
  ULONG_PTR v18; // r12
  unsigned int v19; // edi
  __int64 v20; // rbx
  __int64 v21; // rax
  unsigned __int64 *v22; // r13
  unsigned __int64 Wsle; // rax
  _WORD *v24; // r8
  __int16 v25; // dx
  int *v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  unsigned int v31; // r10d
  __int64 v32; // rdi
  unsigned __int64 Address; // rax
  unsigned int v34; // eax
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // rbx
  unsigned __int64 v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int Queue_high; // r12d
  unsigned int PagePriorityThread; // r12d
  int v44; // r13d
  __int64 v45; // rdx
  unsigned __int64 v46; // rax
  unsigned int v47; // ebx
  bool v48; // zf
  __int64 v49; // rcx
  char *v50; // rax
  __int64 v51; // r9
  __int64 v52; // rdi
  bool v53; // cf
  ULONG_PTR *v54; // r12
  ULONG_PTR v55; // rbx
  ULONG_PTR v56; // rbx
  _KPROCESS *v57; // rdx
  int v58; // r15d
  __int64 v59; // rbx
  char v60; // al
  char v61; // cl
  _KPROCESS *v62; // rdx
  __int64 v63; // rdx
  int v64; // eax
  _QWORD *v65; // rcx
  int v66; // [rsp+30h] [rbp-D0h]
  int v67; // [rsp+34h] [rbp-CCh]
  PEX_SPIN_LOCK SpinLock; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v70; // [rsp+48h] [rbp-B8h]
  ULONG_PTR BugCheckParameter3; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v72; // [rsp+58h] [rbp-A8h]
  int *v73; // [rsp+60h] [rbp-A0h]
  __int64 Page; // [rsp+68h] [rbp-98h]
  ULONG_PTR *v75; // [rsp+70h] [rbp-90h]
  int v76; // [rsp+78h] [rbp-88h]
  int v77; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned __int64 v78; // [rsp+80h] [rbp-80h] BYREF
  int v79; // [rsp+88h] [rbp-78h] BYREF
  _KPROCESS *v80; // [rsp+90h] [rbp-70h]
  ULONG_PTR v81; // [rsp+98h] [rbp-68h]
  __int64 v82; // [rsp+A0h] [rbp-60h]
  _WORD *v83; // [rsp+A8h] [rbp-58h] BYREF
  __int16 v84; // [rsp+B0h] [rbp-50h]
  unsigned __int16 v85; // [rsp+B2h] [rbp-4Eh]
  __int64 v86; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v87[3]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v88; // [rsp+D8h] [rbp-28h]
  __int64 v89; // [rsp+E0h] [rbp-20h]
  _QWORD v90[3]; // [rsp+E8h] [rbp-18h] BYREF
  int v91; // [rsp+100h] [rbp+0h] BYREF
  __int16 v92; // [rsp+104h] [rbp+4h]
  __int64 v93; // [rsp+108h] [rbp+8h]
  __int64 v94; // [rsp+110h] [rbp+10h]
  __int64 v95; // [rsp+118h] [rbp+18h]
  int v96; // [rsp+240h] [rbp+140h]

  Page = a3;
  v75 = (ULONG_PTR *)a2;
  BugCheckParameter3 = MI_READ_PTE_LOCK_FREE(a2);
  v7 = BugCheckParameter3;
  v8 = MI_READ_PTE_LOCK_FREE(&BugCheckParameter3);
  v78 = 0LL;
  v72 = 0;
  v73 = &MiSystemPartition;
  v82 = (v8 >> 12) & 0xFFFFFFFFFLL;
  v9 = 48 * v82 - 0x58000000000LL;
  v89 = v9;
  v10 = (v7 & 0x200) == 0LL;
  v11 = *(_QWORD *)(v9 + 8);
  v81 = v11 | 0x8000000000000000uLL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v80 = Process;
  if ( BugCheckParameter2 + 0x70000000000LL > 0x7FFFFFFFFFLL )
  {
    if ( BugCheckParameter2 + 0x80000000000LL <= 0x7FFFFFFFFFLL
      || PsNtosImageBase
      && (BugCheckParameter2 >= (unsigned __int64)PsNtosImageBase && BugCheckParameter2 < PsNtosImageEnd
       || BugCheckParameter2 >= (unsigned __int64)PsHalImageBase && BugCheckParameter2 < PsHalImageEnd) )
    {
      v15 = 0;
      v66 = 0;
      v14 = &dword_1402FFA80;
      SpinLock = &dword_1402FFA80;
      v70 = qword_1402FFB38;
      if ( (v11 & 0x8000000000000000uLL) == 0 )
        v10 = ((v7 & 0x200) == 0LL) | 2;
    }
    else
    {
      if ( BugCheckParameter2 >= qword_1402FE7B0 && BugCheckParameter2 < qword_1402FE7B0 + (qword_1402FE7A0 << 21) )
        KeBugCheckEx(0x1Au, 0x3300uLL, BugCheckParameter2, BugCheckParameter3, 2uLL);
      if ( BugCheckParameter2 + 0x400000000000LL > 0xF7FFFFFFFFFLL )
      {
        if ( BugCheckParameter2 + 0x200000000000LL <= 0xFFFFFFFFFFFLL )
          KeBugCheckEx(0x1Au, 0x3300uLL, BugCheckParameter2, BugCheckParameter3, 1uLL);
        if ( Process[1].Affinity.Bitmap[10] )
        {
          MiWaitForForkToComplete(Process, a4);
          return 0LL;
        }
        v66 = 1;
        v70 = 0xFFFFF58010804000uLL;
        v14 = (LONG *)&Process[1].IdealNode[12];
        SignalState = Process[2].Header.SignalState;
        SpinLock = (PEX_SPIN_LOCK)&Process[1].IdealNode[12];
        if ( SignalState == 1023 )
          v73 = &MiSystemPartition;
        else
          v73 = *(int **)(qword_1402FEC28 + 8LL * SignalState);
        if ( (v11 & 0x8000000000000000uLL) == 0 )
          v10 = ((v7 & 0x200) == 0LL) | 2;
        v72 = MiComputeFaultNode((_DWORD)v14, BugCheckParameter2, 0, 0, (__int64)&v78);
        v15 = 1;
      }
      else
      {
        v15 = 0;
        v10 = ((v7 & 0x200) == 0LL) | 2;
        v66 = 0;
        v70 = qword_1402FFA38;
        v14 = &dword_1402FF980;
        SpinLock = &dword_1402FF980;
        if ( v11 < 0 )
          KeBugCheckEx(0x1Au, 0x3300uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
      }
    }
  }
  else
  {
    v13 = Process[1].ActiveProcessors.Bitmap[2];
    if ( (v11 & 0x8000000000000000uLL) == 0 )
      v10 = ((v7 & 0x200) == 0LL) | 2;
    v14 = (LONG *)(v13 + 2968);
    v66 = 2;
    v15 = 2;
    v70 = *(_QWORD *)(v13 + 3152);
    SpinLock = (PEX_SPIN_LOCK)(v13 + 2968);
  }
  v18 = *(_QWORD *)v9;
  v19 = 0;
  v96 = a5 & 1;
  if ( v96 || v18 && (v15 == 1 || (*(_BYTE *)(v9 + 35) & 8) == 0) )
  {
    Wsle = MiLocateWsle(BugCheckParameter2, (__int64)v14, v18);
    v18 = Wsle;
    if ( Wsle < *(_QWORD *)(v70 + 8) && v66 != 2 )
    {
      v19 = 1;
      if ( (*(_DWORD *)(v9 + 16) & 0x400) != 0 )
        v19 = 2;
    }
    v22 = (unsigned __int64 *)(*(_QWORD *)(v70 + 496) + Wsle * *(unsigned int *)(v70 + 64));
    v20 = *v22;
    v21 = (*v22 >> 4) & 0x1F;
    if ( ((*v22 >> 4) & 0x1F) == 0 )
      v21 = (*(_DWORD *)(v9 + 16) >> 5) & 0x1F;
  }
  else
  {
    v20 = v82;
    v21 = (*(_DWORD *)(v9 + 16) >> 5) & 0x1F;
    v22 = 0LL;
  }
  v67 = MmMakeProtectNotWriteCopy[v21];
  if ( Page == -1 )
  {
    MI_INITIALIZE_COLOR_BASE(SpinLock, v72, &v83);
    v24 = v83;
    v25 = v84;
    v26 = v73;
    ++*v83;
    Page = MiGetPage((__int64)v26, v85 | (unsigned int)(unsigned __int16)(*v24 & v25), 0);
    if ( Page == -1 )
    {
      if ( a4 < 2u && ((__int64)KeGetCurrentThread()[1].Queue & 4) == 0 )
      {
        MiUnlockWorkingSetExclusive((__int64)SpinLock, a4, v27);
        MiWaitForFreePage(v73);
        ExAcquireSpinLockExclusive(SpinLock);
      }
      return 0LL;
    }
  }
  if ( v19 )
  {
    if ( v19 >= 2 )
    {
      v28 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v9 + 40)) >> 8) & 0x3FF);
      MiReturnCommit(v28, 1uLL);
    }
    MiUnlockPageTableCharges(48 * (*(_QWORD *)(v9 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL, 2u, 0);
  }
  v29 = 9;
  v30 = v67;
  v31 = 1;
  v32 = 48 * Page - 0x58000000000LL;
  *(_QWORD *)(v32 + 16) = 0LL;
  if ( v67 == 24 )
  {
    Address = v78;
    v30 = 1;
    LOBYTE(v67) = 1;
    if ( !v78 )
    {
      Address = MiLocateAddress(BugCheckParameter2);
      v78 = Address;
      v30 = v31;
      if ( !Address )
        goto LABEL_58;
      v29 = v31 + 8;
    }
    v34 = (*(_DWORD *)(Address + 48) >> 3) & 0x1F;
    if ( v34 >> 3 == 3 && (v34 & 7) != 0 )
    {
      v30 = 25;
    }
    else if ( v34 >> 3 == v31 )
    {
      v30 = v29;
    }
    LOBYTE(v67) = v30;
  }
LABEL_58:
  *(_QWORD *)(v32 + 16) ^= (*(_DWORD *)(v32 + 16) ^ (32 * v30)) & 0x3E0;
  if ( v96 || v18 && (v66 == 1 || (*(_BYTE *)(v9 + 35) & 8) == 0) )
  {
    ++*((_QWORD *)SpinLock + 16);
    if ( BugCheckParameter2 + 0x98000000000LL > 0x7FFFFFFFFFLL )
      ++*((_QWORD *)SpinLock + 14);
    v35 = v70;
    v36 = v20 & 0xFFFFFFFFFFFFFE0FuLL;
    *(_QWORD *)(v18 * *(unsigned int *)(v70 + 64) + *(_QWORD *)(v70 + 496)) = v36;
    if ( (v36 & 8) == 0 )
    {
      if ( (v36 & 4) != 0 )
      {
        MiUpdateWsleHash(BugCheckParameter2, v18, (ULONG_PTR)SpinLock, v31);
        v35 = v70;
        v36 = *v22;
      }
      *(_QWORD *)(v18 * *(unsigned int *)(v35 + 64) + *(_QWORD *)(v35 + 496)) = v36 | 8;
    }
  }
  v37 = (unsigned __int64)v75;
  *(_WORD *)(v32 + 32) = 1;
  *(_QWORD *)v32 ^= (v18 ^ *(_QWORD *)v32) & 0xFFFFFFFFFLL;
  v86 = MI_READ_PDE((_BYTE *)(((v37 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL));
  *(_QWORD *)(v32 + 40) ^= (*(_QWORD *)(v32 + 40) ^ MI_GET_PAGE_FRAME_FROM_PTE(&v86)) & 0xFFFFFFFFFLL;
  CurrentThread = KeGetCurrentThread();
  Queue_high = HIDWORD(CurrentThread[1].Queue);
  if ( (Queue_high & 0x100) != 0 )
    PagePriorityThread = (Queue_high >> 9) & 7;
  else
    PagePriorityThread = PsGetPagePriorityThread(CurrentThread, v38, v39, v40);
  *(_BYTE *)(v32 + 34) |= 0x10u;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
    v10 |= 4u;
  v77 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v77);
    while ( (*(_QWORD *)(v32 + 24) & 0x8000000000000000uLL) != 0 );
  }
  v44 = v66;
  if ( v66 || (*(_BYTE *)(v9 + 35) & 8) == 0 || v96 )
    *(_BYTE *)(v32 + 35) &= ~8u;
  else
    *(_BYTE *)(v32 + 35) |= 8u;
  v45 = *(unsigned __int8 *)(v9 + 34) >> 6;
  if ( *(unsigned __int8 *)(v32 + 34) >> 6 != (_DWORD)v45 )
    MiChangePageAttribute(v32, v45, 1LL);
  v46 = *(_QWORD *)(v32 + 24) & 0xC000000000000001uLL;
  *(_QWORD *)(v32 + 8) = v37;
  *(_QWORD *)(v32 + 24) = v46 | 1;
  *(_BYTE *)(v32 + 35) ^= (PagePriorityThread ^ *(_BYTE *)(v32 + 35)) & 7;
  *(_BYTE *)(v32 + 34) = *(_BYTE *)(v32 + 34) & 0xF8 | 6;
  if ( ((v10 >> 2) & 1) != 0 )
  {
    memset(v87, 0, sizeof(v87));
    v88 = 0LL;
    MiIdentifyPfn(v32, v87);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( ((v10 >> 2) & 1) != 0 )
  {
    v47 = EtwpActiveSystemLoggers;
    v88 |= 8uLL;
    v48 = !_BitScanForward((unsigned int *)&v49, EtwpActiveSystemLoggers);
    v90[0] = v87;
    v76 = v49;
    v90[1] = 32LL;
    if ( !v48 )
    {
      do
      {
        v47 &= v47 - 1;
        v50 = (char *)&EtwpGroupMasks + 32 * (unsigned int)v49;
        if ( v50 && (*((_DWORD *)v50 + 1) & 0x8000001) != 0 )
          EtwpLogKernelEvent((__int64)v90, (unsigned __int16)EtwpSystemLogger[2 * v49], 1LL, 0x282u, 0x11401B02u);
        v48 = !_BitScanForward((unsigned int *)&v49, v47);
      }
      while ( !v48 );
      v9 = v89;
      v44 = v66;
      v76 = v49;
    }
  }
  __incgsdword(0x2E14u);
  v51 = 1LL;
  if ( (v67 & 2) != 0 )
  {
    if ( (MiFlags & 0x40000) == 0 )
    {
      if ( BugCheckParameter2 < 0xFFFF800000000000uLL )
        goto LABEL_98;
      v51 = 17LL;
    }
  }
  else
  {
    v51 = 9LL;
  }
  if ( BugCheckParameter2 < 0xFFFF800000000000uLL )
  {
LABEL_98:
    if ( KeGetCurrentThread()->ApcState.Process->SecurePid )
      v51 = (unsigned int)v51 | 0x10;
  }
  v52 = Page;
  MiCopyPage(Page, v82, 0LL, v51);
  if ( dword_1402FED88 )
  {
    v53 = PagePriorityThread < dword_1402FEDB0;
    v54 = v75;
    if ( !v53 )
      MiLogPageAccess((__int64)SpinLock, (__int64)v75);
  }
  else
  {
    v54 = v75;
  }
  v55 = BugCheckParameter3;
  if ( (v10 & 1) == 0 )
    v55 = BugCheckParameter3 & 0xFFFFFFFFFFFFF59DuLL | 0x862;
  v93 = 20LL;
  v91 = v44;
  v56 = (v55 ^ (v52 << 12)) & 0xFFFFFFFFF000LL ^ v55;
  BugCheckParameter3 = v56;
  v92 = 0;
  v94 = 0LL;
  v95 = 0LL;
  MiInsertTbFlushEntry((__int64)&v91, BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0);
  if ( (v56 & 0x42) != 0 )
  {
    *v54 = v56 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
    v58 = MiPteInShadowRange(v54);
    if ( v58 )
      MiWritePteShadow(v54, v56 & 0xFFFFFFFFFFFFFBFEuLL | 0x400);
    MiFlushTbList((__int64)&v91, v57);
    *v54 = v56;
    if ( v58 )
      MiWritePteShadow(v54, v56);
  }
  else
  {
    MI_INTERLOCKED_EXCHANGE_PTE(v54, v56);
    MiFlushTbList((__int64)&v91, v62);
  }
  v59 = (__int64)v80;
  if ( v44 == 1 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&v80[1].Affinity.Bitmap[13], 1uLL);
  v79 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v79);
      while ( (*(_QWORD *)(v9 + 24) & 0x8000000000000000uLL) != 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) );
    v59 = (__int64)v80;
  }
  if ( !v44 && !v96 )
  {
    v60 = *(_BYTE *)(v9 + 35);
    if ( (v60 & 8) != 0 )
      *(_BYTE *)(v9 + 35) = v60 & 0xF7;
  }
  v61 = *(_BYTE *)(v9 + 34);
  if ( (v61 & 7) != 6 )
    KeBugCheckEx(0x4Eu, 0x99uLL, (v9 + 0x58000000000LL) / 48, v61 & 7, *(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFLL);
  v63 = (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
  *(_QWORD *)(v9 + 24) ^= (*(_QWORD *)(v9 + 24) ^ v63) & 0x3FFFFFFFFFFFFFFFLL;
  if ( !v63 )
    MiPfnShareCountIsZero(v9, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (v10 & 2) != 0 )
  {
    v64 = MiDecrementCombinedPte(v81);
LABEL_137:
    if ( v64 == 3 )
      MiChargeCommit((unsigned __int64)v73, 1uLL, 4uLL);
  }
  else if ( v70 == 0xFFFFF58010804000uLL )
  {
    v65 = *(_QWORD **)(v59 + 912);
    while ( v65 )
    {
      if ( v81 > v65[4] )
      {
        v65 = (_QWORD *)v65[1];
      }
      else
      {
        if ( v81 >= v65[3] )
        {
          v64 = MiDecrementCloneBlockReference((ULONG_PTR)v65, v81, v59);
          goto LABEL_137;
        }
        v65 = (_QWORD *)*v65;
      }
    }
  }
  return 1LL;
}
