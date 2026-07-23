/*
 * XREFs of ExAllocatePoolWithTagPriority @ 0x14007E290
 * Callers:
 *     IopVerifierExAllocatePoolWithQuota @ 0x140079FA0 (IopVerifierExAllocatePoolWithQuota.c)
 *     IopVerifierExAllocatePool @ 0x14007B690 (IopVerifierExAllocatePool.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x14009A334 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     IoAllocateWorkItem @ 0x14009E0A4 (IoAllocateWorkItem.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x1400AE584 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     IopBuildDeviceIoControlRequest @ 0x1400E7620 (IopBuildDeviceIoControlRequest.c)
 *     IopBuildAsynchronousFsdRequest @ 0x14010AEC0 (IopBuildAsynchronousFsdRequest.c)
 *     IopVerifierExAllocatePoolWithQuota_2 @ 0x140133428 (IopVerifierExAllocatePoolWithQuota_2.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x1401C9AE0 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopQueryFullDriverPath @ 0x1401C9F84 (IopQueryFullDriverPath.c)
 *     IopVerifierExAllocatePool_2 @ 0x1401CACC8 (IopVerifierExAllocatePool_2.c)
 *     IopVerifierExAllocatePoolWithQuota_3 @ 0x1401CAD00 (IopVerifierExAllocatePoolWithQuota_3.c)
 *     IopVerifierExAllocatePool_3 @ 0x1401CB430 (IopVerifierExAllocatePool_3.c)
 *     IopVerifierExAllocatePool_4 @ 0x1401CC134 (IopVerifierExAllocatePool_4.c)
 *     IopXxxControlFile @ 0x140442DD0 (IopXxxControlFile.c)
 *     IopAllocateMiniCompletionPacket @ 0x1404708D8 (IopAllocateMiniCompletionPacket.c)
 *     NtFlushBuffersFileEx @ 0x1404AF1B0 (NtFlushBuffersFileEx.c)
 *     NtRemoveIoCompletionEx @ 0x1404B77E4 (NtRemoveIoCompletionEx.c)
 *     IopQueryNameInternal @ 0x1404ECAA0 (IopQueryNameInternal.c)
 *     IopBuildFullDriverPath @ 0x140515EA8 (IopBuildFullDriverPath.c)
 *     IopLoadDriver @ 0x140516794 (IopLoadDriver.c)
 *     IopGetDriverNameFromKeyNode @ 0x140517688 (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryValue @ 0x14051783C (IopGetRegistryValue.c)
 *     IopGetRegistryKeyInformation @ 0x1405404C4 (IopGetRegistryKeyInformation.c)
 *     IoCreateSystemThread @ 0x14054D0A0 (IoCreateSystemThread.c)
 *     IopCreateArcName @ 0x1405501C4 (IopCreateArcName.c)
 *     IoCreateDriver @ 0x1405518C4 (IoCreateDriver.c)
 *     IopInitializeBootLogging @ 0x140621940 (IopInitializeBootLogging.c)
 *     IopRaiseHardError @ 0x14062212C (IopRaiseHardError.c)
 *     IopSafebootDriverLoad @ 0x140622440 (IopSafebootDriverLoad.c)
 *     IopSendMessageToTrackService @ 0x1406225A0 (IopSendMessageToTrackService.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1406228A0 (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x140625894 (NtQueryQuotaInformationFile.c)
 *     IoVerifierCheckForSettingsChange @ 0x1407005B4 (IoVerifierCheckForSettingsChange.c)
 *     VeAllocatePoolWithTagPriority @ 0x140701DA8 (VeAllocatePoolWithTagPriority.c)
 *     ViGrowPoolAllocation @ 0x140702640 (ViGrowPoolAllocation.c)
 *     VfInitVerifierComponents @ 0x140703330 (VfInitVerifierComponents.c)
 *     VfPendingCheckForChanges @ 0x14070CEB4 (VfPendingCheckForChanges.c)
 *     VfFaultsInitPhase0 @ 0x140710C58 (VfFaultsInitPhase0.c)
 *     VfKeCheckForChanges @ 0x140712BB0 (VfKeCheckForChanges.c)
 *     IopCreateArcNamesCd @ 0x140798420 (IopCreateArcNamesCd.c)
 *     IopCreateArcNames @ 0x140798AF8 (IopCreateArcNames.c)
 *     IopStoreArcInformation @ 0x14079A6CC (IopStoreArcInformation.c)
 *     IopInitializeBuiltinDriver @ 0x14079BB9C (IopInitializeBuiltinDriver.c)
 *     IopGetBootDiskInformationLite @ 0x1407A7560 (IopGetBootDiskInformationLite.c)
 *     IopApplySystemPartitionProt @ 0x1407CE99C (IopApplySystemPartitionProt.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140012670 (ExpInsertPoolTrackerExpansion.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MmResourcesAvailable @ 0x14007E300 (MmResourcesAvailable.c)
 *     EtwTracePool @ 0x140159C2C (EtwTracePool.c)
 *     MmAllocateSpecialPool @ 0x1401EB90C (MmAllocateSpecialPool.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiSessionPoolVector @ 0x14041ADE0 (MiSessionPoolVector.c)
 */

PVOID __stdcall ExAllocatePoolWithTagPriority(
        POOL_TYPE PoolType,
        SIZE_T NumberOfBytes,
        ULONG Tag,
        EX_POOL_PRIORITY Priority)
{
  EX_POOL_PRIORITY v4; // edi
  ULONG v5; // r12d
  SIZE_T v6; // r15
  POOL_TYPE v7; // ebx
  __int64 v8; // rdx
  unsigned int v10; // esi
  void *SpecialPool; // r13
  __int64 v12; // rax
  int v13; // ebp
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // ebx
  int v17; // edx
  __int64 v18; // r14
  int v19; // eax
  int v20; // edx
  _QWORD *v21; // rax
  unsigned __int64 v22; // r13
  unsigned __int64 v23; // r10
  _QWORD *v24; // r14
  __int64 v25; // r10
  int v26; // edi
  __int64 v27; // rbp
  __int64 v28; // rsi
  _QWORD *v29; // r14
  unsigned __int64 v30; // r15
  unsigned int v31; // r12d
  __int64 v32; // rax
  _QWORD *v33; // r14
  __int64 v34; // r10
  int v35; // edi
  __int64 v36; // rbp
  __int64 v37; // rsi
  unsigned int v38; // edi
  __int64 v39; // rax
  _QWORD *v40; // r9
  unsigned int v41; // r11d
  _QWORD *v42; // r9
  __int64 v43; // rcx
  int v44; // r8d
  __int64 v45; // rdx
  unsigned __int64 v46; // r13
  unsigned __int64 v47; // r10
  __int64 v48; // [rsp+30h] [rbp-78h]
  __int64 v49; // [rsp+38h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-68h] BYREF
  ULONG v53; // [rsp+C0h] [rbp+18h]

  v53 = Tag;
  v4 = Priority;
  v5 = Tag;
  v6 = NumberOfBytes;
  v7 = PoolType;
  if ( (Priority & 8) == 0 || NumberOfBytes > 0xFE0 )
    goto LABEL_2;
  v10 = PoolType;
  if ( (PoolType & 0x21) == 0x20 )
    v10 = PoolType & 0xFFFFFFDF;
  v5 = Tag & 0x7FFFFFFF;
  if ( (Tag & 0x7FFFFFFF) == 0 )
    v5 = 811884866;
  v53 = v5;
  SpecialPool = (void *)MmAllocateSpecialPool(NumberOfBytes);
  if ( !SpecialPool )
  {
    v4 &= 0xFFFFFFF6;
LABEL_2:
    if ( v4 == HighPoolPriority
      || (v7 & 2) != 0
      || (unsigned int)MmResourcesAvailable((unsigned int)v7, v6, (unsigned int)v4) )
    {
      return ExAllocatePoolWithTag(v7, v6, v5);
    }
    if ( v6 > 0xFE0 )
      return 0LL;
    if ( (v7 & 1) != 0 && (v7 & 0x20) != 0 )
    {
      v21 = (_QWORD *)MiSessionPoolVector(v7 & 1, v8);
      v22 = (unsigned int)v21[10] + (unsigned int)v21[9] - (unsigned int)v21[17] - (unsigned int)v21[18];
      v23 = (unsigned int)v21[11] - (unsigned int)v21[19];
    }
    else
    {
      v22 = 0LL;
      v23 = 0LL;
      v24 = (_QWORD *)PoolVector[v7 & 1];
      if ( (v7 & 1) != 0 )
      {
        if ( (unsigned __int16)KeNumberNodes <= 1u )
        {
          v41 = 0;
          v42 = v24 + 9;
          do
          {
            ++v41;
            v43 = v42[9];
            v44 = *v42 - v42[8];
            v45 = v42[1];
            v42 += 552;
            v22 += (unsigned int)(v45 + v44 - v43);
            v23 += (unsigned int)*(v42 - 550) - (unsigned int)*(v42 - 542);
          }
          while ( v41 <= ExpNumberOfPagedPools );
        }
        else
        {
          v38 = 0;
          do
          {
            v39 = v38++;
            v40 = (_QWORD *)ExpPagedPoolDescriptor[v39];
            v22 += (unsigned int)v40[10] + (unsigned int)v40[9] - (unsigned int)v40[17] - (unsigned int)v40[18];
            v23 += (unsigned int)v40[11] - (unsigned int)v40[19];
          }
          while ( v38 <= ExpNumberOfPagedPools );
        }
      }
      else if ( ExpNumberOfNonPagedPools == 1 )
      {
        v25 = v24[10];
        v26 = v24[9] - v24[17] - v24[18];
        v27 = v24[19];
        v28 = v24[11];
        v29 = v24 + 552;
        v22 = (unsigned int)(v25 + v26)
            + (unsigned __int64)((unsigned int)v29[10]
                               + (unsigned int)v29[9]
                               - (unsigned int)v29[17]
                               - (unsigned int)v29[18]);
        v23 = (unsigned int)(v28 - v27) + (unsigned __int64)((unsigned int)v29[11] - (unsigned int)v29[19]);
      }
      else if ( ExpNumberOfNonPagedPools )
      {
        v30 = 0LL;
        v31 = 0;
        do
        {
          v32 = v31++;
          v33 = (_QWORD *)ExpNonPagedPoolDescriptor[v32];
          v34 = v33[10];
          v35 = v33[9] - v33[17] - v33[18];
          v36 = v33[19];
          v37 = v33[11];
          v33 += 552;
          v22 += (unsigned int)v33[9]
               - (unsigned int)v33[17]
               - (unsigned int)v33[18]
               + (unsigned int)v33[10]
               + (unsigned __int64)(unsigned int)(v34 + v35);
          v30 += (unsigned int)v33[11] - (unsigned int)v33[19] + (unsigned __int64)(unsigned int)(v37 - v36);
        }
        while ( v31 < ExpNumberOfNonPagedPools );
        v7 = PoolType;
        v5 = v53;
        v23 = v30;
        v6 = NumberOfBytes;
      }
    }
    v46 = v22 | 1;
    v47 = v23 >> 12;
    if ( v47 > v46 )
      v47 = v46;
    if ( (unsigned int)(100 * v47 / v46) < 0x50 )
      return ExAllocatePoolWithTag(v7, v6, v5);
    else
      return 0LL;
  }
  if ( (v7 & 0x40) != 0 )
    v6 -= 8LL;
  if ( v5 == PoolHitTag )
    __debugbreak();
  v12 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    v12 = EtwTracePool(3616, v10, v5, (_DWORD)SpecialPool, v6);
  if ( (v10 & 0x20) != 0 )
  {
    v15 = ExpSessionPoolTrackTable;
    v13 = ExpSessionPoolTrackTableMask;
    v14 = ExpSessionPoolTrackTableSize;
  }
  else
  {
    LODWORD(v12) = KeGetPcr()->Prcb.Number;
    v13 = PoolTrackTableMask;
    v14 = PoolTrackTableSize;
    v15 = (__int64)*(&ExPoolTagTables + v12);
  }
  v49 = v14;
  v48 = v15;
  v16 = v13 & ((40543 * v5) ^ ((40543 * (unsigned __int64)v5) >> 32));
  v17 = v16;
  while ( 1 )
  {
    v18 = 40LL * v16;
    v19 = *(_DWORD *)(v18 + v15);
    if ( v19 == v5 )
      break;
    if ( v19 )
    {
LABEL_34:
      v16 = v13 & (v16 + 1);
      if ( v16 == v17 )
      {
        ExpInsertPoolTrackerExpansion(v5, v6, v10);
        goto LABEL_39;
      }
    }
    else
    {
      if ( (v10 & 0x20) != 0 )
        goto LABEL_28;
      v20 = *(_DWORD *)(v18 + PoolTrackTable);
      if ( v20 )
      {
        *(_DWORD *)(v18 + v15) = v20;
        v17 = v13 & ((40543 * v5) ^ ((40543 * (unsigned __int64)v5) >> 32));
      }
      else
      {
        v17 = v13 & ((40543 * v5) ^ ((40543 * (unsigned __int64)v5) >> 32));
LABEL_28:
        if ( v16 == v14 - 1 )
          goto LABEL_34;
        if ( (v10 & 0x20) != 0 )
        {
          _InterlockedCompareExchange((volatile signed __int32 *)(v18 + v15), v5, 0);
        }
        else
        {
          KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
          if ( !*(_DWORD *)(v18 + PoolTrackTable) )
          {
            *(_DWORD *)(v18 + PoolTrackTable) = v5;
            *(_DWORD *)(v18 + v48) = v5;
          }
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          v14 = v49;
          v15 = v48;
          v17 = v13 & ((40543 * v5) ^ ((40543 * (unsigned __int64)v5) >> 32));
        }
      }
    }
  }
  if ( (v10 & 1) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v18 + v15 + 24));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + v15 + 32), v6);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(v18 + v15 + 4));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + v15 + 16), v6);
  }
LABEL_39:
  _InterlockedIncrement(&ExpSpecialAllocations);
  return SpecialPool;
}
