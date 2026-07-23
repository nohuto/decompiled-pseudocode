/*
 * XREFs of MiSwitchToTransition @ 0x1401E8974
 * Callers:
 *     MmRotatePhysicalView @ 0x14052871C (MmRotatePhysicalView.c)
 * Callees:
 *     MiChangePageAttributeBatch @ 0x14001D1C0 (MiChangePageAttributeBatch.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiGetEffectivePagePriorityThread @ 0x140026934 (MiGetEffectivePagePriorityThread.c)
 *     MiObtainFaultCharges @ 0x14002B0B0 (MiObtainFaultCharges.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     MiGetPage @ 0x14003D5D0 (MiGetPage.c)
 *     MiAddLockedPageCharge @ 0x14004ED08 (MiAddLockedPageCharge.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiReleaseFreshPage @ 0x1400AAB5C (MiReleaseFreshPage.c)
 *     MiReturnFaultCharges @ 0x1400B0E08 (MiReturnFaultCharges.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     MiInitializePageColorBase @ 0x1400E3F40 (MiInitializePageColorBase.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x140104D48 (MiPageAttributeBatchChangeNeeded.c)
 *     MiSetPfnBlink @ 0x14010584C (MiSetPfnBlink.c)
 *     MiIsProbeActive @ 0x14010E43C (MiIsProbeActive.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MiAddMdlTracker @ 0x1401E298C (MiAddMdlTracker.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetContainingPageTable @ 0x1401F241C (MiGetContainingPageTable.c)
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 *     MiMakeTransitionPte @ 0x1401F25C8 (MiMakeTransitionPte.c)
 *     MiWaitForFreePage @ 0x1401F4008 (MiWaitForFreePage.c)
 *     MiGetReadyInPageBlock @ 0x140659D50 (MiGetReadyInPageBlock.c)
 */

__int64 __fastcall MiSwitchToTransition(ULONG_PTR BugCheckParameter3, __int64 a2, unsigned int a3)
{
  ULONG_PTR *v4; // r15
  __int64 v5; // rdx
  __int64 ReadyInPageBlock; // rax
  __int64 *v7; // r14
  unsigned __int8 v8; // bl
  __int64 v9; // rsi
  unsigned int v10; // r10d
  unsigned int v11; // r12d
  LONG *SharedVm; // rdi
  KIRQL v13; // al
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r8
  ULONG_PTR v17; // r9
  __int64 v18; // rdi
  _WORD *v19; // rax
  __int64 Page; // rax
  unsigned int v21; // r14d
  __int64 *v22; // rdi
  __int64 DemandZeroPte; // rax
  __int64 v24; // r9
  bool i; // cf
  unsigned __int64 v26; // rax
  unsigned int v27; // r11d
  unsigned __int16 v28; // cx
  __int64 v29; // r10
  __int64 v30; // rax
  __int64 v31; // r9
  unsigned int v32; // r12d
  __int64 v33; // rax
  _QWORD *v34; // r10
  unsigned __int8 v35; // r11
  __int64 v36; // rdx
  struct _KTHREAD *v37; // rax
  __int64 ContainingPageTable; // rax
  __int64 v39; // r10
  unsigned __int64 v40; // rdi
  char v41; // cl
  char v42; // al
  __int64 TransitionPte; // rax
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // r15
  _KPROCESS *v50; // rdi
  _KPROCESS *v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  KIRQL v55; // [rsp+30h] [rbp-D0h]
  unsigned int v57; // [rsp+38h] [rbp-C8h]
  __int64 *v58; // [rsp+40h] [rbp-C0h]
  __int64 v59; // [rsp+48h] [rbp-B8h]
  volatile signed __int64 *v60; // [rsp+48h] [rbp-B8h]
  __int64 v61; // [rsp+50h] [rbp-B0h]
  __int64 v62; // [rsp+50h] [rbp-B0h]
  int *v63; // [rsp+58h] [rbp-A8h]
  char EffectivePagePriorityThread; // [rsp+60h] [rbp-A0h]
  ULONG_PTR v65; // [rsp+68h] [rbp-98h]
  ULONG_PTR v66; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 *v67; // [rsp+78h] [rbp-88h]
  __int64 v68; // [rsp+80h] [rbp-80h]
  __int64 v69; // [rsp+88h] [rbp-78h]
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-70h]
  _KPROCESS *Process; // [rsp+98h] [rbp-68h]
  unsigned __int64 v72; // [rsp+A0h] [rbp-60h]
  _WORD *v73; // [rsp+A8h] [rbp-58h] BYREF
  __int16 v74; // [rsp+B0h] [rbp-50h]
  unsigned __int16 v75; // [rsp+B2h] [rbp-4Eh]
  int v76; // [rsp+C0h] [rbp-40h] BYREF
  __int16 v77; // [rsp+C4h] [rbp-3Ch]
  int v78; // [rsp+C8h] [rbp-38h]
  int v79; // [rsp+CCh] [rbp-34h]
  __int64 v80; // [rsp+D0h] [rbp-30h]
  __int64 v81; // [rsp+D8h] [rbp-28h]

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  v4 = (ULONG_PTR *)(BugCheckParameter3 + 48);
  ReadyInPageBlock = MiGetReadyInPageBlock(v5);
  v72 = *(_QWORD *)(BugCheckParameter3 + 32);
  v69 = ReadyInPageBlock;
  v7 = (__int64 *)(((v72 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v8 = 0;
  v67 = &Process[1].IdealNode[12];
  MiInitializePageColorBase((__int64)&Process[1].IdealNode[12], 0, (__int64)&v73);
  v65 = 0LL;
  v9 = 0LL;
  v61 = 0xFFFFFFFFFLL;
  v63 = MiPartitionIdToPointer(WORD2(Process[1].InstrumentationCallback));
  v57 = MiObtainFaultCharges(v63, v10, 2);
  v11 = v57;
  v59 = v57;
  v58 = &v7[v57];
  while ( 2 )
  {
    SharedVm = MiGetSharedVm((__int64)v67);
    v13 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    v14 = v59;
    v55 = v13;
    while ( (unsigned int)MiIsProbeActive((unsigned __int64)v7, v14, 3) )
    {
      --v58;
      if ( !--v11 )
      {
        v21 = 1;
        goto LABEL_45;
      }
      v59 = v11;
      v14 = v11;
    }
    v18 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v18 >= v11 )
      {
        v22 = v58;
        goto LABEL_17;
      }
      v19 = v73;
      ++*v73;
      Page = MiGetPage((__int64)v63, v75 | (unsigned int)(unsigned __int16)(v74 & *v19), 0);
      v68 = Page;
      if ( Page == -1 )
        break;
      v9 = 48 * Page - 0x58000000000LL;
      if ( (unsigned int)MiPageAttributeBatchChangeNeeded(v9, a3) == 1 )
      {
        *(_QWORD *)(v9 + 16) = v65;
        v65 = v9;
      }
      MiSetPfnBlink(v9, v61, 0);
      v18 = (unsigned int)(v18 + 1);
      v61 = v68;
    }
    if ( !(_DWORD)v18 )
    {
      LOBYTE(v15) = v55;
      MiUnlockWorkingSetExclusive((__int64)v67, v15);
      MiWaitForFreePage(v63);
      continue;
    }
    break;
  }
  v22 = &v7[v18];
  v58 = v22;
LABEL_17:
  v17 = v65;
  if ( v65 )
  {
    DemandZeroPte = MiMakeDemandZeroPte(4LL, v15, v16, v65);
    MiChangePageAttributeBatch(v24, a3, DemandZeroPte);
  }
  for ( i = v7 < v22; i; i = v7 < v58 )
  {
    v66 = MI_READ_PTE_LOCK_FREE(v7);
    if ( (v66 & 1) == 0 )
      KeBugCheckEx(0x1Au, 0x41200uLL, (ULONG_PTR)v7, v66, BugCheckParameter3);
    v26 = MI_GET_PAGE_FRAME_FROM_PTE(&v66);
    if ( MiIsPfnInline(v26) )
    {
      if ( (__int64 *)(*(_QWORD *)(v15 + 8) | 0x8000000000000000uLL) == v7 )
        KeBugCheckEx(0x1Au, 0x41200uLL, (ULONG_PTR)v7, v17, BugCheckParameter3);
      v16 = 0xFFFFFFFFDLL;
      v28 = v27;
      if ( (*(_QWORD *)(v15 + 40) & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL )
        v28 = v27 + 1;
      if ( *(_WORD *)(v15 + 32) > v28 )
      {
        v21 = v27;
        goto LABEL_45;
      }
    }
    v62 = v9;
    v60 = (volatile signed __int64 *)(v9 + 24);
    v29 = v9;
    v30 = *(_QWORD *)(v9 + 24) & 0xFFFFFFFFFLL;
    if ( v30 == 0xFFFFFFFFFLL )
      v9 = 0LL;
    else
      v9 = 48 * v30 - 0x58000000000LL;
    v31 = -(__int64)(v17 & 0x800);
    v68 = (v29 + 0x58000000000LL) / 48;
    v32 = v27 + (v31 != 0 ? 3 : 0);
    if ( a3 == 2 )
    {
      v32 |= 0x18u;
    }
    else if ( !a3 )
    {
      v32 |= 8u;
    }
    v33 = MiMakeDemandZeroPte(
            v32,
            (unsigned __int128)((v29 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64,
            v16,
            v31);
    v36 = v69;
    v66 = v33;
    v34[2] = v33;
    *v34 = v36 + 32;
    if ( (v8 & v35) == 0 )
    {
      v37 = CurrentThread;
      *(_BYTE *)(v36 + 189) |= 0x10u;
      *(_DWORD *)(v36 + 80) = 0;
      *(_QWORD *)(v36 + 88) = 0LL;
      *(_QWORD *)(v36 + 152) = v37;
      v8 |= v35;
      *(_QWORD *)(v36 + 240) = v34;
    }
    ContainingPageTable = MiGetContainingPageTable(v7);
    *(_QWORD *)(v39 + 40) ^= (*(_QWORD *)(v39 + 40) ^ ContainingPageTable) & 0xFFFFFFFFFLL;
    v40 = (unsigned __int8)MiLockPageInline(v39);
    *(_BYTE *)(v62 + 34) |= 0x20u;
    *v60 &= 0xC000000000000000uLL;
    MiAddLockedPageCharge(v62, 1);
    v41 = *(_BYTE *)(v62 + 34) & 0xF8 | 2;
    v42 = (EffectivePagePriorityThread ^ *(_BYTE *)(v62 + 35)) & 7;
    *(_QWORD *)(v62 + 8) = v7;
    *(_BYTE *)(v62 + 35) ^= v42;
    *(_BYTE *)(v62 + 34) = v41;
    _InterlockedAnd64(v60, 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v40);
    MiReturnFaultCharges((__int64)v63, 1uLL, 0);
    --v57;
    TransitionPte = MiMakeTransitionPte(v68, v32);
    v66 = TransitionPte;
    *v7 = TransitionPte;
    if ( (unsigned int)MiPteInShadowRange(v7, TransitionPte) )
      MiWritePteShadow(v44, v15);
    *v4 = v17;
    ++v7;
    ++v4;
  }
  v21 = 0;
LABEL_45:
  while ( v9 )
  {
    v45 = v9;
    v46 = *(_QWORD *)(v9 + 24) & 0xFFFFFFFFFLL;
    if ( v46 == 0xFFFFFFFFFLL )
      v9 = 0LL;
    else
      v9 = 48 * v46 - 0x58000000000LL;
    v47 = MiMakeDemandZeroPte(4LL, v45, v16, v17);
    *(_QWORD *)(v48 + 16) = v47;
    MiReleaseFreshPage(v48);
  }
  LOBYTE(v15) = v55;
  MiUnlockWorkingSetExclusive((__int64)v67, v15);
  if ( v57 )
    MiReturnFaultCharges((__int64)v63, v57, 0);
  v49 = (__int64)((__int64)v4 - BugCheckParameter3 - 48) >> 3;
  *(_DWORD *)(BugCheckParameter3 + 40) = (_DWORD)v49 << 12;
  if ( (_DWORD)v49 )
  {
    v50 = Process;
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], (unsigned int)v49);
    v79 = 0;
    v77 = 0;
    v80 = 0LL;
    v81 = 0LL;
    v76 = 1;
    v78 = 20;
    MiInsertTbFlushEntry((__int64)&v76, v72 & 0xFFFFFFFFFFFFF000uLL, (unsigned int)v49, 0);
    MiFlushTbList((__int64)&v76, v51, v52, v53);
    *(_QWORD *)(BugCheckParameter3 + 16) = v50;
    *(_WORD *)(BugCheckParameter3 + 10) |= 2u;
    _InterlockedExchangeAdd64((volatile signed __int64 *)&v50[1].Affinity.Bitmap[14], (unsigned int)v49);
    if ( (MmTrackLockedPages & 1) != 0 )
      MiAddMdlTracker(BugCheckParameter3, (unsigned int)v49, 4);
  }
  return v21;
}
