/*
 * XREFs of MmSetAddressRangeModified @ 0x140016B20
 * Callers:
 *     CcPurgeAndClearCacheSection @ 0x14006C3C0 (CcPurgeAndClearCacheSection.c)
 *     CcZeroDataInCache @ 0x14006D150 (CcZeroDataInCache.c)
 *     CcFlushCachePriv @ 0x1400E6CB0 (CcFlushCachePriv.c)
 *     CcUnpinRepinnedBcb @ 0x1401B1D50 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     MiCaptureDirtyBitToPfn @ 0x1400158E0 (MiCaptureDirtyBitToPfn.c)
 *     MiSystemCacheVaControlArea @ 0x1400189B0 (MiSystemCacheVaControlArea.c)
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     KeFlushTb @ 0x14001D96C (KeFlushTb.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     KxFlushMultipleTb @ 0x1400B3BF0 (KxFlushMultipleTb.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     KiFlushRangeTb @ 0x14012FDBC (KiFlushRangeTb.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     HvlFlushRangeListTb @ 0x1401C13D4 (HvlFlushRangeListTb.c)
 *     KeFlushCurrentTbOnly @ 0x1401D5EF0 (KeFlushCurrentTbOnly.c)
 *     KiPrepareFlushParameters @ 0x1401D6060 (KiPrepareFlushParameters.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     VmpFlushTb @ 0x140223DB0 (VmpFlushTb.c)
 *     ExFlushTb @ 0x14022E938 (ExFlushTb.c)
 */

BOOLEAN __stdcall MmSetAddressRangeModified(PVOID Address, SIZE_T Length)
{
  unsigned __int64 *v2; // rsi
  unsigned __int64 v3; // r13
  unsigned __int64 v4; // r14
  __int64 AnyMultiplexedVm; // rax
  __int64 SharedVm; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _KPROCESS *Process; // rdx
  unsigned __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // rdi
  unsigned __int8 v17; // r15
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r12
  unsigned __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // r15d
  unsigned int v27; // r14d
  unsigned __int64 v28; // r8
  __int64 v29; // rcx
  unsigned int v30; // ebx
  unsigned int v31; // esi
  unsigned __int8 v32; // di
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 Group; // rcx
  unsigned __int64 GroupSetMember; // rdx
  _QWORD *v36; // rbx
  __int64 v37; // rdi
  unsigned __int8 v38; // di
  volatile _KAFFINITY_EX *p_ActiveProcessors; // rdx
  volatile LONG *v40; // rcx
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v43; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int8 v44; // [rsp+31h] [rbp-CFh] BYREF
  KIRQL v45; // [rsp+32h] [rbp-CEh]
  __int64 v46; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v47; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v48; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v49; // [rsp+50h] [rbp-B0h]
  unsigned int v50; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v51; // [rsp+64h] [rbp-9Ch]
  __int64 v52; // [rsp+68h] [rbp-98h]
  unsigned __int64 v53; // [rsp+70h] [rbp-90h]
  _QWORD v54[21]; // [rsp+78h] [rbp-88h] BYREF
  _DWORD v55[44]; // [rsp+120h] [rbp+20h] BYREF

  v52 = 20LL;
  v50 = 0;
  v51 = 0;
  v53 = 0LL;
  v54[0] = 0LL;
  v2 = (unsigned __int64 *)((((unsigned __int64)Address >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v3 = ((((unsigned __int64)Address + Length - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v4 = (unsigned __int64)Address & 0xFFFFFFFFFFFFF000uLL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(0LL, Length);
  SharedVm = MiGetSharedVm(AnyMultiplexedVm);
  v45 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  v7 = MiSystemCacheVaControlArea(v4);
  v49 = MiPartitionIdToPointer(*(_WORD *)(v7 + 60) & 0x3FF, v8, v9, v10) + 6592;
  do
  {
    v46 = MI_READ_PTE_LOCK_FREE(v2);
    if ( (v46 & 1) != 0 )
    {
      v13 = 0LL;
      v14 = MI_GET_PAGE_FRAME_FROM_PTE(&v46);
      v16 = v15 + 48 * v14;
      v17 = MiLockPageInline(v16);
      v18 = *(_QWORD *)(v16 + 40) >> 40;
      LOWORD(v18) = v18 & 0x3FF;
      v22 = MiPartitionIdToPointer(v18, v19, v20, v21);
      if ( (*(_BYTE *)(v16 + 34) & 0x10) == 0 || (*(_DWORD *)(v16 + 16) & 0x400LL) == 0 )
        v13 = MiCaptureDirtyBitToPfn(v16);
      _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v17);
      if ( v13 )
        MiReleasePageFileInfo(v22, v13, 0LL);
      Process = (_KPROCESS *)v46;
      if ( (v46 & 0x42) != 0 )
      {
        v23 = v46 & 0xFFFFFFFFFFFFFFBDuLL;
        v46 = v23;
        *v2 = v23;
        if ( (unsigned int)MiPteInShadowRange(v2, v23) )
          MiWritePteShadow(v25, v24);
        MiInsertTbFlushEntry(&v50, v4, 1LL);
      }
      v12 = 0xFFFFFA8000000000uLL;
    }
    ++v2;
    v4 += 4096LL;
  }
  while ( (unsigned __int64)v2 <= v3 );
  v26 = HIDWORD(v52);
  v27 = HIDWORD(v52);
  if ( HIDWORD(v52) )
  {
    v28 = qword_140326A58;
    if ( (v51 & 2) != 0 )
    {
      v29 = v50;
    }
    else
    {
      v29 = v50;
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( !Process[2].ActiveProcessors.Bitmap[14] )
      {
        if ( !Process->SecurePid )
          goto LABEL_21;
        if ( v50 != 1 )
          goto LABEL_23;
      }
      v28 = -1LL;
    }
LABEL_21:
    if ( (_DWORD)v29 == 1 )
    {
      v30 = 0;
LABEL_24:
      if ( HIBYTE(v51) || v53 > v28 )
      {
        if ( (v51 & 1) != 0 )
          KeFlushCurrentTbOnly(v29, Process, v28, v12);
        else
          KeFlushTb(v29, v30, v28, v12);
        HIBYTE(v51) = 0;
LABEL_60:
        LOBYTE(v51) = v51 & 0xFB;
        HIDWORD(v52) = 0;
        v53 = 0LL;
        goto LABEL_61;
      }
      v31 = v29;
      if ( (v51 & 1) != 0 )
      {
        if ( (_DWORD)v29 == 1 )
        {
          v29 = v50;
          if ( KeGetCurrentThread()->ApcState.Process->SecurePid )
          {
            v32 = v31;
LABEL_34:
            KiPrepareFlushParameters(v29, &v47, &v43, v12);
            CurrentPrcb = KeGetCurrentPrcb();
            v55[0] = 1310721;
            memset(&v55[1], 0, 0xA4uLL);
            Group = CurrentPrcb->Group;
            GroupSetMember = CurrentPrcb->GroupSetMember;
            if ( CurrentPrcb->Group )
              LOWORD(v55[0]) = Group + 1;
            *(_QWORD *)&v55[2 * Group + 2] |= GroupSetMember;
            HvlFlushRangeListTb(v47, v55, v43, v32, v27, v54);
            goto LABEL_51;
          }
        }
        v32 = 0;
        if ( (HvlEnlightenments & 6) != 0 )
        {
          if ( (HvlEnlightenments & 2) != 0 )
            goto LABEL_34;
          if ( (unsigned int)KeNumberProcessors_0 > 1 )
          {
            v29 = v50;
            goto LABEL_34;
          }
        }
        v36 = v54;
        v37 = HIDWORD(v52);
        do
        {
          KiFlushRangeTb(*v36++, v31, v28, v12);
          --v37;
        }
        while ( v37 );
LABEL_51:
        if ( VmTbFlushEnabled )
        {
          v40 = (volatile LONG *)KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[14];
          if ( v40 )
            VmpFlushTb(v40);
        }
        if ( ExTbFlushActive )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          ExFlushTb(v27, v54, v31);
          __writecr8(CurrentIrql);
        }
        goto LABEL_60;
      }
      if ( (_DWORD)v29 == 1 && (v29 = v50, KeGetCurrentThread()->ApcState.Process->SecurePid) )
      {
        v38 = 1;
      }
      else
      {
        v38 = 0;
        if ( (HvlEnlightenments & 6) == 0
          || (HvlEnlightenments & 2) == 0 && (v29 = v50, (unsigned int)KeNumberProcessors_0 <= 1) )
        {
          KxFlushMultipleTb(HIDWORD(v52), v54, (unsigned int)v29, v30);
          goto LABEL_51;
        }
      }
      KiPrepareFlushParameters(v29, &v48, &v44, v12);
      if ( v30 )
        p_ActiveProcessors = 0LL;
      else
        p_ActiveProcessors = &KeGetCurrentThread()->ApcState.Process->ActiveProcessors;
      HvlFlushRangeListTb(v48, p_ActiveProcessors, v44, v38, v27, v54);
      goto LABEL_51;
    }
LABEL_23:
    v30 = ((v51 & 4) != 0) + 1;
    goto LABEL_24;
  }
LABEL_61:
  MiUnlockWorkingSetExclusive(v49, v45);
  return v26 != 0;
}
