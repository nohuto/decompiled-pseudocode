/*
 * XREFs of MiCopyOnWriteEx @ 0x140058250
 * Callers:
 *     MiLockPagedAddress @ 0x140004FA4 (MiLockPagedAddress.c)
 *     MiSplitPrivatePage @ 0x140008EC0 (MiSplitPrivatePage.c)
 *     MiLockCode @ 0x140010950 (MiLockCode.c)
 *     MiMakeDriverPagesPrivate @ 0x1400246E4 (MiMakeDriverPagesPrivate.c)
 *     MiProbeLeafFrame @ 0x140034440 (MiProbeLeafFrame.c)
 *     MiValidFault @ 0x14005B5E0 (MiValidFault.c)
 *     MiProtectPrivateMemory @ 0x14005DD20 (MiProtectPrivateMemory.c)
 *     MiProtectPool @ 0x14005EFD0 (MiProtectPool.c)
 *     MiCopyToUserVa @ 0x140061A10 (MiCopyToUserVa.c)
 *     MiSystemFault @ 0x14007DA70 (MiSystemFault.c)
 *     MiWalkVaRange @ 0x14007F5DC (MiWalkVaRange.c)
 *     MiSetProtectionOnSection @ 0x14008FAB0 (MiSetProtectionOnSection.c)
 *     MiCompleteProtoPteFault @ 0x1400BA8F0 (MiCompleteProtoPteFault.c)
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 *     MiProtoFault @ 0x1400FE484 (MiProtoFault.c)
 *     MmReplaceImportEntry @ 0x14020E664 (MmReplaceImportEntry.c)
 *     MiSplitReducedCommitClonePage @ 0x1402141F4 (MiSplitReducedCommitClonePage.c)
 *     MiValidVirtualizationFault @ 0x140224154 (MiValidVirtualizationFault.c)
 * Callees:
 *     MiDecrementCloneBlockReference @ 0x14000539C (MiDecrementCloneBlockReference.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140055C20 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiCopyPage @ 0x140058ED0 (MiCopyPage.c)
 *     MiSetPfnTbFlushStamp @ 0x140059A30 (MiSetPfnTbFlushStamp.c)
 *     MiLocateCloneAddress @ 0x140059A90 (MiLocateCloneAddress.c)
 *     MiComputeFaultNode @ 0x140059AF0 (MiComputeFaultNode.c)
 *     MiMarkPfnVerified @ 0x1400796B8 (MiMarkPfnVerified.c)
 *     MiUnlockPageTableCharges @ 0x14007CC10 (MiUnlockPageTableCharges.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiLocateAddress @ 0x1400898F0 (MiLocateAddress.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiLocateWsle @ 0x140095350 (MiLocateWsle.c)
 *     MiLogPageAccess @ 0x140096F70 (MiLogPageAccess.c)
 *     MiUpdateWsleHash @ 0x140097290 (MiUpdateWsleHash.c)
 *     EtwpLogKernelEvent @ 0x1400A57F0 (EtwpLogKernelEvent.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MiPfnShareCountIsZero @ 0x1400B2270 (MiPfnShareCountIsZero.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     MiIdentifyPfn @ 0x1400C4A30 (MiIdentifyPfn.c)
 *     MiChangePageAttribute @ 0x1400E5678 (MiChangePageAttribute.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1402259B4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetContainingPageTable @ 0x140225A80 (MiGetContainingPageTable.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 *     MiDecrementCombinedPte @ 0x14022A0F0 (MiDecrementCombinedPte.c)
 *     MiWaitForFreePage @ 0x14022ECFC (MiWaitForFreePage.c)
 *     MiWaitForForkToComplete @ 0x1402314F8 (MiWaitForForkToComplete.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiCopyOnWriteEx(
        ULONG_PTR BugCheckParameter2,
        volatile __int64 *a2,
        __int64 Page,
        unsigned __int8 a4,
        char a5)
{
  ULONG_PTR PteShadow; // rdi
  __int64 v6; // r11
  ULONG_PTR v7; // r10
  unsigned int v8; // r14d
  unsigned __int64 v9; // rcx
  __int64 v10; // r15
  __int64 v11; // r8
  unsigned int v12; // esi
  _KPROCESS *Process; // r11
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // rdx
  signed __int32 *v16; // r12
  int v17; // eax
  int v19; // r10d
  __int64 v20; // r8
  int v21; // eax
  bool v22; // zf
  unsigned int v23; // r13d
  unsigned __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rbx
  unsigned __int64 Wsle; // rcx
  __int64 v28; // r9
  _WORD *v29; // r8
  __int16 v30; // dx
  __int16 *v31; // rcx
  signed __int32 i; // edx
  __int16 *v33; // rax
  __int64 v34; // rcx
  int v35; // r13d
  __int64 Address; // rax
  unsigned int v37; // ecx
  __int64 v38; // r13
  __int64 DemandZeroPte; // rax
  unsigned __int64 v40; // r8
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rbx
  __int64 v43; // rdx
  __int64 ContainingPageTable; // rax
  __int64 v45; // r11
  struct _KTHREAD *CurrentThread; // rax
  unsigned int Queue_high; // edx
  unsigned int v48; // edx
  int v49; // eax
  unsigned int v50; // ebx
  __int64 v51; // rdx
  unsigned int v52; // ebx
  __int64 v53; // rcx
  char *v54; // rax
  __int64 v55; // r9
  ULONG_PTR v56; // rax
  signed __int64 v57; // rdi
  __int64 v58; // rdi
  unsigned __int64 v59; // r12
  unsigned __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // rbx
  char v63; // al
  char v64; // cl
  __int64 v65; // r9
  __int64 v66; // rdx
  int v67; // eax
  ULONG_PTR v68; // rdi
  ULONG_PTR CloneAddress; // rax
  int v70; // [rsp+30h] [rbp-D0h]
  unsigned int v71; // [rsp+34h] [rbp-CCh]
  int v73; // [rsp+3Ch] [rbp-C4h]
  unsigned int v74; // [rsp+3Ch] [rbp-C4h]
  unsigned __int64 v76; // [rsp+48h] [rbp-B8h]
  signed __int64 v79; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v80; // [rsp+68h] [rbp-98h]
  __int16 *v81; // [rsp+70h] [rbp-90h]
  int v82; // [rsp+78h] [rbp-88h]
  __int64 v83; // [rsp+80h] [rbp-80h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+88h] [rbp-78h]
  __int64 v85; // [rsp+90h] [rbp-70h]
  unsigned __int64 *v86; // [rsp+98h] [rbp-68h]
  _KPROCESS *v87; // [rsp+A0h] [rbp-60h]
  _WORD *v88; // [rsp+A8h] [rbp-58h] BYREF
  __int16 v89; // [rsp+B0h] [rbp-50h]
  unsigned __int16 v90; // [rsp+B2h] [rbp-4Eh]
  _QWORD v91[3]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v92; // [rsp+D0h] [rbp-30h]
  __int64 v93; // [rsp+D8h] [rbp-28h]
  _QWORD v94[2]; // [rsp+E0h] [rbp-20h] BYREF
  int v95; // [rsp+F0h] [rbp-10h] BYREF
  __int16 v96; // [rsp+F4h] [rbp-Ch]
  __int64 v97; // [rsp+F8h] [rbp-8h]
  __int64 v98; // [rsp+100h] [rbp+0h]
  __int64 v99; // [rsp+108h] [rbp+8h]
  int v100; // [rsp+230h] [rbp+130h]

  PteShadow = *a2;
  v6 = 0x90482413000LL;
  v7 = BugCheckParameter2;
  v8 = 0;
  if ( (unsigned __int64)(a2 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(a2, PteShadow);
  v79 = PteShadow;
  v9 = PteShadow;
  if ( (unsigned __int64)&v79 + v6 <= 0x7F8 )
    v9 = MiReadPteShadow(&v79, PteShadow);
  v85 = (v9 >> 12) & 0xFFFFFFFFFLL;
  v83 = 0LL;
  v73 = 0;
  v10 = 48 * v85 - 0x58000000000LL;
  v93 = v10;
  v11 = *(_QWORD *)(v10 + 8);
  v81 = MiSystemPartition;
  v12 = (PteShadow & 0x200) == 0;
  BugCheckParameter3 = v11 | 0x8000000000000000uLL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v87 = Process;
  if ( v7 + 0x70000000000LL > 0x7FFFFFFFFFLL )
  {
    if ( v7 + 0x80000000000LL <= 0x7FFFFFFFFFLL
      || PsNtosImageBase
      && (v7 >= (unsigned __int64)PsNtosImageBase && v7 < PsNtosImageEnd
       || v7 >= (unsigned __int64)PsHalImageBase && v7 < PsHalImageEnd) )
    {
      v17 = 0;
      v70 = 0;
      v16 = dword_14034FF40;
      v76 = qword_14034FFF8;
      if ( (v11 & 0x8000000000000000uLL) == 0 )
        v12 |= 2u;
    }
    else
    {
      if ( v7 >= qword_14034EC70 && v7 < qword_14034EC70 + (qword_14034EC60 << 21) )
        KeBugCheckEx(0x1Au, 0x3300uLL, v7, PteShadow, 2uLL);
      if ( v7 + 0x400000000000LL > 0xF7FFFFFFFFFLL )
      {
        if ( v7 + 0x200000000000LL <= 0xFFFFFFFFFFFLL )
          KeBugCheckEx(0x1Au, 0x3300uLL, v7, PteShadow, 1uLL);
        if ( Process[1].Affinity.Bitmap[10] )
        {
          MiWaitForForkToComplete(Process, a4);
          return 0LL;
        }
        v16 = (signed __int32 *)&Process[1].IdealNode[8];
        v70 = 1;
        v76 = 0xFFFFF58010804000uLL;
        v81 = MiPartitionIdToPointer(WORD2(Process[1].SecurePid));
        if ( (v20 & 0x8000000000000000uLL) == 0 )
          v12 |= 2u;
        v21 = MiComputeFaultNode((_DWORD)v16, v19, 0, 0, (__int64)&v83);
        v7 = BugCheckParameter2;
        v73 = v21;
        v17 = 1;
      }
      else
      {
        v16 = dword_14034FE40;
        v12 |= 2u;
        v76 = qword_14034FEF8;
        v17 = 0;
        v70 = 0;
        if ( v11 < 0 )
          KeBugCheckEx(0x1Au, 0x3300uLL, v7, PteShadow, 0LL);
      }
    }
  }
  else
  {
    v14 = Process[1].ActiveProcessors.Bitmap[2];
    if ( (v11 & 0x8000000000000000uLL) == 0 )
      v12 |= 2u;
    v15 = *(_QWORD *)(v14 + 3152);
    v16 = (signed __int32 *)(v14 + 2968);
    v76 = v15;
    v17 = 2;
    v70 = 2;
  }
  v22 = (a5 & 1) == 0;
  v100 = a5 & 1;
  v23 = 0;
  v24 = *(_QWORD *)v10;
  v80 = *(_QWORD *)v10;
  if ( v22 && (!v24 || v17 != 1 && (*(_BYTE *)(v10 + 35) & 8) != 0) )
  {
    v25 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v10 + 16);
    v26 = v85;
    v86 = 0LL;
LABEL_39:
    LODWORD(v28) = v25;
    goto LABEL_40;
  }
  Wsle = MiLocateWsle(v7);
  v80 = Wsle;
  if ( Wsle < *(_QWORD *)(v76 + 8) && v70 != 2 )
  {
    v23 = 1;
    if ( (*(_DWORD *)(v10 + 16) & 0x400) != 0 )
      v23 = 2;
  }
  v86 = (unsigned __int64 *)(*(_QWORD *)(v76 + 496) + Wsle * *(unsigned int *)(v76 + 64));
  v26 = *v86;
  v28 = (*v86 >> 4) & 0x1F;
  if ( ((*v86 >> 4) & 0x1F) == 0 )
  {
    v25 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v10 + 16);
    goto LABEL_39;
  }
LABEL_40:
  v71 = MmMakeProtectNotWriteCopy[(unsigned int)v28];
  if ( Page != -1
    || (MI_INITIALIZE_COLOR_BASE((__int64)v16, v73, (__int64)&v88),
        v29 = v88,
        v30 = v89,
        v31 = v81,
        ++*v88,
        Page = MiGetPage(v31, v90 | (unsigned int)(unsigned __int16)(*v29 & v30), 0LL),
        Page != -1) )
  {
    if ( v23 )
    {
      if ( v23 >= 2 )
      {
        v33 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v10 + 40)) >> 8) & 0x3FF);
        MiReturnCommit(v33, 1LL);
      }
      MiUnlockPageTableCharges(48 * (*(_QWORD *)(v10 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL);
    }
    v34 = v71;
    if ( v71 == 24 )
    {
      v35 = 1;
      v71 = 1;
      Address = v83;
      if ( v83 || (Address = MiLocateAddress(BugCheckParameter2), (v83 = Address) != 0) )
      {
        v37 = (*(_DWORD *)(Address + 48) >> 3) & 0x1F;
        if ( v37 >> 3 == 3 && (v37 & 7) != 0 )
        {
          LOBYTE(v71) = 25;
          v34 = 25LL;
          goto LABEL_70;
        }
        if ( v37 >> 3 == 1 )
          v35 = 9;
        v71 = v35;
      }
      v34 = v71;
    }
LABEL_70:
    v38 = 48 * Page - 0x58000000000LL;
    DemandZeroPte = MiMakeDemandZeroPte(v34);
    v41 = v80;
    *(_QWORD *)(v38 + 16) = DemandZeroPte;
    if ( v100 || v41 && (v70 == 1 || (*(_BYTE *)(v10 + 35) & 8) == 0) )
    {
      ++*((_QWORD *)v16 + 16);
      if ( BugCheckParameter2 + 0x98000000000LL > 0x7FFFFFFFFFLL )
        ++*((_QWORD *)v16 + 14);
      v40 = v76;
      v42 = v26 & 0xFFFFFFFFFFFFFE0FuLL;
      *(_QWORD *)(v41 * *(unsigned int *)(v76 + 64) + *(_QWORD *)(v76 + 496)) = v42;
      if ( (v42 & 8) == 0 )
      {
        if ( (v42 & 4) != 0 )
        {
          MiUpdateWsleHash(BugCheckParameter2, v41, v16, 1LL);
          v41 = v80;
          v40 = v76;
          v42 = *v86;
        }
        *(_QWORD *)(v41 * *(unsigned int *)(v40 + 64) + *(_QWORD *)(v40 + 496)) = v42 | 8;
      }
    }
    v43 = (*(_QWORD *)v38 ^ v41) & 0xFFFFFFFFFLL;
    *(_WORD *)(v38 + 32) = 1;
    *(_QWORD *)v38 ^= v43;
    ContainingPageTable = MiGetContainingPageTable(a2, v43, v40);
    *(_QWORD *)(v38 + 40) ^= v45 & (*(_QWORD *)(v38 + 40) ^ ContainingPageTable);
    CurrentThread = KeGetCurrentThread();
    Queue_high = HIDWORD(CurrentThread[1].Queue);
    if ( (Queue_high & 0x100) != 0 )
    {
      v74 = (Queue_high >> 9) & 7;
    }
    else
    {
      v48 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 12) & 7;
      v74 = v48;
      if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
      {
        v49 = 2;
        if ( v48 < 2 )
          v49 = v48;
        v74 = v49;
      }
    }
    *(_BYTE *)(v38 + 34) |= 0x10u;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
      v12 |= 4u;
    v50 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v38 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v50 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v50);
      }
      while ( (*(_QWORD *)(v38 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v38 + 24), 0x3FuLL) );
    }
    if ( v70 || (*(_BYTE *)(v10 + 35) & 8) == 0 || v100 )
      *(_BYTE *)(v38 + 35) &= ~8u;
    else
      *(_BYTE *)(v38 + 35) |= 8u;
    v51 = *(unsigned __int8 *)(v10 + 34) >> 6;
    if ( *(unsigned __int8 *)(v38 + 34) >> 6 != (_DWORD)v51 )
      MiChangePageAttribute(v38, v51, 1LL);
    MiSetPfnTbFlushStamp(v38, 0LL, 1LL);
    *(_QWORD *)(v38 + 24) = *(_QWORD *)(v38 + 24) & 0xC000000000000000uLL | 1;
    *(_BYTE *)(v38 + 35) ^= (v74 ^ *(_BYTE *)(v38 + 35)) & 7;
    *(_QWORD *)(v38 + 8) = a2;
    *(_BYTE *)(v38 + 34) = *(_BYTE *)(v38 + 34) & 0xF8 | 6;
    if ( ((v12 >> 2) & 1) != 0 )
    {
      memset(v91, 0, sizeof(v91));
      v92 = 0LL;
      MiIdentifyPfn(v38, v91);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( ((v12 >> 2) & 1) != 0 )
    {
      v52 = EtwpActiveSystemLoggers;
      v92 |= 8uLL;
      v22 = !_BitScanForward((unsigned int *)&v53, EtwpActiveSystemLoggers);
      v94[0] = v91;
      v82 = v53;
      v94[1] = 32LL;
      if ( !v22 )
      {
        do
        {
          v52 &= v52 - 1;
          v54 = (char *)&EtwpGroupMasks + 32 * (unsigned int)v53;
          if ( v54 && (*((_DWORD *)v54 + 1) & 0x8000001) != 0 )
            EtwpLogKernelEvent((unsigned int)v94, (unsigned __int16)EtwpSystemLogger[2 * v53], 1, 642, 289413890);
          v22 = !_BitScanForward((unsigned int *)&v53, v52);
        }
        while ( !v22 );
        v10 = v93;
        v8 = 0;
        v82 = v53;
      }
    }
    __incgsdword(0x2E14u);
    v55 = 1LL;
    if ( (v71 & 2) != 0 )
    {
      if ( (BYTE2(MiFlags) & 3) == 1 )
      {
        v56 = BugCheckParameter2;
        if ( BugCheckParameter2 < 0xFFFF800000000000uLL )
        {
LABEL_115:
          if ( KeGetCurrentThread()->ApcState.Process->SecurePid )
            v55 = (unsigned int)v55 | 0x10;
LABEL_117:
          MiCopyPage(Page, v85, 0LL, v55);
          if ( dword_14034F248 && v74 >= dword_14034F270 )
            MiLogPageAccess(v16, a2);
          if ( (v12 & 1) != 0 )
          {
            v57 = v79;
          }
          else
          {
            v57 = PteShadow & 0xFFFFFFFFFFFFF59DuLL | 0x862;
            if ( (BYTE2(MiFlags) & 3u) > 1 && v57 >= 0 )
              MiMarkPfnVerified(v38, 1LL);
          }
          v97 = 20LL;
          v95 = v70;
          v58 = (v57 ^ (Page << 12)) & 0xFFFFFFFFF000LL ^ v57;
          v96 = 0;
          v79 = v58;
          v98 = 0LL;
          v99 = 0LL;
          MiInsertTbFlushEntry(&v95, BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0LL);
          v59 = (unsigned __int64)(a2 + 0x12090482600LL);
          if ( (v58 & 0x42) != 0 )
          {
            v60 = v58 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
            *a2 = v60;
            if ( v59 <= 0x7F8 )
              MiWritePteShadow(a2, v60);
            MiFlushTbList(&v95);
            *a2 = v58;
            if ( v59 <= 0x7F8 )
              MiWritePteShadow(a2, v58);
          }
          else
          {
            _InterlockedExchange64(a2, v58);
            if ( v59 <= 0x7F8 )
              MiWritePteShadow(a2, v79);
            MiFlushTbList(&v95);
          }
          v62 = (__int64)v87;
          if ( v70 == 1 )
            _InterlockedExchangeAdd64((volatile signed __int64 *)&v87[1].Affinity.Bitmap[13], 1uLL);
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v8);
            }
            while ( (*(_QWORD *)(v10 + 24) & 0x8000000000000000uLL) != 0
                 || _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) );
          }
          if ( !v70 && !v100 )
          {
            v63 = *(_BYTE *)(v10 + 35);
            if ( (v63 & 8) != 0 )
              *(_BYTE *)(v10 + 35) = v63 & 0xF7;
          }
          v64 = *(_BYTE *)(v10 + 34);
          v65 = 0x3FFFFFFFFFFFFFFFLL;
          if ( (v64 & 7) != 6 )
            KeBugCheckEx(
              0x4Eu,
              0x99uLL,
              (v10 + 0x58000000000LL) / 48,
              v64 & 7,
              *(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFLL);
          v66 = (*(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
          *(_QWORD *)(v10 + 24) ^= (*(_QWORD *)(v10 + 24) ^ v66) & 0x3FFFFFFFFFFFFFFFLL;
          if ( !v66 )
            MiPfnShareCountIsZero(v10, 0LL);
          _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (v12 & 2) != 0 )
          {
            v67 = MiDecrementCombinedPte(BugCheckParameter3, v66, v61, v65);
          }
          else
          {
            if ( v76 != 0xFFFFF58010804000uLL )
              return 1LL;
            v68 = BugCheckParameter3;
            CloneAddress = MiLocateCloneAddress(v62, BugCheckParameter3);
            if ( !CloneAddress )
              return 1LL;
            v67 = MiDecrementCloneBlockReference(CloneAddress, v68, v62);
          }
          if ( v67 == 3 )
            MiChargeCommit(v81, 1LL, 4LL);
          return 1LL;
        }
        v55 = 17LL;
LABEL_114:
        if ( v56 >= 0xFFFF800000000000uLL )
          goto LABEL_117;
        goto LABEL_115;
      }
    }
    else
    {
      v55 = 9LL;
    }
    v56 = BugCheckParameter2;
    goto LABEL_114;
  }
  if ( a4 < 2u )
  {
    MiUnlockWorkingSetExclusive(v16, a4);
    MiWaitForFreePage(v81);
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v16);
      return 0LL;
    }
    if ( _interlockedbittestandset(v16, 0x1Fu) )
      v8 = ExpWaitForSpinLockExclusiveAndAcquire(v16);
    for ( i = *v16; (*v16 & 0xBFFFFFFF) != 0x80000000; i = *v16 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(v16, i | 0x40000000, i);
      if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v8);
    }
  }
  return 0LL;
}
