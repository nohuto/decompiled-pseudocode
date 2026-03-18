/*
 * XREFs of MiGetProtoPteAddress @ 0x1400BF2B0
 * Callers:
 *     MiUpControlAreaRefs @ 0x1400013E8 (MiUpControlAreaRefs.c)
 *     MiSplitPrivatePage @ 0x140008EC0 (MiSplitPrivatePage.c)
 *     MiSetReadOnlyOnSectionView @ 0x140031070 (MiSetReadOnlyOnSectionView.c)
 *     MiIsCfgBitMapPageShared @ 0x14003A868 (MiIsCfgBitMapPageShared.c)
 *     MiCountSharedPages @ 0x14003A9D0 (MiCountSharedPages.c)
 *     MiQueryAddressState @ 0x14003B1A0 (MiQueryAddressState.c)
 *     MiGetWorkingSetInfoList @ 0x14007A1C0 (MiGetWorkingSetInfoList.c)
 *     MiWalkVaRange @ 0x14007F5DC (MiWalkVaRange.c)
 *     MiCheckUserVirtualAddress @ 0x140089780 (MiCheckUserVirtualAddress.c)
 *     MiDeleteVad @ 0x14008B8E0 (MiDeleteVad.c)
 *     MiSetProtectionOnSection @ 0x14008FAB0 (MiSetProtectionOnSection.c)
 *     MiResolveDemandZeroFault @ 0x1400BBC00 (MiResolveDemandZeroFault.c)
 *     MiZeroFault @ 0x1400C0DC0 (MiZeroFault.c)
 *     MiDispatchFault @ 0x1400C24A0 (MiDispatchFault.c)
 *     MiDeletePartialVad @ 0x1400F14D0 (MiDeletePartialVad.c)
 *     MiTrimSharedPageFromViews @ 0x1400FAC3C (MiTrimSharedPageFromViews.c)
 *     MiProtoFault @ 0x1400FE484 (MiProtoFault.c)
 *     MiPteNeedsCommitCharge @ 0x140117E7C (MiPteNeedsCommitCharge.c)
 *     MiResolvePageFileFault @ 0x140145F70 (MiResolvePageFileFault.c)
 *     MiUpdatePrivateDemandZeroView @ 0x14020DEFC (MiUpdatePrivateDemandZeroView.c)
 *     MiComputeImageVadCommitCharge @ 0x14020F074 (MiComputeImageVadCommitCharge.c)
 *     MiIsRangeFullyCommitted @ 0x140474834 (MiIsRangeFullyCommitted.c)
 *     MiProtectVirtualMemory @ 0x1404B9700 (MiProtectVirtualMemory.c)
 *     MiCommitPagefileBackedSection @ 0x14051ABFC (MiCommitPagefileBackedSection.c)
 *     MmFlushVirtualMemory @ 0x140531D6C (MmFlushVirtualMemory.c)
 *     MiFillMapFileInfo @ 0x1406A0750 (MiFillMapFileInfo.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MiLocateSubsectionNode @ 0x140085A20 (MiLocateSubsectionNode.c)
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     MiLocatePagefileSubsection @ 0x140089C20 (MiLocatePagefileSubsection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     MiTryLockVad @ 0x140126B04 (MiTryLockVad.c)
 *     MiGetSharedProtos @ 0x14021C58C (MiGetSharedProtos.c)
 */

__int64 __fastcall MiGetProtoPteAddress(__int64 a1, __int64 a2, unsigned __int8 a3, unsigned int **a4)
{
  unsigned __int64 v7; // r10
  unsigned __int64 v9; // rdx
  unsigned __int64 v11; // rcx
  unsigned int *v12; // r14
  __int64 v13; // r15
  unsigned __int64 v14; // rbp
  unsigned int *v15; // rax
  __int64 v16; // rcx
  int v17; // edx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rbp
  unsigned int *SubsectionNode; // rax
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int8 CurrentIrql; // r12
  __int64 v23; // rcx
  __int16 v24; // ax
  unsigned int SessionId; // eax
  __int64 SharedProtos; // rax
  unsigned __int64 v27; // [rsp+50h] [rbp+8h] BYREF

  v7 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  if ( (*(_DWORD *)(a1 + 48) & 7) != 2 || (*(_DWORD *)(**(_QWORD **)(a1 + 72) + 56LL) & 0x4000000) == 0 )
  {
    v9 = a2 - v7;
    if ( (__int64)(*(_QWORD *)(a1 + 88) - *(_QWORD *)(a1 + 80)) >> 3 >= v9 && (a3 & 8) == 0 )
    {
      *a4 = *(unsigned int **)(a1 + 72);
      return *(_QWORD *)(a1 + 80) + 8 * v9;
    }
  }
  v11 = 0LL;
  *a4 = 0LL;
  v12 = *(unsigned int **)(a1 + 72);
  v13 = *(_QWORD *)v12;
  v14 = a2 + ((__int64)(*(_QWORD *)(a1 + 80) - *((_QWORD *)v12 + 1)) >> 3) - v7;
  v27 = v14;
  if ( *(_QWORD *)(v13 + 64) )
  {
    v17 = *(_DWORD *)(a1 + 48);
    if ( (v17 & 0x40000) != 0 )
    {
      v19 = ((v12[9] | ((unsigned __int64)((_WORD)v12[8] & 0xFFC0) << 26)) + v14) << 12;
      SubsectionNode = (unsigned int *)MiLocateSubsectionNode((volatile signed __int32 *)v13, v19, (a3 >> 1) & 1);
      v12 = SubsectionNode;
      if ( SubsectionNode )
      {
        *a4 = SubsectionNode;
        v14 = (v19 >> 12)
            - ((SubsectionNode[9] | ((unsigned __int64)((_WORD)SubsectionNode[8] & 0xFFC0) << 26)) & 0xFFFFFFFFFFFFFLL);
        v16 = *((_QWORD *)SubsectionNode + 1);
        v27 = v14;
        goto LABEL_10;
      }
    }
    else
    {
      v18 = v12[11];
      if ( v14 >= v18 )
      {
        do
        {
          v12 = (unsigned int *)*((_QWORD *)v12 + 2);
          v14 -= v18;
          ++v11;
          if ( !v12 )
            break;
          v18 = v12[11];
        }
        while ( v14 >= v18 );
        v27 = v14;
        if ( v11 > 0x10 && (*(_DWORD *)(v13 + 56) & 0x20) == 0 )
        {
          if ( (a3 & 1) != 0 )
          {
            *(_DWORD *)(a1 + 48) = v17 | 0x40000;
          }
          else
          {
            CurrentThread = KeGetCurrentThread();
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql < 2u )
              --CurrentThread->SpecialApcDisable;
            if ( (unsigned int)MiTryLockVad(CurrentThread, a1) == 1 )
            {
              *(_DWORD *)(a1 + 48) |= 0x40000u;
              BYTE4(CurrentThread[1].Queue) &= ~0x80u;
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(a1 + 40);
              KeAbPostRelease(a1 + 40);
            }
            if ( CurrentIrql < 2u )
            {
              v24 = CurrentThread->SpecialApcDisable + 1;
              CurrentThread->SpecialApcDisable = v24;
              if ( !v24
                && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
              {
                KiCheckForKernelApcDelivery(v23);
              }
            }
            v14 = v27;
          }
        }
      }
      if ( v12 )
      {
        v16 = *((_QWORD *)v12 + 1);
        *a4 = v12;
        goto LABEL_10;
      }
    }
    return 0LL;
  }
  v15 = MiLocatePagefileSubsection(v12, &v27);
  v12 = v15;
  if ( !v15 )
    return 0LL;
  *a4 = v15;
  v16 = *((_QWORD *)v15 + 1);
  if ( !v16 )
    return 0LL;
  v14 = v27;
LABEL_10:
  if ( (*((_BYTE *)v12 + 34) & 2) != 0 && (_bittest((const signed __int32 *)(v13 + 56), 0x1Au) & ((a3 & 4) == 0)) != 0 )
  {
    SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
    SharedProtos = MiGetSharedProtos(v13, SessionId, v12);
    v14 = v27;
    v16 = *(_QWORD *)(SharedProtos + 32);
  }
  return v16 + 8 * v14;
}
