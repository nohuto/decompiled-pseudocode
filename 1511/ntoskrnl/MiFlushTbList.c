/*
 * XREFs of MiFlushTbList @ 0x14005D650
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x140008834 (MiTrimSharedPageFromViews.c)
 *     MiFlushHyperSpace @ 0x140010528 (MiFlushHyperSpace.c)
 *     MiReplenishBitMap @ 0x140013C80 (MiReplenishBitMap.c)
 *     MiReturnSystemVa @ 0x140015490 (MiReturnSystemVa.c)
 *     MiFlushTbListEarly @ 0x140015ED0 (MiFlushTbListEarly.c)
 *     MiInitializeSystemPageTable @ 0x140017F70 (MiInitializeSystemPageTable.c)
 *     MiSetPagingOfDriver @ 0x14001A3D0 (MiSetPagingOfDriver.c)
 *     MiWalkVaRange @ 0x14001C524 (MiWalkVaRange.c)
 *     MiCloneVads @ 0x14001D7C8 (MiCloneVads.c)
 *     MiBuildForkPte @ 0x14001DDD8 (MiBuildForkPte.c)
 *     MiDeleteSystemPagableVm @ 0x14003C140 (MiDeleteSystemPagableVm.c)
 *     MiDeleteVirtualAddresses @ 0x140057CB0 (MiDeleteVirtualAddresses.c)
 *     MiAgeWorkingSet @ 0x140058F90 (MiAgeWorkingSet.c)
 *     MiSetProtectionOnSection @ 0x14005BC70 (MiSetProtectionOnSection.c)
 *     MiMoveDirtyBitsToPfns @ 0x14005E3A0 (MiMoveDirtyBitsToPfns.c)
 *     MiGetNextPageTable @ 0x14005F080 (MiGetNextPageTable.c)
 *     MiAllocatePagedPoolPages @ 0x14005F630 (MiAllocatePagedPoolPages.c)
 *     MiDeletePteList @ 0x140060900 (MiDeletePteList.c)
 *     MiProtectPrivateMemory @ 0x1400614B0 (MiProtectPrivateMemory.c)
 *     MiFlushTbAsNeeded @ 0x140061B60 (MiFlushTbAsNeeded.c)
 *     MiReleasePtes @ 0x1400680A0 (MiReleasePtes.c)
 *     MiFreeWsleList @ 0x14006C330 (MiFreeWsleList.c)
 *     MiDeletePageTableHierarchy @ 0x14006D570 (MiDeletePageTableHierarchy.c)
 *     MiCopyOnWriteEx @ 0x14006EE60 (MiCopyOnWriteEx.c)
 *     MiCopyPage @ 0x1400701E0 (MiCopyPage.c)
 *     MiFlushDirtyBitsToPfn @ 0x140098664 (MiFlushDirtyBitsToPfn.c)
 *     MiDeletePteRange @ 0x1400A1370 (MiDeletePteRange.c)
 *     MiStealPage @ 0x1400ABC50 (MiStealPage.c)
 *     MmMapViewInSystemCache @ 0x1400B0E10 (MmMapViewInSystemCache.c)
 *     MiObtainSystemCacheView @ 0x1400B1590 (MiObtainSystemCacheView.c)
 *     NtGetWriteWatch @ 0x1400B66D0 (NtGetWriteWatch.c)
 *     MiRemoveMappedPtes @ 0x1400B6D00 (MiRemoveMappedPtes.c)
 *     MiLockCode @ 0x1400B7B30 (MiLockCode.c)
 *     MiMakeSystemAddressValid @ 0x1400B82F0 (MiMakeSystemAddressValid.c)
 *     MiSetSystemCodeProtection @ 0x1400B8D54 (MiSetSystemCodeProtection.c)
 *     MiDeletePagablePteRange @ 0x1400BACF0 (MiDeletePagablePteRange.c)
 *     MiSetReadOnlyOnSectionView @ 0x1400BB050 (MiSetReadOnlyOnSectionView.c)
 *     MmRemoveExecuteGrants @ 0x1400BB4A8 (MmRemoveExecuteGrants.c)
 *     MiMakeDriverPagesPrivate @ 0x1400BDAC8 (MiMakeDriverPagesPrivate.c)
 *     MiZeroAndFlushPtes @ 0x1400C097C (MiZeroAndFlushPtes.c)
 *     MiClearNonPagedPtes @ 0x1400D2B70 (MiClearNonPagedPtes.c)
 *     MiReplacePageTablePage @ 0x1400D98A0 (MiReplacePageTablePage.c)
 *     MiReplaceWorkingSetEntryLarge @ 0x1400E42B4 (MiReplaceWorkingSetEntryLarge.c)
 *     MiReleaseZeroingVa @ 0x1400E4ABC (MiReleaseZeroingVa.c)
 *     MmProtectMdlSystemAddress @ 0x1400E5CC4 (MmProtectMdlSystemAddress.c)
 *     KiOutSwapKernelStacks @ 0x1400E8164 (KiOutSwapKernelStacks.c)
 *     MiSimpleAging @ 0x1400EB918 (MiSimpleAging.c)
 *     MmSetPageProtection @ 0x1400EBB14 (MmSetPageProtection.c)
 *     MiGetPteFromCopyList @ 0x1400FE324 (MiGetPteFromCopyList.c)
 *     MiReplaceRotateWithDemandZero @ 0x140102EA0 (MiReplaceRotateWithDemandZero.c)
 *     MiDeletePhysmemVad @ 0x1401061CC (MiDeletePhysmemVad.c)
 *     MiDeleteSessionAddressSpace @ 0x140114000 (MiDeleteSessionAddressSpace.c)
 *     MiDeleteSessionPdes @ 0x140116E90 (MiDeleteSessionPdes.c)
 *     MmMapMemoryDumpMdlEx @ 0x1401198BC (MmMapMemoryDumpMdlEx.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x14011AB80 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiSharePages @ 0x140128D20 (MiSharePages.c)
 *     MiZeroPageThread @ 0x1401307A0 (MiZeroPageThread.c)
 *     MiPfnRangeIsZero @ 0x140132700 (MiPfnRangeIsZero.c)
 *     MmUnmapReservedMapping @ 0x1401D3934 (MmUnmapReservedMapping.c)
 *     MiSwitchToTransition @ 0x1401D6E6C (MiSwitchToTransition.c)
 *     MiJoinBitmapPages @ 0x1401DA568 (MiJoinBitmapPages.c)
 *     MmFreeSpecialPool @ 0x1401DB2D8 (MmFreeSpecialPool.c)
 *     MiLargePageFault @ 0x1401DED84 (MiLargePageFault.c)
 *     MiDeletePageTablesForPhysicalRange @ 0x1401DF250 (MiDeletePageTablesForPhysicalRange.c)
 *     MiUnmapLargeUserPages @ 0x1401E27F0 (MiUnmapLargeUserPages.c)
 *     MiHandleForkTransitionPte @ 0x1401E4E64 (MiHandleForkTransitionPte.c)
 *     MiScrubLargeMappedPage @ 0x1401E5BA4 (MiScrubLargeMappedPage.c)
 *     MiInitializeDynamicBitmap @ 0x1404FF1D8 (MiInitializeDynamicBitmap.c)
 *     MmUnmapLockedRestartPages @ 0x140620ED4 (MmUnmapLockedRestartPages.c)
 *     MmDeleteShadowMapping @ 0x140626638 (MmDeleteShadowMapping.c)
 *     MiProtectAweRegion @ 0x140626D90 (MiProtectAweRegion.c)
 *     MiRemoveUserPhysicalPagesVad @ 0x140626F34 (MiRemoveUserPhysicalPagesVad.c)
 *     NtMapUserPhysicalPages @ 0x140627FF0 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x140628474 (NtMapUserPhysicalPagesScatter.c)
 *     MiDeleteEnclavePages @ 0x140629B8C (MiDeleteEnclavePages.c)
 *     MiProtectEnclavePages @ 0x140629E98 (MiProtectEnclavePages.c)
 *     MiEliminatePageTablesOfOnes @ 0x14074A504 (MiEliminatePageTablesOfOnes.c)
 *     MiReloadBootLoadedDrivers @ 0x14074AF5C (MiReloadBootLoadedDrivers.c)
 *     MiInitializeTbFlushing @ 0x14074C190 (MiInitializeTbFlushing.c)
 *     MmFreeLoaderBlock @ 0x14074E52C (MmFreeLoaderBlock.c)
 *     MiMarkBootKernelStack @ 0x140763814 (MiMarkBootKernelStack.c)
 *     MiProtectSharedUserPage @ 0x140771744 (MiProtectSharedUserPage.c)
 *     MiReturnDriverLoadPages @ 0x140784C40 (MiReturnDriverLoadPages.c)
 * Callees:
 *     KiFlushViaHypervisor @ 0x1400079D0 (KiFlushViaHypervisor.c)
 *     KxFlushEntireTb @ 0x140007A1C (KxFlushEntireTb.c)
 *     KiFlushRangeWorker @ 0x14005DB90 (KiFlushRangeWorker.c)
 *     KiIpiSendRequest @ 0x14005DCC0 (KiIpiSendRequest.c)
 *     KxFlushNonGlobalTb @ 0x14007C310 (KxFlushNonGlobalTb.c)
 *     KeQueryActiveProcessorCountEx @ 0x14009DBD0 (KeQueryActiveProcessorCountEx.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x14011F758 (KeFlushMultipleRangeCurrentTb.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     HvlNotifyLongSpinWait @ 0x1401AE950 (HvlNotifyLongSpinWait.c)
 *     KeFlushCurrentTbOnly @ 0x1401C6F54 (KeFlushCurrentTbOnly.c)
 *     KiFlushAddressSpaceTb @ 0x1401C7210 (KiFlushAddressSpaceTb.c)
 *     KiPrepareFlushParameters @ 0x1401C7288 (KiPrepareFlushParameters.c)
 *     VmFlushTb @ 0x14020C224 (VmFlushTb.c)
 *     ExFlushTb @ 0x140214D10 (ExFlushTb.c)
 *     HvlFlushRangeListTb @ 0x1402214A4 (HvlFlushRangeListTb.c)
 */

void __fastcall MiFlushTbList(__int64 a1, _KPROCESS *Process)
{
  unsigned int v2; // ebp
  char v4; // cl
  unsigned __int64 v5; // r8
  int v6; // r15d
  unsigned int v7; // edi
  unsigned int v8; // ebx
  unsigned __int8 v9; // si
  volatile _KAFFINITY_EX *v10; // r11
  volatile _KAFFINITY_EX *p_ActiveProcessors; // rdx
  unsigned int v12; // r13d
  struct _KPRCB *CurrentPrcb; // rsi
  _KTHREAD *CurrentThread; // rax
  volatile _KAFFINITY_EX *v15; // rdx
  unsigned __int16 Count; // r8
  _WORD *v17; // r10
  unsigned int v18; // r9d
  __int64 v19; // rcx
  unsigned __int16 v20; // dx
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rcx
  unsigned __int8 CurrentIrql; // bl
  __int64 v24; // rdx
  __int64 v25; // r8
  unsigned int v26; // ebx
  bool v27; // si
  unsigned __int8 v28; // bl
  signed __int32 v29[8]; // [rsp+0h] [rbp-148h] BYREF
  unsigned __int8 v30; // [rsp+30h] [rbp-118h] BYREF
  char v31[7]; // [rsp+31h] [rbp-117h] BYREF
  __int64 v32; // [rsp+38h] [rbp-110h] BYREF
  unsigned int v33; // [rsp+40h] [rbp-108h]
  unsigned int v34; // [rsp+44h] [rbp-104h]
  __int64 v35; // [rsp+48h] [rbp-100h]
  __int64 v36; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v37; // [rsp+58h] [rbp-F0h] BYREF
  _WORD v38[2]; // [rsp+60h] [rbp-E8h] BYREF
  int v39; // [rsp+64h] [rbp-E4h]
  _QWORD v40[21]; // [rsp+68h] [rbp-E0h] BYREF

  v2 = *(_DWORD *)(a1 + 12);
  if ( v2 )
  {
    v4 = *(_BYTE *)(a1 + 4);
    v5 = qword_1402FE720;
    v6 = 1;
    if ( (v4 & 2) != 0 )
      goto LABEL_7;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( !Process[2].ActiveProcessors.Bitmap[12] )
    {
      if ( !Process->SecurePid )
        goto LABEL_7;
      v7 = *(_DWORD *)a1;
      if ( *(_DWORD *)a1 != 1 )
        goto LABEL_8;
    }
    v5 = -1LL;
LABEL_7:
    v7 = *(_DWORD *)a1;
    v8 = 0;
    if ( *(_DWORD *)a1 == 1 )
    {
LABEL_9:
      if ( !*(_BYTE *)(a1 + 5) && *(_QWORD *)(a1 + 16) <= v5 )
      {
        if ( (v4 & 1) != 0 )
        {
          KeFlushMultipleRangeCurrentTb(v2, a1 + 24, v7);
LABEL_75:
          *(_DWORD *)(a1 + 12) = 0;
          *(_QWORD *)(a1 + 16) = 0LL;
          return;
        }
        if ( v7 == 1 && KeGetCurrentThread()->ApcState.Process->SecurePid )
        {
          v9 = 1;
          goto LABEL_19;
        }
        v9 = 0;
        if ( (HvlEnlightenments & 6) != 0
          && ((HvlEnlightenments & 2) != 0 || KeQueryActiveProcessorCountEx(0xFFFFu) > 1) )
        {
LABEL_19:
          KiPrepareFlushParameters(v7, &v36, v31);
          if ( v8 )
            p_ActiveProcessors = v10;
          else
            p_ActiveProcessors = &KeGetCurrentThread()->ApcState.Process->ActiveProcessors;
          HvlFlushRangeListTb(v36, p_ActiveProcessors, (unsigned __int8)v31[0], v9, v2, a1 + 24);
LABEL_41:
          if ( VmTbFlushEnabled )
            VmFlushTb(v2, a1 + 24);
          if ( ExTbFlushActive )
          {
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(0xFuLL);
            ExFlushTb(v2, a1 + 24, v7);
            __writecr8(CurrentIrql);
          }
          goto LABEL_75;
        }
        v12 = 4;
        v32 = a1 + 24;
        v33 = v2;
        if ( v8 == 1 )
          v12 = -2147483644;
        v34 = v7;
        v35 = KeGetCurrentIrql();
        __writecr8(0xCuLL);
        CurrentPrcb = KeGetCurrentPrcb();
        if ( v8 )
        {
          LODWORD(v17) = 0;
          if ( (unsigned int)KeNumberProcessors_0 > 1 )
          {
LABEL_45:
            KiIpiSendRequest((_DWORD)CurrentPrcb, v6, (_DWORD)v17, (unsigned int)&v32, v2, v12);
            if ( KiFlushRangeWorker )
              KiFlushRangeWorker(&v32);
            v26 = 0;
            while ( CurrentPrcb->PacketBarrier )
            {
              if ( (++v26 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v26, v24, v25);
            }
            goto LABEL_40;
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
          v6 = 0;
          v20 = 0;
          if ( Count )
          {
            do
            {
              v21 = v40[v20];
              v22 = (0x101010101010101LL
                   * ((((v21 - ((v21 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                     + (((v21 - ((v21 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                     + ((((v21 - ((v21 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                       + (((v21 - ((v21 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
              if ( (unsigned __int8)v22 > 1u
                || (_BYTE)v22 == 1 && (CurrentPrcb->Group != v20 || (v21 & CurrentPrcb->GroupSetMember) == 0) )
              {
                goto LABEL_45;
              }
            }
            while ( ++v20 < Count );
          }
        }
        if ( KiFlushRangeWorker )
          KiFlushRangeWorker(&v32);
LABEL_40:
        __writecr8((unsigned __int8)v35);
        goto LABEL_41;
      }
      if ( (v4 & 1) != 0 )
      {
        KeFlushCurrentTbOnly(v7, Process, v5);
LABEL_74:
        *(_BYTE *)(a1 + 5) = 0;
        goto LABEL_75;
      }
      v27 = v7 == 1 && KeGetCurrentThread()->ApcState.Process->SecurePid;
      if ( KiFlushViaHypervisor() )
      {
        KiPrepareFlushParameters(v7, &v37, &v30);
        KiFlushAddressSpaceTb(v37, 1, v30, v27, v7 - 1 > 1);
LABEL_70:
        if ( VmTbFlushEnabled )
          VmFlushTb(0LL, 0LL);
        if ( ExTbFlushActive )
        {
          v28 = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          ExFlushTb(0LL, 0LL, v7);
          __writecr8(v28);
        }
        goto LABEL_74;
      }
      if ( KiKvaShadow )
      {
        if ( !v7 || v7 == 2 )
        {
LABEL_68:
          KxFlushNonGlobalTb(v8);
          goto LABEL_70;
        }
      }
      else if ( v7 && (int)v7 <= 2 )
      {
        goto LABEL_68;
      }
      KxFlushEntireTb(v8);
      goto LABEL_70;
    }
LABEL_8:
    v8 = 1;
    goto LABEL_9;
  }
}
