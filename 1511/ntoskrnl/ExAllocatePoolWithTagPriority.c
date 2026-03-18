/*
 * XREFs of ExAllocatePoolWithTagPriority @ 0x140041DC0
 * Callers:
 *     IopBuildDeviceIoControlRequest @ 0x140073E30 (IopBuildDeviceIoControlRequest.c)
 *     sub_14008E44C @ 0x14008E44C (sub_14008E44C.c)
 *     sub_1400CC298 @ 0x1400CC298 (sub_1400CC298.c)
 *     IoAllocateWorkItem @ 0x1400CC8CC (IoAllocateWorkItem.c)
 *     sub_1400CC928 @ 0x1400CC928 (sub_1400CC928.c)
 *     sub_1400CCC88 @ 0x1400CCC88 (sub_1400CCC88.c)
 *     sub_1400D08C8 @ 0x1400D08C8 (sub_1400D08C8.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1400E5238 (IopBuildAsynchronousFsdRequest.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x1401BBE08 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopQueryFullDriverPath @ 0x1401BC2AC (IopQueryFullDriverPath.c)
 *     sub_1401BCE54 @ 0x1401BCE54 (sub_1401BCE54.c)
 *     sub_1401BCE8C @ 0x1401BCE8C (sub_1401BCE8C.c)
 *     sub_1401BD574 @ 0x1401BD574 (sub_1401BD574.c)
 *     sub_1401BD68C @ 0x1401BD68C (sub_1401BD68C.c)
 *     IopBuildFullDriverPath @ 0x1403BB854 (IopBuildFullDriverPath.c)
 *     IopLoadDriver @ 0x1403BB9F8 (IopLoadDriver.c)
 *     IopGetDriverNameFromKeyNode @ 0x1403BC9F4 (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryValue @ 0x1403BCBA8 (IopGetRegistryValue.c)
 *     IopXxxControlFile @ 0x140410C30 (IopXxxControlFile.c)
 *     IopAllocateMiniCompletionPacket @ 0x14044EFEC (IopAllocateMiniCompletionPacket.c)
 *     NtFlushBuffersFileEx @ 0x14048F78C (NtFlushBuffersFileEx.c)
 *     NtRemoveIoCompletionEx @ 0x1404B049C (NtRemoveIoCompletionEx.c)
 *     IopQueryNameInternal @ 0x1404D8B10 (IopQueryNameInternal.c)
 *     IopGetRegistryKeyInformation @ 0x140507A9C (IopGetRegistryKeyInformation.c)
 *     IopCreateArcName @ 0x140522480 (IopCreateArcName.c)
 *     IoCreateDriver @ 0x140523034 (IoCreateDriver.c)
 *     IoCreateSystemThread @ 0x14053FAE8 (IoCreateSystemThread.c)
 *     IopInitializeBootLogging @ 0x1405F7ACC (IopInitializeBootLogging.c)
 *     IopRaiseHardError @ 0x1405F81F0 (IopRaiseHardError.c)
 *     IopSafebootDriverLoad @ 0x1405F8504 (IopSafebootDriverLoad.c)
 *     IopSendMessageToTrackService @ 0x1405F8664 (IopSendMessageToTrackService.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1405F8964 (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x1405FBBAC (NtQueryQuotaInformationFile.c)
 *     IoVerifierCheckForSettingsChange @ 0x1406B4744 (IoVerifierCheckForSettingsChange.c)
 *     VeAllocatePoolWithTagPriority @ 0x1406B5F18 (VeAllocatePoolWithTagPriority.c)
 *     ViGrowPoolAllocation @ 0x1406B67B0 (ViGrowPoolAllocation.c)
 *     VfInitVerifierComponents @ 0x1406B6B50 (VfInitVerifierComponents.c)
 *     VfPendingCheckForChanges @ 0x1406C0E1C (VfPendingCheckForChanges.c)
 *     VfFaultsInitPhase0 @ 0x1406C4BA0 (VfFaultsInitPhase0.c)
 *     VfKeCheckForChanges @ 0x1406C6B60 (VfKeCheckForChanges.c)
 *     IopCreateArcNamesCd @ 0x14074F274 (IopCreateArcNamesCd.c)
 *     IopCreateArcNames @ 0x1407509D8 (IopCreateArcNames.c)
 *     IopStoreArcInformation @ 0x140750ED8 (IopStoreArcInformation.c)
 *     IopInitializeBuiltinDriver @ 0x14075210C (IopInitializeBuiltinDriver.c)
 *     IopGetBootDiskInformationLite @ 0x14075F42C (IopGetBootDiskInformationLite.c)
 *     IopApplySystemPartitionProt @ 0x1407831D0 (IopApplySystemPartitionProt.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     MmResourcesAvailable @ 0x140041CA0 (MmResourcesAvailable.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1400C6E40 (ExpInsertPoolTrackerExpansion.c)
 *     EtwTracePool @ 0x140150068 (EtwTracePool.c)
 *     MmAllocateSpecialPool @ 0x1401DAD04 (MmAllocateSpecialPool.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     MiSessionPoolVector @ 0x1404065D0 (MiSessionPoolVector.c)
 */

PVOID __stdcall ExAllocatePoolWithTagPriority(
        POOL_TYPE PoolType,
        SIZE_T NumberOfBytes,
        ULONG Tag,
        EX_POOL_PRIORITY Priority)
{
  EX_POOL_PRIORITY v4; // edi
  ULONG v5; // ebp
  SIZE_T v6; // rsi
  __int64 v8; // rdx
  unsigned __int32 v10; // r14d
  void *SpecialPool; // r13
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // r15d
  unsigned int v16; // ebx
  int v17; // edx
  __int64 v18; // r12
  int v19; // eax
  int v20; // edx
  __int64 v21; // rax
  unsigned __int64 v22; // r14
  __int64 v23; // rdi
  __int64 v24; // r10
  unsigned int i; // r12d
  __int64 v26; // rax
  __int64 v27; // r11
  unsigned int v28; // r9d
  int *v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rax
  unsigned __int64 v32; // rdi
  unsigned __int64 v33; // r14
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // [rsp+30h] [rbp-58h]
  __int64 v37; // [rsp+38h] [rbp-50h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-48h] BYREF

  v4 = Priority;
  v5 = Tag;
  v6 = NumberOfBytes;
  if ( (Priority & 8) == 0 || NumberOfBytes > 0xFE0 )
    goto LABEL_2;
  v10 = PoolType;
  if ( (PoolType & 0x21) == 0x20 )
    v10 = PoolType & 0xFFFFFFDF;
  v5 = Tag & 0x7FFFFFFF;
  if ( (Tag & 0x7FFFFFFF) == 0 )
    v5 = 811884866;
  SpecialPool = (void *)MmAllocateSpecialPool(NumberOfBytes);
  if ( !SpecialPool )
  {
    v4 &= 0xFFFFFFF6;
LABEL_2:
    if ( v4 == HighPoolPriority
      || (PoolType & 2) != 0
      || (unsigned int)MmResourcesAvailable((unsigned int)PoolType, v6, (unsigned int)v4) )
    {
      return ExAllocatePoolWithTag(PoolType, v6, v5);
    }
    if ( v6 > 0xFE0 )
      return 0LL;
    if ( (PoolType & 1) != 0 && (PoolType & 0x20) != 0 )
    {
      v21 = MiSessionPoolVector(PoolType & 1, v8);
      v22 = *(_QWORD *)(v21 + 80);
      v23 = *(int *)(v21 + 192) + (__int64)*(int *)(v21 + 72);
    }
    else
    {
      v23 = 0LL;
      v22 = 0LL;
      v24 = PoolVector[PoolType & 1];
      if ( (PoolType & 1) != 0 )
      {
        v28 = 0;
        if ( (unsigned __int16)KeNumberNodes > 1u )
        {
          do
          {
            v34 = v28++;
            v35 = ExpPagedPoolDescriptor[v34];
            v23 += *(int *)(v35 + 72) + (__int64)*(int *)(v35 + 192);
            v22 += *(_QWORD *)(v35 + 80);
          }
          while ( v28 <= ExpNumberOfPagedPools );
        }
        else
        {
          v29 = (int *)(v24 + 72);
          do
          {
            v30 = v29[30];
            ++v28;
            v31 = *v29;
            v29 += 1104;
            v23 += v31 + v30;
            v22 += *((_QWORD *)v29 - 551);
          }
          while ( v28 <= ExpNumberOfPagedPools );
        }
      }
      else if ( ExpNumberOfNonPagedPools == 1 )
      {
        v23 = *(int *)(v24 + 192) + *(int *)(v24 + 72) + *(int *)(v24 + 4608) + (__int64)*(int *)(v24 + 4488);
        v22 = *(_QWORD *)(v24 + 80) + *(_QWORD *)(v24 + 4496);
      }
      else
      {
        for ( i = 0;
              i < ExpNumberOfNonPagedPools;
              v23 += *(int *)(v27 + 72) + *(int *)(v27 + 4608) + (__int64)*(int *)(v27 + 4488) + *(int *)(v27 + 192) )
        {
          v26 = i++;
          v27 = ExpNonPagedPoolDescriptor[v26];
          v22 += *(_QWORD *)(v27 + 80) + *(_QWORD *)(v27 + 4496);
        }
      }
    }
    v32 = v23 | 1;
    v33 = v22 >> 12;
    if ( v33 > v32 )
      v33 = v32;
    if ( (unsigned int)(100 * v33 / v32) < 0x50 )
      return ExAllocatePoolWithTag(PoolType, v6, v5);
    else
      return 0LL;
  }
  if ( (PoolType & 0x40) != 0 )
    v6 -= 8LL;
  if ( v5 == PoolHitTag )
    __debugbreak();
  v12 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    v12 = EtwTracePool(3616, v10, v5, (_DWORD)SpecialPool, v6);
  if ( (v10 & 0x20) != 0 )
  {
    v14 = ExpSessionPoolTrackTable;
    v15 = ExpSessionPoolTrackTableMask;
    v13 = ExpSessionPoolTrackTableSize;
  }
  else
  {
    LODWORD(v12) = KeGetPcr()->Prcb.Number;
    v13 = PoolTrackTableSize;
    v14 = (__int64)*(&ExPoolTagTables + v12);
    v15 = PoolTrackTableMask;
  }
  v37 = v13;
  v36 = v14;
  v16 = v15 & ((40543 * v5) ^ ((40543 * (unsigned __int64)v5) >> 32));
  v17 = v16;
  while ( 1 )
  {
    v18 = 40LL * v16;
    v19 = *(_DWORD *)(v18 + v14);
    if ( v19 == v5 )
      break;
    if ( v19 )
    {
LABEL_34:
      v16 = v15 & (v16 + 1);
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
        *(_DWORD *)(v18 + v14) = v20;
        v17 = v15 & ((40543 * v5) ^ ((40543 * (unsigned __int64)v5) >> 32));
      }
      else
      {
        v17 = v15 & ((40543 * v5) ^ ((40543 * (unsigned __int64)v5) >> 32));
LABEL_28:
        if ( v16 == v13 - 1 )
          goto LABEL_34;
        if ( (v10 & 0x20) != 0 )
        {
          _InterlockedCompareExchange((volatile signed __int32 *)(v18 + v14), v5, 0);
        }
        else
        {
          KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
          if ( !*(_DWORD *)(v18 + PoolTrackTable) )
          {
            *(_DWORD *)(v18 + PoolTrackTable) = v5;
            *(_DWORD *)(v18 + v36) = v5;
          }
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          v13 = v37;
          v14 = v36;
          v17 = v15 & ((40543 * v5) ^ ((40543 * (unsigned __int64)v5) >> 32));
        }
      }
    }
  }
  if ( (v10 & 1) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v18 + v14 + 24));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + v14 + 32), v6);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(v18 + v14 + 4));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + v14 + 16), v6);
  }
LABEL_39:
  _InterlockedIncrement(&ExpSpecialAllocations);
  return SpecialPool;
}
