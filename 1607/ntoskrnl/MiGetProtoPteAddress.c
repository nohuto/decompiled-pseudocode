/*
 * XREFs of MiGetProtoPteAddress @ 0x140042460
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x14000CE40 (MiSetReadOnlyOnSectionView.c)
 *     MiTrimSharedPageFromViews @ 0x140018E50 (MiTrimSharedPageFromViews.c)
 *     MiCheckUserVirtualAddress @ 0x14001EED0 (MiCheckUserVirtualAddress.c)
 *     MiDeleteVad @ 0x1400288D0 (MiDeleteVad.c)
 *     MmAccessFault @ 0x14003E7A0 (MmAccessFault.c)
 *     MiDispatchFault @ 0x1400403C0 (MiDispatchFault.c)
 *     MiResolveSharedZeroFault @ 0x140042000 (MiResolveSharedZeroFault.c)
 *     MiQueryAddressState @ 0x140043000 (MiQueryAddressState.c)
 *     MiSetProtectionOnSection @ 0x140043BF0 (MiSetProtectionOnSection.c)
 *     MiCountSharedPages @ 0x140092C50 (MiCountSharedPages.c)
 *     MiPteNeedsCommitCharge @ 0x140092EE8 (MiPteNeedsCommitCharge.c)
 *     MiDeletePartialVad @ 0x140095DC0 (MiDeletePartialVad.c)
 *     MiSplitPrivatePage @ 0x1400988C0 (MiSplitPrivatePage.c)
 *     MiProtoFault @ 0x1400A3E68 (MiProtoFault.c)
 *     MiGetWorkingSetInfoList @ 0x1400B79E0 (MiGetWorkingSetInfoList.c)
 *     MiExpandSharedZeroCluster @ 0x1400B9458 (MiExpandSharedZeroCluster.c)
 *     MiWalkVaRange @ 0x1400BB684 (MiWalkVaRange.c)
 *     MiIsCfgBitMapPageShared @ 0x1400E9DF0 (MiIsCfgBitMapPageShared.c)
 *     MiUpControlAreaRefs @ 0x14010C9E8 (MiUpControlAreaRefs.c)
 *     MiResolvePageFileFault @ 0x140121360 (MiResolvePageFileFault.c)
 *     MiComputeImageVadCommitCharge @ 0x1401DF938 (MiComputeImageVadCommitCharge.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1401E15E8 (MiUpdatePrivateDemandZeroView.c)
 *     MiGetClusterPage @ 0x1401F6318 (MiGetClusterPage.c)
 *     MiIdealClusterPage @ 0x1401F6748 (MiIdealClusterPage.c)
 *     MiIsRangeFullyCommitted @ 0x14040C55C (MiIsRangeFullyCommitted.c)
 *     MiProtectVirtualMemory @ 0x140433470 (MiProtectVirtualMemory.c)
 *     MiCommitPagefileBackedSection @ 0x1404BA2E0 (MiCommitPagefileBackedSection.c)
 *     MmFlushVirtualMemory @ 0x1404D1998 (MmFlushVirtualMemory.c)
 *     MiFillMapFileInfo @ 0x140656F64 (MiFillMapFileInfo.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140013B70 (KiLeaveGuardedRegionUnsafe.c)
 *     MiLocateSubsectionNode @ 0x140021BC0 (MiLocateSubsectionNode.c)
 *     MmGetSessionIdEx @ 0x140024FEC (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     MiTryLockVad @ 0x1400AD0B4 (MiTryLockVad.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     MiGetSharedProtos @ 0x1401F5088 (MiGetSharedProtos.c)
 */

__int64 __fastcall MiGetProtoPteAddress(__int64 a1, __int64 a2, char a3, __int64 **a4)
{
  unsigned __int64 v7; // r10
  unsigned __int64 v9; // rdx
  unsigned __int64 v11; // rdx
  __int64 *v12; // rsi
  __int64 v13; // r15
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // ecx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r8
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int8 CurrentIrql; // r13
  unsigned __int64 v23; // rbp
  __int64 *SubsectionNode; // rax
  unsigned int SessionId; // eax

  v7 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  if ( (*(_DWORD *)(a1 + 48) & 7) != 2 || (*(_DWORD *)(**(_QWORD **)(a1 + 72) + 56LL) & 0x4000000) == 0 )
  {
    v9 = a2 - v7;
    if ( (__int64)(*(_QWORD *)(a1 + 88) - *(_QWORD *)(a1 + 80)) >> 3 >= v9 && (a3 & 8) == 0 )
    {
      *a4 = *(__int64 **)(a1 + 72);
      return *(_QWORD *)(a1 + 80) + 8 * v9;
    }
  }
  v11 = 0LL;
  *a4 = 0LL;
  v12 = *(__int64 **)(a1 + 72);
  v13 = *v12;
  v14 = a2 + ((*(_QWORD *)(a1 + 80) - v12[1]) >> 3) - v7;
  if ( !*(_QWORD *)(*v12 + 64) )
  {
    if ( (*(_DWORD *)(v13 + 56) & 0x1000) != 0 )
    {
      v19 = v14 >> 17;
      v20 = (unsigned int)(v14 >> 17);
      v14 &= 0x1FFFFu;
      if ( (_DWORD)v14 )
        ++v20;
      if ( v20 > *(unsigned int *)(v13 + 96) )
        return 0LL;
      v12 += 10 * v19;
      v15 = *((unsigned int *)v12 + 11);
    }
    else
    {
      v15 = *((unsigned int *)v12 + 11);
    }
    if ( v14 < v15 )
    {
      if ( v12 )
      {
        *a4 = v12;
        v16 = v12[1];
        if ( v16 )
          goto LABEL_12;
      }
    }
    return 0LL;
  }
  v17 = *(_DWORD *)(a1 + 48);
  if ( (v17 & 0x20000) != 0 )
  {
    v23 = ((*((unsigned int *)v12 + 9) | ((unsigned __int64)((_WORD)v12[4] & 0xFFC0) << 26)) + v14) << 12;
    SubsectionNode = MiLocateSubsectionNode(*v12, v23, (a3 & 2) != 0);
    v12 = SubsectionNode;
    if ( !SubsectionNode )
      return 0LL;
    v14 = (v23 >> 12)
        - ((*((unsigned int *)SubsectionNode + 9) | ((unsigned __int64)((_WORD)SubsectionNode[4] & 0xFFC0) << 26)) & 0xFFFFFFFFFFFFFLL);
    v16 = SubsectionNode[1];
    *a4 = SubsectionNode;
  }
  else
  {
    v18 = *((unsigned int *)v12 + 11);
    if ( v14 >= v18 )
    {
      do
      {
        v12 = (__int64 *)v12[2];
        v14 -= v18;
        ++v11;
        if ( !v12 )
          break;
        v18 = *((unsigned int *)v12 + 11);
      }
      while ( v14 >= v18 );
      if ( v11 > 0x10 && (*(_DWORD *)(v13 + 56) & 0x20) == 0 )
      {
        if ( (a3 & 1) != 0 )
        {
          *(_DWORD *)(a1 + 48) = v17 | 0x20000;
        }
        else
        {
          CurrentThread = KeGetCurrentThread();
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql < 2u )
            --CurrentThread->SpecialApcDisable;
          if ( (unsigned int)MiTryLockVad(CurrentThread, a1) == 1 )
          {
            *(_DWORD *)(a1 + 48) |= 0x20000u;
            LOBYTE(CurrentThread[1].Queue) &= ~0x80u;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(a1 + 40);
            KeAbPostRelease(a1 + 40);
          }
          if ( CurrentIrql < 2u )
            KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        }
      }
    }
    if ( !v12 )
      return 0LL;
    v16 = v12[1];
    *a4 = v12;
  }
LABEL_12:
  if ( (*((_BYTE *)v12 + 34) & 2) != 0 && (_bittest((const signed __int32 *)(v13 + 56), 0x1Au) & ((a3 & 4) == 0)) != 0 )
  {
    SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
    v16 = *(_QWORD *)(MiGetSharedProtos(v13, SessionId, v12) + 32);
  }
  return v16 + 8 * v14;
}
