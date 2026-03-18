/*
 * XREFs of MiInsertPageInFreeOrZeroedList @ 0x14003F0B0
 * Callers:
 *     MiReleaseFreshPageLocked @ 0x140007B44 (MiReleaseFreshPageLocked.c)
 *     MiDeleteSegmentPages @ 0x14000BB90 (MiDeleteSegmentPages.c)
 *     MiDeleteLockedTransitionPte @ 0x140010C30 (MiDeleteLockedTransitionPte.c)
 *     MiPfnReferenceCountIsZero @ 0x1400115F0 (MiPfnReferenceCountIsZero.c)
 *     MiFreePageFileHashPfns @ 0x1400135E8 (MiFreePageFileHashPfns.c)
 *     MiRelinkStandbyPage @ 0x140014990 (MiRelinkStandbyPage.c)
 *     MiInsertLargePageInFreeOrZeroList @ 0x140019D90 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiDeleteSystemPagableVm @ 0x14003C140 (MiDeleteSystemPagableVm.c)
 *     MiDeleteBatch @ 0x14003D3A0 (MiDeleteBatch.c)
 *     MiDeletePteRun @ 0x14004FE20 (MiDeletePteRun.c)
 *     MiDeletePteList @ 0x140060900 (MiDeletePteList.c)
 *     MiValidateImagePages @ 0x140064AE0 (MiValidateImagePages.c)
 *     MiWriteCompletePfn @ 0x1400673F0 (MiWriteCompletePfn.c)
 *     MiPfnShareCountIsZero @ 0x14006A920 (MiPfnShareCountIsZero.c)
 *     MiFreeWsleList @ 0x14006C330 (MiFreeWsleList.c)
 *     MiClaimPhysicalRun @ 0x1400720B0 (MiClaimPhysicalRun.c)
 *     MiMigratePfn @ 0x140073740 (MiMigratePfn.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1400A0890 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiFreeLargePageMemory @ 0x1400BDF60 (MiFreeLargePageMemory.c)
 *     MiDrainZeroLookasides @ 0x1400C05E0 (MiDrainZeroLookasides.c)
 *     MiReturnPhysicalPoolPages @ 0x1400D6950 (MiReturnPhysicalPoolPages.c)
 *     MiPrivateFixup @ 0x1400FEA08 (MiPrivateFixup.c)
 *     MiMapPageFileHash @ 0x140108CF0 (MiMapPageFileHash.c)
 *     MiPurgeZeroList @ 0x14011224C (MiPurgeZeroList.c)
 *     MiPurgePartitionStandby @ 0x14011236C (MiPurgePartitionStandby.c)
 *     MiDiscardTransitionPte @ 0x140117148 (MiDiscardTransitionPte.c)
 *     MiZeroPageThread @ 0x1401307A0 (MiZeroPageThread.c)
 *     MiLockAndInsertPageInFreeList @ 0x140131B78 (MiLockAndInsertPageInFreeList.c)
 *     MiReturnPfnList @ 0x140132B4C (MiReturnPfnList.c)
 *     MiPurgeSubsection @ 0x1401D1590 (MiPurgeSubsection.c)
 *     MiMoveEccPagesToFreeList @ 0x1401D1CFC (MiMoveEccPagesToFreeList.c)
 *     MiPurgeImageSection @ 0x1401D8B68 (MiPurgeImageSection.c)
 *     MiReturnPartitionPagesToParent @ 0x1401D98E4 (MiReturnPartitionPagesToParent.c)
 *     MiDeleteEnclavePage @ 0x1401DFA64 (MiDeleteEnclavePage.c)
 *     MiReturnEnclavePage @ 0x1401DFE5C (MiReturnEnclavePage.c)
 *     MiScrubNodeLargePageList @ 0x1401E197C (MiScrubNodeLargePageList.c)
 *     MiRebalanceZeroFreeLists @ 0x1401E424C (MiRebalanceZeroFreeLists.c)
 *     MiScrubNode @ 0x1401E5DEC (MiScrubNode.c)
 *     MxCreateFreePfns @ 0x140746A50 (MxCreateFreePfns.c)
 *     MiComputeOptimalZeroPath @ 0x14074D98C (MiComputeOptimalZeroPath.c)
 *     MiCreateEnclaveRegions @ 0x14074DEE8 (MiCreateEnclaveRegions.c)
 * Callees:
 *     MiInsertPageInList @ 0x14003DC20 (MiInsertPageInList.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     MiGetPagePrivilege @ 0x140070730 (MiGetPagePrivilege.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400A99A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400A9AE0 (MiMapPageInHyperSpaceWorker.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400B1BD0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x1400B1C70 (KxWaitForLockOwnerShip.c)
 *     MiClearPfnImageVerified @ 0x1400B5370 (MiClearPfnImageVerified.c)
 *     MiUpdateAvailableEvents @ 0x140133178 (MiUpdateAvailableEvents.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KeCheckForZeroPage @ 0x1401573D0 (KeCheckForZeroPage.c)
 *     RtlpInterlockedPushEntrySList @ 0x14015B9A0 (RtlpInterlockedPushEntrySList.c)
 *     KeSetPagePrivilege @ 0x1401C3384 (KeSetPagePrivilege.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401C4828 (KiAcquireQueuedSpinLockInstrumented.c)
 *     MiPageNotZero @ 0x1401DFFEC (MiPageNotZero.c)
 *     MiClearFileOnlyPfn @ 0x1401E3318 (MiClearFileOnlyPfn.c)
 */

void __fastcall MiInsertPageInFreeOrZeroedList(ULONG_PTR BugCheckParameter2, unsigned __int64 a2)
{
  __int64 v2; // rbx
  ULONG_PTR v3; // r14
  char v4; // di
  __int64 v5; // r8
  __int64 v6; // rax
  unsigned __int16 v7; // ax
  int *v8; // rsi
  int v9; // ebp
  __int64 v10; // rcx
  char v11; // r9
  unsigned __int64 v12; // r10
  __int64 v13; // rcx
  __int64 v14; // r13
  __int64 v15; // r8
  unsigned int v16; // ecx
  __int64 v17; // r15
  __int64 v18; // r11
  unsigned __int64 v19; // rbp
  unsigned __int64 v20; // rbp
  __int64 v21; // rbp
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rdx
  volatile signed __int64 *v25; // rax
  unsigned __int64 v26; // r12
  __int64 v27; // r8
  __int64 v28; // r9
  char v29; // cl
  __int64 v30; // r9
  __int16 j; // r10
  __int64 v32; // rdx
  unsigned int v33; // eax
  __int64 v34; // rbp
  __int16 i; // di
  int v36; // eax
  __int64 v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  ULONG_PTR v41; // rbp
  char v42; // al
  signed __int32 v43[8]; // [rsp+0h] [rbp-C8h] BYREF
  int v44; // [rsp+30h] [rbp-98h]
  __int64 v45; // [rsp+38h] [rbp-90h] BYREF
  int *v46; // [rsp+40h] [rbp-88h]
  int *v47; // [rsp+50h] [rbp-78h]
  unsigned __int64 v48; // [rsp+58h] [rbp-70h]
  _BYTE v49[16]; // [rsp+60h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int8 v52; // [rsp+E0h] [rbp+18h] BYREF
  int v53; // [rsp+E8h] [rbp+20h]

  v2 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v3 = BugCheckParameter2;
  v4 = a2;
  v5 = *(_QWORD *)(v2 + 24);
  v6 = *(_QWORD *)(v2 + 40);
  if ( (v5 & 0x4000000000000000LL) == 0 )
  {
    if ( (v6 & 0x10000000000000LL) == 0 )
      goto LABEL_3;
LABEL_71:
    MiClearPfnImageVerified(v2, 12LL);
    MiClearFileOnlyPfn(v2);
    return;
  }
  if ( (v6 & 0x10000000000000LL) != 0 )
    goto LABEL_71;
LABEL_3:
  v7 = (HIDWORD(v6) >> 8) & 0x3FF;
  *(_QWORD *)(v2 + 24) = v5 & 0xBFFFFFFFFFFFFFFFuLL;
  if ( v7 == 1023 )
    v8 = &MiSystemPartition;
  else
    v8 = *(int **)(qword_1402FEC28 + 8LL * v7);
  if ( (a2 & 1) != 0 )
  {
    v47 = v8 + 416;
    if ( (MiFlags & 0x80u) != 0
      && BugCheckParameter2 < 0x200000
      && (*(_BYTE *)(48 * BugCheckParameter2 - 0x57FFFFFFFDDLL) & 0x40) == 0
      && (++dword_1402FED50 & MmPageValidationFrequency) == 0 )
    {
      if ( KeGetCurrentPrcb()->HyperPte )
      {
        v41 = MiMapPageInHyperSpaceWorker(BugCheckParameter2, &v52, 0x80000000LL);
        if ( KeCheckForZeroPage(v41) )
          MiPageNotZero(v41, v3);
        MiUnmapPageInHyperSpaceWorker(v41, v52, 0x80000000LL);
      }
    }
    v9 = 0;
    v44 = 0;
  }
  else
  {
    if ( (a2 & 0x100) != 0 )
    {
      v42 = *(_BYTE *)(v2 + 34);
      *(_BYTE *)(v2 + 35) |= 0x10u;
      *(_BYTE *)(v2 + 34) = v42 & 0xF8 | 5;
      MiInsertPageInList(v2, 0x100u);
      return;
    }
    v44 = 1;
    v47 = v8 + 432;
    v9 = 1;
  }
  if ( ((*(_QWORD *)(v2 + 40) >> 54) & 7) == 3 )
  {
    if ( (unsigned int)MiGetPagePrivilege(v2, 1LL, v49)
      && (int)KeSetPagePrivilege((v2 + 0x58000000000LL) / 48, v49, 16LL) < 0 )
    {
      KeBugCheckEx(0x1Au, 0x5150BuLL, (v2 + 0x58000000000LL) / 48, 0LL, 0LL);
    }
    *(_QWORD *)(v2 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
  }
  _InterlockedOr(v43, 0);
  v10 = (unsigned int)KiTbFlushTimeStamp;
  *(_BYTE *)(v2 + 35) &= 0xF8u;
  *(_QWORD *)(v2 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
  v11 = *(_BYTE *)(v2 + 35);
  v12 = *(_QWORD *)(v2 + 40);
  v13 = (*(_QWORD *)(v2 + 24) ^ (v10 << 56)) & 0xF00000000000000LL;
  *(_QWORD *)(v2 + 8) |= 0x8000000000000000uLL;
  *(_QWORD *)(v2 + 24) ^= v13;
  if ( (v11 & 0x40) != 0 )
  {
    MiInsertPageInList(v2, 0x20u);
    return;
  }
  v48 = dword_1402FE708 & (unsigned int)v3 | (((v12 >> 36) & 3) << byte_1402FE6E8) | ((unsigned __int8)((v12 >> 58) & 0x3F) << byte_1402FE6D9);
  v14 = *((_QWORD *)v8 + 5) + 1336 * (v48 >> byte_1402FE6D9);
  v15 = 0LL;
  v16 = (unsigned __int8)(MiChannelMaximumPowerOf2Mask & ((dword_1402FE708 & (unsigned int)v3 | (((v12 >> 36) & 3) << byte_1402FE6E8) | ((unsigned __int8)((v12 >> 58) & 0x3F) << byte_1402FE6D9)) >> byte_1402FE6E8));
  v17 = (unsigned int)v48;
  v18 = *((_QWORD *)v8 + 203);
  if ( (v4 & 0x40) == 0 )
  {
    if ( v9 == 1 )
    {
      if ( *(unsigned __int16 *)(v18 + 16LL * (unsigned int)v48) < v8[1287] )
      {
        v33 = MmNumberOfChannels;
        a2 = 0LL;
        v34 = 0LL;
        v53 = MmNumberOfChannels;
        for ( i = 1024; ; i |= 2u )
        {
          if ( v33 > 1 )
          {
            v33 = v53;
            a2 += *(_QWORD *)(v14
                            + 8
                            * (v34
                             + 2LL
                             * (unsigned __int8)(MiChannelMaximumPowerOf2Mask & ((dword_1402FE708 & (unsigned int)v3 | (((v12 >> 36) & 3) << byte_1402FE6E8) | ((unsigned __int8)((v12 >> 58) & 0x3F) << byte_1402FE6D9)) >> byte_1402FE6E8))
                             + 154));
          }
          else
          {
            a2 += *(_QWORD *)(v14 + 8 * v34 + 1168);
          }
          if ( (i & 0x400) != 0 )
          {
            a2 += (*(_QWORD *)(v14 + 8 * (v16 + 4 * v34) + 272) + *(_QWORD *)(v14 + 8 * (v16 + 4 * v34) + 336)) << 9;
            v33 = v53;
          }
          if ( (i & 2) != 0 )
            break;
          v34 = 1LL;
        }
        v3 = BugCheckParameter2;
        if ( a2 > 0x40 )
          v15 = 1LL;
      }
      *(_BYTE *)(v2 + 34) &= 0xC7u;
      *(_QWORD *)(v2 + 40) = v12 & 0xFDFFFFFFFFFFFFFFuLL;
      *(_BYTE *)(v2 + 35) = v11 & 0xDF;
    }
    else
    {
      v18 = *((_QWORD *)v8 + 202);
      if ( *(unsigned __int16 *)(v18 + 16LL * (unsigned int)v48) < v8[1287] )
      {
        a2 = 0LL;
        v30 = 0LL;
        for ( j = 1026; ; j |= 2u )
        {
          if ( (unsigned int)MmNumberOfChannels > 1 )
            a2 += *(_QWORD *)(v14 + 8 * (v30 + 2 * (v16 + 77LL)));
          else
            a2 += *(_QWORD *)(v14 + 8 * v30 + 1168);
          if ( (j & 0x400) != 0 )
            a2 += (*(_QWORD *)(v14 + 8 * (v16 + 4 * v30) + 272) + *(_QWORD *)(v14 + 8 * (v16 + 4 * v30) + 336)) << 9;
          if ( (j & 2) != 0 )
            break;
          v30 = 1LL;
        }
        v3 = BugCheckParameter2;
        if ( a2 > 0x40 )
          v15 = 1LL;
      }
    }
  }
  if ( (_DWORD)v15 == 1 && *((_QWORD *)v8 + 736) >= 0x420uLL )
  {
    v29 = *(_BYTE *)(v2 + 34);
    if ( (v29 & 7) != 5 )
      *(_BYTE *)(v2 + 34) = v29 & 0xF8 | 5;
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)(v18 + 16 * v17), (PSLIST_ENTRY)v2);
    return;
  }
  v19 = _InterlockedIncrement64((volatile signed __int64 *)v8 + 736);
  if ( v19 <= 0x420 )
  {
    switch ( v19 )
    {
      case 0xA0uLL:
        v36 = 1;
        break;
      case 0x420uLL:
        v36 = 2;
        break;
      case 0x22uLL:
        v36 = 0;
        break;
      default:
        goto LABEL_16;
    }
    v37 = 8LL * v36;
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v8 + 528, &LockHandle);
    KeSetEvent((PRKEVENT)&v8[v37 + 1058], 0, 0);
    ++v8[v37 + 1064];
    KxReleaseQueuedSpinLock(&LockHandle, v38, v39, v40);
  }
LABEL_16:
  v20 = v19 - 1;
  if ( v20 == *((_QWORD *)v8 + 541) || v20 == *((_QWORD *)v8 + 542) )
    MiUpdateAvailableEvents(v8, a2, v15);
  v21 = v44;
  _InterlockedIncrement64((volatile signed __int64 *)(v14 + 8LL * v44 + 1168));
  if ( (unsigned int)MmNumberOfChannels > 1 )
    _InterlockedIncrement64((volatile signed __int64 *)(v14
                                                      + 8
                                                      * (v21
                                                       + 2LL
                                                       * (unsigned __int8)(MiChannelMaximumPowerOf2Mask & ((unsigned int)v48 >> byte_1402FE6E8)))
                                                      + 1232));
  v22 = *(_QWORD *)&v8[2 * v21 + 400];
  v45 = 0LL;
  v23 = v22 + 40 * v17;
  v46 = (int *)(v23 + 32);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v45);
  }
  else
  {
    v24 = _InterlockedExchange64((volatile __int64 *)(v23 + 32), (__int64)&v45);
    if ( v24 )
      KxWaitForLockOwnerShip(&v45);
  }
  *(_BYTE *)(v2 + 34) ^= (*(_BYTE *)(v2 + 34) ^ v21) & 7;
  if ( *(_QWORD *)(v23 + 16) == 0xFFFFFFFFFLL )
  {
    *(_QWORD *)(v2 + 24) |= 0xFFFFFFFFFuLL;
    *(_QWORD *)(v23 + 16) = v3;
  }
  else
  {
    v15 = 48LL * *(_QWORD *)(v23 + 24) - 0x58000000000LL;
    v24 = (*(_QWORD *)(v2 + 24) ^ (48LL * *(_QWORD *)(v23 + 24) / 48)) & 0xFFFFFFFFFLL;
    *(_QWORD *)(v2 + 24) ^= v24;
    *(_QWORD *)v15 ^= (v3 ^ *(_QWORD *)v15) & 0xFFFFFFFFFLL;
  }
  ++*(_QWORD *)v23;
  v25 = (volatile signed __int64 *)v47;
  *(_QWORD *)(v23 + 24) = v3;
  *(_QWORD *)v2 |= 0xFFFFFFFFFuLL;
  v26 = _InterlockedIncrement64(v25);
  KxReleaseQueuedSpinLock(&v45, v24, v15, 0xFFFFFFFFFLL);
  if ( !*((_BYTE *)v8 + 5144) && (_DWORD)v21 == 1 && v26 >= 8 && *((_QWORD *)v8 + 736) >= 0xA0uLL )
  {
    v46 = v8 + 1056;
    v45 = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v45);
    }
    else
    {
      v32 = _InterlockedExchange64((volatile __int64 *)v8 + 528, (__int64)&v45);
      if ( v32 )
        KxWaitForLockOwnerShip(&v45);
    }
    if ( !*((_BYTE *)v8 + 5144) )
    {
      *((_BYTE *)v8 + 5144) = 1;
      KeSetEvent((PRKEVENT)(v8 + 1280), 0, 0);
    }
    KxReleaseQueuedSpinLock(&v45, v32, v27, v28);
  }
}
