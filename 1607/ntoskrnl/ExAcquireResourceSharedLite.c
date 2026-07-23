/*
 * XREFs of ExAcquireResourceSharedLite @ 0x140068130
 * Callers:
 *     SepCanTokenMatchAllPackageSid @ 0x14000DD40 (SepCanTokenMatchAllPackageSid.c)
 *     SeSecurityAttributePresent @ 0x14000DE80 (SeSecurityAttributePresent.c)
 *     SeAccessCheckByType @ 0x14005FA70 (SeAccessCheckByType.c)
 *     SepMandatoryIntegrityCheck @ 0x1400631D0 (SepMandatoryIntegrityCheck.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x140065520 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     SepAcquireOrderedReadLocks @ 0x14007F890 (SepAcquireOrderedReadLocks.c)
 *     MiAcquireResourceSharedLite @ 0x1400883F0 (MiAcquireResourceSharedLite.c)
 *     SepTrustLevelCheck @ 0x14008D160 (SepTrustLevelCheck.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x140090650 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     IopCreateSecurityCheck @ 0x1400A9158 (IopCreateSecurityCheck.c)
 *     LdrpKrnGetDataTableEntry @ 0x1400F80A8 (LdrpKrnGetDataTableEntry.c)
 *     McGenControlCallbackV2 @ 0x1401478CC (McGenControlCallbackV2.c)
 *     IoFillTriageDumpBuffer @ 0x1401C5708 (IoFillTriageDumpBuffer.c)
 *     KeCapturePersistentThreadState @ 0x1401C80E8 (KeCapturePersistentThreadState.c)
 *     SepRmAcquireGlobalSaclReadLock @ 0x14021A2B8 (SepRmAcquireGlobalSaclReadLock.c)
 *     SeTokenGetRedirectionTrustPolicy @ 0x14021A474 (SeTokenGetRedirectionTrustPolicy.c)
 *     SeSetSecurityAttributesTokenEx @ 0x14021A6A8 (SeSetSecurityAttributesTokenEx.c)
 *     SepGetProcUniqueLuidAndIndexFromToken @ 0x14021A8A8 (SepGetProcUniqueLuidAndIndexFromToken.c)
 *     SeQueryServerSiloToken @ 0x1403E2044 (SeQueryServerSiloToken.c)
 *     IopMountVolume @ 0x1403ED8DC (IopMountVolume.c)
 *     PiGetRelatedDevice @ 0x1403F27F4 (PiGetRelatedDevice.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1403F3058 (PnpAcquireDependencyRelationsLock.c)
 *     PpDevNodeLockTree @ 0x1403F397C (PpDevNodeLockTree.c)
 *     CmDeleteValueKey @ 0x1403F9CF4 (CmDeleteValueKey.c)
 *     CmpLockHiveFlusherShared @ 0x1403FC424 (CmpLockHiveFlusherShared.c)
 *     CmDeleteKey @ 0x1403FE238 (CmDeleteKey.c)
 *     SeQueryUserSidToken @ 0x1403FEB00 (SeQueryUserSidToken.c)
 *     CmQueryMultipleValueKey @ 0x140401114 (CmQueryMultipleValueKey.c)
 *     CmpGetKeyNodeForKcb @ 0x1404017F0 (CmpGetKeyNodeForKcb.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x140401D18 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmSetValueKey @ 0x140402670 (CmSetValueKey.c)
 *     CmpLockRegistry @ 0x140403660 (CmpLockRegistry.c)
 *     SeQuerySecurityAttributesToken @ 0x14040DDE0 (SeQuerySecurityAttributesToken.c)
 *     NtQuerySecurityAttributesToken @ 0x14040E2E0 (NtQuerySecurityAttributesToken.c)
 *     NtQueryInformationToken @ 0x14040E6D0 (NtQueryInformationToken.c)
 *     NtDuplicateToken @ 0x140411590 (NtDuplicateToken.c)
 *     SepDuplicateToken @ 0x140411A90 (SepDuplicateToken.c)
 *     ObpCreateHandle @ 0x140418AE0 (ObpCreateHandle.c)
 *     RtlpNewSecurityObject @ 0x14041AE00 (RtlpNewSecurityObject.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14042AAEC (FsRtlAcquireFileForCcFlushEx.c)
 *     CmpCreateKeyControlBlock @ 0x1404334E0 (CmpCreateKeyControlBlock.c)
 *     CmEnumerateValueKey @ 0x140436E40 (CmEnumerateValueKey.c)
 *     CmEnumerateKey @ 0x140437F90 (CmEnumerateKey.c)
 *     SeQueryInformationToken @ 0x140438EC0 (SeQueryInformationToken.c)
 *     CmQueryKey @ 0x1404396E0 (CmQueryKey.c)
 *     CmpDeleteKeyObject @ 0x14043B2D0 (CmpDeleteKeyObject.c)
 *     CmQueryValueKey @ 0x14043E2F0 (CmQueryValueKey.c)
 *     CmpVEExecuteOpenLogic @ 0x14043F180 (CmpVEExecuteOpenLogic.c)
 *     IopParseDevice @ 0x14043F7C0 (IopParseDevice.c)
 *     AlpcpExposeTokenAttribute @ 0x140449560 (AlpcpExposeTokenAttribute.c)
 *     SeLockSubjectContext @ 0x14044CA80 (SeLockSubjectContext.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 *     NtQueryInformationJobObject @ 0x140465EA0 (NtQueryInformationJobObject.c)
 *     PspGetNextChildJob @ 0x1404676C4 (PspGetNextChildJob.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140467790 (PspEnforceLimitsJobPostCallback.c)
 *     PspChargeJobWakeCounter @ 0x140467B60 (PspChargeJobWakeCounter.c)
 *     PspLockRootJobShared @ 0x140467DC8 (PspLockRootJobShared.c)
 *     PspCallJobHierarchyCallbacks @ 0x140467E28 (PspCallJobHierarchyCallbacks.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x140468AE0 (PspQueryJobHierarchyAccountingInformation.c)
 *     SeIsTokenAssignableToProcess @ 0x1404753D4 (SeIsTokenAssignableToProcess.c)
 *     NtSetInformationToken @ 0x1404786A0 (NtSetInformationToken.c)
 *     SepFilterToken @ 0x140479EC4 (SepFilterToken.c)
 *     CmpInitializeHive @ 0x14047DED8 (CmpInitializeHive.c)
 *     CmpReorganizeHive @ 0x14047E780 (CmpReorganizeHive.c)
 *     IopReleaseDeviceResources @ 0x1404844F8 (IopReleaseDeviceResources.c)
 *     PipProcessStartPhase3 @ 0x140488964 (PipProcessStartPhase3.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14048B010 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1404A1110 (SepAccessCheckAndAuditAlarm.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1404AA364 (ExpGetSystemFirmwareTableInformation.c)
 *     WmipAcquireSmbiosLockShared @ 0x1404AA68C (WmipAcquireSmbiosLockShared.c)
 *     SeQuerySessionIdToken @ 0x1404B1528 (SeQuerySessionIdToken.c)
 *     NtMapCMFModule @ 0x1404B3BEC (NtMapCMFModule.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x1404BED88 (PspQueryJobHierarchyProcessIdList.c)
 *     PspValidateJobAffinityState @ 0x1404C3034 (PspValidateJobAffinityState.c)
 *     IopSetDeviceSecurityDescriptor @ 0x1404C913C (IopSetDeviceSecurityDescriptor.c)
 *     PspSetProcessPriorityClass @ 0x1404C9A88 (PspSetProcessPriorityClass.c)
 *     PipGenerateContainerID @ 0x1404CD548 (PipGenerateContainerID.c)
 *     PnpGetDevicePropertyData @ 0x1404DA59C (PnpGetDevicePropertyData.c)
 *     SeQuerySessionIdTokenEx @ 0x1404DD050 (SeQuerySessionIdTokenEx.c)
 *     PiDmGetObject @ 0x1404E1F90 (PiDmGetObject.c)
 *     PiPnpRtlOperationListAcquireSharedLock @ 0x1404E2AC0 (PiPnpRtlOperationListAcquireSharedLock.c)
 *     PiDmObjectManagerAcquireSharedLock @ 0x1404E450C (PiDmObjectManagerAcquireSharedLock.c)
 *     PiPnpRtlDisableRemoveOperationDispatch @ 0x1404E4B54 (PiPnpRtlDisableRemoveOperationDispatch.c)
 *     NtSetInformationThread @ 0x1404F1560 (NtSetInformationThread.c)
 *     PspInsertThread @ 0x1404F9B40 (PspInsertThread.c)
 *     IopGetSetSecurityObject @ 0x1405044D0 (IopGetSetSecurityObject.c)
 *     PiCreateDeviceInstanceKey @ 0x14050D484 (PiCreateDeviceInstanceKey.c)
 *     PiQueryResourceRequirements @ 0x14050E808 (PiQueryResourceRequirements.c)
 *     PiQueryAndAllocateBootResources @ 0x14050EC10 (PiQueryAndAllocateBootResources.c)
 *     PiProcessNewDeviceNode @ 0x140510338 (PiProcessNewDeviceNode.c)
 *     CmpInitCmRM @ 0x140516F64 (CmpInitCmRM.c)
 *     CmpTrimHive @ 0x140519464 (CmpTrimHive.c)
 *     SepValidOwnerSubjectContext @ 0x14051AF30 (SepValidOwnerSubjectContext.c)
 *     SepValidLabelSubjectContext @ 0x14051B374 (SepValidLabelSubjectContext.c)
 *     CmpLoadHiveThread @ 0x14054D948 (CmpLoadHiveThread.c)
 *     IoCreateDriver @ 0x1405518C4 (IoCreateDriver.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140556210 (IopWriteAllocatedResourcesToRegistry.c)
 *     SepGetLogonSessionAccountInfo @ 0x14056B904 (SepGetLogonSessionAccountInfo.c)
 *     PipMakeGloballyUniqueId @ 0x14056FB04 (PipMakeGloballyUniqueId.c)
 *     PnpDriverLoadingFailed @ 0x14057FD04 (PnpDriverLoadingFailed.c)
 *     CmSetKeyFlags @ 0x1405FE410 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1405FE8A8 (CmSetLastWriteTimeKey.c)
 *     HvFoldBackDirtyData @ 0x140605EF4 (HvFoldBackDirtyData.c)
 *     CmRestoreKey @ 0x14060C300 (CmRestoreKey.c)
 *     FsRtlCopyRead @ 0x14061D480 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x14061D6EC (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x14061DE8C (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14061E0CC (FsRtlPrepareMdlWriteDev.c)
 *     IopInitializeBootLogging @ 0x140621940 (IopInitializeBootLogging.c)
 *     IopInvalidateVolumesForDevice @ 0x140621B70 (IopInvalidateVolumesForDevice.c)
 *     PnpShutdownDevices @ 0x140629AD4 (PnpShutdownDevices.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x14062E388 (PnpGetDeviceInterfacePropertyData.c)
 *     PsSwapProcessWorkingSet @ 0x14067D570 (PsSwapProcessWorkingSet.c)
 *     PspSetProcessAffinitySafe @ 0x14067DD40 (PspSetProcessAffinitySafe.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x14067E48C (PspCompleteServerSiloShutdownDeferred.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x1406806F8 (PspQueryJobHierarchyInterferenceCount.c)
 *     RtlPcToFilePath @ 0x14068C12C (RtlPcToFilePath.c)
 *     SepIdAssignableAsGroup @ 0x14069122C (SepIdAssignableAsGroup.c)
 *     SeGetTokenControlInformation @ 0x140692C98 (SeGetTokenControlInformation.c)
 *     PnpGetDeviceInstancePropertyData @ 0x1406E5B08 (PnpGetDeviceInstancePropertyData.c)
 *     VfDriverEnableVerifier @ 0x140704AF8 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x140704C74 (VfDriverEnableVerifierForAll.c)
 * Callees:
 *     ExpWaitForResource @ 0x14005C9B0 (ExpWaitForResource.c)
 *     ExpUnlockResource @ 0x140066870 (ExpUnlockResource.c)
 *     ExpBoostIoAfterAcquire @ 0x14006B1F0 (ExpBoostIoAfterAcquire.c)
 *     ExpExpandResourceOwnerTable @ 0x1400969CC (ExpExpandResourceOwnerTable.c)
 *     PerfLogExecutiveResourceAcquire @ 0x140227E70 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x14022832C (PerfLogExecutiveResourceWait.c)
 *     EXP_LOCK_RESOURCE @ 0x14022D6D0 (EXP_LOCK_RESOURCE.c)
 *     EXP_UNLOCK_RESOURCE @ 0x14022D744 (EXP_UNLOCK_RESOURCE.c)
 */

BOOLEAN __stdcall ExAcquireResourceSharedLite(PERESOURCE Resource, BOOLEAN Wait)
{
  bool v3; // r14
  struct _KTHREAD *CurrentThread; // rdi
  ERESOURCE_THREAD OwnerThread; // rcx
  __int64 ActiveEntries; // r9
  POWNER_ENTRY v8; // rax
  OWNER_ENTRY *v9; // rcx
  OWNER_ENTRY *p_OwnerEntry; // rax
  _BOOL8 v11; // rsi
  unsigned __int64 v12; // r8
  OWNER_ENTRY *v13; // rdx
  POWNER_ENTRY OwnerTable; // r11
  unsigned __int64 v15; // r10
  OWNER_ENTRY *v16; // r9
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 TableSize; // edi
  __int64 v18; // rcx
  ULONG v19; // edi
  ULONG v20; // edi
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v24; // rcx
  int v25; // ecx
  ULONG v26; // eax
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 v27; // ecx
  __int64 v28; // rcx
  ULONG v29; // eax
  _BYTE v30[24]; // [rsp+20h] [rbp-40h] BYREF
  PVOID SharedWaiters; // [rsp+38h] [rbp-28h] BYREF
  __int64 v32; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v33[3]; // [rsp+48h] [rbp-18h] BYREF

  v3 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x63CCu);
  CurrentThread = KeGetCurrentThread();
  EXP_LOCK_RESOURCE(Resource, v30);
  while ( 1 )
  {
    while ( 1 )
    {
      ActiveEntries = Resource->ActiveEntries;
      if ( !(_DWORD)ActiveEntries )
      {
        v29 = Resource->OwnerEntry.TableSize & 7;
        Resource->OwnerEntry.OwnerThread = (ERESOURCE_THREAD)CurrentThread;
        Resource->OwnerEntry.TableSize = v29 | 8;
        goto LABEL_48;
      }
      if ( (Resource->ReservedLowFlags & 0x80u) != 0 )
        break;
      OwnerThread = Resource->OwnerEntry.OwnerThread;
      p_OwnerEntry = &Resource->OwnerEntry;
      v11 = Resource->NumberOfExclusiveWaiters != 0;
      if ( (struct _KTHREAD *)OwnerThread != CurrentThread )
      {
        v12 = 0LL;
        v13 = 0LL;
        if ( OwnerThread )
        {
          v12 = 1LL;
        }
        else if ( !Resource->NumberOfExclusiveWaiters )
        {
          v13 = &Resource->OwnerEntry;
        }
        OwnerTable = Resource->OwnerTable;
        p_OwnerEntry = OwnerTable;
        v15 = ActiveEntries + Resource->NumberOfSharedWaiters;
        if ( !OwnerTable )
        {
          v16 = 0LL;
LABEL_27:
          if ( !v13 )
          {
            if ( p_OwnerEntry >= v16 )
              goto LABEL_9;
            v13 = p_OwnerEntry;
            if ( !p_OwnerEntry )
              goto LABEL_9;
          }
          OwnerThread = v13 - OwnerTable;
          KeGetCurrentThread()->SchedulerApc.SpareByte0 = OwnerThread;
          p_OwnerEntry = v13;
          goto LABEL_32;
        }
        v16 = &OwnerTable[OwnerTable->TableSize];
        p_OwnerEntry = OwnerTable + 1;
        if ( v12 >= v15 )
          goto LABEL_27;
        while ( (struct _KTHREAD *)p_OwnerEntry->OwnerThread != CurrentThread )
        {
          if ( p_OwnerEntry->OwnerThread )
          {
            if ( ++v12 == v15 )
            {
              ++p_OwnerEntry;
              goto LABEL_27;
            }
          }
          else if ( !v13 )
          {
            v13 = p_OwnerEntry;
          }
          if ( ++p_OwnerEntry == v16 )
            goto LABEL_27;
        }
        OwnerThread = (ERESOURCE_THREAD)KeGetCurrentThread();
        *(_BYTE *)(OwnerThread + 649) = p_OwnerEntry - OwnerTable;
      }
LABEL_32:
      if ( p_OwnerEntry )
      {
        if ( (struct _KTHREAD *)p_OwnerEntry->OwnerThread == CurrentThread )
        {
          TableSize = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)p_OwnerEntry->TableSize;
          v18 = *(_BYTE *)&TableSize & 7;
          v19 = v18 ^ ((*(_DWORD *)&TableSize & 0xFFFFFFF8) + 8);
          p_OwnerEntry->TableSize = v19;
          v20 = v19 >> 3;
          EXP_UNLOCK_RESOURCE(v18, v30);
          __incgsdword(0x63D8u);
          __incgsdword(0x63A4u);
          if ( !v3 )
            return 1;
          v21 = v20;
          v22 = 65617LL;
          goto LABEL_52;
        }
        if ( v11 )
          goto LABEL_37;
        v25 = p_OwnerEntry->TableSize & 7;
        p_OwnerEntry->OwnerThread = (ERESOURCE_THREAD)CurrentThread;
        OwnerThread = v25 | 8u;
        p_OwnerEntry->TableSize = OwnerThread;
        v26 = Resource->ActiveEntries;
        if ( v26 )
        {
          Resource->ActiveEntries = v26 + 1;
LABEL_49:
          EXP_UNLOCK_RESOURCE(OwnerThread, v30);
          goto LABEL_50;
        }
LABEL_48:
        Resource->ActiveCount = 1;
        Resource->ActiveEntries = 1;
        goto LABEL_49;
      }
    }
    if ( (struct _KTHREAD *)Resource->OwnerEntry.OwnerThread == CurrentThread )
    {
      v24 = Resource->OwnerEntry.TableSize & 7 ^ ((Resource->OwnerEntry.TableSize & 0xFFFFFFF8) + 8);
      Resource->OwnerEntry.TableSize = v24;
      EXP_UNLOCK_RESOURCE(v24, v30);
      __incgsdword(0x63D0u);
      __incgsdword(0x63A4u);
      if ( !v3 )
        return 1;
      v22 = 65585LL;
      v21 = Resource->OwnerEntry.TableSize >> 3;
      goto LABEL_52;
    }
    v8 = Resource->OwnerTable;
    if ( v8 )
      break;
LABEL_9:
    ExpExpandResourceOwnerTable(Resource, v30);
  }
  v9 = &v8[v8->TableSize];
  p_OwnerEntry = v8 + 1;
  while ( p_OwnerEntry->OwnerThread )
  {
    if ( ++p_OwnerEntry == v9 )
      goto LABEL_9;
  }
  OwnerThread = (ERESOURCE_THREAD)KeGetCurrentThread();
  *(_BYTE *)(OwnerThread + 649) = (__int64)(unsigned int)((_DWORD)p_OwnerEntry - LODWORD(Resource->OwnerTable)) >> 4;
LABEL_37:
  if ( !Wait )
  {
    EXP_UNLOCK_RESOURCE(OwnerThread, v30);
    __incgsdword(0x63E0u);
    return 0;
  }
  v27 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)p_OwnerEntry->TableSize;
  p_OwnerEntry->OwnerThread = (ERESOURCE_THREAD)CurrentThread;
  v28 = *(_BYTE *)&v27 & 7 | 8u;
  p_OwnerEntry->TableSize = v28;
  ++Resource->NumberOfSharedWaiters;
  v32 = 0LL;
  v33[1] = v33;
  v33[0] = v33;
  SharedWaiters = Resource->SharedWaiters;
  Resource->SharedWaiters = &SharedWaiters;
  LOWORD(v32) = 1;
  BYTE2(v32) = 6;
  ExpUnlockResource(v28, (__int64)v30);
  __incgsdword(0x63DCu);
  if ( v3 )
    PerfLogExecutiveResourceWait(65604LL, Resource, 0LL);
  ExpWaitForResource((__int64)Resource, &v32);
  ExpBoostIoAfterAcquire(Resource, CurrentThread);
LABEL_50:
  __incgsdword(0x63D4u);
  __incgsdword(0x63A4u);
  if ( !v3 )
    return 1;
  v21 = 1LL;
  v22 = 65601LL;
LABEL_52:
  PerfLogExecutiveResourceAcquire(v22, Resource, v21, Resource->ContentionCount);
  return 1;
}
