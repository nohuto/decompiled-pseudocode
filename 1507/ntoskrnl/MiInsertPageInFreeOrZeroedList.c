/*
 * XREFs of MiInsertPageInFreeOrZeroedList @ 0x1400C80C0
 * Callers:
 *     MiRelinkStandbyPage @ 0x140012270 (MiRelinkStandbyPage.c)
 *     MiFreePageFileHashPfns @ 0x1400129B4 (MiFreePageFileHashPfns.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140036ED0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiClaimPhysicalRun @ 0x14005ACA0 (MiClaimPhysicalRun.c)
 *     MiPrivateFixup @ 0x14007991C (MiPrivateFixup.c)
 *     MiDeleteLockedTransitionPte @ 0x140084B60 (MiDeleteLockedTransitionPte.c)
 *     MiDeletePteList @ 0x140093740 (MiDeletePteList.c)
 *     MiFreeWsleList @ 0x1400AE6D0 (MiFreeWsleList.c)
 *     MiPfnShareCountIsZero @ 0x1400B2270 (MiPfnShareCountIsZero.c)
 *     MiWriteCompletePfn @ 0x1400B51B0 (MiWriteCompletePfn.c)
 *     MiValidateImagePages @ 0x1400B57B0 (MiValidateImagePages.c)
 *     MiMigratePfn @ 0x1400B9D20 (MiMigratePfn.c)
 *     MiDeletePteRun @ 0x1400C3A20 (MiDeletePteRun.c)
 *     MiInsertLargePageInFreeOrZeroList @ 0x1400C65C0 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiPfnReferenceCountIsZero @ 0x1400E3118 (MiPfnReferenceCountIsZero.c)
 *     MiReleaseFreshPage @ 0x1400FCD50 (MiReleaseFreshPage.c)
 *     MiFreeLargePageMemory @ 0x1400FF890 (MiFreeLargePageMemory.c)
 *     MiDrainZeroLookasides @ 0x14010D810 (MiDrainZeroLookasides.c)
 *     MiReturnPhysicalPoolPages @ 0x14010E300 (MiReturnPhysicalPoolPages.c)
 *     MiMapPageFileHash @ 0x14013BAD4 (MiMapPageFileHash.c)
 *     MiPurgeZeroList @ 0x140144E54 (MiPurgeZeroList.c)
 *     MiPurgePartitionStandby @ 0x140144FC0 (MiPurgePartitionStandby.c)
 *     MiDiscardTransitionPte @ 0x14014AE5C (MiDiscardTransitionPte.c)
 *     MiLockAndInsertPageInFreeList @ 0x14015F7F4 (MiLockAndInsertPageInFreeList.c)
 *     MiReturnSplitPages @ 0x14015FA8C (MiReturnSplitPages.c)
 *     MiZeroPageThread @ 0x14015FE90 (MiZeroPageThread.c)
 *     MiPurgeSubsection @ 0x140211C88 (MiPurgeSubsection.c)
 *     MiMoveEccPagesToFreeList @ 0x140212D88 (MiMoveEccPagesToFreeList.c)
 *     MiPurgeImageSection @ 0x14021C698 (MiPurgeImageSection.c)
 *     MiReturnPartitionPagesToParent @ 0x14021D9D8 (MiReturnPartitionPagesToParent.c)
 *     MiScrubNodeLargePageList @ 0x14022D300 (MiScrubNodeLargePageList.c)
 *     MiRebalanceZeroFreeLists @ 0x14022E06C (MiRebalanceZeroFreeLists.c)
 *     MiScrubNode @ 0x140232B18 (MiScrubNode.c)
 *     MxCreateFreePfns @ 0x1407C5084 (MxCreateFreePfns.c)
 *     MiComputeOptimalZeroPath @ 0x1407C88D8 (MiComputeOptimalZeroPath.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14003E5A0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x140042D90 (KxWaitForLockOwnerShip.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     MiGetPagePrivilege @ 0x1400597B0 (MiGetPagePrivilege.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14005A4E0 (MiUnmapPageInHyperSpaceWorker.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     MiInsertPageInList @ 0x1400C6750 (MiInsertPageInList.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400E6520 (MiMapPageInHyperSpaceWorker.c)
 *     MiClearPfnImageVerified @ 0x1400E6680 (MiClearPfnImageVerified.c)
 *     MiUpdateAvailableEvents @ 0x14015FA18 (MiUpdateAvailableEvents.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KeCheckForZeroPage @ 0x140186B40 (KeCheckForZeroPage.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     KeSetPagePrivilege @ 0x1401FF2DC (KeSetPagePrivilege.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140200B54 (KiAcquireQueuedSpinLockInstrumented.c)
 *     MiPageNotZero @ 0x1402262F4 (MiPageNotZero.c)
 */

int __fastcall MiInsertPageInFreeOrZeroedList(ULONG_PTR BugCheckParameter2, char a2)
{
  __int64 v2; // rdi
  __int64 v5; // r9
  __int64 v6; // rax
  unsigned __int16 v7; // ax
  __int16 *v8; // r14
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  char v12; // r9
  unsigned __int64 v13; // r11
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // r8
  int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // r13
  __int64 v20; // r10
  __int16 v21; // r9
  unsigned __int64 v22; // rdx
  __int16 v23; // r9
  unsigned __int64 v24; // rdx
  char v25; // dl
  unsigned __int64 v26; // r15
  int v27; // eax
  __int64 v28; // rbx
  __int64 Next; // rax
  unsigned __int64 v30; // r15
  __int64 v31; // r15
  __int64 v32; // rax
  __int64 v33; // rbx
  _QWORD *v34; // rdx
  ULONG_PTR v35; // rcx
  _QWORD *v36; // r8
  volatile signed __int64 *v37; // rax
  unsigned __int64 v38; // r12
  _QWORD *v39; // rdx
  signed __int32 v41[8]; // [rsp+0h] [rbp-79h] BYREF
  __int64 v42; // [rsp+30h] [rbp-49h] BYREF
  volatile signed __int64 *v43; // [rsp+38h] [rbp-41h]
  int v44; // [rsp+48h] [rbp-31h]
  __int64 v45; // [rsp+50h] [rbp-29h]
  __int16 *v46; // [rsp+58h] [rbp-21h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-19h] BYREF
  unsigned __int64 v48; // [rsp+78h] [rbp-1h]
  unsigned __int64 v49; // [rsp+80h] [rbp+7h]
  unsigned __int64 v50[3]; // [rsp+88h] [rbp+Fh] BYREF
  void *retaddr; // [rsp+D8h] [rbp+5Fh]
  unsigned __int8 v53; // [rsp+F0h] [rbp+77h] BYREF
  char v54; // [rsp+F8h] [rbp+7Fh]

  v2 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v5 = *(_QWORD *)(v2 + 24);
  v6 = *(_QWORD *)(v2 + 40);
  if ( (v5 & 0x4000000000000000LL) != 0 )
  {
    if ( (v6 & 0x10000000000000LL) == 0 )
      goto LABEL_3;
LABEL_6:
    MiClearPfnImageVerified(v2, 12LL);
    LODWORD(v9) = MiClearFileOnlyPfn(v2);
    return v9;
  }
  if ( (v6 & 0x10000000000000LL) != 0 )
    goto LABEL_6;
LABEL_3:
  v7 = (HIDWORD(v6) >> 8) & 0x3FF;
  *(_QWORD *)(v2 + 24) = v5 & 0xBFFFFFFFFFFFFFFFuLL;
  if ( v7 == 1023 )
    v8 = MiSystemPartition;
  else
    v8 = *(__int16 **)(qword_14034F0E8 + 8LL * v7);
  if ( (a2 & 1) != 0 )
  {
    v46 = v8 + 768;
    if ( (MiFlags & 0x80u) != 0
      && BugCheckParameter2 < 0x200000
      && (*(_BYTE *)(48 * BugCheckParameter2 - 0x57FFFFFFFDDLL) & 0x40) == 0
      && (++dword_14034F204 & MmPageValidationFrequency) == 0 )
    {
      if ( KeGetCurrentPrcb()->HyperPte )
      {
        v10 = MiMapPageInHyperSpaceWorker(BugCheckParameter2, &v53, 0x80000000LL);
        if ( KeCheckForZeroPage(v10) )
          MiPageNotZero(v10, BugCheckParameter2);
        MiUnmapPageInHyperSpaceWorker(v10, v53);
      }
    }
    v44 = 0;
  }
  else
  {
    v44 = 1;
    v46 = v8 + 800;
  }
  if ( ((*(_QWORD *)(v2 + 40) >> 54) & 7) == 3 )
  {
    if ( (unsigned int)MiGetPagePrivilege(v2, 1, v50)
      && (int)KeSetPagePrivilege((v2 + 0x58000000000LL) / 48, v50, 16LL) < 0 )
    {
      KeBugCheckEx(0x1Au, 0x5150BuLL, (v2 + 0x58000000000LL) / 48, 0LL, 0LL);
    }
    *(_QWORD *)(v2 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
  }
  _InterlockedOr(v41, 0);
  v11 = (unsigned int)KiTbFlushTimeStamp;
  *(_BYTE *)(v2 + 35) &= 0xF8u;
  v12 = *(_BYTE *)(v2 + 35);
  *(_QWORD *)(v2 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
  v13 = *(_QWORD *)(v2 + 40);
  v14 = (*(_QWORD *)(v2 + 24) ^ (v11 << 56)) & 0xF00000000000000LL;
  v54 = v12;
  *(_QWORD *)(v2 + 24) ^= v14;
  *(_QWORD *)(v2 + 8) |= 0x8000000000000000uLL;
  v48 = v13;
  if ( (v12 & 0x40) != 0 )
  {
    LODWORD(v9) = MiInsertPageInList(v2, 0x20u);
    return v9;
  }
  v49 = dword_14034EBB8 & (unsigned int)BugCheckParameter2 | (((v13 >> 36) & 3) << byte_14034EB98) | ((unsigned __int8)((v13 >> 58) & 0x3F) << byte_14034EB89);
  v15 = *((_QWORD *)v8 + 5) + 1336 * (v49 >> byte_14034EB89);
  v16 = 0LL;
  v17 = 0;
  v18 = *((_QWORD *)v8 + 187);
  v19 = (unsigned int)v49;
  v20 = (unsigned __int8)(MiChannelMaximumPowerOf2Mask & ((unsigned int)v49 >> byte_14034EB98));
  v45 = v18;
  if ( (a2 & 0x40) == 0 )
  {
    if ( v44 == 1 )
    {
      if ( *(unsigned __int16 *)(v18 + 16LL * (unsigned int)v49) < *((int *)v8 + 1205) )
      {
        v21 = 1024;
        v22 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)MmNumberOfChannels <= 1 )
            v22 += *(_QWORD *)(v15 + 8 * v16 + 1168);
          else
            v22 += *(_QWORD *)(v15 + 8 * (v16 + 2 * v20) + 1232);
          if ( (v21 & 0x400) != 0 )
            v22 += (*(_QWORD *)(v15 + 8 * (v20 + 4 * v16) + 272) + *(_QWORD *)(v15 + 8 * (v20 + 4 * v16) + 336)) << 9;
          if ( (v21 & 2) != 0 )
            break;
          v21 |= 2u;
          v16 = 1LL;
        }
        v12 = v54;
        v13 = v48;
        if ( v22 > 0x40 )
          v17 = 1;
      }
      *(_BYTE *)(v2 + 34) &= 0xC7u;
      v18 = v45;
      *(_QWORD *)(v2 + 40) = v13 & 0xFDFFFFFFFFFFFFFFuLL;
      *(_BYTE *)(v2 + 35) = v12 & 0xDF;
    }
    else
    {
      v18 = *((_QWORD *)v8 + 186);
      v45 = v18;
      if ( *(unsigned __int16 *)(v18 + 16LL * (unsigned int)v49) < *((int *)v8 + 1205) )
      {
        v23 = 1026;
        v24 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)MmNumberOfChannels <= 1 )
            v24 += *(_QWORD *)(v15 + 8 * v16 + 1168);
          else
            v24 += *(_QWORD *)(v15 + 8 * (v16 + 2 * v20) + 1232);
          if ( (v23 & 0x400) != 0 )
            v24 += (*(_QWORD *)(v15 + 8 * (v20 + 4 * v16) + 272) + *(_QWORD *)(v15 + 8 * (v20 + 4 * v16) + 336)) << 9;
          if ( (v23 & 2) != 0 )
            break;
          v23 |= 2u;
          v16 = 1LL;
        }
        v18 = v45;
        if ( v24 > 0x40 )
          v17 = 1;
      }
    }
  }
  if ( *((_QWORD *)v8 + 688) >= 0x100uLL && v17 == 1 )
  {
    v25 = *(_BYTE *)(v2 + 34);
    if ( (v25 & 7) != 5 )
      *(_BYTE *)(v2 + 34) = v25 & 0xF8 | 5;
    LODWORD(v9) = (unsigned int)RtlpInterlockedPushEntrySList((PSLIST_HEADER)(16 * v19 + v18), (PSLIST_ENTRY)v2);
    return v9;
  }
  v26 = _InterlockedIncrement64((volatile signed __int64 *)v8 + 688);
  if ( v26 <= 0x80 )
  {
    if ( v26 == 128 )
    {
      v27 = 1;
    }
    else
    {
      if ( v26 != 2 )
        goto LABEL_66;
      v27 = 0;
    }
    v28 = 16LL * v27;
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v8 + 504, &LockHandle);
    KeSetEvent((PRKEVENT)&v8[v28 + 2020], 0, 0);
    ++*(_DWORD *)&v8[v28 + 2032];
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
    {
      _m_prefetchw(&LockHandle);
      Next = (__int64)LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
          goto LABEL_66;
        Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
      goto LABEL_66;
    }
    KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
  }
LABEL_66:
  v30 = v26 - 1;
  if ( v30 == *((_QWORD *)v8 + 513) || v30 == *((_QWORD *)v8 + 514) )
    MiUpdateAvailableEvents(v8);
  v31 = v44;
  _InterlockedIncrement64((volatile signed __int64 *)(v15 + 8LL * v44 + 1168));
  if ( (unsigned int)MmNumberOfChannels > 1 )
    _InterlockedIncrement64((volatile signed __int64 *)(v15
                                                      + 8
                                                      * (v31
                                                       + 2LL
                                                       * (unsigned __int8)(MiChannelMaximumPowerOf2Mask & ((unsigned int)v49 >> byte_14034EB98)))
                                                      + 1232));
  v32 = *(_QWORD *)&v8[4 * v31 + 736];
  v42 = 0LL;
  v33 = v32 + 40 * v19;
  v43 = (volatile signed __int64 *)(v33 + 32);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v42, v33 + 32);
  }
  else
  {
    v34 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v33 + 32), (__int64)&v42);
    if ( v34 )
      KxWaitForLockOwnerShip((__int64)&v42, v34);
  }
  *(_BYTE *)(v2 + 34) ^= (v31 ^ *(_BYTE *)(v2 + 34)) & 7;
  if ( *(_QWORD *)(v33 + 16) == 0xFFFFFFFFFLL )
  {
    v35 = BugCheckParameter2;
    *(_QWORD *)(v2 + 24) |= 0xFFFFFFFFFuLL;
    *(_QWORD *)(v33 + 16) = BugCheckParameter2;
  }
  else
  {
    v36 = (_QWORD *)(48LL * *(_QWORD *)(v33 + 24) - 0x58000000000LL);
    v35 = BugCheckParameter2;
    *(_QWORD *)(v2 + 24) ^= (*(_QWORD *)(v2 + 24) ^ (48LL * *(_QWORD *)(v33 + 24) / 48)) & 0xFFFFFFFFFLL;
    *v36 ^= (BugCheckParameter2 ^ *v36) & 0xFFFFFFFFFLL;
  }
  ++*(_QWORD *)v33;
  v37 = (volatile signed __int64 *)v46;
  *(_QWORD *)(v33 + 24) = v35;
  *(_QWORD *)v2 |= 0xFFFFFFFFFuLL;
  v38 = _InterlockedIncrement64(v37);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
  {
    _m_prefetchw(&v42);
    v9 = v42;
    if ( !v42 )
    {
      v9 = _InterlockedCompareExchange64(v43, 0LL, (signed __int64)&v42);
      if ( (__int64 *)v9 == &v42 )
        goto LABEL_84;
      v9 = KxWaitForLockChainValid(&v42);
    }
    v42 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v9 + 8), 1uLL);
    goto LABEL_84;
  }
  LODWORD(v9) = KiReleaseQueuedSpinLockInstrumented(&v42, retaddr);
LABEL_84:
  if ( !*((_BYTE *)v8 + 4816) && (_DWORD)v31 == 1 && v38 >= 8 )
  {
    v43 = (volatile signed __int64 *)(v8 + 2016);
    v42 = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v42, v8 + 2016);
    }
    else
    {
      v39 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v8 + 504, (__int64)&v42);
      if ( v39 )
        KxWaitForLockOwnerShip((__int64)&v42, v39);
    }
    if ( !*((_BYTE *)v8 + 4816) )
    {
      *((_BYTE *)v8 + 4816) = 1;
      KeSetEvent((PRKEVENT)(v8 + 2396), 0, 0);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
    {
      _m_prefetchw(&v42);
      v9 = v42;
      if ( !v42 )
      {
        v9 = _InterlockedCompareExchange64(v43, 0LL, (signed __int64)&v42);
        if ( (__int64 *)v9 == &v42 )
          return v9;
        v9 = KxWaitForLockChainValid(&v42);
      }
      v42 = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v9 + 8), 1uLL);
      return v9;
    }
    LODWORD(v9) = KiReleaseQueuedSpinLockInstrumented(&v42, retaddr);
  }
  return v9;
}
