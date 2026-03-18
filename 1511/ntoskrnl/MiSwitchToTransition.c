/*
 * XREFs of MiSwitchToTransition @ 0x1401D6E6C
 * Callers:
 *     MmRotatePhysicalView @ 0x1404E2C10 (MmRotatePhysicalView.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x140007B08 (MiReleaseFreshPage.c)
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiGetEffectivePagePriorityThread @ 0x140011A18 (MiGetEffectivePagePriorityThread.c)
 *     MiSetPfnBlink @ 0x140012C74 (MiSetPfnBlink.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiObtainFaultCharges @ 0x1400634F0 (MiObtainFaultCharges.c)
 *     MI_READ_PDE @ 0x14006DE04 (MI_READ_PDE.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140070760 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiChangePageAttributeBatch @ 0x1400A9630 (MiChangePageAttributeBatch.c)
 *     MiAddLockedPageCharge @ 0x1400AA108 (MiAddLockedPageCharge.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x1400BCED4 (MiPageAttributeBatchChangeNeeded.c)
 *     MiReturnFaultCharges @ 0x1400F2600 (MiReturnFaultCharges.c)
 *     MiIsProbeActive @ 0x140103284 (MiIsProbeActive.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAddMdlTracker @ 0x1401D2A9C (MiAddMdlTracker.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiWaitForFreePage @ 0x1401E4C20 (MiWaitForFreePage.c)
 *     MiGetReadyInPageBlock @ 0x140623DE4 (MiGetReadyInPageBlock.c)
 */

__int64 __fastcall MiSwitchToTransition(ULONG_PTR BugCheckParameter3, __int64 a2, unsigned int a3)
{
  _KPROCESS *v4; // rbx
  unsigned __int64 *v5; // r12
  __int64 v6; // rdx
  __int64 ReadyInPageBlock; // rax
  unsigned __int64 v8; // r15
  char v9; // di
  unsigned __int64 v10; // r15
  __int64 v11; // r14
  unsigned int v12; // r10d
  unsigned int v13; // eax
  __int64 v14; // rsi
  unsigned int v15; // ebx
  int i; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rbx
  _WORD *v20; // rax
  __int64 Page; // rax
  unsigned int v22; // r15d
  unsigned __int64 v23; // rbx
  bool j; // cf
  ULONG_PTR v25; // rbx
  unsigned __int64 v26; // rax
  __int64 v27; // r9
  __int64 v28; // r10
  __int64 v29; // r11
  unsigned __int16 v30; // cx
  __int64 v31; // rcx
  __int64 v32; // rax
  unsigned __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  struct _KTHREAD *v36; // rax
  unsigned __int64 v37; // rbx
  char v38; // cl
  __int64 v39; // rbx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // r12
  _KPROCESS *v43; // rdi
  _KPROCESS *v44; // rdx
  KIRQL v46; // [rsp+30h] [rbp-D0h]
  _QWORD *v47; // [rsp+38h] [rbp-C8h]
  __int64 v48; // [rsp+38h] [rbp-C8h]
  unsigned int v49; // [rsp+40h] [rbp-C0h]
  unsigned int v51; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v52; // [rsp+50h] [rbp-B0h]
  __int64 v53; // [rsp+60h] [rbp-A0h]
  volatile signed __int64 *v54; // [rsp+60h] [rbp-A0h]
  __int64 v55; // [rsp+68h] [rbp-98h]
  unsigned __int64 v56; // [rsp+68h] [rbp-98h]
  ULONG_PTR v57; // [rsp+70h] [rbp-90h] BYREF
  int *v58; // [rsp+78h] [rbp-88h]
  PEX_SPIN_LOCK SpinLock; // [rsp+80h] [rbp-80h]
  int EffectivePagePriorityThread; // [rsp+88h] [rbp-78h]
  __int64 v61; // [rsp+90h] [rbp-70h]
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-68h]
  unsigned __int64 v63; // [rsp+A0h] [rbp-60h]
  __int64 v64; // [rsp+A8h] [rbp-58h]
  _WORD *v65; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v66; // [rsp+B8h] [rbp-48h]
  unsigned __int16 v67; // [rsp+BAh] [rbp-46h]
  _KPROCESS *Process; // [rsp+C0h] [rbp-40h]
  int v69; // [rsp+D0h] [rbp-30h] BYREF
  __int16 v70; // [rsp+D4h] [rbp-2Ch]
  __int64 v71; // [rsp+D8h] [rbp-28h]
  __int64 v72; // [rsp+E0h] [rbp-20h]
  __int64 v73; // [rsp+E8h] [rbp-18h]

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v4 = Process;
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  v5 = (unsigned __int64 *)(BugCheckParameter3 + 48);
  ReadyInPageBlock = MiGetReadyInPageBlock(v6);
  v8 = *(_QWORD *)(BugCheckParameter3 + 32);
  v9 = 0;
  v64 = ReadyInPageBlock;
  v63 = v8;
  v10 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  SpinLock = (PEX_SPIN_LOCK)&Process[1].IdealNode[12];
  MI_INITIALIZE_COLOR_BASE((__int64)&Process[1].IdealNode[12], 0, (__int64)&v65);
  v47 = 0LL;
  v11 = 0LL;
  v55 = 0xFFFFFFFFFLL;
  v58 = MiPartitionIdToPointer(v4[2].Header.SignalState);
  v13 = MiObtainFaultCharges(v58, v12, 2);
  v14 = v13;
  v15 = v13;
  v49 = v13;
  v51 = v13;
  v53 = v13;
  v52 = v10 + 8LL * v13;
  while ( 2 )
  {
    v46 = ExAcquireSpinLockExclusive(SpinLock);
    for ( i = MiIsProbeActive(v10, v14, 3); i; i = MiIsProbeActive(v10, v15, 3) )
    {
      v52 -= 8LL;
      v51 = --v15;
      if ( !v15 )
      {
        v22 = 1;
        goto LABEL_45;
      }
      v53 = v15;
    }
    v19 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v19 >= v51 )
      {
        v23 = v52;
        goto LABEL_17;
      }
      v20 = v65;
      ++*v65;
      Page = MiGetPage((__int64)v58, v67 | (unsigned int)(unsigned __int16)(v66 & *v20), 0);
      v61 = Page;
      if ( Page == -1 )
        break;
      v11 = 48 * Page - 0x58000000000LL;
      if ( (unsigned int)MiPageAttributeBatchChangeNeeded(v11, a3) == 1 )
      {
        *(_QWORD *)(v11 + 16) = v47;
        v47 = (_QWORD *)v11;
      }
      MiSetPfnBlink(v11, v55, 0);
      v19 = (unsigned int)(v19 + 1);
      v55 = v61;
    }
    if ( !(_DWORD)v19 )
    {
      LOBYTE(v17) = v46;
      MiUnlockWorkingSetExclusive((__int64)SpinLock, v17, v18);
      MiWaitForFreePage(v58);
      v15 = v51;
      v14 = v53;
      continue;
    }
    break;
  }
  v23 = v10 + 8 * v19;
  v52 = v23;
LABEL_17:
  if ( v47 )
    MiChangePageAttributeBatch(v47, a3, 128LL);
  for ( j = v10 < v23; ; j = v10 < v52 )
  {
    if ( !j )
    {
      v22 = 0;
      goto LABEL_45;
    }
    v25 = MI_READ_PTE_LOCK_FREE((__int64 *)v10);
    v57 = v25;
    if ( (v25 & 1) == 0 )
      KeBugCheckEx(0x1Au, 0x41200uLL, v10, v25, BugCheckParameter3);
    v26 = MI_READ_PTE_LOCK_FREE((__int64 *)&v57);
    if ( MI_IS_PFN((v26 >> 12) & 0xFFFFFFFFFLL) )
    {
      if ( (*(_QWORD *)(v27 + 8) | 0x8000000000000000uLL) == v10 )
        KeBugCheckEx(0x1Au, 0x41200uLL, v10, v25, BugCheckParameter3);
      v17 = 0xFFFFFFFFDLL;
      v18 = 1LL;
      v30 = 1;
      if ( (v28 & *(_QWORD *)(v27 + 40)) == 0xFFFFFFFFDLL )
        v30 = 2;
      if ( *(_WORD *)(v27 + 32) > v30 )
        break;
    }
    v31 = v11;
    v54 = (volatile signed __int64 *)(v11 + 24);
    v32 = v28 & *(_QWORD *)(v11 + 24);
    v48 = v11;
    if ( v32 == v28 )
      v11 = 0LL;
    else
      v11 = 48 * v32 - v29;
    v33 = (__int64)((unsigned __int128)((v29 + v31) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
    v56 = (v33 >> 63) + v33;
    v34 = (v25 & 0x800) != 0 ? 4 : 1;
    if ( a3 == 2 )
    {
      v34 = (unsigned int)v34 | 0x18;
    }
    else if ( !a3 )
    {
      v34 = (unsigned int)v34 | 8;
    }
    v35 = v64;
    v61 = v34;
    *(_BYTE *)(v48 + 34) |= 0x20u;
    *(_QWORD *)(v48 + 16) = 32 * v34;
    *(_QWORD *)v48 = v35 + 32;
    if ( (v9 & 1) == 0 )
    {
      v36 = CurrentThread;
      *(_BYTE *)(v35 + 189) |= 0x10u;
      *(_DWORD *)(v35 + 80) = 0;
      *(_QWORD *)(v35 + 88) = 0LL;
      *(_QWORD *)(v35 + 152) = v36;
      v9 |= 1u;
      *(_QWORD *)(v35 + 240) = v48;
    }
    v57 = MI_READ_PDE((_BYTE *)(((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL));
    *(_QWORD *)(v48 + 40) ^= (*(_QWORD *)(v48 + 40) ^ MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v57)) & 0xFFFFFFFFFLL;
    v37 = (unsigned __int8)MiLockPageInline(v48);
    *v54 &= 0xC000000000000000uLL;
    MiAddLockedPageCharge(v48, 1);
    v38 = *(_BYTE *)(v48 + 34) & 0xFA;
    *(_QWORD *)(v48 + 8) = v10;
    *(_BYTE *)(v48 + 34) = v38 | 2;
    *(_BYTE *)(v48 + 35) ^= (EffectivePagePriorityThread ^ *(_BYTE *)(v48 + 35)) & 7;
    _InterlockedAnd64(v54, 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v37);
    MiReturnFaultCharges((__int64)v58, 1uLL, 0);
    --v49;
    v39 = 32 * (v61 & 0x1F | ((v56 & 0xFFFFFFFFFLL) << 7) | 0x40);
    v57 = v39;
    *(_QWORD *)v10 = v39;
    if ( (unsigned int)MiPteInShadowRange(v10) )
      MiWritePteShadow(v10, v39);
    v10 += 8LL;
    *v5++ = v56;
  }
  v22 = 1;
  while ( v11 )
  {
    v40 = v11;
    v41 = v28 & *(_QWORD *)(v11 + 24);
    if ( v41 == v28 )
      v11 = 0LL;
    else
      v11 = 48 * v41 - v29;
    *(_QWORD *)(v40 + 16) = 128LL;
    MiReleaseFreshPage(v40);
LABEL_45:
    v28 = 0xFFFFFFFFFLL;
    v29 = 0x58000000000LL;
  }
  LOBYTE(v17) = v46;
  MiUnlockWorkingSetExclusive((__int64)SpinLock, v17, v18);
  if ( v49 )
    MiReturnFaultCharges((__int64)v58, v49, 0);
  v42 = (__int64)((__int64)v5 - BugCheckParameter3 - 48) >> 3;
  *(_DWORD *)(BugCheckParameter3 + 40) = (_DWORD)v42 << 12;
  if ( (_DWORD)v42 )
  {
    v43 = Process;
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], (unsigned int)v42);
    v71 = 20LL;
    v69 = 1;
    v70 = 0;
    v72 = 0LL;
    v73 = 0LL;
    MiInsertTbFlushEntry((__int64)&v69, v63 & 0xFFFFFFFFFFFFF000uLL, (unsigned int)v42, 0);
    MiFlushTbList((__int64)&v69, v44);
    *(_QWORD *)(BugCheckParameter3 + 16) = v43;
    *(_WORD *)(BugCheckParameter3 + 10) |= 2u;
    _InterlockedExchangeAdd64((volatile signed __int64 *)&v43[1].Affinity.Bitmap[14], (unsigned int)v42);
    if ( (MmTrackLockedPages & 1) != 0 )
      MiAddMdlTracker(BugCheckParameter3, (unsigned int)v42, 4);
  }
  return v22;
}
