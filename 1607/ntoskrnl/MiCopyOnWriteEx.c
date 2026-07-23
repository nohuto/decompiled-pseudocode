/*
 * XREFs of MiCopyOnWriteEx @ 0x1400E05D0
 * Callers:
 *     MiCopyToUserVa @ 0x1400146D0 (MiCopyToUserVa.c)
 *     MiLockCode @ 0x140015170 (MiLockCode.c)
 *     MiSystemFault @ 0x14001BB70 (MiSystemFault.c)
 *     MiProbeLeafFrame @ 0x14002F940 (MiProbeLeafFrame.c)
 *     MiCompleteProtoPteFault @ 0x140039670 (MiCompleteProtoPteFault.c)
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiSetProtectionOnSection @ 0x140043770 (MiSetProtectionOnSection.c)
 *     MiMakeDriverPagesPrivate @ 0x140087988 (MiMakeDriverPagesPrivate.c)
 *     MiSplitPrivatePage @ 0x1400980C0 (MiSplitPrivatePage.c)
 *     MiProtoFault @ 0x1400A2790 (MiProtoFault.c)
 *     MiWalkVaRange @ 0x1400B9514 (MiWalkVaRange.c)
 *     MiProtectPrivateMemory @ 0x1400DEEE0 (MiProtectPrivateMemory.c)
 *     MiValidFault @ 0x1400E40F0 (MiValidFault.c)
 *     MiProtectPool @ 0x1400E8270 (MiProtectPool.c)
 *     MiLockPagedAddress @ 0x14010973C (MiLockPagedAddress.c)
 *     MiSplitReducedCommitClonePage @ 0x1401E2D84 (MiSplitReducedCommitClonePage.c)
 *     MmReplaceImportEntry @ 0x1401E5DD4 (MmReplaceImportEntry.c)
 *     MiValidVirtualizationFault @ 0x1401EFB2C (MiValidVirtualizationFault.c)
 * Callees:
 *     MiWaitForForkToComplete @ 0x1400018F0 (MiWaitForForkToComplete.c)
 *     MiIdentifyPfn @ 0x14000F810 (MiIdentifyPfn.c)
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     MiChangePageAttribute @ 0x14001CC08 (MiChangePageAttribute.c)
 *     MiLocateAddress @ 0x14001EC10 (MiLocateAddress.c)
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MiGetPage @ 0x14003D5D0 (MiGetPage.c)
 *     MiLocateWsle @ 0x1400466D0 (MiLocateWsle.c)
 *     MiLogPageAccess @ 0x1400484C0 (MiLogPageAccess.c)
 *     MiUpdateWsleHash @ 0x140048900 (MiUpdateWsleHash.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     EtwpLogKernelEvent @ 0x1400592C0 (EtwpLogKernelEvent.c)
 *     MiPfnShareCountIsZero @ 0x140066260 (MiPfnShareCountIsZero.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiDecrementCloneBlockReference @ 0x1400B6B30 (MiDecrementCloneBlockReference.c)
 *     MiUnlockPageTableCharges @ 0x1400B8AD8 (MiUnlockPageTableCharges.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     MiCopyPage @ 0x1400E1100 (MiCopyPage.c)
 *     MiInitializePageColorBase @ 0x1400E3F40 (MiInitializePageColorBase.c)
 *     MiComputeFaultNode @ 0x1400E3FD0 (MiComputeFaultNode.c)
 *     PsGetPagePriorityThread @ 0x1400E5CA0 (PsGetPagePriorityThread.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x1401E1924 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1401F23E4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetContainingPageTable @ 0x1401F241C (MiGetContainingPageTable.c)
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 *     MiWaitForFreePage @ 0x1401F4008 (MiWaitForFreePage.c)
 *     MiDecrementCombinedPte @ 0x1401F9558 (MiDecrementCombinedPte.c)
 */

__int64 __fastcall MiCopyOnWriteEx(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, char a4, char a5)
{
  unsigned __int64 v5; // rbp
  ULONG_PTR v6; // r15
  __int64 v7; // rax
  unsigned __int8 v8; // r10
  __int64 v9; // rsi
  __int16 v10; // r9
  __int64 v11; // rdx
  unsigned int v12; // edi
  _KPROCESS *Process; // r8
  unsigned __int64 v14; // rax
  __int64 v15; // r10
  int v16; // r8d
  char *AnyMultiplexedVm; // rax
  __int64 v18; // rdx
  __int64 v19; // r11
  char *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r11
  unsigned __int16 v24; // ax
  unsigned __int16 *v25; // r13
  ULONG_PTR *v26; // r13
  ULONG_PTR Wsle; // r12
  unsigned int v28; // r14d
  unsigned int v29; // eax
  __int64 v30; // r8
  __int64 v31; // r10
  __int64 v32; // rbx
  __int64 v33; // r9
  __int64 *v34; // rcx
  bool v35; // zf
  _WORD *v36; // r8
  __int16 v37; // dx
  __int64 v38; // rcx
  __int64 Page; // rax
  __int64 v40; // rdx
  LONG *SharedVm; // rbx
  int *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rdx
  int v45; // r10d
  unsigned __int64 Address; // rax
  int v47; // r14d
  unsigned int v48; // eax
  __m128i *v49; // r14
  unsigned int v50; // r10d
  ULONG_PTR v51; // rdx
  unsigned __int64 v52; // rbx
  __int64 v53; // r13
  __int64 ContainingPageTable; // rax
  char v55; // r10
  __int64 v56; // r9
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int Queue; // r12d
  unsigned int PagePriorityThread; // r12d
  unsigned int v60; // edx
  unsigned __int64 v61; // rax
  unsigned int v62; // ebx
  __int64 v63; // rcx
  char *v64; // rax
  __int64 v65; // r9
  __int64 v66; // r14
  __int64 v67; // rdx
  __int64 v68; // r13
  unsigned __int64 v69; // rbx
  int v70; // r12d
  __int64 v71; // rbx
  _QWORD *v72; // r15
  unsigned __int64 v73; // rdx
  _KPROCESS *v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  int v78; // r14d
  ULONG_PTR v79; // rbx
  char v80; // al
  char v81; // dl
  __int64 v82; // rcx
  _KPROCESS *v83; // rdx
  __int64 v84; // r8
  __int64 v85; // r9
  int v86; // eax
  _QWORD *v87; // rcx
  unsigned __int64 v88; // rax
  int v89; // [rsp+50h] [rbp+0h] BYREF
  int v90; // [rsp+250h] [rbp+200h]

  v5 = (unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL;
  v6 = BugCheckParameter2;
  *(_QWORD *)(v5 + 120) = BugCheckParameter2;
  *(_BYTE *)(v5 + 4) = a4;
  *(_QWORD *)(v5 + 56) = a3;
  *(_QWORD *)(v5 + 64) = a2;
  *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = MI_READ_PTE_LOCK_FREE(a2);
  v7 = MI_GET_PAGE_FRAME_FROM_PTE(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 24);
  *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = v7;
  v9 = 48 * v7 - 0x58000000000LL;
  *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70) = v9;
  *(_DWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = 0;
  v11 = *(_QWORD *)(v9 + 8);
  v12 = (v10 & 0x200) == 0LL;
  *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = MiSystemPartition;
  *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = v11 | 0x8000000000000000uLL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v14 = qword_140326950;
  *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = Process;
  if ( v6 < v14 || v6 >= v14 + 0x8000000000LL )
  {
    if ( v6 >= qword_140328030 && v6 < qword_140328030 + 0x8000000000LL
      || PsNtosImageBase
      && (v6 >= (unsigned __int64)PsNtosImageBase && v6 < PsNtosImageEnd
       || v6 >= (unsigned __int64)PsHalImageBase && v6 < PsHalImageEnd) )
    {
      *(_DWORD *)v5 = 0;
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
      *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = AnyMultiplexedVm;
      v15 = (__int64)AnyMultiplexedVm;
      if ( (v18 & v19) == 0 )
        v12 |= 2u;
    }
    else
    {
      if ( v6 >= qword_140326B30 && v6 < qword_140326B30 + (qword_140326B20 << 21) )
        KeBugCheckEx(0x1Au, 0x3300uLL, v6, *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18), 2uLL);
      if ( v6 < qword_140327F70 || v6 >= qword_140327F70 + 0xF8000000000LL )
      {
        if ( v6 >= qword_140327F60[0] && v6 < qword_140327F60[0] + 0x100000000000LL )
          KeBugCheckEx(0x1Au, 0x3300uLL, v6, *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18), 1uLL);
        if ( Process[1].Affinity.Bitmap[10] )
        {
          MiWaitForForkToComplete((__int64)Process, v8);
          return 0LL;
        }
        v24 = WORD2(Process[1].InstrumentationCallback);
        v25 = &Process[1].IdealNode[12];
        *(_DWORD *)v5 = 1;
        *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = (char *)Process + 1280;
        if ( v24 == 1023 )
          *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = MiSystemPartition;
        else
          *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = *(_QWORD *)(qword_140327038 + 8LL * v24);
        if ( (v11 & 0x8000000000000000uLL) == 0 )
          v12 |= 2u;
        *(_DWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = MiComputeFaultNode(
                                                                                 (_DWORD)v25,
                                                                                 v6,
                                                                                 0,
                                                                                 0,
                                                                                 v5 + 80);
        v15 = (__int64)v25;
        v16 = 1;
      }
      else
      {
        *(_DWORD *)v5 = 0;
        v20 = MiGetAnyMultiplexedVm(2);
        v12 |= 2u;
        *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v20;
        v15 = (__int64)v20;
        if ( (v21 & v22) != 0 )
          KeBugCheckEx(0x1Au, 0x3300uLL, v6, *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18), 0LL);
      }
    }
  }
  else
  {
    v15 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008;
    *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v15;
    if ( (v11 & 0x8000000000000000uLL) == 0 )
      v12 |= 2u;
    v16 = 2;
    *(_DWORD *)v5 = 2;
  }
  if ( (*(_BYTE *)(v15 + 184) & 7) == 2 )
    v26 = &::BugCheckParameter2;
  else
    v26 = (ULONG_PTR *)(*(_QWORD *)(v15 + 16) + 416LL);
  Wsle = *(_QWORD *)v9;
  v28 = 0;
  v90 = a5 & 1;
  if ( v90 || Wsle && (v16 == 1 || (*(_BYTE *)(v9 + 35) & 8) == 0) )
  {
    Wsle = MiLocateWsle(v6, v15, Wsle);
    if ( Wsle < v26[1] && *(_DWORD *)v5 != 2 )
    {
      v28 = 1;
      if ( (*(_DWORD *)(v9 + 16) & 0x400LL) != 0 )
        v28 = 2;
    }
    v34 = (__int64 *)(v26[10] + Wsle * *((unsigned int *)v26 + 8));
    *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = v34;
    v32 = *v34;
    v33 = ((unsigned __int64)*v34 >> 4) & 0x1F;
    if ( (((unsigned __int64)*v34 >> 4) & 0x1F) == 0 )
      v33 = (unsigned int)MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v9 + 16);
    v31 = *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
  }
  else
  {
    v29 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v9 + 16);
    v32 = *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68);
    v33 = v29;
    *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = 0LL;
  }
  v35 = *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) == -1LL;
  *(_DWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = MmMakeProtectNotWriteCopy[(unsigned int)v33];
  if ( v35 )
  {
    MiInitializePageColorBase(v31, *(unsigned int *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20), v5 + 128);
    v36 = *(_WORD **)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x80);
    v37 = *(_WORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88);
    v38 = *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
    Page = MiGetPage(
             v38,
             *(unsigned __int16 *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x8A) | (unsigned int)(unsigned __int16)(++*v36 & v37),
             0);
    *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = Page;
    if ( Page == -1 )
    {
      v40 = *(unsigned __int8 *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
      if ( (unsigned __int8)v40 < 2u && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 0xC) == 0 )
      {
        MiUnlockWorkingSetExclusive(*(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10), v40);
        MiWaitForFreePage(*(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28));
        SharedVm = MiGetSharedVm(*(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10));
        ExAcquireSpinLockExclusive(SharedVm);
        SharedVm[1] = 0;
      }
      return 0LL;
    }
  }
  if ( v28 )
  {
    if ( v28 >= 2 )
    {
      v42 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v9 + 40)) >> 8) & 0x3FF);
      MiReturnCommit((__int64)v42, 1uLL);
    }
    MiUnlockPageTableCharges(48 * (*(_QWORD *)(v9 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL, 2u, 0);
  }
  v43 = *(unsigned int *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
  v44 = 9LL;
  v45 = 1;
  if ( (_DWORD)v43 == 24 )
  {
    Address = *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50);
    v47 = 1;
    *(_DWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 1;
    if ( !Address )
    {
      Address = MiLocateAddress(v6);
      *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = Address;
      if ( !Address )
        goto LABEL_66;
      v44 = (unsigned int)(v45 + 8);
    }
    v48 = (*(_DWORD *)(Address + 48) >> 3) & 0x1F;
    if ( v48 >> 3 == 3 && (v48 & 7) != 0 )
    {
      *(_DWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 25;
      v43 = 25LL;
      goto LABEL_67;
    }
    if ( v48 >> 3 == v45 )
      v47 = v44;
    *(_DWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v47;
LABEL_66:
    v43 = *(unsigned int *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
  }
LABEL_67:
  v49 = (__m128i *)(48LL * *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) - 0x58000000000LL);
  v49[1].m128i_i64[0] = MiMakeDemandZeroPte(v43, v44, v30, v33);
  if ( v90 || Wsle && (*(_DWORD *)v5 == 1 || (*(_BYTE *)(v9 + 35) & 8) == 0) )
  {
    v51 = *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
    ++*(_QWORD *)(v51 + 136);
    if ( v6 < 0xFFFFF68000000000uLL || v6 > 0xFFFFF6FFFFFFFFFFuLL )
      ++*(_QWORD *)(v51 + 120);
    v52 = v32 & 0xFFFFFFFFFFFFFE0FuLL;
    *(_QWORD *)(Wsle * *((unsigned int *)v26 + 8) + v26[10]) = v52;
    if ( (v52 & 8) == 0 )
    {
      if ( (v52 & 4) != 0 )
      {
        MiUpdateWsleHash(v6, Wsle, v51, v50);
        v52 = **(_QWORD **)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30);
      }
      *(_QWORD *)(Wsle * *((unsigned int *)v26 + 8) + v26[10]) = v52 | 8;
    }
  }
  v53 = *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
  v49->m128i_i64[0] ^= (v49->m128i_i64[0] ^ Wsle) & 0xFFFFFFFFFLL;
  v49[2].m128i_i16[0] = 1;
  ContainingPageTable = MiGetContainingPageTable(v53);
  v49[2].m128i_i64[1] ^= v56 & (v49[2].m128i_i64[1] ^ ContainingPageTable);
  CurrentThread = KeGetCurrentThread();
  Queue = (unsigned int)CurrentThread[1].Queue;
  if ( (Queue & 0x100) != 0 )
    PagePriorityThread = (Queue >> 9) & 7;
  else
    PagePriorityThread = PsGetPagePriorityThread(CurrentThread);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
    v12 |= 4u;
  *(_DWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = 0;
  if ( _interlockedbittestandset64(&v49[1].m128i_i32[2], 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx((_DWORD *)(v5 + 48));
      while ( v49[1].m128i_i64[1] < 0 );
    }
    while ( _interlockedbittestandset64(&v49[1].m128i_i32[2], 0x3FuLL) );
    v55 = 1;
  }
  v49[2].m128i_i8[2] |= 0x10u;
  if ( *(_DWORD *)v5 || (*(_BYTE *)(v9 + 35) & 8) == 0 || v90 )
    v49[2].m128i_i8[3] &= ~8u;
  else
    v49[2].m128i_i8[3] |= 8u;
  v60 = *(unsigned __int8 *)(v9 + 34) >> 6;
  if ( v49[2].m128i_u8[2] >> 6 != v60 )
    MiChangePageAttribute((__int64)v49, v60, v55);
  v61 = v49[1].m128i_i64[1] & 0xC000000000000001uLL;
  v49->m128i_i64[1] = v53;
  v49[1].m128i_i64[1] = v61 | 1;
  v49[2].m128i_i8[3] ^= (v49[2].m128i_i8[3] ^ PagePriorityThread) & 7;
  v49[2].m128i_i8[2] = v49[2].m128i_i8[2] & 0xF8 | 6;
  if ( ((v12 >> 2) & 1) != 0 )
  {
    *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x90) = 0LL;
    *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x98) = 0LL;
    *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0xA0) = 0LL;
    *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0xA8) = 0LL;
    MiIdentifyPfn(v49, (_QWORD *)(v5 + 144));
  }
  _InterlockedAnd64(&v49[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  if ( ((v12 >> 2) & 1) != 0 )
  {
    v62 = EtwpActiveSystemLoggers;
    *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0xA8) |= 8uLL;
    v35 = !_BitScanForward((unsigned int *)&v63, v62);
    *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0xB0) = ((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                         + 144;
    *(_DWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = v63;
    *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0xB8) = 32LL;
    if ( !v35 )
    {
      do
      {
        v62 &= v62 - 1;
        v64 = (char *)&EtwpGroupMasks + 32 * (unsigned int)v63;
        if ( v64 && (*((_DWORD *)v64 + 1) & 0x8000001) != 0 )
          EtwpLogKernelEvent(
            v5 + 176,
            EtwpHostSiloState,
            (unsigned __int16)EtwpSystemLogger[2 * v63],
            1u,
            0x282u,
            0x11401B02u);
        v35 = !_BitScanForward((unsigned int *)&v63, v62);
      }
      while ( !v35 );
      v9 = *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70);
      v6 = *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x78);
      v53 = *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
      *(_DWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = v63;
    }
  }
  __incgsdword(0x2E14u);
  v65 = 1LL;
  if ( (*(_BYTE *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 8) & 2) != 0 )
  {
    if ( (MiFlags & 0x10000) == 0 )
    {
      if ( v6 < 0xFFFF800000000000uLL )
        goto LABEL_109;
      v65 = 17LL;
    }
  }
  else
  {
    v65 = 9LL;
  }
  if ( v6 < 0xFFFF800000000000uLL )
  {
LABEL_109:
    if ( KeGetCurrentThread()->ApcState.Process->SecurePid )
      v65 = (unsigned int)v65 | 0x10;
  }
  v66 = *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38);
  MiCopyPage(v66, *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68), 0LL, v65);
  if ( dword_1403271C8 && PagePriorityThread >= dword_1403271F0 )
  {
    v67 = v53;
    v68 = *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
    MiLogPageAccess(v68, v67);
  }
  else
  {
    v68 = *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
  }
  v69 = *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
  if ( (v12 & 1) == 0 )
    v69 = v69 & 0xFFFFFFFFFFFFF59DuLL | 0x862;
  v70 = *(_DWORD *)v5;
  *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC8) = 20LL;
  *(_DWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC0) = v70;
  v71 = (v69 ^ (v66 << 12)) & 0xFFFFFFFFF000LL ^ v69;
  *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = v71;
  *(_WORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC4) = 0;
  *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0xD0) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0xD8) = 0LL;
  MiInsertTbFlushEntry(v5 + 192, v6 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0);
  if ( (v71 & 0x42) != 0 )
  {
    v72 = *(_QWORD **)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
    v73 = v71 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
    *v72 = v73;
    v78 = MiPteInShadowRange(v72, v73);
    if ( v78 )
      MiWritePteShadow(v75, v74);
    MiFlushTbList(v5 + 192, v74, v76, v77);
    *v72 = v71;
    if ( v78 )
      MiWritePteShadow(v72, v71);
  }
  else
  {
    MI_INTERLOCKED_EXCHANGE_PTE(*(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40), v71);
    MiFlushTbList(v5 + 192, v83, v84, v85);
  }
  v79 = *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58);
  if ( v70 == 1 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v79 + 920), 1uLL);
  *(_DWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x4C) = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx((_DWORD *)(v5 + 76));
      while ( (*(_QWORD *)(v9 + 24) & 0x8000000000000000uLL) != 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) );
    v68 = *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
  }
  if ( !v70 && !v90 )
  {
    v80 = *(_BYTE *)(v9 + 35);
    if ( (v80 & 8) != 0 )
      *(_BYTE *)(v9 + 35) = v80 & 0xF7;
  }
  v81 = *(_BYTE *)(v9 + 34);
  v82 = *(_QWORD *)(v9 + 24);
  if ( (v81 & 7) != 6 )
    KeBugCheckEx(0x4Eu, 0x99uLL, (v9 + 0x58000000000LL) / 48, v81 & 7, v82 & 0x3FFFFFFFFFFFFFFFLL);
  *(_QWORD *)(v9 + 24) = v82 ^ (v82 ^ ((v82 & 0x3FFFFFFFFFFFFFFFLL) - 1)) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (v82 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    MiPfnShareCountIsZero(v9, (v82 & 0x3FFFFFFFFFFFFFFFLL) - 1);
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (v12 & 2) != 0 )
  {
    v86 = MiDecrementCombinedPte(*(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60));
LABEL_149:
    if ( v86 == 3 )
      MiChargeCommit(*(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28), 1uLL, 4);
  }
  else if ( (*(_BYTE *)(v68 + 184) & 7) == 0 )
  {
    v87 = *(_QWORD **)(v79 + 912);
    if ( v87 )
    {
      v88 = *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60);
      do
      {
        if ( v88 > v87[4] )
        {
          v87 = (_QWORD *)v87[1];
        }
        else
        {
          if ( v88 >= v87[3] )
          {
            v86 = MiDecrementCloneBlockReference(
                    (ULONG_PTR)v87,
                    *(_QWORD *)(((unsigned __int64)&v89 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60),
                    v79);
            goto LABEL_149;
          }
          v87 = (_QWORD *)*v87;
        }
      }
      while ( v87 );
    }
  }
  return 1LL;
}
