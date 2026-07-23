/*
 * XREFs of MiPrivateFixup @ 0x140109170
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140039670 (MiCompleteProtoPteFault.c)
 * Callees:
 *     MiWaitForForkToComplete @ 0x1400018F0 (MiWaitForForkToComplete.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiIsFaultPteIntact @ 0x1400257E0 (MiIsFaultPteIntact.c)
 *     MiDereferenceControlAreaProbe @ 0x140026304 (MiDereferenceControlAreaProbe.c)
 *     MiGetEffectivePagePriorityThread @ 0x140026934 (MiGetEffectivePagePriorityThread.c)
 *     MiObtainFaultCharges @ 0x14002B0B0 (MiObtainFaultCharges.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MiGetPage @ 0x14003D5D0 (MiGetPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14004E2C0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiAddLockedPageCharge @ 0x14004ED08 (MiAddLockedPageCharge.c)
 *     MiReleasePtes @ 0x140051250 (MiReleasePtes.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140066D40 (MiInsertPageInFreeOrZeroedList.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiReleaseFreshPage @ 0x1400AAB5C (MiReleaseFreshPage.c)
 *     MiReturnFaultCharges @ 0x1400B0E08 (MiReturnFaultCharges.c)
 *     MiFreeInPageSupportBlock @ 0x1400C4240 (MiFreeInPageSupportBlock.c)
 *     MiReservePtes @ 0x1400DB9F0 (MiReservePtes.c)
 *     MiCopyPage @ 0x1400E1100 (MiCopyPage.c)
 *     MiInitializeReadInProgressPfn @ 0x1400E39D0 (MiInitializeReadInProgressPfn.c)
 *     MiGetInPageSupportBlock @ 0x1400E53C0 (MiGetInPageSupportBlock.c)
 *     MiMakeProtectionPfnCompatible @ 0x140108388 (MiMakeProtectionPfnCompatible.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiRelocateImagePfn @ 0x140446650 (MiRelocateImagePfn.c)
 *     MiAllocateDriverPage @ 0x1405097F0 (MiAllocateDriverPage.c)
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
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v8; // esi
  __int64 v9; // rbx
  _KPROCESS *Process; // r13
  int *v14; // rdi
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r12
  char v17; // r12
  unsigned __int64 v18; // r9
  ULONG_PTR v19; // r14
  __int64 v20; // r15
  __int64 v21; // rdx
  ULONG_PTR v22; // r15
  LONG *SharedVm; // rbx
  unsigned int v24; // ebx
  __int64 v25; // rdi
  char *v26; // rbp
  unsigned __int8 v27; // bl
  __int16 v28; // dx
  char EffectivePagePriorityThread; // al
  __int64 v30; // rdx
  __int64 v31; // r13
  bool v32; // cf
  __int64 v33; // r12
  int ProtectionPfnCompatible; // eax
  unsigned __int64 ValidKernelPte; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r9
  __int64 v39; // r12
  LONG *v40; // rbx
  BOOL IsFaultPteIntact; // ebx
  unsigned __int8 v42; // al
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  unsigned __int8 v46; // r15
  char v47; // al
  __int64 v48; // [rsp+30h] [rbp-88h]
  __int64 Page; // [rsp+38h] [rbp-80h] BYREF
  struct _KTHREAD *v50; // [rsp+40h] [rbp-78h]
  __int64 v51; // [rsp+48h] [rbp-70h] BYREF
  int *v52; // [rsp+50h] [rbp-68h]
  ULONG_PTR v53; // [rsp+58h] [rbp-60h]
  __int64 v54[11]; // [rsp+60h] [rbp-58h] BYREF
  unsigned int v56; // [rsp+C8h] [rbp+10h]

  v56 = a2;
  CurrentThread = KeGetCurrentThread();
  v8 = 0;
  v9 = a6;
  v50 = CurrentThread;
  Process = CurrentThread->ApcState.Process;
  if ( (*(_BYTE *)(a6 + 184) & 7) == 0 && Process[1].Affinity.Bitmap[10] )
  {
    LOBYTE(a2) = a7;
    MiWaitForForkToComplete((__int64)CurrentThread->ApcState.Process, a2);
    return 297LL;
  }
  v14 = MiPartitionIdToPointer(*(_WORD *)(a6 + 164));
  v16 = (unsigned __int64)*(unsigned int *)(v15 + 16) >> 5;
  v52 = v14;
  v17 = v16 & 0x1F;
  if ( v18 >= 0xFFFF800000000000uLL && (MiFlags & 0x4000) != 0 && (MiFlags & 0x80000) != 0 && (v17 & 2) != 0 )
  {
    v19 = 0LL;
  }
  else
  {
    v19 = MiReservePtes((__int64)&qword_1403278B0, 1uLL, v15);
    if ( !v19 )
      return 3221225626LL;
  }
  v48 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v51 = MI_READ_PTE_LOCK_FREE(v48);
  v20 = (a3 + 0x58000000000LL) / 48;
  v53 = v20;
  MiObtainFaultCharges(v14, 1u, 2);
  if ( v19 )
  {
    Page = MiGetPage(
             (__int64)v14,
             dword_140326A38 & v20 | (((*(_QWORD *)(a3 + 40) >> 36) & 3) << byte_140326A18) | (((*(_QWORD *)(a3 + 40) >> 58) & 0x3F) << byte_140326A09),
             0);
    v22 = Page;
    if ( Page == -1 )
    {
      v24 = -1073741670;
      goto LABEL_16;
    }
  }
  else
  {
    LOBYTE(v21) = a7;
    MiUnlockWorkingSetExclusive(a6, v21);
    Page = MiAllocateDriverPage();
    v22 = Page;
    SharedVm = MiGetSharedVm(a6);
    ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    if ( !MiIsFaultPteIntact(a4, v48, &v51) )
    {
      v24 = -1073740748;
LABEL_16:
      if ( v22 != -1LL )
        MiReleaseFreshPage(48 * v22 - 0x58000000000LL);
      MiReturnFaultCharges((__int64)v14, 1uLL, 2);
      if ( v19 )
        MiReleasePtes((__int64)&qword_1403278B0, v19, 1u);
      return v24;
    }
    v9 = a6;
  }
  v25 = 48 * v22 - 0x58000000000LL;
  v26 = (char *)MiGetInPageSupportBlock(2);
  if ( !v26 )
  {
    if ( v19 )
      MiReleasePtes((__int64)&qword_1403278B0, v19, 1u);
    v27 = MiLockPageInline(48 * v22 - 0x58000000000LL);
    v28 = 1;
    if ( *(_QWORD *)(v25 + 16) )
      v28 = 2;
    MiInsertPageInFreeOrZeroedList(v22, v28);
    _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v27);
    MiReturnFaultCharges((__int64)v52, 1uLL, 2);
    return 3221225626LL;
  }
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)v50);
  v26[189] |= 0x10u;
  *((_QWORD *)v26 + 30) = v25;
  *((_DWORD *)v26 + 20) = 0;
  *((_QWORD *)v26 + 11) = 0LL;
  MiInitializeReadInProgressPfn(a4, &Page, 1, v48, (__int64)(v26 + 32), EffectivePagePriorityThread & 7 | 0x48);
  if ( (*(_BYTE *)(v9 + 184) & 7) == 0 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 1uLL);
  v54[0] = MI_READ_PTE_LOCK_FREE(v48);
  *((_QWORD *)v26 + 25) = a1;
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 112));
  LOBYTE(v30) = 1;
  MiUnlockWorkingSetExclusive(v9, v30);
  v31 = (__int64)v50;
  --v50->SpecialApcDisable;
  __writecr8(a7);
  v32 = (v17 & 2) != 0;
  v33 = Page;
  MiCopyPage(Page, v53, 0LL, v32 ? 17 : 9);
  if ( v19 )
  {
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v25);
    ValidKernelPte = MiMakeValidKernelPte(v33, ProtectionPfnCompatible, v19);
    *(_QWORD *)v19 = ValidKernelPte | 0x42;
    if ( (unsigned int)MiPteInShadowRange(v19, ValidKernelPte | 0x42) )
      MiWritePteShadow(v37, v36);
    if ( *(__int64 *)(a3 + 8) >= 0 )
    {
      v39 = a1;
    }
    else
    {
      v38 = v33;
      v39 = a1;
      MiRelocateImagePfn(a1, (__int64)(v19 << 25) >> 16, v56, v38);
    }
    MiReleasePtes((__int64)&qword_1403278B0, v19, 1u);
  }
  else
  {
    v39 = a1;
  }
  MiDereferenceControlAreaProbe(v39, 0);
  __writecr8(1uLL);
  KiLeaveGuardedRegionUnsafe(v31);
  v40 = MiGetSharedVm(v9);
  ExAcquireSpinLockExclusive(v40);
  v40[1] = 0;
  IsFaultPteIntact = MiIsFaultPteIntact(a4, v48, v54);
  v42 = MiLockPageInline(v25);
  *(_BYTE *)(v25 + 34) &= ~0x20u;
  v46 = v42;
  if ( (*(_QWORD *)(v25 + 24) & 0x4000000000000000LL) == 0 )
  {
    *(_BYTE *)(v25 + 34) |= 0x10u;
    *(_QWORD *)v25 = 0LL;
  }
  if ( IsFaultPteIntact )
  {
    MiAddLockedPageCharge(v25, 3);
    v43 = 0x3FFFFFFFFFFFFFFFLL;
    v47 = *(_BYTE *)(v25 + 34) & 0xFE;
    *(_QWORD *)(v25 + 24) ^= (*(_QWORD *)(v25 + 24) ^ (*(_QWORD *)(v25 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
    *(_BYTE *)(v25 + 34) = v47 | 6;
    if ( !v19 )
      *(_BYTE *)(v25 + 35) |= 8u;
  }
  else
  {
    v8 = -1073740748;
  }
  MiRemoveLockedPageChargeAndDecRef(v25, v43, v44, v45);
  _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v46);
  v26[189] &= ~0x10u;
  if ( *((int *)v26 + 44) > 1 )
    KeSetEvent((PRKEVENT)(v26 + 56), 0, 0);
  MiFreeInPageSupportBlock(v26);
  return v8;
}
