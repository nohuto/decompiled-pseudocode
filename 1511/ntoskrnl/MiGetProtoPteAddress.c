/*
 * XREFs of MiGetProtoPteAddress @ 0x14004B0A0
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x140008834 (MiTrimSharedPageFromViews.c)
 *     MiWalkVaRange @ 0x14001C524 (MiWalkVaRange.c)
 *     MiCheckUserVirtualAddress @ 0x14001D660 (MiCheckUserVirtualAddress.c)
 *     MiSplitPrivatePage @ 0x14001E7D0 (MiSplitPrivatePage.c)
 *     MiIsCfgBitMapPageShared @ 0x140036650 (MiIsCfgBitMapPageShared.c)
 *     MiZeroFault @ 0x14004D290 (MiZeroFault.c)
 *     MiDispatchFault @ 0x14004EB20 (MiDispatchFault.c)
 *     MiResolveDemandZeroFault @ 0x140052430 (MiResolveDemandZeroFault.c)
 *     MiSetProtectionOnSection @ 0x14005BC70 (MiSetProtectionOnSection.c)
 *     MiQueryAddressState @ 0x14005EA30 (MiQueryAddressState.c)
 *     MiDeleteVad @ 0x14006AE10 (MiDeleteVad.c)
 *     MiUpControlAreaRefs @ 0x14009A908 (MiUpControlAreaRefs.c)
 *     MiCountSharedPages @ 0x1400A6110 (MiCountSharedPages.c)
 *     MiGetWorkingSetInfoList @ 0x1400B9CE0 (MiGetWorkingSetInfoList.c)
 *     MiSetReadOnlyOnSectionView @ 0x1400BB050 (MiSetReadOnlyOnSectionView.c)
 *     MiDeletePartialVad @ 0x1400D6084 (MiDeletePartialVad.c)
 *     MiPteNeedsCommitCharge @ 0x1400E18D0 (MiPteNeedsCommitCharge.c)
 *     MiProtoFault @ 0x1400EA824 (MiProtoFault.c)
 *     MiResolvePageFileFault @ 0x1401129C8 (MiResolvePageFileFault.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1401CEB88 (MiUpdatePrivateDemandZeroView.c)
 *     MiComputeImageVadCommitCharge @ 0x1401CF7D0 (MiComputeImageVadCommitCharge.c)
 *     MiProtectVirtualMemory @ 0x140418F80 (MiProtectVirtualMemory.c)
 *     MmFlushVirtualMemory @ 0x140455438 (MmFlushVirtualMemory.c)
 *     MiIsRangeFullyCommitted @ 0x14047B9EC (MiIsRangeFullyCommitted.c)
 *     MiCommitPagefileBackedSection @ 0x14049C528 (MiCommitPagefileBackedSection.c)
 *     MiFillMapFileInfo @ 0x1406210BC (MiFillMapFileInfo.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiLocateSubsectionNode @ 0x1400AAEC0 (MiLocateSubsectionNode.c)
 *     MiLocatePagefileSubsection @ 0x1400D5B70 (MiLocatePagefileSubsection.c)
 *     MiTryLockVad @ 0x1400ED7E0 (MiTryLockVad.c)
 *     MiGetSharedProtos @ 0x1401E2F60 (MiGetSharedProtos.c)
 */

__int64 __fastcall MiGetProtoPteAddress(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 *a4)
{
  unsigned __int64 v7; // r10
  unsigned __int64 v9; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // r15
  unsigned __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // edx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rbp
  __int64 SubsectionNode; // rax
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int8 CurrentIrql; // r12
  unsigned int SessionId; // eax
  __int64 SharedProtos; // rax
  unsigned __int64 v25; // [rsp+50h] [rbp+8h] BYREF

  v7 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  if ( (*(_DWORD *)(a1 + 48) & 7) != 2 || (*(_DWORD *)(**(_QWORD **)(a1 + 72) + 56LL) & 0x4000000) == 0 )
  {
    v9 = a2 - v7;
    if ( (__int64)(*(_QWORD *)(a1 + 88) - *(_QWORD *)(a1 + 80)) >> 3 >= v9 && (a3 & 8) == 0 )
    {
      *a4 = *(_QWORD *)(a1 + 72);
      return *(_QWORD *)(a1 + 80) + 8 * v9;
    }
  }
  v11 = 0LL;
  *a4 = 0LL;
  v12 = *(_QWORD *)(a1 + 72);
  v13 = *(_QWORD *)v12;
  v14 = a2 + ((__int64)(*(_QWORD *)(a1 + 80) - *(_QWORD *)(v12 + 8)) >> 3) - v7;
  v25 = v14;
  if ( *(_QWORD *)(v13 + 64) )
  {
    v17 = *(_DWORD *)(a1 + 48);
    if ( (v17 & 0x20000) != 0 )
    {
      v19 = ((*(unsigned int *)(v12 + 36) | ((unsigned __int64)(*(_WORD *)(v12 + 32) & 0xFFC0) << 26)) + v14) << 12;
      SubsectionNode = MiLocateSubsectionNode(v13, v19, (a3 >> 1) & 1);
      v12 = SubsectionNode;
      if ( SubsectionNode )
      {
        *a4 = SubsectionNode;
        v14 = (v19 >> 12)
            - ((*(unsigned int *)(SubsectionNode + 36) | ((unsigned __int64)(*(_WORD *)(SubsectionNode + 32) & 0xFFC0) << 26)) & 0xFFFFFFFFFFFFFLL);
        v16 = *(_QWORD *)(SubsectionNode + 8);
        v25 = v14;
        goto LABEL_10;
      }
    }
    else
    {
      v18 = *(unsigned int *)(v12 + 44);
      if ( v14 >= v18 )
      {
        do
        {
          v12 = *(_QWORD *)(v12 + 16);
          v14 -= v18;
          ++v11;
          if ( !v12 )
            break;
          v18 = *(unsigned int *)(v12 + 44);
        }
        while ( v14 >= v18 );
        v25 = v14;
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
              BYTE4(CurrentThread[1].Queue) &= ~0x80u;
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 40));
              KeAbPostRelease(a1 + 40);
            }
            if ( CurrentIrql < 2u )
              KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
            v14 = v25;
          }
        }
      }
      if ( v12 )
      {
        v16 = *(_QWORD *)(v12 + 8);
        *a4 = v12;
        goto LABEL_10;
      }
    }
    return 0LL;
  }
  v15 = MiLocatePagefileSubsection(v12, &v25);
  v12 = v15;
  if ( !v15 )
    return 0LL;
  *a4 = v15;
  v16 = *(_QWORD *)(v15 + 8);
  if ( !v16 )
    return 0LL;
  v14 = v25;
LABEL_10:
  if ( (*(_BYTE *)(v12 + 34) & 2) != 0 && (_bittest((const signed __int32 *)(v13 + 56), 0x1Au) & ((a3 & 4) == 0)) != 0 )
  {
    SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
    SharedProtos = MiGetSharedProtos(v13, SessionId, v12);
    v14 = v25;
    v16 = *(_QWORD *)(SharedProtos + 32);
  }
  return v16 + 8 * v14;
}
