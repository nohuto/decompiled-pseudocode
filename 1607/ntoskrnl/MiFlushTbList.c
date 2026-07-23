/*
 * XREFs of MiFlushTbList @ 0x1400DE330
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x14000C9C0 (MiSetReadOnlyOnSectionView.c)
 *     NtGetWriteWatch @ 0x140014A70 (NtGetWriteWatch.c)
 *     MiLockCode @ 0x140015170 (MiLockCode.c)
 *     MiMakeSystemAddressValid @ 0x14001592C (MiMakeSystemAddressValid.c)
 *     MiTrimSharedPageFromViews @ 0x1400189D0 (MiTrimSharedPageFromViews.c)
 *     MiInitializeSystemPageTable @ 0x140020B3C (MiInitializeSystemPageTable.c)
 *     MiClearNonPagedPtes @ 0x1400240A0 (MiClearNonPagedPtes.c)
 *     MiGetPteFromCopyList @ 0x140034700 (MiGetPteFromCopyList.c)
 *     MiMoveDirtyBitsToPfns @ 0x1400425F0 (MiMoveDirtyBitsToPfns.c)
 *     MiGetNextPageTable @ 0x140043470 (MiGetNextPageTable.c)
 *     MiSetProtectionOnSection @ 0x140043770 (MiSetProtectionOnSection.c)
 *     MiDeleteVirtualAddresses @ 0x140045780 (MiDeleteVirtualAddresses.c)
 *     MiAgeWorkingSet @ 0x140046C10 (MiAgeWorkingSet.c)
 *     MiDeleteSystemPagableVm @ 0x14004A820 (MiDeleteSystemPagableVm.c)
 *     MiReleasePtes @ 0x140051250 (MiReleasePtes.c)
 *     MiDeletePagablePteRange @ 0x140075220 (MiDeletePagablePteRange.c)
 *     MiSetPagingOfDriver @ 0x140081F24 (MiSetPagingOfDriver.c)
 *     MiMakeDriverPagesPrivate @ 0x140087988 (MiMakeDriverPagesPrivate.c)
 *     MiReplenishBitMap @ 0x140088A20 (MiReplenishBitMap.c)
 *     MiFlushTbListEarly @ 0x140088F20 (MiFlushTbListEarly.c)
 *     MiGetSmallZeroPtes @ 0x14008A774 (MiGetSmallZeroPtes.c)
 *     MiZeroPageWorkMapping @ 0x14008AFA0 (MiZeroPageWorkMapping.c)
 *     MiZeroAndFlushPtes @ 0x14009AE08 (MiZeroAndFlushPtes.c)
 *     MiFlushHyperSpace @ 0x14009D9E8 (MiFlushHyperSpace.c)
 *     MiReplacePageTablePage @ 0x1400A3B30 (MiReplacePageTablePage.c)
 *     MiFlushDirtyBitsToPfn @ 0x1400A44FC (MiFlushDirtyBitsToPfn.c)
 *     KiOutSwapKernelStacks @ 0x1400A5934 (KiOutSwapKernelStacks.c)
 *     MiSimpleAging @ 0x1400AA7CC (MiSimpleAging.c)
 *     MmSetPageProtection @ 0x1400B0300 (MmSetPageProtection.c)
 *     MmRemoveExecuteGrants @ 0x1400B6730 (MmRemoveExecuteGrants.c)
 *     MiWalkVaRange @ 0x1400B9514 (MiWalkVaRange.c)
 *     MiCloneVads @ 0x1400BA3F0 (MiCloneVads.c)
 *     MiBuildForkPte @ 0x1400BAB30 (MiBuildForkPte.c)
 *     MiReturnSystemVa @ 0x1400BE760 (MiReturnSystemVa.c)
 *     MiDeletePteList @ 0x1400DD960 (MiDeletePteList.c)
 *     MiFlushTbAsNeeded @ 0x1400DDEE0 (MiFlushTbAsNeeded.c)
 *     MiProtectPrivateMemory @ 0x1400DEEE0 (MiProtectPrivateMemory.c)
 *     MiCopyOnWriteEx @ 0x1400E05D0 (MiCopyOnWriteEx.c)
 *     MiFreeWsleList @ 0x1400E1970 (MiFreeWsleList.c)
 *     MiDeletePageTableHierarchy @ 0x1400E2BE0 (MiDeletePageTableHierarchy.c)
 *     MiProtectPool @ 0x1400E8270 (MiProtectPool.c)
 *     MiSetSystemCodeProtection @ 0x1400FBE74 (MiSetSystemCodeProtection.c)
 *     MiRemoveMappedPtes @ 0x1400FE0A0 (MiRemoveMappedPtes.c)
 *     MiDeletePteRange @ 0x1400FE550 (MiDeletePteRange.c)
 *     MiReplaceWorkingSetEntryLarge @ 0x1400FEB54 (MiReplaceWorkingSetEntryLarge.c)
 *     MiStealPage @ 0x140105C04 (MiStealPage.c)
 *     MiReplaceRotateWithDemandZero @ 0x14010E038 (MiReplaceRotateWithDemandZero.c)
 *     MiDeletePhysmemVad @ 0x140111B20 (MiDeletePhysmemVad.c)
 *     MmMapMemoryDumpMdlEx @ 0x1401144BC (MmMapMemoryDumpMdlEx.c)
 *     MiDeleteSessionAddressSpace @ 0x140123278 (MiDeleteSessionAddressSpace.c)
 *     MiDeleteSessionPdes @ 0x140126258 (MiDeleteSessionPdes.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x14012A1C0 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiZeroPageThread @ 0x14013A1B0 (MiZeroPageThread.c)
 *     MiPfnRangeIsZero @ 0x14013EC44 (MiPfnRangeIsZero.c)
 *     MiMapMdlCommon @ 0x1401E3694 (MiMapMdlCommon.c)
 *     MiUnmapMdlCommon @ 0x1401E3B1C (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x1401E4310 (MmProtectMdlSystemAddress.c)
 *     MiSwitchToTransition @ 0x1401E8974 (MiSwitchToTransition.c)
 *     MiJoinBitmapPages @ 0x1401EB150 (MiJoinBitmapPages.c)
 *     MmFreeSpecialPool @ 0x1401EBED0 (MmFreeSpecialPool.c)
 *     MiLargePageFault @ 0x1401EF658 (MiLargePageFault.c)
 *     MiDeletePageTablesForPhysicalRange @ 0x1401EFDC8 (MiDeletePageTablesForPhysicalRange.c)
 *     MiUnmapLargeUserPages @ 0x1401F590C (MiUnmapLargeUserPages.c)
 *     MiHandleForkTransitionPte @ 0x1401F701C (MiHandleForkTransitionPte.c)
 *     MiSharePages @ 0x1401FA710 (MiSharePages.c)
 *     MiScrubLargeMappedPage @ 0x1401FE160 (MiScrubLargeMappedPage.c)
 *     MiInitializeDynamicBitmap @ 0x1405363C0 (MiInitializeDynamicBitmap.c)
 *     MmDeleteShadowMapping @ 0x14065BEE8 (MmDeleteShadowMapping.c)
 *     MiProtectAweRegion @ 0x14065C5C4 (MiProtectAweRegion.c)
 *     MiRemoveUserPhysicalPagesVad @ 0x14065C778 (MiRemoveUserPhysicalPagesVad.c)
 *     NtMapUserPhysicalPages @ 0x14065D810 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x14065DC8C (NtMapUserPhysicalPagesScatter.c)
 *     MiDeleteEnclavePages @ 0x14065F3EC (MiDeleteEnclavePages.c)
 *     MiProtectEnclavePages @ 0x14065F6F8 (MiProtectEnclavePages.c)
 *     MiMarkBootKernelStack @ 0x14078E4F0 (MiMarkBootKernelStack.c)
 *     MiProtectSharedUserPage @ 0x14078FA44 (MiProtectSharedUserPage.c)
 *     MmFreeLoaderBlock @ 0x140791ED4 (MmFreeLoaderBlock.c)
 *     MiReloadBootLoadedDrivers @ 0x1407A57F0 (MiReloadBootLoadedDrivers.c)
 *     MiInitializeTbFlushing @ 0x1407A6B10 (MiInitializeTbFlushing.c)
 *     MiReturnDriverLoadPages @ 0x1407D106C (MiReturnDriverLoadPages.c)
 * Callees:
 *     KxFlushNonGlobalTb @ 0x140030810 (KxFlushNonGlobalTb.c)
 *     KeQueryActiveProcessorCountEx @ 0x1400D1ED0 (KeQueryActiveProcessorCountEx.c)
 *     KiFlushRangeWorker @ 0x1400DE860 (KiFlushRangeWorker.c)
 *     KiIpiSendRequest @ 0x1400DE980 (KiIpiSendRequest.c)
 *     KiFlushViaHypervisor @ 0x1400DEEC0 (KiFlushViaHypervisor.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x14012FD08 (KeFlushMultipleRangeCurrentTb.c)
 *     KxFlushEntireTb @ 0x14013D56C (KxFlushEntireTb.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     HvlNotifyLongSpinWait @ 0x1401BAD4C (HvlNotifyLongSpinWait.c)
 *     HvlFlushRangeListTb @ 0x1401C13D4 (HvlFlushRangeListTb.c)
 *     VslFlushSecureAddressSpace @ 0x1401C28B8 (VslFlushSecureAddressSpace.c)
 *     KeFlushCurrentTbOnly @ 0x1401D5EF0 (KeFlushCurrentTbOnly.c)
 *     KiFlushAddressSpaceTb @ 0x1401D6000 (KiFlushAddressSpaceTb.c)
 *     KiPrepareFlushParameters @ 0x1401D6060 (KiPrepareFlushParameters.c)
 *     VmFlushTb @ 0x140223B0C (VmFlushTb.c)
 *     ExFlushTb @ 0x14022E938 (ExFlushTb.c)
 */

void __fastcall MiFlushTbList(__int64 a1, _KPROCESS *Process, __int64 a3, __int64 a4)
{
  unsigned int v4; // r15d
  __int64 v6; // rcx
  unsigned __int64 v7; // r8
  unsigned int v8; // edi
  unsigned int v9; // ebx
  unsigned __int8 v10; // si
  volatile _KAFFINITY_EX *p_ActiveProcessors; // rdx
  unsigned int v12; // r12d
  struct _KPRCB *CurrentPrcb; // rsi
  _KTHREAD *CurrentThread; // rax
  volatile _KAFFINITY_EX *v15; // rdx
  unsigned __int16 Count; // r8
  _WORD *v17; // r11
  unsigned int v18; // r9d
  __int64 v19; // rcx
  int v20; // r10d
  unsigned __int16 v21; // dx
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // rcx
  unsigned int v24; // ebx
  unsigned __int8 CurrentIrql; // bl
  __int64 v26; // r9
  __int64 v27; // rdx
  unsigned __int8 v28; // bl
  signed __int32 v29[8]; // [rsp+0h] [rbp-148h] BYREF
  unsigned __int8 v30; // [rsp+30h] [rbp-118h] BYREF
  char v31[7]; // [rsp+31h] [rbp-117h] BYREF
  __int64 v32; // [rsp+38h] [rbp-110h] BYREF
  __int64 v33; // [rsp+40h] [rbp-108h] BYREF
  unsigned int v34; // [rsp+48h] [rbp-100h]
  unsigned int v35; // [rsp+4Ch] [rbp-FCh]
  __int64 v36; // [rsp+50h] [rbp-F8h]
  __int64 v37; // [rsp+58h] [rbp-F0h] BYREF
  _WORD v38[2]; // [rsp+60h] [rbp-E8h] BYREF
  int v39; // [rsp+64h] [rbp-E4h]
  _QWORD v40[21]; // [rsp+68h] [rbp-E0h] BYREF

  v4 = *(_DWORD *)(a1 + 12);
  if ( v4 )
  {
    v6 = *(unsigned __int8 *)(a1 + 4);
    v7 = qword_140326A58;
    if ( (v6 & 2) != 0 )
      goto LABEL_7;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( !Process[2].ActiveProcessors.Bitmap[14] )
    {
      if ( !Process->SecurePid )
        goto LABEL_7;
      v8 = *(_DWORD *)a1;
      if ( *(_DWORD *)a1 != 1 )
        goto LABEL_9;
    }
    v7 = -1LL;
LABEL_7:
    v8 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 == 1 )
    {
      v9 = 0;
LABEL_10:
      if ( !*(_BYTE *)(a1 + 5) && *(_QWORD *)(a1 + 16) <= v7 )
      {
        if ( (v6 & 1) != 0 )
        {
          KeFlushMultipleRangeCurrentTb(v4, a1 + 24, v8);
LABEL_75:
          *(_BYTE *)(a1 + 4) &= ~4u;
          *(_DWORD *)(a1 + 12) = 0;
          *(_QWORD *)(a1 + 16) = 0LL;
          return;
        }
        if ( v8 == 1 && KeGetCurrentThread()->ApcState.Process->SecurePid )
        {
          v10 = 1;
          goto LABEL_20;
        }
        v10 = 0;
        if ( (HvlEnlightenments & 6) != 0
          && ((HvlEnlightenments & 2) != 0 || KeQueryActiveProcessorCountEx(0xFFFFu) > 1) )
        {
LABEL_20:
          KiPrepareFlushParameters(v8, &v32, &v30, a4);
          if ( v9 )
            p_ActiveProcessors = 0LL;
          else
            p_ActiveProcessors = &KeGetCurrentThread()->ApcState.Process->ActiveProcessors;
          HvlFlushRangeListTb(v32, p_ActiveProcessors, v30, v10, v4, a1 + 24);
LABEL_51:
          if ( VmTbFlushEnabled )
            VmFlushTb(v4, a1 + 24);
          if ( ExTbFlushActive )
          {
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(0xFuLL);
            ExFlushTb(v4, a1 + 24, v8);
            __writecr8(CurrentIrql);
          }
          goto LABEL_75;
        }
        v12 = 4;
        v33 = a1 + 24;
        v34 = v4;
        if ( v9 == 1 )
          v12 = -2147483644;
        v35 = v8;
        v36 = KeGetCurrentIrql();
        __writecr8(0xCuLL);
        CurrentPrcb = KeGetCurrentPrcb();
        if ( v9 )
        {
          v20 = 1;
          LODWORD(v17) = 0;
          if ( (unsigned int)KeNumberProcessors_0 > 1 )
          {
LABEL_42:
            KiIpiSendRequest((_DWORD)CurrentPrcb, v20, (_DWORD)v17, (unsigned int)&v33, v4, v12);
            if ( KiFlushRangeWorker )
              KiFlushRangeWorker(&v33);
            v24 = 0;
            while ( CurrentPrcb->PacketBarrier )
            {
              if ( (++v24 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v24);
            }
            goto LABEL_50;
          }
        }
        else
        {
          _InterlockedOr(v29, 0);
          CurrentThread = CurrentPrcb->CurrentThread;
          v39 = 0;
          v15 = &CurrentThread->ApcState.Process->ActiveProcessors;
          Count = v15->Count;
          LOWORD(CurrentThread) = CurrentThread->ApcState.Process->ActiveProcessors.Size;
          v38[0] = Count;
          v38[1] = (_WORD)CurrentThread;
          if ( Count )
          {
            memmove(v40, v15->Bitmap, 8LL * Count);
            Count = v38[0];
          }
          v17 = v38;
          v18 = KiProcessorIndexToNumberMappingTable[CurrentPrcb->Number];
          v19 = v18 >> 6;
          if ( Count > (unsigned int)v19 )
          {
            v40[v19] &= ~(1LL << (v18 & 0x3F));
            Count = v38[0];
          }
          v20 = 0;
          v21 = 0;
          if ( Count )
          {
            v32 = 0x5555555555555555LL;
            do
            {
              v22 = v40[v21];
              v23 = (0x101010101010101LL
                   * ((((v22 - (v32 & (v22 >> 1))) & 0x3333333333333333LL)
                     + (((v22 - (v32 & (v22 >> 1))) >> 2) & 0x3333333333333333LL)
                     + ((((v22 - (v32 & (v22 >> 1))) & 0x3333333333333333LL)
                       + (((v22 - (v32 & (v22 >> 1))) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
              if ( (unsigned __int8)v23 > 1u
                || (_BYTE)v23 == 1 && (CurrentPrcb->Group != v21 || (v22 & CurrentPrcb->GroupSetMember) == 0) )
              {
                goto LABEL_42;
              }
            }
            while ( ++v21 < Count );
          }
        }
        if ( KiFlushRangeWorker )
          KiFlushRangeWorker(&v33);
LABEL_50:
        __writecr8((unsigned __int8)v36);
        goto LABEL_51;
      }
      if ( (v6 & 1) != 0 )
      {
        KeFlushCurrentTbOnly(v8, Process, v7, a4);
LABEL_74:
        *(_BYTE *)(a1 + 5) = 0;
        goto LABEL_75;
      }
      if ( (unsigned int)KiFlushViaHypervisor(v6, Process, v7) )
      {
        KiPrepareFlushParameters(v8, &v37, v31, v26);
        LOBYTE(v27) = 1;
        KiFlushAddressSpaceTb(v37, v27, (unsigned __int8)v31[0], v8 - 1 > 1);
        goto LABEL_67;
      }
      if ( KiKvaShadow )
      {
        if ( !v8 || v8 == 2 )
        {
LABEL_65:
          KxFlushNonGlobalTb(v9);
          goto LABEL_67;
        }
      }
      else if ( v8 && (int)v8 <= 2 )
      {
        goto LABEL_65;
      }
      KxFlushEntireTb(v9);
LABEL_67:
      if ( v8 == 1 && KeGetCurrentThread()->ApcState.Process->SecurePid )
        VslFlushSecureAddressSpace();
      if ( VmTbFlushEnabled )
        VmFlushTb(0LL, 0LL);
      if ( ExTbFlushActive )
      {
        v28 = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        ExFlushTb(0LL, 0LL, v8);
        __writecr8(v28);
      }
      goto LABEL_74;
    }
LABEL_9:
    v9 = ((v6 & 4) != 0) + 1;
    goto LABEL_10;
  }
}
