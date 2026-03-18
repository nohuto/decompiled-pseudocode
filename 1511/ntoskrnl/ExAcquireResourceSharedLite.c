/*
 * XREFs of ExAcquireResourceSharedLite @ 0x14003FBC0
 * Callers:
 *     SepAcquireOrderedReadLocks @ 0x1400040E0 (SepAcquireOrderedReadLocks.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x14003F010 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     SepMandatoryIntegrityCheck @ 0x14008C7D0 (SepMandatoryIntegrityCheck.c)
 *     SeAccessCheckByType @ 0x14008CBF0 (SeAccessCheckByType.c)
 *     SepTrustLevelCheck @ 0x14008DE30 (SepTrustLevelCheck.c)
 *     PsGetServerSiloState @ 0x1400D5430 (PsGetServerSiloState.c)
 *     LdrpKrnGetDataTableEntry @ 0x1400DD718 (LdrpKrnGetDataTableEntry.c)
 *     IopCreateSecurityCheck @ 0x1400EA430 (IopCreateSecurityCheck.c)
 *     MiAcquireResourceSharedLite @ 0x1400EF804 (MiAcquireResourceSharedLite.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x1400EFA04 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     McGenControlCallbackV2 @ 0x14013EDB4 (McGenControlCallbackV2.c)
 *     IoFillTriageDumpBuffer @ 0x1401B7B00 (IoFillTriageDumpBuffer.c)
 *     KeCapturePersistentThreadState @ 0x1401BA414 (KeCapturePersistentThreadState.c)
 *     SepRmAcquireGlobalSaclReadLock @ 0x140200B98 (SepRmAcquireGlobalSaclReadLock.c)
 *     SeSetSecurityAttributesTokenEx @ 0x140200DEC (SeSetSecurityAttributesTokenEx.c)
 *     CmpInitCmRM @ 0x1403BA424 (CmpInitCmRM.c)
 *     CmpTrimHive @ 0x1403BAC40 (CmpTrimHive.c)
 *     SepFilterToken @ 0x1403C11C8 (SepFilterToken.c)
 *     SeIsTokenAssignableToProcess @ 0x1403C2698 (SeIsTokenAssignableToProcess.c)
 *     SepValidLabelSubjectContext @ 0x1403C2800 (SepValidLabelSubjectContext.c)
 *     NtSetInformationToken @ 0x1403C45C8 (NtSetInformationToken.c)
 *     CmpCreateLinkNode @ 0x1403CDCDC (CmpCreateLinkNode.c)
 *     CmpInitializeHive @ 0x1403D071C (CmpInitializeHive.c)
 *     CmpReorganizeHive @ 0x1403D0DDC (CmpReorganizeHive.c)
 *     CmDeleteValueKey @ 0x1403D4B80 (CmDeleteValueKey.c)
 *     CmpTransMgrCommitUoW @ 0x1403D7344 (CmpTransMgrCommitUoW.c)
 *     CmDeleteKey @ 0x1403DAB34 (CmDeleteKey.c)
 *     CmpDoCreate @ 0x1403DEBC8 (CmpDoCreate.c)
 *     PspValidateJobAffinityState @ 0x1403E8AD0 (PspValidateJobAffinityState.c)
 *     NtQueryInformationJobObject @ 0x1403E9B88 (NtQueryInformationJobObject.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x1403EAFE0 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1403EB244 (PspEnforceLimitsJobPostCallback.c)
 *     PspChargeJobWakeCounter @ 0x1403EB4DC (PspChargeJobWakeCounter.c)
 *     PspGetNextChildJob @ 0x1403EB804 (PspGetNextChildJob.c)
 *     PspCallJobHierarchyCallbacks @ 0x1403EB8F8 (PspCallJobHierarchyCallbacks.c)
 *     PspLockRootJobShared @ 0x1403EBA18 (PspLockRootJobShared.c)
 *     PspInsertThread @ 0x1403EF330 (PspInsertThread.c)
 *     CmSetValueKey @ 0x1403F36C0 (CmSetValueKey.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x1403F3E7C (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmpGetSymbolicLink @ 0x1403FBEB0 (CmpGetSymbolicLink.c)
 *     CmEnumerateKey @ 0x1403FDED0 (CmEnumerateKey.c)
 *     SeQueryInformationToken @ 0x1403FE580 (SeQueryInformationToken.c)
 *     CmQueryKey @ 0x1403FF980 (CmQueryKey.c)
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 *     CmpCheckKeyBodyAccess @ 0x1404033B0 (CmpCheckKeyBodyAccess.c)
 *     CmpDeleteKeyObject @ 0x1404036E0 (CmpDeleteKeyObject.c)
 *     CmQueryValueKey @ 0x140405E20 (CmQueryValueKey.c)
 *     CmpBuildHashStackAndLookupCache @ 0x140408290 (CmpBuildHashStackAndLookupCache.c)
 *     ExpGetProcessInformation @ 0x140409F60 (ExpGetProcessInformation.c)
 *     ObpCreateHandle @ 0x14040CFA0 (ObpCreateHandle.c)
 *     IopParseDevice @ 0x140412F10 (IopParseDevice.c)
 *     CmpSecurityMethod @ 0x140421960 (CmpSecurityMethod.c)
 *     CmEnumerateValueKey @ 0x140423940 (CmEnumerateValueKey.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 *     NtSetInformationThread @ 0x140425860 (NtSetInformationThread.c)
 *     AlpcpExposeTokenAttribute @ 0x14042B240 (AlpcpExposeTokenAttribute.c)
 *     RtlpNewSecurityObject @ 0x14042F920 (RtlpNewSecurityObject.c)
 *     NtQueryInformationToken @ 0x140431390 (NtQueryInformationToken.c)
 *     NtQuerySecurityAttributesToken @ 0x140433870 (NtQuerySecurityAttributesToken.c)
 *     IopGetSetSecurityObject @ 0x140438940 (IopGetSetSecurityObject.c)
 *     PiDmGetObject @ 0x14043D410 (PiDmGetObject.c)
 *     PiPnpRtlOperationListAcquireSharedLock @ 0x14043DEF0 (PiPnpRtlOperationListAcquireSharedLock.c)
 *     PiPnpRtlDisableRemoveOperationDispatch @ 0x14043F934 (PiPnpRtlDisableRemoveOperationDispatch.c)
 *     SeQuerySessionIdTokenEx @ 0x14044086C (SeQuerySessionIdTokenEx.c)
 *     PiDmObjectManagerAcquireSharedLock @ 0x140440CBC (PiDmObjectManagerAcquireSharedLock.c)
 *     PspSetProcessPriorityClass @ 0x1404523AC (PspSetProcessPriorityClass.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x140455928 (FsRtlAcquireFileForCcFlushEx.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14045837C (PnpAcquireDependencyRelationsLock.c)
 *     PpDevNodeLockTree @ 0x140458D00 (PpDevNodeLockTree.c)
 *     PnpGetDevicePropertyData @ 0x140459534 (PnpGetDevicePropertyData.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14045D768 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046E620 (SepAccessCheckAndAuditAlarm.c)
 *     SeLockSubjectContext @ 0x140470960 (SeLockSubjectContext.c)
 *     SeSecurityAttributePresent @ 0x140470FCC (SeSecurityAttributePresent.c)
 *     SepDuplicateToken @ 0x140477C00 (SepDuplicateToken.c)
 *     NtDuplicateToken @ 0x140478460 (NtDuplicateToken.c)
 *     SeQueryUserSidToken @ 0x140479360 (SeQueryUserSidToken.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x14048434C (ExpGetSystemFirmwareTableInformation.c)
 *     IopReleaseDeviceResources @ 0x1404A0EBC (IopReleaseDeviceResources.c)
 *     SeQuerySessionIdToken @ 0x1404A6B4C (SeQuerySessionIdToken.c)
 *     CmQueryMultipleValueKey @ 0x1404A8708 (CmQueryMultipleValueKey.c)
 *     NtMapCMFModule @ 0x1404AB19C (NtMapCMFModule.c)
 *     SepValidOwnerSubjectContext @ 0x1404AC868 (SepValidOwnerSubjectContext.c)
 *     SeQueryServerSiloToken @ 0x1404B5B9C (SeQueryServerSiloToken.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x1404B6734 (PspQueryJobHierarchyProcessIdList.c)
 *     IopSetDeviceSecurityDescriptor @ 0x1404BAE04 (IopSetDeviceSecurityDescriptor.c)
 *     SeQuerySecurityAttributesToken @ 0x1404D74E0 (SeQuerySecurityAttributesToken.c)
 *     IopMountVolume @ 0x1404DFC14 (IopMountVolume.c)
 *     PiPnpRtlSetObjectProperty @ 0x1404E5D38 (PiPnpRtlSetObjectProperty.c)
 *     PipProcessStartPhase3 @ 0x1404EC528 (PipProcessStartPhase3.c)
 *     PipGenerateContainerID @ 0x1404EC9C4 (PipGenerateContainerID.c)
 *     PiProcessNewDeviceNode @ 0x1404ED460 (PiProcessNewDeviceNode.c)
 *     PiQueryAndAllocateBootResources @ 0x1404EF1A4 (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x1404EFC24 (PiQueryResourceRequirements.c)
 *     PiCreateDeviceInstanceKey @ 0x1404F0CF8 (PiCreateDeviceInstanceKey.c)
 *     PiGetRelatedDevice @ 0x1404F2758 (PiGetRelatedDevice.c)
 *     CmpLoadHiveThread @ 0x140520FE4 (CmpLoadHiveThread.c)
 *     IoCreateDriver @ 0x140523034 (IoCreateDriver.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140529A40 (IopWriteAllocatedResourcesToRegistry.c)
 *     SepGetLogonSessionAccountInfo @ 0x14053AA4C (SepGetLogonSessionAccountInfo.c)
 *     PipMakeGloballyUniqueId @ 0x14053AE10 (PipMakeGloballyUniqueId.c)
 *     PnpDriverLoadingFailed @ 0x140549F80 (PnpDriverLoadingFailed.c)
 *     CmSetKeyFlags @ 0x1405E0250 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1405E0744 (CmSetLastWriteTimeKey.c)
 *     HvFoldBackDirtyData @ 0x1405E68E8 (HvFoldBackDirtyData.c)
 *     CmRestoreKey @ 0x1405E95A4 (CmRestoreKey.c)
 *     FsRtlCopyRead @ 0x1405F315C (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x1405F33C8 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x1405F3A80 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x1405F3CC0 (FsRtlPrepareMdlWriteDev.c)
 *     IopInitializeBootLogging @ 0x1405F7ACC (IopInitializeBootLogging.c)
 *     IopInvalidateVolumesForDevice @ 0x1405F7CFC (IopInvalidateVolumesForDevice.c)
 *     PnpShutdownDevices @ 0x1405FF9D0 (PnpShutdownDevices.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x140603F98 (PnpGetDeviceInterfacePropertyData.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x1406056EC (PiPnpRtlSetDeviceRegProperty.c)
 *     PsSwapProcessWorkingSet @ 0x14063EE24 (PsSwapProcessWorkingSet.c)
 *     PspSetProcessAffinitySafe @ 0x14063F50C (PspSetProcessAffinitySafe.c)
 *     PsGetSiloObjectByPointer @ 0x14063F7B8 (PsGetSiloObjectByPointer.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x140642204 (PspQueryJobHierarchyInterferenceCount.c)
 *     PspSendSiloTerminationNotification @ 0x140642548 (PspSendSiloTerminationNotification.c)
 *     RtlPcToFilePath @ 0x14064C7EC (RtlPcToFilePath.c)
 *     SepIdAssignableAsGroup @ 0x140651E68 (SepIdAssignableAsGroup.c)
 *     SeGetTokenControlInformation @ 0x1406538C0 (SeGetTokenControlInformation.c)
 *     SepGetProcUniqueLuidAndIndexFromToken @ 0x1406550E0 (SepGetProcUniqueLuidAndIndexFromToken.c)
 *     PnpGetDeviceInstancePropertyData @ 0x14069EA6C (PnpGetDeviceInstancePropertyData.c)
 *     VfDriverEnableVerifier @ 0x1406B8A3C (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x1406B8BB8 (VfDriverEnableVerifierForAll.c)
 *     VerifierExAcquireResourceSharedLite @ 0x1406C91A8 (VerifierExAcquireResourceSharedLite.c)
 *     VerifierExAcquireResourceSharedLiteNoReboot @ 0x1406C9220 (VerifierExAcquireResourceSharedLiteNoReboot.c)
 * Callees:
 *     ExpUnlockResource @ 0x14003DC00 (ExpUnlockResource.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     ExpBoostIoAfterAcquire @ 0x14007967C (ExpBoostIoAfterAcquire.c)
 *     ExpWaitForResource @ 0x14007F400 (ExpWaitForResource.c)
 *     ExpExpandResourceOwnerTable @ 0x1400CF8AC (ExpExpandResourceOwnerTable.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x1400CFA00 (KxWaitForLockOwnerShipWithIrql.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x1401C48DC (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     PerfLogExecutiveResourceAcquire @ 0x140210238 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x1402106F4 (PerfLogExecutiveResourceWait.c)
 */

BOOLEAN __stdcall ExAcquireResourceSharedLite(PERESOURCE Resource, BOOLEAN Wait)
{
  bool v4; // si
  KSPIN_LOCK *p_SpinLock; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  char v7; // al
  __int64 v8; // rdx
  ULONG v9; // eax
  OWNER_ENTRY *p_OwnerEntry; // rdx
  ERESOURCE_THREAD OwnerThread; // rax
  BOOL v13; // r9d
  OWNER_ENTRY *v14; // r8
  POWNER_ENTRY OwnerTable; // r10
  OWNER_ENTRY *v16; // rcx
  int v17; // eax
  ULONG ActiveEntries; // eax
  unsigned int v19; // edi
  unsigned int v20; // edi
  POWNER_ENTRY v21; // rdx
  OWNER_ENTRY *v22; // rax
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 TableSize; // eax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r8
  __int64 v28; // rcx
  _QWORD v29[3]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v30[5]; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int8 v31; // [rsp+90h] [rbp+30h] BYREF

  v4 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x634Cu);
  p_SpinLock = &Resource->SpinLock;
  CurrentThread = KeGetCurrentThread();
  v29[0] = 0LL;
  v31 = 2;
  v29[1] = p_SpinLock;
  _disable();
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v7 = KiFastAcquireQueuedSpinLockInstrumented(v29, p_SpinLock, &v31);
  }
  else
  {
    v7 = 0;
    v8 = _InterlockedExchange64((volatile __int64 *)p_SpinLock, (__int64)v29);
    if ( v8 )
    {
      KxWaitForLockOwnerShipWithIrql(v29, v8, &v31);
      v7 = 1;
    }
  }
  if ( v7 )
  {
    _disable();
    __writecr8(v31);
  }
  while ( 1 )
  {
    if ( !Resource->ActiveEntries )
    {
      v9 = Resource->OwnerEntry.TableSize & 3;
      Resource->OwnerEntry.OwnerThread = (ERESOURCE_THREAD)CurrentThread;
      Resource->ActiveEntries = 1;
      Resource->OwnerEntry.TableSize = v9 | 4;
      Resource->ActiveCount = 1;
      KxReleaseQueuedSpinLock(v29);
      _enable();
      __incgsdword(0x6354u);
      __incgsdword(0x6324u);
      if ( !v4 )
        return 1;
LABEL_53:
      v27 = 1LL;
      v28 = 65601LL;
      goto LABEL_54;
    }
    if ( (Resource->ReservedLowFlags & 0x80u) != 0 )
      break;
    p_OwnerEntry = &Resource->OwnerEntry;
    OwnerThread = Resource->OwnerEntry.OwnerThread;
    v13 = Resource->NumberOfExclusiveWaiters != 0;
    if ( (struct _KTHREAD *)OwnerThread == CurrentThread )
    {
LABEL_22:
      if ( p_OwnerEntry )
      {
        if ( (struct _KTHREAD *)p_OwnerEntry->OwnerThread != CurrentThread )
        {
          if ( v13 )
            goto LABEL_43;
          v17 = p_OwnerEntry->TableSize & 3;
          p_OwnerEntry->OwnerThread = (ERESOURCE_THREAD)CurrentThread;
          p_OwnerEntry->TableSize = v17 | 4;
          ActiveEntries = Resource->ActiveEntries;
          if ( ActiveEntries )
          {
            Resource->ActiveEntries = ActiveEntries + 1;
          }
          else
          {
            Resource->ActiveEntries = 1;
            Resource->ActiveCount = 1;
          }
          KxReleaseQueuedSpinLock(v29);
          _enable();
LABEL_28:
          __incgsdword(0x6354u);
          __incgsdword(0x6324u);
          if ( !v4 )
            return 1;
          goto LABEL_53;
        }
        v19 = p_OwnerEntry->TableSize & 3 ^ ((p_OwnerEntry->TableSize & 0xFFFFFFFC) + 4);
        p_OwnerEntry->TableSize = v19;
        v20 = v19 >> 2;
        KxReleaseQueuedSpinLock(v29);
        _enable();
        __incgsdword(0x6358u);
        __incgsdword(0x6324u);
        if ( !v4 )
          return 1;
        v27 = v20;
        v28 = 65617LL;
LABEL_54:
        PerfLogExecutiveResourceAcquire(v28, Resource, v27, Resource->ContentionCount);
        return 1;
      }
    }
    else
    {
      if ( Resource->NumberOfExclusiveWaiters || OwnerThread )
        v14 = 0LL;
      else
        v14 = &Resource->OwnerEntry;
      OwnerTable = Resource->OwnerTable;
      if ( OwnerTable )
      {
        p_OwnerEntry = OwnerTable + 1;
        while ( (struct _KTHREAD *)p_OwnerEntry->OwnerThread != CurrentThread )
        {
          if ( !v14 && !p_OwnerEntry->OwnerThread )
            v14 = p_OwnerEntry;
          if ( ++p_OwnerEntry == &OwnerTable[OwnerTable->TableSize] )
            goto LABEL_19;
        }
        v16 = p_OwnerEntry;
        goto LABEL_21;
      }
LABEL_19:
      if ( v14 )
      {
        v16 = v14;
        p_OwnerEntry = v14;
LABEL_21:
        KeGetCurrentThread()->SchedulerApc.SpareByte0 = v16 - OwnerTable;
        goto LABEL_22;
      }
LABEL_49:
      ExpExpandResourceOwnerTable(Resource, v29);
    }
  }
  if ( (struct _KTHREAD *)Resource->OwnerEntry.OwnerThread == CurrentThread )
  {
    Resource->OwnerEntry.TableSize = Resource->OwnerEntry.TableSize & 3 ^ ((Resource->OwnerEntry.TableSize & 0xFFFFFFFC)
                                                                         + 4);
    KxReleaseQueuedSpinLock(v29);
    _enable();
    __incgsdword(0x6350u);
    __incgsdword(0x6324u);
    if ( !v4 )
      return 1;
    v28 = 65585LL;
    v27 = Resource->OwnerEntry.TableSize >> 2;
    goto LABEL_54;
  }
  v21 = Resource->OwnerTable;
  if ( !v21 )
    goto LABEL_49;
  v22 = &v21[v21->TableSize];
  p_OwnerEntry = v21 + 1;
  while ( p_OwnerEntry->OwnerThread )
  {
    if ( ++p_OwnerEntry == v22 )
      goto LABEL_49;
  }
  KeGetCurrentThread()->SchedulerApc.SpareByte0 = (__int64)(unsigned int)((_DWORD)p_OwnerEntry
                                                                        - LODWORD(Resource->OwnerTable)) >> 4;
LABEL_43:
  if ( Wait )
  {
    TableSize = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)p_OwnerEntry->TableSize;
    p_OwnerEntry->OwnerThread = (ERESOURCE_THREAD)CurrentThread;
    p_OwnerEntry->TableSize = *(_BYTE *)&TableSize & 3 | 4;
    ++Resource->NumberOfSharedWaiters;
    memset(v30, 0, 0x20uLL);
    LOWORD(v30[1]) = 1;
    v30[3] = &v30[2];
    BYTE2(v30[1]) = 6;
    v30[2] = &v30[2];
    v30[0] = Resource->SharedWaiters;
    Resource->SharedWaiters = v30;
    HIDWORD(v30[1]) = 0;
    ExpUnlockResource(v24, (__int64)v29, v25, v26);
    __incgsdword(0x635Cu);
    if ( v4 )
      PerfLogExecutiveResourceWait(65604LL, Resource, 0LL);
    ExpWaitForResource(Resource, &v30[1]);
    ExpBoostIoAfterAcquire(Resource, CurrentThread);
    goto LABEL_28;
  }
  KxReleaseQueuedSpinLock(v29);
  _enable();
  __incgsdword(0x6360u);
  return 0;
}
