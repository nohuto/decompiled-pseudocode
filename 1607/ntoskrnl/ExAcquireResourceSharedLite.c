/*
 * XREFs of ExAcquireResourceSharedLite @ 0x1400685B0
 * Callers:
 *     SepCanTokenMatchAllPackageSid @ 0x14000E1C0 (SepCanTokenMatchAllPackageSid.c)
 *     SeSecurityAttributePresent @ 0x14000E300 (SeSecurityAttributePresent.c)
 *     SeAccessCheckByType @ 0x14005FEF0 (SeAccessCheckByType.c)
 *     SepMandatoryIntegrityCheck @ 0x140063650 (SepMandatoryIntegrityCheck.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x1400659A0 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     SepAcquireOrderedReadLocks @ 0x14007F810 (SepAcquireOrderedReadLocks.c)
 *     MiAcquireResourceSharedLite @ 0x140086B00 (MiAcquireResourceSharedLite.c)
 *     SepTrustLevelCheck @ 0x14008DA00 (SepTrustLevelCheck.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x140090EF0 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     IopCreateSecurityCheck @ 0x1400AABD8 (IopCreateSecurityCheck.c)
 *     LdrpKrnGetDataTableEntry @ 0x1400FA31C (LdrpKrnGetDataTableEntry.c)
 *     McGenControlCallbackV2 @ 0x14014735C (McGenControlCallbackV2.c)
 *     IoFillTriageDumpBuffer @ 0x1401C5868 (IoFillTriageDumpBuffer.c)
 *     KeCapturePersistentThreadState @ 0x1401C8248 (KeCapturePersistentThreadState.c)
 *     SepRmAcquireGlobalSaclReadLock @ 0x14021A48C (SepRmAcquireGlobalSaclReadLock.c)
 *     SeTokenGetRedirectionTrustPolicy @ 0x14021A648 (SeTokenGetRedirectionTrustPolicy.c)
 *     SeSetSecurityAttributesTokenEx @ 0x14021A87C (SeSetSecurityAttributesTokenEx.c)
 *     SepGetProcUniqueLuidAndIndexFromToken @ 0x14021AA7C (SepGetProcUniqueLuidAndIndexFromToken.c)
 *     SeQueryServerSiloToken @ 0x1403E2044 (SeQueryServerSiloToken.c)
 *     IopMountVolume @ 0x1403EC2AC (IopMountVolume.c)
 *     PipProcessStartPhase3 @ 0x1403EEA60 (PipProcessStartPhase3.c)
 *     PiGetRelatedDevice @ 0x1403F3930 (PiGetRelatedDevice.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1403F4194 (PnpAcquireDependencyRelationsLock.c)
 *     PpDevNodeLockTree @ 0x1403F4AB8 (PpDevNodeLockTree.c)
 *     CmDeleteValueKey @ 0x1403FAE34 (CmDeleteValueKey.c)
 *     CmpLockHiveFlusherShared @ 0x1403FD564 (CmpLockHiveFlusherShared.c)
 *     CmDeleteKey @ 0x1403FF378 (CmDeleteKey.c)
 *     SeQueryUserSidToken @ 0x1403FFC40 (SeQueryUserSidToken.c)
 *     CmQueryMultipleValueKey @ 0x140402254 (CmQueryMultipleValueKey.c)
 *     CmpGetKeyNodeForKcb @ 0x140402930 (CmpGetKeyNodeForKcb.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x140402E58 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmSetValueKey @ 0x1404037B0 (CmSetValueKey.c)
 *     CmpLockRegistry @ 0x1404047A0 (CmpLockRegistry.c)
 *     SeQuerySecurityAttributesToken @ 0x14040EF20 (SeQuerySecurityAttributesToken.c)
 *     NtQuerySecurityAttributesToken @ 0x14040F420 (NtQuerySecurityAttributesToken.c)
 *     NtQueryInformationToken @ 0x14040F810 (NtQueryInformationToken.c)
 *     NtDuplicateToken @ 0x1404126D0 (NtDuplicateToken.c)
 *     SepDuplicateToken @ 0x140412BD0 (SepDuplicateToken.c)
 *     ObpCreateHandle @ 0x140419C20 (ObpCreateHandle.c)
 *     RtlpNewSecurityObject @ 0x14041BF40 (RtlpNewSecurityObject.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14042BC1C (FsRtlAcquireFileForCcFlushEx.c)
 *     CmpCreateKeyControlBlock @ 0x140434610 (CmpCreateKeyControlBlock.c)
 *     CmEnumerateValueKey @ 0x140437F70 (CmEnumerateValueKey.c)
 *     CmEnumerateKey @ 0x1404390C0 (CmEnumerateKey.c)
 *     SeQueryInformationToken @ 0x140439FF0 (SeQueryInformationToken.c)
 *     CmQueryKey @ 0x14043A810 (CmQueryKey.c)
 *     CmpDeleteKeyObject @ 0x14043C400 (CmpDeleteKeyObject.c)
 *     CmQueryValueKey @ 0x14043F420 (CmQueryValueKey.c)
 *     CmpVEExecuteOpenLogic @ 0x1404402B0 (CmpVEExecuteOpenLogic.c)
 *     IopParseDevice @ 0x1404408F0 (IopParseDevice.c)
 *     AlpcpExposeTokenAttribute @ 0x14044A690 (AlpcpExposeTokenAttribute.c)
 *     SeLockSubjectContext @ 0x14044DBB0 (SeLockSubjectContext.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     NtQueryInformationJobObject @ 0x140466FD0 (NtQueryInformationJobObject.c)
 *     PspGetNextChildJob @ 0x1404687F4 (PspGetNextChildJob.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1404688C0 (PspEnforceLimitsJobPostCallback.c)
 *     PspChargeJobWakeCounter @ 0x140468C90 (PspChargeJobWakeCounter.c)
 *     PspLockRootJobShared @ 0x140468EF8 (PspLockRootJobShared.c)
 *     PspCallJobHierarchyCallbacks @ 0x140468F58 (PspCallJobHierarchyCallbacks.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x140469C10 (PspQueryJobHierarchyAccountingInformation.c)
 *     SeIsTokenAssignableToProcess @ 0x140476504 (SeIsTokenAssignableToProcess.c)
 *     NtSetInformationToken @ 0x1404797D0 (NtSetInformationToken.c)
 *     SepFilterToken @ 0x14047AFF4 (SepFilterToken.c)
 *     CmpInitializeHive @ 0x14047F184 (CmpInitializeHive.c)
 *     CmpReorganizeHive @ 0x14047FA2C (CmpReorganizeHive.c)
 *     PiProcessNewDeviceNode @ 0x140487BC4 (PiProcessNewDeviceNode.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14048AD7C (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     CmpInitCmRM @ 0x14049EB58 (CmpInitCmRM.c)
 *     CmpTrimHive @ 0x1404A1058 (CmpTrimHive.c)
 *     SepValidOwnerSubjectContext @ 0x1404A2B30 (SepValidOwnerSubjectContext.c)
 *     SepValidLabelSubjectContext @ 0x1404A2F74 (SepValidLabelSubjectContext.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1404B6D30 (SepAccessCheckAndAuditAlarm.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1404BE634 (ExpGetSystemFirmwareTableInformation.c)
 *     WmipAcquireSmbiosLockShared @ 0x1404BE95C (WmipAcquireSmbiosLockShared.c)
 *     IopReleaseDeviceResources @ 0x1404C5E64 (IopReleaseDeviceResources.c)
 *     PiQueryAndAllocateBootResources @ 0x1404C881C (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x1404C90AC (PiQueryResourceRequirements.c)
 *     SeQuerySessionIdToken @ 0x1404CBAFC (SeQuerySessionIdToken.c)
 *     NtMapCMFModule @ 0x1404D014C (NtMapCMFModule.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x1404DB784 (PspQueryJobHierarchyProcessIdList.c)
 *     PspValidateJobAffinityState @ 0x1404DFA30 (PspValidateJobAffinityState.c)
 *     IopSetDeviceSecurityDescriptor @ 0x1404E67CC (IopSetDeviceSecurityDescriptor.c)
 *     PiCreateDeviceInstanceKey @ 0x1404E6D94 (PiCreateDeviceInstanceKey.c)
 *     PspSetProcessPriorityClass @ 0x1404E7514 (PspSetProcessPriorityClass.c)
 *     PipGenerateContainerID @ 0x1404EB3C4 (PipGenerateContainerID.c)
 *     PnpGetDevicePropertyData @ 0x1404F7610 (PnpGetDevicePropertyData.c)
 *     SeQuerySessionIdTokenEx @ 0x1404FA0C4 (SeQuerySessionIdTokenEx.c)
 *     PiDmGetObject @ 0x1404FF000 (PiDmGetObject.c)
 *     PiPnpRtlOperationListAcquireSharedLock @ 0x1404FFB30 (PiPnpRtlOperationListAcquireSharedLock.c)
 *     PiDmObjectManagerAcquireSharedLock @ 0x14050157C (PiDmObjectManagerAcquireSharedLock.c)
 *     PiPnpRtlDisableRemoveOperationDispatch @ 0x140501BC4 (PiPnpRtlDisableRemoveOperationDispatch.c)
 *     NtSetInformationThread @ 0x14050E5D0 (NtSetInformationThread.c)
 *     PspInsertThread @ 0x140516750 (PspInsertThread.c)
 *     IopGetSetSecurityObject @ 0x140521470 (IopGetSetSecurityObject.c)
 *     CmpLoadHiveThread @ 0x14054D5A8 (CmpLoadHiveThread.c)
 *     IoCreateDriver @ 0x140551384 (IoCreateDriver.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140555CD0 (IopWriteAllocatedResourcesToRegistry.c)
 *     SepGetLogonSessionAccountInfo @ 0x14056B3C4 (SepGetLogonSessionAccountInfo.c)
 *     PipMakeGloballyUniqueId @ 0x14056F5C4 (PipMakeGloballyUniqueId.c)
 *     PnpDriverLoadingFailed @ 0x14057F858 (PnpDriverLoadingFailed.c)
 *     CmSetKeyFlags @ 0x1405FE35C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1405FE7F4 (CmSetLastWriteTimeKey.c)
 *     HvFoldBackDirtyData @ 0x140605E40 (HvFoldBackDirtyData.c)
 *     CmRestoreKey @ 0x14060C24C (CmRestoreKey.c)
 *     FsRtlCopyRead @ 0x14061D3CC (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x14061D638 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x14061DDD8 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14061E018 (FsRtlPrepareMdlWriteDev.c)
 *     IopInitializeBootLogging @ 0x14062188C (IopInitializeBootLogging.c)
 *     IopInvalidateVolumesForDevice @ 0x140621ABC (IopInvalidateVolumesForDevice.c)
 *     PnpShutdownDevices @ 0x140629A20 (PnpShutdownDevices.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x14062E2D4 (PnpGetDeviceInterfacePropertyData.c)
 *     PsSwapProcessWorkingSet @ 0x14067D48C (PsSwapProcessWorkingSet.c)
 *     PspSetProcessAffinitySafe @ 0x14067DC5C (PspSetProcessAffinitySafe.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x14067E3A8 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x140680614 (PspQueryJobHierarchyInterferenceCount.c)
 *     RtlPcToFilePath @ 0x14068C048 (RtlPcToFilePath.c)
 *     SepIdAssignableAsGroup @ 0x140691148 (SepIdAssignableAsGroup.c)
 *     SeGetTokenControlInformation @ 0x140692BB4 (SeGetTokenControlInformation.c)
 *     PnpGetDeviceInstancePropertyData @ 0x1406E59D0 (PnpGetDeviceInstancePropertyData.c)
 *     VfDriverEnableVerifier @ 0x140704AC8 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x140704C44 (VfDriverEnableVerifierForAll.c)
 * Callees:
 *     ExpWaitForResource @ 0x14005CE30 (ExpWaitForResource.c)
 *     ExpUnlockResource @ 0x140066CF0 (ExpUnlockResource.c)
 *     ExpBoostIoAfterAcquire @ 0x14006B670 (ExpBoostIoAfterAcquire.c)
 *     ExpExpandResourceOwnerTable @ 0x1400971CC (ExpExpandResourceOwnerTable.c)
 *     PerfLogExecutiveResourceAcquire @ 0x140228044 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x140228500 (PerfLogExecutiveResourceWait.c)
 *     EXP_LOCK_RESOURCE @ 0x14022D8A4 (EXP_LOCK_RESOURCE.c)
 *     EXP_UNLOCK_RESOURCE @ 0x14022D918 (EXP_UNLOCK_RESOURCE.c)
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
