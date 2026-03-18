/*
 * XREFs of MiFlushTbList @ 0x140091890
 * Callers:
 *     MiCloneVads @ 0x140001EE4 (MiCloneVads.c)
 *     MiBuildForkPte @ 0x14000253C (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x140004220 (MiHandleForkTransitionPte.c)
 *     MiDeletePagablePteRange @ 0x140008890 (MiDeletePagablePteRange.c)
 *     MiLockCode @ 0x140010950 (MiLockCode.c)
 *     MiReplenishBitMap @ 0x140012E20 (MiReplenishBitMap.c)
 *     MiMakeDriverPagesPrivate @ 0x1400246E4 (MiMakeDriverPagesPrivate.c)
 *     MiSetReadOnlyOnSectionView @ 0x140031070 (MiSetReadOnlyOnSectionView.c)
 *     MiDeletePteRange @ 0x140038650 (MiDeletePteRange.c)
 *     MiRemoveMappedPtes @ 0x140039410 (MiRemoveMappedPtes.c)
 *     MiDeletePageTableHierarchy @ 0x140039EA0 (MiDeletePageTableHierarchy.c)
 *     MiGetNextPageTable @ 0x14003BAA0 (MiGetNextPageTable.c)
 *     NtGetWriteWatch @ 0x14003C8B0 (NtGetWriteWatch.c)
 *     MiStealPage @ 0x140055CB0 (MiStealPage.c)
 *     MiCopyOnWriteEx @ 0x140058250 (MiCopyOnWriteEx.c)
 *     MiCopyPage @ 0x140058ED0 (MiCopyPage.c)
 *     MiGetPteFromCopyList @ 0x140059330 (MiGetPteFromCopyList.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14005A4E0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiProtectPrivateMemory @ 0x14005DD20 (MiProtectPrivateMemory.c)
 *     MiMakeSystemAddressValid @ 0x14005E6FC (MiMakeSystemAddressValid.c)
 *     MiClearNonPagedPtes @ 0x140065600 (MiClearNonPagedPtes.c)
 *     MiInitializeSystemPageTable @ 0x14006A1F8 (MiInitializeSystemPageTable.c)
 *     MmRemoveExecuteGrants @ 0x14007B234 (MmRemoveExecuteGrants.c)
 *     NtResetWriteWatch @ 0x14007CF90 (NtResetWriteWatch.c)
 *     MiWalkVaRange @ 0x14007F5DC (MiWalkVaRange.c)
 *     MiReplaceWorkingSetEntryLarge @ 0x140080B2C (MiReplaceWorkingSetEntryLarge.c)
 *     MiSetProtectionOnSection @ 0x14008FAB0 (MiSetProtectionOnSection.c)
 *     MiDeleteVirtualAddresses @ 0x140094110 (MiDeleteVirtualAddresses.c)
 *     MiAgeWorkingSet @ 0x140095760 (MiAgeWorkingSet.c)
 *     MiFlushTbAsNeeded @ 0x1400ADC10 (MiFlushTbAsNeeded.c)
 *     MiFreeWsleList @ 0x1400AE6D0 (MiFreeWsleList.c)
 *     MiDeleteSystemPagableVm @ 0x1400AFDF0 (MiDeleteSystemPagableVm.c)
 *     MiReleasePtes @ 0x1400B1800 (MiReleasePtes.c)
 *     MiPfnShareCountIsZero @ 0x1400B2270 (MiPfnShareCountIsZero.c)
 *     MiDeletePteRun @ 0x1400C3A20 (MiDeletePteRun.c)
 *     MiSetPagingOfDriver @ 0x1400D3E3C (MiSetPagingOfDriver.c)
 *     MI_FLUSH_CACHE_DUE_TO_ATTRIBUTE_CHANGE @ 0x1400E5B38 (MI_FLUSH_CACHE_DUE_TO_ATTRIBUTE_CHANGE.c)
 *     MiReleaseZeroingVa @ 0x1400FC378 (MiReleaseZeroingVa.c)
 *     MiDecrementAndInsertStandbyPages @ 0x140102820 (MiDecrementAndInsertStandbyPages.c)
 *     MiReturnSystemVa @ 0x140108060 (MiReturnSystemVa.c)
 *     MiReplacePageTablePage @ 0x14010F190 (MiReplacePageTablePage.c)
 *     MiFlushTbListEarly @ 0x1401118F0 (MiFlushTbListEarly.c)
 *     MiZeroAndFlushPtes @ 0x140115540 (MiZeroAndFlushPtes.c)
 *     MmProtectMdlSystemAddress @ 0x1401184E8 (MmProtectMdlSystemAddress.c)
 *     MiFlushDirtyBitsToPfn @ 0x140119A48 (MiFlushDirtyBitsToPfn.c)
 *     KiOutSwapKernelStacks @ 0x140123398 (KiOutSwapKernelStacks.c)
 *     MiSimpleAging @ 0x1401271B8 (MiSimpleAging.c)
 *     MiReplaceRotateWithDemandZero @ 0x140134D50 (MiReplaceRotateWithDemandZero.c)
 *     MmSetPageProtection @ 0x14013821C (MmSetPageProtection.c)
 *     MiDeletePhysmemVad @ 0x140138DDC (MiDeletePhysmemVad.c)
 *     MiDeleteSessionAddressSpace @ 0x1401495B0 (MiDeleteSessionAddressSpace.c)
 *     MiDeleteSessionPdes @ 0x14014BED8 (MiDeleteSessionPdes.c)
 *     MmMapMemoryDumpMdlEx @ 0x14014E5A8 (MmMapMemoryDumpMdlEx.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x140152DC0 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiZeroPageThread @ 0x14015FE90 (MiZeroPageThread.c)
 *     MmUnmapReservedMapping @ 0x140214F34 (MmUnmapReservedMapping.c)
 *     MiSwitchToTransition @ 0x140219964 (MiSwitchToTransition.c)
 *     MiJoinBitmapPages @ 0x14021ED0C (MiJoinBitmapPages.c)
 *     MmFreeSpecialPool @ 0x14021FC4C (MmFreeSpecialPool.c)
 *     MiLargePageFault @ 0x140223C5C (MiLargePageFault.c)
 *     MiDeletePageTablesForPhysicalRange @ 0x1402244DC (MiDeletePageTablesForPhysicalRange.c)
 *     MiProtectAweRegion @ 0x140224890 (MiProtectAweRegion.c)
 *     MiSharePages @ 0x14022B7E8 (MiSharePages.c)
 *     MiUnmapLargeUserPages @ 0x14022FBF4 (MiUnmapLargeUserPages.c)
 *     MiGetPteMappingPair @ 0x140231378 (MiGetPteMappingPair.c)
 *     MiScrubLargeMappedPage @ 0x140232658 (MiScrubLargeMappedPage.c)
 *     MmUnmapLockedRestartPages @ 0x1406A0550 (MmUnmapLockedRestartPages.c)
 *     MiRemoveUserPhysicalPagesVad @ 0x1406A6148 (MiRemoveUserPhysicalPagesVad.c)
 *     NtMapUserPhysicalPages @ 0x1406A703C (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1406A75B4 (NtMapUserPhysicalPagesScatter.c)
 *     MmDeleteShadowMapping @ 0x1406A84B8 (MmDeleteShadowMapping.c)
 *     MiInitializeTbFlushing @ 0x1407C7E90 (MiInitializeTbFlushing.c)
 *     MiEliminatePageTablesOfOnes @ 0x1407CB738 (MiEliminatePageTablesOfOnes.c)
 *     MiReloadBootLoadedDrivers @ 0x1407CC4D4 (MiReloadBootLoadedDrivers.c)
 *     MmFreeLoaderBlock @ 0x1407CFF0C (MmFreeLoaderBlock.c)
 *     MiMarkBootKernelStack @ 0x1407D4164 (MiMarkBootKernelStack.c)
 *     MiProtectSharedUserPage @ 0x1407E8138 (MiProtectSharedUserPage.c)
 *     MiReturnDriverLoadPages @ 0x1407FB4F0 (MiReturnDriverLoadPages.c)
 * Callees:
 *     KxFlushEntireTb @ 0x14003F924 (KxFlushEntireTb.c)
 *     KiIpiSendRequestEx @ 0x1400425D0 (KiIpiSendRequestEx.c)
 *     KiIpiSendRequest @ 0x1400427F0 (KiIpiSendRequest.c)
 *     KiFlushRangeWorker @ 0x1400921C0 (KiFlushRangeWorker.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x140156C90 (KeFlushMultipleRangeCurrentTb.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     HvlFlushAddressSpaceTb @ 0x14017EA3C (HvlFlushAddressSpaceTb.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     KeFlushCurrentTbOnly @ 0x140203CA8 (KeFlushCurrentTbOnly.c)
 *     VmFlushTb @ 0x14025B4C4 (VmFlushTb.c)
 *     ExFlushTb @ 0x140264FB0 (ExFlushTb.c)
 *     HvlFlushRangeListTb @ 0x140270884 (HvlFlushRangeListTb.c)
 */

void __fastcall MiFlushTbList(__int64 a1)
{
  unsigned int v1; // r15d
  __int64 v3; // r8
  unsigned __int64 v4; // r9
  unsigned int v5; // r14d
  _KPROCESS *Process; // rcx
  unsigned int v7; // edi
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned int v10; // ebx
  struct _KPRCB *CurrentPrcb; // rsi
  _KTHREAD *CurrentThread; // rax
  _KPROCESS *v13; // rdx
  unsigned __int16 Count; // r8
  unsigned __int16 *v15; // r10
  unsigned int v16; // r9d
  __int64 v17; // rcx
  unsigned __int16 v18; // dx
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // rcx
  unsigned int v21; // ebx
  unsigned __int8 v22; // bl
  bool v23; // r15
  unsigned __int64 v24; // rcx
  unsigned __int8 v25; // r13
  unsigned int v26; // ebx
  char v27; // cl
  int v28; // esi
  struct _KPRCB *v29; // r15
  _KTHREAD *v30; // rax
  _KPROCESS *v31; // rdx
  unsigned __int16 v32; // cx
  _WORD *v33; // r8
  unsigned int v34; // r9d
  __int64 v35; // rax
  _BYTE *v36; // rdx
  __int64 v37; // rdx
  unsigned int v38; // ebx
  char v39; // cl
  int v40; // esi
  _KTHREAD *v41; // rax
  _KPROCESS *v42; // rdx
  unsigned __int16 v43; // cx
  unsigned int v44; // ebx
  char v45; // cl
  int v46; // esi
  unsigned __int8 v47; // bl
  signed __int32 v48[6]; // [rsp+8h] [rbp-100h] BYREF
  __int128 v49; // [rsp+48h] [rbp-C0h] BYREF
  __int64 CurrentIrql; // [rsp+58h] [rbp-B0h]
  __int64 v51; // [rsp+60h] [rbp-A8h]
  _WORD v52[2]; // [rsp+68h] [rbp-A0h] BYREF
  int v53; // [rsp+6Ch] [rbp-9Ch]
  _QWORD v54[21]; // [rsp+70h] [rbp-98h] BYREF
  _WORD v55[2]; // [rsp+118h] [rbp+10h] BYREF
  int v56; // [rsp+11Ch] [rbp+14h]
  _BYTE v57[168]; // [rsp+120h] [rbp+18h] BYREF
  _WORD v58[2]; // [rsp+1C8h] [rbp+C0h] BYREF
  int v59; // [rsp+1CCh] [rbp+C4h]
  _BYTE v60[168]; // [rsp+1D0h] [rbp+C8h] BYREF

  v1 = *(_DWORD *)(a1 + 12);
  if ( v1 )
  {
    v3 = *(unsigned __int8 *)(a1 + 4);
    v4 = qword_14034EBD8;
    v5 = 1;
    if ( (v3 & 2) != 0 )
      goto LABEL_7;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( !Process[2].ActiveProcessors.Bitmap[11] )
    {
      if ( !Process->SecurePid )
        goto LABEL_7;
      v7 = *(_DWORD *)a1;
      if ( *(_DWORD *)a1 != 1 )
        goto LABEL_8;
    }
    v4 = -1LL;
LABEL_7:
    v7 = *(_DWORD *)a1;
    v8 = 0LL;
    if ( *(_DWORD *)a1 == 1 )
    {
LABEL_9:
      if ( !*(_BYTE *)(a1 + 5) && *(_QWORD *)(a1 + 16) <= v4 )
      {
        if ( (v3 & 1) != 0 )
        {
          KeFlushMultipleRangeCurrentTb(v1, a1 + 24, v7);
LABEL_148:
          *(_DWORD *)(a1 + 12) = 0;
          *(_QWORD *)(a1 + 16) = 0LL;
          return;
        }
        if ( v7 == 1 && KeGetCurrentThread()->ApcState.Process->SecurePid )
        {
          v4 = 1LL;
          goto LABEL_19;
        }
        LOBYTE(v4) = 0;
        if ( (HvlEnlightenments & 6) != 0 && ((HvlEnlightenments & 2) != 0 || (unsigned int)KeNumberProcessors_0 > 1) )
        {
LABEL_19:
          if ( KiKvaShadow )
          {
            if ( !v7 || v7 == 2 )
            {
              LOBYTE(v3) = 0;
LABEL_29:
              v9 = 0LL;
LABEL_30:
              if ( (_DWORD)v8 )
                HvlFlushRangeListTb(v9, 0LL, v3, v4, v1, a1 + 24);
              else
                HvlFlushRangeListTb(v9, &KeGetCurrentThread()->ApcState.Process->ActiveProcessors, v3, v4, v1, a1 + 24);
              goto LABEL_60;
            }
          }
          else if ( v7 )
          {
            if ( v7 == 1 )
            {
              v9 = KeGetCurrentThread()->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
              LOBYTE(v3) = 0;
              goto LABEL_30;
            }
            if ( v7 == 2 )
            {
              LOBYTE(v3) = 0;
              goto LABEL_29;
            }
          }
          v3 = 1LL;
          goto LABEL_29;
        }
        *(_QWORD *)&v49 = a1 + 24;
        v10 = 4;
        *((_QWORD *)&v49 + 1) = __PAIR64__(v7, v1);
        if ( (_DWORD)v8 == 1 )
          v10 = -2147483644;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xCuLL);
        CurrentPrcb = KeGetCurrentPrcb();
        if ( (_DWORD)v8 )
        {
          v15 = 0LL;
          if ( (unsigned int)KeNumberProcessors_0 > 1 )
          {
LABEL_51:
            KiIpiSendRequest((__int64)CurrentPrcb, v5, v15, &v49, v1, v10);
            if ( KiFlushRangeWorker )
              KiFlushRangeWorker(&v49);
            v21 = 0;
            while ( CurrentPrcb->PacketBarrier )
            {
              if ( (++v21 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v21);
            }
            goto LABEL_59;
          }
        }
        else
        {
          _InterlockedOr(v48, 0);
          CurrentThread = CurrentPrcb->CurrentThread;
          v53 = 0;
          v13 = CurrentThread->ApcState.Process;
          Count = v13->ActiveProcessors.Count;
          LOWORD(CurrentThread) = v13->ActiveProcessors.Size;
          v52[0] = Count;
          v52[1] = (_WORD)CurrentThread;
          if ( Count )
          {
            memmove(v54, v13->ActiveProcessors.Bitmap, 8LL * Count);
            Count = v52[0];
          }
          v15 = v52;
          v16 = KiProcessorIndexToNumberMappingTable[CurrentPrcb->Number];
          v17 = v16 >> 6;
          if ( Count > (unsigned int)v17 )
          {
            v54[v17] &= ~(1LL << (v16 & 0x3F));
            Count = v52[0];
          }
          v5 = 0;
          v18 = 0;
          if ( Count )
          {
            v51 = 0x5555555555555555LL;
            do
            {
              v19 = v54[v18];
              v20 = (0x101010101010101LL
                   * ((((v19 - (v51 & (v19 >> 1))) & 0x3333333333333333LL)
                     + (((v19 - (v51 & (v19 >> 1))) >> 2) & 0x3333333333333333LL)
                     + ((((v19 - (v51 & (v19 >> 1))) & 0x3333333333333333LL)
                       + (((v19 - (v51 & (v19 >> 1))) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
              if ( (unsigned __int8)v20 > 1u
                || (_BYTE)v20 == 1 && (CurrentPrcb->Group != v18 || (v19 & CurrentPrcb->GroupSetMember) == 0) )
              {
                goto LABEL_51;
              }
            }
            while ( ++v18 < Count );
          }
        }
        if ( KiFlushRangeWorker )
          KiFlushRangeWorker(&v49);
LABEL_59:
        __writecr8((unsigned __int8)CurrentIrql);
LABEL_60:
        if ( VmTbFlushEnabled )
          VmFlushTb(v1, a1 + 24);
        if ( ExTbFlushActive )
        {
          v22 = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          ExFlushTb(v1, a1 + 24, v7);
          __writecr8(v22);
        }
        goto LABEL_148;
      }
      if ( (v3 & 1) != 0 )
      {
        KeFlushCurrentTbOnly(v7, v8, v3);
LABEL_147:
        *(_BYTE *)(a1 + 5) = 0;
        goto LABEL_148;
      }
      v23 = v7 == 1 && KeGetCurrentThread()->ApcState.Process->SecurePid;
      if ( (HvlEnlightenments & 6) != 0 && ((HvlEnlightenments & 2) != 0 || (unsigned int)KeNumberProcessors_0 > 1) )
      {
        if ( KiKvaShadow )
        {
          if ( !v7 || v7 == 2 )
            LOBYTE(v5) = 0;
LABEL_77:
          v24 = 0LL;
          if ( v7 - 1 > 1 )
          {
            v25 = KeGetCurrentIrql();
            __writecr8(0xCuLL);
            v26 = 0;
            _m_prefetchw(&KiTbFlushTimeStamp);
            v27 = KiTbFlushTimeStamp;
            v28 = KiTbFlushTimeStamp;
            while ( (v27 & 1) != 0 || _interlockedbittestandset(&KiTbFlushTimeStamp, 0) )
            {
              if ( (++v26 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v26);
              v27 = KiTbFlushTimeStamp;
              if ( KiTbFlushTimeStamp - v28 >= 3 || KiTbFlushTimeStamp - v28 >= 2 && (v28 & 1) == 0 )
                goto LABEL_140;
            }
            HvlFlushAddressSpaceTb(0LL, 0LL, (unsigned __int8)v5, v23);
            _InterlockedIncrement(&KiTbFlushTimeStamp);
            goto LABEL_140;
          }
LABEL_89:
          HvlFlushAddressSpaceTb(v24, 0LL, (unsigned __int8)v5, v23);
LABEL_143:
          if ( VmTbFlushEnabled )
            VmFlushTb(0LL, 0LL);
          if ( ExTbFlushActive )
          {
            v47 = KeGetCurrentIrql();
            __writecr8(0xFuLL);
            ExFlushTb(0LL, 0LL, v7);
            __writecr8(v47);
          }
          goto LABEL_147;
        }
        switch ( v7 )
        {
          case 0u:
            goto LABEL_77;
          case 1u:
            v24 = KeGetCurrentThread()->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
            break;
          case 2u:
            v24 = 0LL;
            break;
          default:
            goto LABEL_77;
        }
        LOBYTE(v5) = 0;
        goto LABEL_89;
      }
      if ( KiKvaShadow )
      {
        if ( !v7 || v7 == 2 )
        {
          v25 = KeGetCurrentIrql();
          __writecr8(0xCuLL);
          v29 = KeGetCurrentPrcb();
          if ( !(_DWORD)v8 )
          {
            _InterlockedOr(v48, 0);
            v30 = v29->CurrentThread;
            v56 = 0;
            v31 = v30->ApcState.Process;
            v32 = v31->ActiveProcessors.Count;
            LOWORD(v30) = v31->ActiveProcessors.Size;
            v55[0] = v32;
            v55[1] = (_WORD)v30;
            if ( v32 )
            {
              memmove(v57, v31->ActiveProcessors.Bitmap, 8LL * v32);
              v32 = v55[0];
            }
            v33 = v55;
            v34 = KiProcessorIndexToNumberMappingTable[v29->Number];
            if ( v32 <= v34 >> 6 )
              goto LABEL_107;
            v35 = v34 >> 6;
            v36 = v57;
LABEL_106:
            *(_QWORD *)&v36[8 * v35] &= ~(1LL << (v34 & 0x3F));
LABEL_107:
            v37 = 0LL;
LABEL_108:
            KiIpiSendRequestEx(
              (__int64)v29,
              v37,
              v33,
              0,
              0LL,
              1LL,
              (__int64 (__fastcall *)(__int64, __int64))KiFlushProcessTbWorker,
              0LL);
LABEL_140:
            __writecr8(v25);
            goto LABEL_143;
          }
          v33 = 0LL;
          v37 = 1LL;
          if ( !KiKvaShadow )
            goto LABEL_108;
          v38 = 0;
          _m_prefetchw(&KiTbFlushTimeStamp);
          v39 = KiTbFlushTimeStamp;
          v40 = KiTbFlushTimeStamp;
          while ( (v39 & 1) != 0 || _interlockedbittestandset(&KiTbFlushTimeStamp, 0) )
          {
            if ( (++v38 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v38);
            v39 = KiTbFlushTimeStamp;
            if ( KiTbFlushTimeStamp - v40 >= 3 || KiTbFlushTimeStamp - v40 >= 2 && (v40 & 1) == 0 )
              goto LABEL_140;
          }
          goto LABEL_141;
        }
      }
      else if ( v7 && (int)v7 <= 2 )
      {
        v25 = KeGetCurrentIrql();
        __writecr8(0xCuLL);
        v29 = KeGetCurrentPrcb();
        if ( !(_DWORD)v8 )
        {
          _InterlockedOr(v48, 0);
          v41 = v29->CurrentThread;
          v59 = 0;
          v42 = v41->ApcState.Process;
          v43 = v42->ActiveProcessors.Count;
          LOWORD(v41) = v42->ActiveProcessors.Size;
          v58[0] = v43;
          v58[1] = (_WORD)v41;
          if ( v43 )
          {
            memmove(v60, v42->ActiveProcessors.Bitmap, 8LL * v43);
            v43 = v58[0];
          }
          v33 = v58;
          v34 = KiProcessorIndexToNumberMappingTable[v29->Number];
          if ( v43 <= v34 >> 6 )
            goto LABEL_107;
          v35 = v34 >> 6;
          v36 = v60;
          goto LABEL_106;
        }
        v33 = 0LL;
        v37 = 1LL;
        if ( !KiKvaShadow )
          goto LABEL_108;
        v44 = 0;
        _m_prefetchw(&KiTbFlushTimeStamp);
        v45 = KiTbFlushTimeStamp;
        v46 = KiTbFlushTimeStamp;
        while ( (v45 & 1) != 0 || _interlockedbittestandset(&KiTbFlushTimeStamp, 0) )
        {
          if ( (++v44 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v44);
          v45 = KiTbFlushTimeStamp;
          if ( KiTbFlushTimeStamp - v46 >= 3 || KiTbFlushTimeStamp - v46 >= 2 && (v46 & 1) == 0 )
            goto LABEL_140;
        }
LABEL_141:
        KiIpiSendRequestEx(
          (__int64)v29,
          1LL,
          0LL,
          0,
          0LL,
          1LL,
          (__int64 (__fastcall *)(__int64, __int64))KiFlushProcessTbWorker,
          0LL);
        _InterlockedIncrement(&KiTbFlushTimeStamp);
        __writecr8(v25);
        goto LABEL_143;
      }
      KxFlushEntireTb(v8);
      goto LABEL_143;
    }
LABEL_8:
    v8 = 1LL;
    goto LABEL_9;
  }
}
