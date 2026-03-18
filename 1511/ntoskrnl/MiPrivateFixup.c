/*
 * XREFs of MiPrivateFixup @ 0x1400FEA08
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140054EB0 (MiCompleteProtoPteFault.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x140007B08 (MiReleaseFreshPage.c)
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiDereferenceControlAreaProbe @ 0x14000BADC (MiDereferenceControlAreaProbe.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiGetEffectivePagePriorityThread @ 0x140011A18 (MiGetEffectivePagePriorityThread.c)
 *     MiIsFaultPteIntact @ 0x14001D2B8 (MiIsFaultPteIntact.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiReservePtes @ 0x140049FD0 (MiReservePtes.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MiObtainFaultCharges @ 0x1400634F0 (MiObtainFaultCharges.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140065F30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiReleasePtes @ 0x1400680A0 (MiReleasePtes.c)
 *     MiCopyPage @ 0x1400701E0 (MiCopyPage.c)
 *     MiGetInPageSupportBlock @ 0x140070DF4 (MiGetInPageSupportBlock.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     MiGetVmPartition @ 0x1400A8E60 (MiGetVmPartition.c)
 *     MiAddLockedPageCharge @ 0x1400AA108 (MiAddLockedPageCharge.c)
 *     MiReturnFaultCharges @ 0x1400F2600 (MiReturnFaultCharges.c)
 *     MiInitializeReadInProgressPfn @ 0x1400FD7D0 (MiInitializeReadInProgressPfn.c)
 *     MiFreeInPageSupportBlock @ 0x1400FDE30 (MiFreeInPageSupportBlock.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400FE304 (MiMakeProtectionPfnCompatible.c)
 *     MiWaitForForkToComplete @ 0x14012FC18 (MiWaitForForkToComplete.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiRelocateImagePfn @ 0x14041AB80 (MiRelocateImagePfn.c)
 *     MiAllocateDriverPage @ 0x140484298 (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiPrivateFixup(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        PEX_SPIN_LOCK SpinLock,
        unsigned __int8 a7)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v8; // esi
  _KPROCESS *Process; // r12
  int *VmPartition; // rdi
  unsigned __int64 v15; // r8
  int v16; // ebx
  unsigned __int64 v17; // r9
  ULONG_PTR v18; // r14
  __int64 v19; // rdx
  __int64 v20; // r8
  ULONG_PTR Page; // r15
  unsigned int v22; // ebx
  __int64 v23; // rdi
  char *v24; // rbp
  unsigned __int8 v25; // bl
  unsigned __int64 v26; // rdx
  char EffectivePagePriorityThread; // al
  __int64 v28; // rdx
  __int64 v29; // r8
  bool v30; // cf
  __int64 v31; // rbx
  int ProtectionPfnCompatible; // eax
  __int64 v33; // r9
  unsigned __int64 v34; // rbx
  __int64 v35; // rbx
  int IsFaultPteIntact; // ebx
  unsigned __int8 v37; // al
  char v38; // cl
  unsigned __int8 v39; // r15
  char v40; // al
  _QWORD *v41; // [rsp+30h] [rbp-78h]
  ULONG_PTR DriverPage; // [rsp+38h] [rbp-70h] BYREF
  struct _KTHREAD *v43; // [rsp+40h] [rbp-68h]
  ULONG_PTR v44; // [rsp+48h] [rbp-60h]
  __int64 v45; // [rsp+50h] [rbp-58h] BYREF
  __int64 v46[10]; // [rsp+58h] [rbp-50h] BYREF
  int v48; // [rsp+B8h] [rbp+10h]
  PEX_SPIN_LOCK SpinLocka; // [rsp+D8h] [rbp+30h]
  int SpinLockb; // [rsp+D8h] [rbp+30h]

  v48 = a2;
  CurrentThread = KeGetCurrentThread();
  v8 = 0;
  v43 = CurrentThread;
  Process = CurrentThread->ApcState.Process;
  if ( (SpinLock[54] & 7) == 0 && Process[1].Affinity.Bitmap[10] )
  {
    LOBYTE(a2) = a7;
    MiWaitForForkToComplete(CurrentThread->ApcState.Process, a2);
    return 297LL;
  }
  VmPartition = MiGetVmPartition((__int64)SpinLock);
  SpinLocka = VmPartition;
  v16 = (*(_DWORD *)(v15 + 16) >> 5) & 0x1F;
  if ( v17 >= 0xFFFF800000000000uLL
    && (MiFlags & 0x10000) != 0
    && (MiFlags & 0x100000) != 0
    && ((*(_DWORD *)(v15 + 16) >> 5) & 2) != 0 )
  {
    v18 = 0LL;
  }
  else
  {
    v18 = MiReservePtes((__int64)&qword_1402FF7B0, 1u, v15);
    if ( !v18 )
      return 3221225626LL;
  }
  v41 = (_QWORD *)(((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v45 = MI_READ_PTE_LOCK_FREE(v41);
  v44 = (a3 + 0x58000000000LL) / 48;
  MiObtainFaultCharges(VmPartition, 1u, 2);
  if ( v18 )
  {
    Page = MiGetPage(
             (__int64)VmPartition,
             dword_1402FE708 & v44 | (((*(_QWORD *)(a3 + 40) >> 36) & 3) << byte_1402FE6E8) | (((*(_QWORD *)(a3 + 40) >> 58) & 0x3F) << byte_1402FE6D9),
             0);
    DriverPage = Page;
    if ( Page == -1LL )
    {
      v22 = -1073741670;
      goto LABEL_16;
    }
  }
  else
  {
    LOBYTE(v19) = a7;
    MiUnlockWorkingSetExclusive((__int64)SpinLock, v19, v20);
    DriverPage = MiAllocateDriverPage();
    Page = DriverPage;
    ExAcquireSpinLockExclusive(SpinLock);
    if ( !(unsigned int)MiIsFaultPteIntact(a4, (__int64)v41, &v45) )
    {
      v22 = -1073740748;
LABEL_16:
      if ( Page != -1LL )
        MiReleaseFreshPage(48 * Page - 0x58000000000LL);
      MiReturnFaultCharges((__int64)VmPartition, 1uLL, 2);
      if ( v18 )
        MiReleasePtes((__int64)&qword_1402FF7B0, (_QWORD *)v18, 1u);
      return v22;
    }
  }
  v23 = 48 * Page - 0x58000000000LL;
  v24 = (char *)MiGetInPageSupportBlock(2);
  if ( !v24 )
  {
    MiReturnFaultCharges((__int64)SpinLocka, 1uLL, 2);
    if ( v18 )
      MiReleasePtes((__int64)&qword_1402FF7B0, (_QWORD *)v18, 1u);
    v25 = MiLockPageInline(48 * Page - 0x58000000000LL);
    v26 = 1LL;
    if ( *(_QWORD *)(v23 + 16) )
      v26 = 2LL;
    MiInsertPageInFreeOrZeroedList(Page, v26);
    _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v25);
    return 3221225626LL;
  }
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)v43);
  v24[189] |= 0x10u;
  *((_QWORD *)v24 + 30) = v23;
  *((_DWORD *)v24 + 20) = 0;
  *((_QWORD *)v24 + 11) = 0LL;
  MiInitializeReadInProgressPfn(a4, &DriverPage, 1, v41, (__int64)(v24 + 32), EffectivePagePriorityThread & 7 | 0x48);
  if ( (SpinLock[54] & 7) == 0 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 1uLL);
  v46[0] = MI_READ_PTE_LOCK_FREE(v41);
  *((_QWORD *)v24 + 25) = a1;
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 104), 1uLL);
  LOBYTE(v28) = 1;
  MiUnlockWorkingSetExclusive((__int64)SpinLock, v28, v29);
  --v43->SpecialApcDisable;
  __writecr8(a7);
  v30 = (v16 & 2) != 0;
  v31 = DriverPage;
  SpinLockb = DriverPage;
  MiCopyPage(DriverPage, v44, 0LL, v30 ? 17 : 9);
  if ( v18 )
  {
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v23);
    v34 = MiMakeValidKernelPte(v31, ProtectionPfnCompatible, v18, v33) | 0x42;
    *(_QWORD *)v18 = v34;
    if ( (unsigned int)MiPteInShadowRange(v18) )
      MiWritePteShadow(v18, v34);
    v35 = a1;
    if ( *(__int64 *)(a3 + 8) < 0 )
      MiRelocateImagePfn(a1, (__int64)(v18 << 25) >> 16, v48, SpinLockb, a5);
    MiReleasePtes((__int64)&qword_1402FF7B0, (_QWORD *)v18, 1u);
  }
  else
  {
    v35 = a1;
  }
  MiDereferenceControlAreaProbe(v35, 0);
  __writecr8(1uLL);
  KiLeaveGuardedRegionUnsafe((__int64)v43);
  ExAcquireSpinLockExclusive(SpinLock);
  IsFaultPteIntact = MiIsFaultPteIntact(a4, (__int64)v41, v46);
  v37 = MiLockPageInline(v23);
  v38 = *(_BYTE *)(v23 + 34) & 0xDF;
  v39 = v37;
  *(_BYTE *)(v23 + 34) = v38;
  if ( (*(_QWORD *)(v23 + 24) & 0x4000000000000000LL) == 0 )
  {
    *(_QWORD *)v23 = 0LL;
    *(_BYTE *)(v23 + 34) = v38 | 0x10;
  }
  if ( IsFaultPteIntact == 1 )
  {
    MiAddLockedPageCharge(v23, 3);
    v40 = *(_BYTE *)(v23 + 34) & 0xFE;
    *(_QWORD *)(v23 + 24) ^= (*(_QWORD *)(v23 + 24) ^ (*(_QWORD *)(v23 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
    *(_BYTE *)(v23 + 34) = v40 | 6;
    if ( !v18 )
      *(_BYTE *)(v23 + 35) |= 8u;
  }
  else
  {
    v8 = -1073740748;
  }
  MiRemoveLockedPageChargeAndDecRef(v23);
  _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v39);
  v24[189] &= ~0x10u;
  if ( *((int *)v24 + 44) > 1 )
    KeSetEvent((PRKEVENT)(v24 + 56), 0, 0);
  MiFreeInPageSupportBlock(v24);
  return v8;
}
