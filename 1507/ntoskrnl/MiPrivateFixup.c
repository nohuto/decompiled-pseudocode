/*
 * XREFs of MiPrivateFixup @ 0x14007991C
 * Callers:
 *     MiCompleteProtoPteFault @ 0x1400BA8F0 (MiCompleteProtoPteFault.c)
 * Callees:
 *     MiFreeInPageSupportBlock @ 0x140033DF0 (MiFreeInPageSupportBlock.c)
 *     MiInitializeReadInProgressPfn @ 0x1400363F0 (MiInitializeReadInProgressPfn.c)
 *     MiGetVmPartition @ 0x14003C15C (MiGetVmPartition.c)
 *     MiGetEffectivePagePriorityThread @ 0x14003C720 (MiGetEffectivePagePriorityThread.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     MiCopyPage @ 0x140058ED0 (MiCopyPage.c)
 *     MiGetInPageSupportBlock @ 0x14005EA80 (MiGetInPageSupportBlock.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400797E8 (MiMakeProtectionPfnCompatible.c)
 *     MiIsFaultPteIntact @ 0x14007BFC0 (MiIsFaultPteIntact.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiDereferenceControlAreaProbe @ 0x140083900 (MiDereferenceControlAreaProbe.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiObtainFaultCharges @ 0x14008F350 (MiObtainFaultCharges.c)
 *     MiReservePtes @ 0x1400AAD50 (MiReservePtes.c)
 *     MiReleasePtes @ 0x1400B1800 (MiReleasePtes.c)
 *     MiAddLockedPageCharge @ 0x1400B50C0 (MiAddLockedPageCharge.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C80C0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400E2D48 (MiRemoveLockedPageChargeAndDecRef.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     MiReleaseFreshPage @ 0x1400FCD50 (MiReleaseFreshPage.c)
 *     MiReturnFaultCharges @ 0x14013019C (MiReturnFaultCharges.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiWaitForForkToComplete @ 0x1402314F8 (MiWaitForForkToComplete.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiAllocateDriverPage @ 0x140452A88 (MiAllocateDriverPage.c)
 *     MiRelocateImagePfn @ 0x1404BE420 (MiRelocateImagePfn.c)
 */

__int64 __fastcall MiPrivateFixup(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 a7)
{
  unsigned int v7; // esi
  _KPROCESS *Process; // rcx
  bool v11; // zf
  __int16 *VmPartition; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r10
  __int16 *v17; // r13
  int v18; // r15d
  unsigned int v19; // r11d
  unsigned __int64 v20; // r14
  unsigned __int64 *v21; // r12
  __int64 PteShadow; // rax
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 Page; // rbx
  unsigned int v26; // ebx
  signed __int32 v27; // edx
  unsigned int v28; // edi
  __int64 v29; // rbx
  char *v30; // r13
  unsigned __int8 CurrentIrql; // r14
  unsigned int v32; // edi
  char EffectivePagePriorityThread; // al
  __int64 v34; // rdx
  unsigned __int64 v35; // r9
  __int64 v36; // rax
  int ProtectionPfnCompatible; // eax
  __int64 v38; // r9
  __int64 v39; // rdx
  unsigned __int64 v40; // r8
  __int64 v41; // r8
  int v42; // r10d
  unsigned __int64 v43; // rdx
  __int64 v44; // r15
  struct _KTHREAD *v45; // rcx
  __int16 v46; // ax
  unsigned int v47; // r15d
  signed __int32 v48; // edx
  int IsFaultPteIntact; // r15d
  unsigned __int8 v50; // r12
  unsigned int v51; // edi
  char v52; // cl
  char v53; // al
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-48h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+38h] [rbp-40h]
  char *v56; // [rsp+40h] [rbp-38h]
  __int64 v57; // [rsp+48h] [rbp-30h] BYREF
  _KPROCESS *v58; // [rsp+50h] [rbp-28h]
  ULONG_PTR v59; // [rsp+58h] [rbp-20h]
  __int64 v60[3]; // [rsp+60h] [rbp-18h] BYREF
  int v62; // [rsp+C8h] [rbp+50h]
  __int16 *v65; // [rsp+E8h] [rbp+70h]
  ULONG_PTR v66; // [rsp+E8h] [rbp+70h]

  v62 = a2;
  v7 = 0;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v11 = (*(_BYTE *)(a6 + 216) & 7) == 0;
  v58 = Process;
  if ( v11 && Process[1].Affinity.Bitmap[10] )
  {
    LOBYTE(a2) = a7;
    MiWaitForForkToComplete(Process, a2);
    return 297LL;
  }
  VmPartition = MiGetVmPartition(a6);
  v16 = 1LL;
  v17 = VmPartition;
  v65 = VmPartition;
  v18 = (*(_DWORD *)(v14 + 16) >> 5) & 0x1F;
  v19 = 2;
  if ( a4 >= 0xFFFF800000000000uLL
    && (MiFlags & 0x30000) != 0
    && (MiFlags & 0x100000) != 0
    && ((*(_DWORD *)(v14 + 16) >> 5) & 2) != 0 )
  {
    v20 = 0LL;
  }
  else
  {
    v20 = MiReservePtes(&qword_14034FC70, 1LL);
    if ( !v20 )
      return 3221225626LL;
    v15 = a3;
    v16 = 1LL;
    v19 = 2;
  }
  v21 = (unsigned __int64 *)(((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  PteShadow = *v21;
  if ( (unsigned __int64)(v21 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, *v21);
  v57 = PteShadow;
  v23 = (v15 + 0x58000000000LL) / 48;
  v59 = v23;
  MiObtainFaultCharges(v17, v16, v19);
  if ( v20 )
  {
    Page = MiGetPage(
             v17,
             dword_14034EBB8 & (unsigned int)v23 | (((*(_QWORD *)(a3 + 40) >> 36) & 3) << byte_14034EB98) | ((unsigned __int8)((*(_QWORD *)(a3 + 40) >> 58) & 0x3F) << byte_14034EB89),
             0LL);
    BugCheckParameter2 = Page;
    if ( Page == -1 )
    {
      v28 = -1073741670;
      goto LABEL_31;
    }
  }
  else
  {
    LOBYTE(v24) = a7;
    MiUnlockWorkingSetExclusive(a6, v24);
    Page = MiAllocateDriverPage();
    BugCheckParameter2 = Page;
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a6);
    }
    else
    {
      v26 = 0;
      if ( _interlockedbittestandset((volatile signed __int32 *)a6, 0x1Fu) )
        v26 = ExpWaitForSpinLockExclusiveAndAcquire(a6);
      while ( 1 )
      {
        v27 = *(_DWORD *)a6;
        if ( (*(_DWORD *)a6 & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (v27 & 0x40000000) == 0 )
          _InterlockedCompareExchange((volatile signed __int32 *)a6, v27 | 0x40000000, v27);
        if ( (++v26 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v26);
      }
      Page = BugCheckParameter2;
    }
    if ( !(unsigned int)MiIsFaultPteIntact(a4, v21, &v57) )
    {
      v28 = -1073740748;
LABEL_31:
      if ( Page != -1 )
        MiReleaseFreshPage(48 * Page - 0x58000000000LL);
      MiReturnFaultCharges(v17, 1LL, 2LL);
      if ( v20 )
        MiReleasePtes(&qword_14034FC70, v20, 1LL);
      return v28;
    }
  }
  v29 = 48 * Page - 0x58000000000LL;
  v56 = (char *)MiGetInPageSupportBlock(2u);
  v30 = v56;
  if ( !v56 )
  {
    MiReturnFaultCharges(v65, 1LL, 2LL);
    if ( v20 )
      MiReleasePtes(&qword_14034FC70, v20, 1LL);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v32 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v32 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v32);
      }
      while ( (*(_QWORD *)(v29 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) );
    }
    MiInsertPageInFreeOrZeroedList(BugCheckParameter2);
    _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
    return 3221225626LL;
  }
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  v56[189] |= 0x10u;
  *((_QWORD *)v30 + 30) = v29;
  *((_DWORD *)v30 + 20) = 0;
  *((_QWORD *)v30 + 11) = 0LL;
  MiInitializeReadInProgressPfn(
    a4,
    &BugCheckParameter2,
    1,
    v21,
    (__int64)(v30 + 32),
    EffectivePagePriorityThread & 7 | 0x48);
  v35 = 1LL;
  if ( (*(_BYTE *)(a6 + 216) & 7) == 0 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&v58[1].Affinity.Bitmap[13], 1uLL);
  v36 = *v21;
  if ( (unsigned __int64)(v21 + 0x12090482600LL) <= 0x7F8 )
    v36 = MiReadPteShadow(v21, *v21);
  v60[0] = v36;
  *((_QWORD *)v30 + 25) = a1;
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 104), v35);
  LOBYTE(v34) = v35;
  MiUnlockWorkingSetExclusive(a6, v34);
  --CurrentThread->SpecialApcDisable;
  __writecr8(a7);
  v66 = BugCheckParameter2;
  MiCopyPage(BugCheckParameter2, v59, 0LL, (v18 & 2) != 0 ? 17 : 9);
  if ( v20 )
  {
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v29);
    v39 = 0x904C0000000LL;
    v40 = ((v66 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[ProtectionPfnCompatible] & 0xFFFF000000000FFFuLL | 0x21;
    if ( v20 + 0x904C0000000LL <= 0x3FFFFFFF )
      v40 &= v38 & ~qword_1403D0220;
    if ( v20 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
      && v20 >= 0xFFFFF68000000000uLL
      || v20 >= 0xFFFFF6FB40000000uLL
      && v20 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
      || v20 >= 0xFFFFF6FB7DA00000uLL
      && (v39 = 0x90482600000LL, v20 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL)
      || v20 >= 0xFFFFF6FB7DBED000uLL
      && v20 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
    {
      v40 |= 4uLL;
    }
    if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v20, v39, v40) )
      v41 |= 0x100uLL;
    v43 = v41 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8) | 0x42;
    *(_QWORD *)v20 = v43;
    if ( v20 + 0x90482413000LL <= 0x7F8 )
    {
      MiWritePteShadow(v20, v43);
      v42 = v66;
    }
    v44 = a1;
    if ( *(__int64 *)(a3 + 8) < 0 )
      MiRelocateImagePfn(a1, (__int64)(v20 << 25) >> 16, v62, v42, a5);
    MiReleasePtes(&qword_14034FC70, v20, 1LL);
  }
  else
  {
    v44 = a1;
  }
  MiDereferenceControlAreaProbe(v44);
  __writecr8(1uLL);
  v45 = CurrentThread;
  v46 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v46;
  if ( !v46 && ($CD287064E7C9F7953DE243E927CFCB99 *)v45->ApcState.ApcListHead[0].Flink != &v45->152 )
    KiCheckForKernelApcDelivery(v45);
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a6);
  }
  else
  {
    v47 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)a6, 0x1Fu) )
      v47 = ExpWaitForSpinLockExclusiveAndAcquire(a6);
    v48 = *(_DWORD *)a6;
    if ( (*(_DWORD *)a6 & 0xBFFFFFFF) != 0x80000000 )
    {
      do
      {
        if ( (v48 & 0x40000000) == 0 )
          _InterlockedCompareExchange((volatile signed __int32 *)a6, v48 | 0x40000000, v48);
        if ( (++v47 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v47);
        v48 = *(_DWORD *)a6;
      }
      while ( (*(_DWORD *)a6 & 0xBFFFFFFF) != 0x80000000 );
      v30 = v56;
    }
  }
  IsFaultPteIntact = MiIsFaultPteIntact(a4, v21, v60);
  v50 = KeGetCurrentIrql();
  __writecr8(2uLL);
  v51 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v51 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v51);
    }
    while ( (*(_QWORD *)(v29 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) );
    v30 = v56;
  }
  v52 = *(_BYTE *)(v29 + 34) & 0xDF;
  *(_BYTE *)(v29 + 34) = v52;
  if ( (*(_QWORD *)(v29 + 24) & 0x4000000000000000LL) == 0 )
  {
    *(_QWORD *)v29 = 0LL;
    *(_BYTE *)(v29 + 34) = v52 | 0x10;
  }
  if ( IsFaultPteIntact == 1 )
  {
    MiAddLockedPageCharge(v29, 3LL);
    v53 = *(_BYTE *)(v29 + 34) & 0xFE;
    *(_QWORD *)(v29 + 24) ^= (*(_QWORD *)(v29 + 24) ^ (*(_QWORD *)(v29 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
    *(_BYTE *)(v29 + 34) = v53 | 6;
    if ( !v20 )
      *(_BYTE *)(v29 + 35) |= 8u;
  }
  else
  {
    v7 = -1073740748;
  }
  MiRemoveLockedPageChargeAndDecRef(v29);
  _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v50);
  v30[189] &= ~0x10u;
  if ( *((int *)v30 + 44) > 1 )
    KeSetEvent((PRKEVENT)(v30 + 56), 0, 0);
  MiFreeInPageSupportBlock(v30);
  return v7;
}
