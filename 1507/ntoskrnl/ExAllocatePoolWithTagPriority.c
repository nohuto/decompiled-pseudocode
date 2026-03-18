/*
 * XREFs of ExAllocatePoolWithTagPriority @ 0x140013F48
 * Callers:
 *     IopBuildDeviceIoControlRequest @ 0x140006F40 (IopBuildDeviceIoControlRequest.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140007270 (IopBuildAsynchronousFsdRequest.c)
 *     IopSetLockOperationProcess @ 0x14006DB64 (IopSetLockOperationProcess.c)
 *     NtSetInformationFile @ 0x14006DCE0 (NtSetInformationFile.c)
 *     IopGetSetSpecificExtension @ 0x14007123C (IopGetSetSpecificExtension.c)
 *     IopAllocateFileObjectExtension @ 0x140071760 (IopAllocateFileObjectExtension.c)
 *     IoAllocateWorkItem @ 0x14011B734 (IoAllocateWorkItem.c)
 *     IoQueryFullDriverPath @ 0x1401F70FC (IoQueryFullDriverPath.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x1401F737C (IopAdjustFileObjectKeepAliveCount.c)
 *     IopTrackLink @ 0x14040C918 (IopTrackLink.c)
 *     IopQueryNameInternal @ 0x140426C40 (IopQueryNameInternal.c)
 *     IopAllocateMiniCompletionPacket @ 0x14042D3D0 (IopAllocateMiniCompletionPacket.c)
 *     NtQueryVolumeInformationFile @ 0x140457400 (NtQueryVolumeInformationFile.c)
 *     NtFlushBuffersFileEx @ 0x140459AD0 (NtFlushBuffersFileEx.c)
 *     IopParseDevice @ 0x14048B640 (IopParseDevice.c)
 *     IopXxxControlFile @ 0x14048DB80 (IopXxxControlFile.c)
 *     NtReadFile @ 0x14048EFE0 (NtReadFile.c)
 *     NtQueryInformationFile @ 0x140490C50 (NtQueryInformationFile.c)
 *     NtLockFile @ 0x1404A4FE4 (NtLockFile.c)
 *     BuildQueryDirectoryIrp @ 0x1404BC130 (BuildQueryDirectoryIrp.c)
 *     NtWriteFile @ 0x1404BCA70 (NtWriteFile.c)
 *     IopGetDriverNameFromKeyNode @ 0x1404E76EC (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryValue @ 0x1404E79C8 (IopGetRegistryValue.c)
 *     NtQueryEaFile @ 0x140534134 (NtQueryEaFile.c)
 *     IopUnloadDriver @ 0x140539658 (IopUnloadDriver.c)
 *     NtUnlockFile @ 0x14053C750 (NtUnlockFile.c)
 *     NtNotifyChangeDirectoryFile @ 0x14053E7A0 (NtNotifyChangeDirectoryFile.c)
 *     NtWriteFileGather @ 0x140540320 (NtWriteFileGather.c)
 *     NtRemoveIoCompletionEx @ 0x1405432F8 (NtRemoveIoCompletionEx.c)
 *     NtReadFileScatter @ 0x140549CBC (NtReadFileScatter.c)
 *     NtSetVolumeInformationFile @ 0x14055F21C (NtSetVolumeInformationFile.c)
 *     NtLoadDriver @ 0x14057157C (NtLoadDriver.c)
 *     IopBuildFullDriverPath @ 0x140572CFC (IopBuildFullDriverPath.c)
 *     IopLoadDriver @ 0x140572EA0 (IopLoadDriver.c)
 *     IopErrorLogThread @ 0x14057B2A4 (IopErrorLogThread.c)
 *     IopGetRegistryKeyInformation @ 0x14057E268 (IopGetRegistryKeyInformation.c)
 *     IopCreateArcName @ 0x14058ED40 (IopCreateArcName.c)
 *     IoCreateDriver @ 0x1405900A4 (IoCreateDriver.c)
 *     IoCreateSystemThread @ 0x1405B2B7C (IoCreateSystemThread.c)
 *     IopInitializeBootLogging @ 0x140671954 (IopInitializeBootLogging.c)
 *     IopRaiseHardError @ 0x140672188 (IopRaiseHardError.c)
 *     IopSafebootDriverLoad @ 0x14067249C (IopSafebootDriverLoad.c)
 *     IopSendMessageToTrackService @ 0x1406725FC (IopSendMessageToTrackService.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1406728FC (IopSetEaOrQuotaInformationFile.c)
 *     IopValidateJunctionTarget @ 0x14067350C (IopValidateJunctionTarget.c)
 *     NtSetEaFile @ 0x140675B58 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x140676310 (NtQueryQuotaInformationFile.c)
 *     IopErrorLogQueueRequest @ 0x140678964 (IopErrorLogQueueRequest.c)
 *     IopEnumerateEnvironmentVariablesTrEE @ 0x140678EC0 (IopEnumerateEnvironmentVariablesTrEE.c)
 *     IopGetEnvironmentVariableSysEnv @ 0x1406793EC (IopGetEnvironmentVariableSysEnv.c)
 *     IopGetEnvironmentVariableTrEE @ 0x140679594 (IopGetEnvironmentVariableTrEE.c)
 *     IopSetEnvironmentVariableSysEnv @ 0x140679BBC (IopSetEnvironmentVariableSysEnv.c)
 *     IopSetEnvironmentVariableTrEE @ 0x140679CEC (IopSetEnvironmentVariableTrEE.c)
 *     IoVerifierCheckForSettingsChange @ 0x140734744 (IoVerifierCheckForSettingsChange.c)
 *     VeAllocatePoolWithTagPriority @ 0x140736208 (VeAllocatePoolWithTagPriority.c)
 *     ViGrowPoolAllocation @ 0x140736AA0 (ViGrowPoolAllocation.c)
 *     VfInitVerifierComponents @ 0x140736E40 (VfInitVerifierComponents.c)
 *     VfPendingCheckForChanges @ 0x14074265C (VfPendingCheckForChanges.c)
 *     VfKeCheckForChanges @ 0x140749A04 (VfKeCheckForChanges.c)
 *     IopCreateArcNamesCd @ 0x1407B5E18 (IopCreateArcNamesCd.c)
 *     IopCreateArcNames @ 0x1407B5FE8 (IopCreateArcNames.c)
 *     IopInitializeBuiltinDriver @ 0x1407B91D4 (IopInitializeBuiltinDriver.c)
 *     IopGetBootDiskInformationLite @ 0x1407CDCA8 (IopGetBootDiskInformationLite.c)
 *     IopStoreArcInformation @ 0x1407E19C0 (IopStoreArcInformation.c)
 *     IopApplySystemPartitionProt @ 0x1407F9954 (IopApplySystemPartitionProt.c)
 * Callees:
 *     MmResourcesAvailable @ 0x140013FD0 (MmResourcesAvailable.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1400FF2B0 (ExpInsertPoolTrackerExpansion.c)
 *     EtwTracePool @ 0x14017E810 (EtwTracePool.c)
 *     MmAllocateSpecialPool @ 0x14021F6C4 (MmAllocateSpecialPool.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MiSessionPoolVector @ 0x14048B620 (MiSessionPoolVector.c)
 */

PVOID __stdcall ExAllocatePoolWithTagPriority(
        POOL_TYPE PoolType,
        SIZE_T NumberOfBytes,
        ULONG Tag,
        EX_POOL_PRIORITY Priority)
{
  __int64 v4; // rbx
  EX_POOL_PRIORITY v5; // edi
  SIZE_T v7; // rbp
  unsigned __int32 v10; // r12d
  ULONG v11; // r14d
  __int64 v12; // rax
  int v13; // edx
  __int64 v14; // r9
  __int64 v15; // rsi
  unsigned int v16; // r15d
  unsigned int v17; // r8d
  int v18; // eax
  int v19; // r8d
  __int64 v20; // rax
  unsigned __int64 v21; // rdi
  __int64 v22; // r10
  unsigned int i; // r12d
  __int64 v24; // rax
  __int64 v25; // r11
  unsigned int v26; // r9d
  int *v27; // r8
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // r8
  int v32; // [rsp+30h] [rbp-58h]
  __int64 v33; // [rsp+38h] [rbp-50h]
  void *SpecialPool; // [rsp+40h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-40h] BYREF
  unsigned int v36; // [rsp+A8h] [rbp+20h]

  v4 = 0LL;
  v5 = Priority;
  v7 = NumberOfBytes;
  if ( (Priority & 8) == 0 || NumberOfBytes > 0xFE0 )
    goto LABEL_2;
  v10 = PoolType;
  if ( (PoolType & 0x21) == 0x20 )
    v10 = PoolType & 0xFFFFFFDF;
  SpecialPool = (void *)MmAllocateSpecialPool(NumberOfBytes);
  if ( !SpecialPool )
  {
    v5 &= 0xFFFFFFF6;
LABEL_2:
    if ( v5 == HighPoolPriority
      || (PoolType & 2) != 0
      || (unsigned int)MmResourcesAvailable((unsigned int)PoolType, v7, (unsigned int)v5) )
    {
      return ExAllocatePoolWithTag(PoolType, v7, Tag);
    }
    if ( v7 > 0xFE0 )
      return 0LL;
    if ( (PoolType & 1) != 0 && (PoolType & 0x20) != 0 )
    {
      v20 = MiSessionPoolVector();
      v21 = *(_QWORD *)(v20 + 80);
      v4 = *(int *)(v20 + 192) + (__int64)*(int *)(v20 + 72);
    }
    else
    {
      v21 = 0LL;
      v22 = PoolVector[PoolType & 1];
      if ( (PoolType & 1) != 0 )
      {
        v26 = 0;
        if ( (unsigned __int16)KeNumberNodes > 1u )
        {
          do
          {
            v30 = v26++;
            v31 = ExpPagedPoolDescriptor[v30];
            v4 += *(int *)(v31 + 72) + (__int64)*(int *)(v31 + 192);
            v21 += *(_QWORD *)(v31 + 80);
          }
          while ( v26 <= ExpNumberOfPagedPools );
        }
        else
        {
          v27 = (int *)(v22 + 72);
          do
          {
            ++v26;
            v4 += *v27 + (__int64)v27[30];
            v21 += *((_QWORD *)v27 + 1);
            v27 += 1104;
          }
          while ( v26 <= ExpNumberOfPagedPools );
        }
      }
      else if ( ExpNumberOfNonPagedPools == 1 )
      {
        v4 = *(int *)(v22 + 192) + *(int *)(v22 + 72) + *(int *)(v22 + 4608) + (__int64)*(int *)(v22 + 4488);
        v21 = *(_QWORD *)(v22 + 80) + *(_QWORD *)(v22 + 4496);
      }
      else
      {
        for ( i = 0;
              i < ExpNumberOfNonPagedPools;
              v4 += *(int *)(v25 + 72) + *(int *)(v25 + 4608) + (__int64)*(int *)(v25 + 4488) + *(int *)(v25 + 192) )
        {
          v24 = i++;
          v25 = ExpNonPagedPoolDescriptor[v24];
          v21 += *(_QWORD *)(v25 + 80) + *(_QWORD *)(v25 + 4496);
        }
      }
    }
    v28 = v4 | 1;
    v29 = v21 >> 12;
    if ( v29 > v28 )
      v29 = v28;
    if ( (unsigned int)(100 * v29 / v28) < 0x50 )
      return ExAllocatePoolWithTag(PoolType, v7, Tag);
    else
      return 0LL;
  }
  if ( (PoolType & 0x40) != 0 )
    v7 -= 8LL;
  v11 = Tag & 0x7FFFFFFF;
  if ( v11 == PoolHitTag )
    __debugbreak();
  v12 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    v12 = EtwTracePool(3616, v10, v11, (_DWORD)SpecialPool, v7);
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
  v33 = v14;
  v32 = v13;
  v16 = v13 & ((40543 * v11) ^ ((40543 * (unsigned __int64)v11) >> 32));
  v17 = v16;
  v36 = v16;
  while ( 1 )
  {
    v18 = *(_DWORD *)(v15 + 40LL * v16);
    if ( v18 == v11 )
      break;
    if ( v18 )
      goto LABEL_33;
    if ( (v10 & 0x20) == 0 )
    {
      v19 = *(_DWORD *)(PoolTrackTable + 40LL * v16);
      if ( v19 )
      {
        *(_DWORD *)(v15 + 40LL * v16) = v19;
        goto LABEL_26;
      }
      v17 = v36;
    }
    if ( v16 == v14 - 1 )
    {
LABEL_33:
      v16 = v13 & (v16 + 1);
      if ( v16 == v17 )
      {
        ExpInsertPoolTrackerExpansion(v11, v7, v10);
        goto LABEL_38;
      }
    }
    else if ( (v10 & 0x20) != 0 )
    {
      _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 40LL * v16), v11, 0);
    }
    else
    {
      KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
      if ( !*(_DWORD *)(PoolTrackTable + 40LL * v16) )
      {
        *(_DWORD *)(PoolTrackTable + 40LL * v16) = v11;
        *(_DWORD *)(v15 + 40LL * v16) = v11;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v13 = v32;
      v14 = v33;
LABEL_26:
      v17 = v36;
    }
  }
  if ( (v10 & 1) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v15 + 40LL * v16 + 24));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 40LL * v16 + 32), v7);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(v15 + 40LL * v16 + 4));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 40LL * v16 + 16), v7);
  }
LABEL_38:
  _InterlockedIncrement(&ExpSpecialAllocations);
  return SpecialPool;
}
