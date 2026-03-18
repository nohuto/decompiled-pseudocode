/*
 * XREFs of ExAcquireResourceSharedLite @ 0x1400C8DB0
 * Callers:
 *     MiLookupDataTableEntry @ 0x140010760 (MiLookupDataTableEntry.c)
 *     LdrpKrnGetDataTableEntry @ 0x14002AA14 (LdrpKrnGetDataTableEntry.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x1400C7FC0 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     SepMandatoryIntegrityCheck @ 0x1400CC5F0 (SepMandatoryIntegrityCheck.c)
 *     SeAccessCheckByType @ 0x1400CD4D0 (SeAccessCheckByType.c)
 *     SepTrustLevelCheck @ 0x1400CE734 (SepTrustLevelCheck.c)
 *     McGenControlCallbackV2 @ 0x14012A1CC (McGenControlCallbackV2.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x14012D2C0 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     SepRmAcquireGlobalSaclReadLock @ 0x14015B234 (SepRmAcquireGlobalSaclReadLock.c)
 *     MiDeleteBootRange @ 0x140162804 (MiDeleteBootRange.c)
 *     IoFillTriageDumpBuffer @ 0x1401F2E8C (IoFillTriageDumpBuffer.c)
 *     KeCapturePersistentThreadState @ 0x1401F561C (KeCapturePersistentThreadState.c)
 *     SeTokenGetRedirectionTrustPolicy @ 0x14024FAC0 (SeTokenGetRedirectionTrustPolicy.c)
 *     SeSetSecurityAttributesTokenEx @ 0x14024FCD0 (SeSetSecurityAttributesTokenEx.c)
 *     IopMountVolume @ 0x14040ADB8 (IopMountVolume.c)
 *     NtCompareTokens @ 0x1404107DC (NtCompareTokens.c)
 *     SepFilterToken @ 0x140411C6C (SepFilterToken.c)
 *     NtQueryInformationJobObject @ 0x1404139BC (NtQueryInformationJobObject.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x140415378 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x140415AF0 (PspQueryJobHierarchyProcessIdList.c)
 *     PspChargeJobWakeCounter @ 0x140417810 (PspChargeJobWakeCounter.c)
 *     PspSetProcessPriorityClass @ 0x14041BFC8 (PspSetProcessPriorityClass.c)
 *     PspInsertThread @ 0x140423090 (PspInsertThread.c)
 *     CmEnumerateValueKey @ 0x1404277E0 (CmEnumerateValueKey.c)
 *     CmSetValueKey @ 0x140428B40 (CmSetValueKey.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x140429488 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmQueryMultipleValueKey @ 0x140429678 (CmQueryMultipleValueKey.c)
 *     CmpSecurityMethod @ 0x14042ABB4 (CmpSecurityMethod.c)
 *     SepDuplicateToken @ 0x140435D60 (SepDuplicateToken.c)
 *     SepRefDerefLuidToIndexEntryIfNecessary @ 0x1404366E0 (SepRefDerefLuidToIndexEntryIfNecessary.c)
 *     NtDuplicateToken @ 0x140436B68 (NtDuplicateToken.c)
 *     SeQueryUserSidToken @ 0x140438B84 (SeQueryUserSidToken.c)
 *     PiDmGetObject @ 0x140439850 (PiDmGetObject.c)
 *     PiPnpRtlOperationListAcquireSharedLock @ 0x14043ABD4 (PiPnpRtlOperationListAcquireSharedLock.c)
 *     PiPnpRtlDisableRemoveOperationDispatch @ 0x14043B180 (PiPnpRtlDisableRemoveOperationDispatch.c)
 *     PiDmObjectManagerAcquireSharedLock @ 0x14043BFE0 (PiDmObjectManagerAcquireSharedLock.c)
 *     SeQuerySessionIdTokenEx @ 0x14043ED78 (SeQuerySessionIdTokenEx.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140444E04 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     CmDeleteKey @ 0x1404468EC (CmDeleteKey.c)
 *     CmpDoCreate @ 0x1404485BC (CmpDoCreate.c)
 *     PiQueryAndAllocateBootResources @ 0x14045CAAC (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x14045D384 (PiQueryResourceRequirements.c)
 *     PipProcessStartPhase3 @ 0x14045ED7C (PipProcessStartPhase3.c)
 *     IopGetSetSecurityObject @ 0x140467180 (IopGetSetSecurityObject.c)
 *     NtSetInformationToken @ 0x14046BEF8 (NtSetInformationToken.c)
 *     SepValidLabelSubjectContext @ 0x14046DA40 (SepValidLabelSubjectContext.c)
 *     NtSetInformationThread @ 0x140478220 (NtSetInformationThread.c)
 *     SeTokenCanImpersonate @ 0x1404798B0 (SeTokenCanImpersonate.c)
 *     AlpcpExposeTokenAttribute @ 0x14047F1D0 (AlpcpExposeTokenAttribute.c)
 *     SeQueryInformationToken @ 0x140481E90 (SeQueryInformationToken.c)
 *     SeQuerySecurityAttributesToken @ 0x1404829C4 (SeQuerySecurityAttributesToken.c)
 *     NtQuerySecurityAttributesToken @ 0x140482AD0 (NtQuerySecurityAttributesToken.c)
 *     NtQueryInformationToken @ 0x140482E10 (NtQueryInformationToken.c)
 *     RtlpNewSecurityObject @ 0x140488DB0 (RtlpNewSecurityObject.c)
 *     IopParseDevice @ 0x14048B640 (IopParseDevice.c)
 *     ObpCreateHandle @ 0x140492D10 (ObpCreateHandle.c)
 *     ExpGetProcessInformation @ 0x140497410 (ExpGetProcessInformation.c)
 *     CmpBuildHashStackAndLookupCache @ 0x14049A140 (CmpBuildHashStackAndLookupCache.c)
 *     CmpInitializeHive @ 0x1404ACE6C (CmpInitializeHive.c)
 *     CmpReorganizeHive @ 0x1404AD5C4 (CmpReorganizeHive.c)
 *     CmpCreateLinkNode @ 0x1404B0468 (CmpCreateLinkNode.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1404B1FB8 (FsRtlAcquireFileForCcFlushEx.c)
 *     CmpParseKey @ 0x1404BEE10 (CmpParseKey.c)
 *     CmpCheckKeyBodyAccess @ 0x1404C17F0 (CmpCheckKeyBodyAccess.c)
 *     CmpDeleteKeyObject @ 0x1404C1BA0 (CmpDeleteKeyObject.c)
 *     CmQueryValueKey @ 0x1404C21A0 (CmQueryValueKey.c)
 *     SeLockSubjectContext @ 0x1404C5390 (SeLockSubjectContext.c)
 *     CmpGetSymbolicLink @ 0x1404C5480 (CmpGetSymbolicLink.c)
 *     CmEnumerateKey @ 0x1404C66B0 (CmEnumerateKey.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 *     PiProcessNewDeviceNode @ 0x1404D7558 (PiProcessNewDeviceNode.c)
 *     PiPnpRtlSetObjectProperty @ 0x1404D83F4 (PiPnpRtlSetObjectProperty.c)
 *     PnpGetDevicePropertyData @ 0x1404DB80C (PnpGetDevicePropertyData.c)
 *     PiGetRelatedDevice @ 0x1404E1314 (PiGetRelatedDevice.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1404E1670 (PnpAcquireDependencyRelationsLock.c)
 *     PpDevNodeLockTree @ 0x1404E20D8 (PpDevNodeLockTree.c)
 *     CmpTrimHive @ 0x1404EA73C (CmpTrimHive.c)
 *     CmpInitCmRM @ 0x1404EABF8 (CmpInitCmRM.c)
 *     CmDeleteValueKey @ 0x1404EFE30 (CmDeleteValueKey.c)
 *     CmpTransMgrCommitUoW @ 0x1404F16A0 (CmpTransMgrCommitUoW.c)
 *     PspGetNextChildJob @ 0x1405069DC (PspGetNextChildJob.c)
 *     PspCallJobHierarchyCallbacks @ 0x140506AD8 (PspCallJobHierarchyCallbacks.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140506F48 (PspEnforceLimitsJobPostCallback.c)
 *     SeSecurityAttributePresent @ 0x14050D910 (SeSecurityAttributePresent.c)
 *     MmEnumerateSystemImages @ 0x14051C530 (MmEnumerateSystemImages.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140525750 (SepAccessCheckAndAuditAlarm.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x14052DF08 (ExpGetSystemFirmwareTableInformation.c)
 *     SeQuerySessionIdToken @ 0x14052FB1C (SeQuerySessionIdToken.c)
 *     IopReleaseDeviceResources @ 0x1405383A4 (IopReleaseDeviceResources.c)
 *     NtMapCMFModule @ 0x14053AB00 (NtMapCMFModule.c)
 *     SepValidOwnerSubjectContext @ 0x14053E024 (SepValidOwnerSubjectContext.c)
 *     SeIsTokenAssignableToProcess @ 0x140545528 (SeIsTokenAssignableToProcess.c)
 *     PspValidateJobAffinityState @ 0x14054D8F8 (PspValidateJobAffinityState.c)
 *     SeQueryServerSiloToken @ 0x14054D97C (SeQueryServerSiloToken.c)
 *     PiCreateDeviceInstanceKey @ 0x14054EC5C (PiCreateDeviceInstanceKey.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140550548 (IopSetDeviceSecurityDescriptor.c)
 *     PipGenerateContainerID @ 0x140554BA8 (PipGenerateContainerID.c)
 *     MmIsDriverVerifyingByAddress @ 0x140582A34 (MmIsDriverVerifyingByAddress.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x14058C1FC (PiPnpRtlSetDeviceRegProperty.c)
 *     MmBackSystemImageWithPagefile @ 0x14058FE4C (MmBackSystemImageWithPagefile.c)
 *     IoCreateDriver @ 0x1405900A4 (IoCreateDriver.c)
 *     CmpLoadHiveThread @ 0x140598084 (CmpLoadHiveThread.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x14059C324 (IopWriteAllocatedResourcesToRegistry.c)
 *     SepGetLogonSessionAccountInfo @ 0x1405A1C10 (SepGetLogonSessionAccountInfo.c)
 *     MmVerifyCallbackFunction @ 0x1405A72EC (MmVerifyCallbackFunction.c)
 *     PipMakeGloballyUniqueId @ 0x1405B1CF8 (PipMakeGloballyUniqueId.c)
 *     PnpDriverLoadingFailed @ 0x1405C1A3C (PnpDriverLoadingFailed.c)
 *     CmSetKeyFlags @ 0x140655BB8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140656248 (CmSetLastWriteTimeKey.c)
 *     CmpLockHiveFlusherShared @ 0x14065D9B4 (CmpLockHiveFlusherShared.c)
 *     HvFoldBackDirtyData @ 0x14065DD48 (HvFoldBackDirtyData.c)
 *     CmRestoreKey @ 0x140660D14 (CmRestoreKey.c)
 *     FsRtlCopyRead @ 0x14066BE8C (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x14066C1B4 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x14066C8C0 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14066CBCC (FsRtlPrepareMdlWriteDev.c)
 *     IopInitializeBootLogging @ 0x140671954 (IopInitializeBootLogging.c)
 *     IopInvalidateVolumesForDevice @ 0x140671B84 (IopInvalidateVolumesForDevice.c)
 *     PnpShutdownDevices @ 0x14067A594 (PnpShutdownDevices.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x14067EBE8 (PnpGetDeviceInterfacePropertyData.c)
 *     MmGetSectionRange @ 0x1406A1240 (MmGetSectionRange.c)
 *     PsSwapProcessWorkingSet @ 0x1406BFCFC (PsSwapProcessWorkingSet.c)
 *     PspSetProcessAffinitySafe @ 0x1406C0654 (PspSetProcessAffinitySafe.c)
 *     PsGetSiloObjectByPointer @ 0x1406C0B54 (PsGetSiloObjectByPointer.c)
 *     PsTerminateAllProcessesInSilo @ 0x1406C1334 (PsTerminateAllProcessesInSilo.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x1406C4754 (PspQueryJobHierarchyInterferenceCount.c)
 *     RtlPcToFilePath @ 0x1406CF870 (RtlPcToFilePath.c)
 *     SepIdAssignableAsGroup @ 0x1406D4584 (SepIdAssignableAsGroup.c)
 *     SeGetTokenControlInformation @ 0x1406D5738 (SeGetTokenControlInformation.c)
 *     SepGetProcUniqueLuidAndIndexFromToken @ 0x1406D6F58 (SepGetProcUniqueLuidAndIndexFromToken.c)
 *     PnpGetDeviceInstancePropertyData @ 0x14071F08C (PnpGetDeviceInstancePropertyData.c)
 *     VfDriverEnableVerifier @ 0x140738F7C (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x1407390F8 (VfDriverEnableVerifierForAll.c)
 *     VerifierExAcquireResourceSharedLite @ 0x14074BDA8 (VerifierExAcquireResourceSharedLite.c)
 *     VerifierExAcquireResourceSharedLiteNoReboot @ 0x14074BE20 (VerifierExAcquireResourceSharedLiteNoReboot.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     ExpWaitForResource @ 0x14009C5E0 (ExpWaitForResource.c)
 *     ExpUnlockResource @ 0x1400C66F0 (ExpUnlockResource.c)
 *     ExpBoostIoAfterAcquire @ 0x1400D6454 (ExpBoostIoAfterAcquire.c)
 *     ExpExpandResourceOwnerTable @ 0x1400D6868 (ExpExpandResourceOwnerTable.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x140103D00 (KxWaitForLockOwnerShipWithIrql.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x140200C08 (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     PerfLogExecutiveResourceAcquire @ 0x14025F5A8 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x14025FA64 (PerfLogExecutiveResourceWait.c)
 */

BOOLEAN __stdcall ExAcquireResourceSharedLite(PERESOURCE Resource, BOOLEAN Wait)
{
  bool v4; // di
  KSPIN_LOCK *p_SpinLock; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  char v7; // al
  __int64 v8; // rdx
  ULONG v9; // eax
  volatile signed __int64 *v10; // rax
  OWNER_ENTRY *p_OwnerEntry; // rdx
  ERESOURCE_THREAD OwnerThread; // rax
  BOOL v14; // r9d
  OWNER_ENTRY *v15; // r8
  POWNER_ENTRY OwnerTable; // r10
  OWNER_ENTRY *v17; // rcx
  int v18; // eax
  ULONG ActiveEntries; // eax
  volatile signed __int64 *v20; // rax
  unsigned int v21; // esi
  unsigned int v22; // esi
  volatile signed __int64 *v23; // rax
  volatile signed __int64 *v24; // rax
  POWNER_ENTRY v25; // rdx
  OWNER_ENTRY *v26; // rax
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 TableSize; // eax
  __int64 v28; // rcx
  volatile signed __int64 *v29; // rax
  __int64 v30; // r8
  __int64 v31; // rcx
  volatile signed __int64 *v32; // [rsp+20h] [rbp-40h] BYREF
  KSPIN_LOCK *v33; // [rsp+28h] [rbp-38h]
  _QWORD v34[5]; // [rsp+38h] [rbp-28h] BYREF
  void *retaddr; // [rsp+88h] [rbp+28h]
  unsigned __int8 v36; // [rsp+90h] [rbp+30h] BYREF

  v4 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x634Cu);
  p_SpinLock = &Resource->SpinLock;
  CurrentThread = KeGetCurrentThread();
  v32 = 0LL;
  v36 = 2;
  v33 = p_SpinLock;
  _disable();
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v7 = KiFastAcquireQueuedSpinLockInstrumented(&v32, p_SpinLock, &v36);
  }
  else
  {
    v7 = 0;
    v8 = _InterlockedExchange64((volatile __int64 *)p_SpinLock, (__int64)&v32);
    if ( v8 )
    {
      KxWaitForLockOwnerShipWithIrql(&v32, v8, &v36);
      v7 = 1;
    }
  }
  if ( v7 )
  {
    _disable();
    __writecr8(v36);
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
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&v32, retaddr);
      }
      else
      {
        _m_prefetchw(&v32);
        v10 = v32;
        if ( !v32 )
        {
          if ( (volatile signed __int64 **)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)v33,
                                             0LL,
                                             (signed __int64)&v32) == &v32 )
            goto LABEL_10;
          v10 = (volatile signed __int64 *)KxWaitForLockChainValid((__int64 *)&v32);
        }
        v32 = 0LL;
        _InterlockedXor64(v10 + 1, 1uLL);
      }
LABEL_10:
      _enable();
      __incgsdword(0x6354u);
      __incgsdword(0x6324u);
      if ( v4 )
        goto LABEL_83;
      return 1;
    }
    if ( (Resource->ReservedLowFlags & 0x80u) != 0 )
      break;
    p_OwnerEntry = &Resource->OwnerEntry;
    OwnerThread = Resource->OwnerEntry.OwnerThread;
    v14 = Resource->NumberOfExclusiveWaiters != 0;
    if ( (struct _KTHREAD *)OwnerThread == CurrentThread )
    {
LABEL_25:
      if ( p_OwnerEntry )
      {
        if ( (struct _KTHREAD *)p_OwnerEntry->OwnerThread != CurrentThread )
        {
          if ( v14 )
            goto LABEL_57;
          v18 = p_OwnerEntry->TableSize & 3;
          p_OwnerEntry->OwnerThread = (ERESOURCE_THREAD)CurrentThread;
          p_OwnerEntry->TableSize = v18 | 4;
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
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            KiReleaseQueuedSpinLockInstrumented(&v32, retaddr);
            goto LABEL_33;
          }
          _m_prefetchw(&v32);
          v20 = v32;
          if ( !v32 )
          {
            if ( (volatile signed __int64 **)_InterlockedCompareExchange64(
                                               (volatile signed __int64 *)v33,
                                               0LL,
                                               (signed __int64)&v32) == &v32 )
            {
LABEL_33:
              _enable();
              goto LABEL_34;
            }
            v20 = (volatile signed __int64 *)KxWaitForLockChainValid((__int64 *)&v32);
          }
          v32 = 0LL;
          _InterlockedXor64(v20 + 1, 1uLL);
          goto LABEL_33;
        }
        v21 = p_OwnerEntry->TableSize & 3 ^ ((p_OwnerEntry->TableSize & 0xFFFFFFFC) + 4);
        p_OwnerEntry->TableSize = v21;
        v22 = v21 >> 2;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(&v32, retaddr);
        }
        else
        {
          _m_prefetchw(&v32);
          v23 = v32;
          if ( !v32 )
          {
            if ( (volatile signed __int64 **)_InterlockedCompareExchange64(
                                               (volatile signed __int64 *)v33,
                                               0LL,
                                               (signed __int64)&v32) == &v32 )
              goto LABEL_42;
            v23 = (volatile signed __int64 *)KxWaitForLockChainValid((__int64 *)&v32);
          }
          v32 = 0LL;
          _InterlockedXor64(v23 + 1, 1uLL);
        }
LABEL_42:
        _enable();
        __incgsdword(0x6358u);
        __incgsdword(0x6324u);
        if ( v4 )
        {
          v30 = v22;
          v31 = 65617LL;
          goto LABEL_84;
        }
        return 1;
      }
    }
    else
    {
      if ( Resource->NumberOfExclusiveWaiters || OwnerThread )
        v15 = 0LL;
      else
        v15 = &Resource->OwnerEntry;
      OwnerTable = Resource->OwnerTable;
      if ( OwnerTable )
      {
        p_OwnerEntry = OwnerTable + 1;
        while ( (struct _KTHREAD *)p_OwnerEntry->OwnerThread != CurrentThread )
        {
          if ( !v15 && !p_OwnerEntry->OwnerThread )
            v15 = p_OwnerEntry;
          if ( ++p_OwnerEntry == &OwnerTable[OwnerTable->TableSize] )
            goto LABEL_22;
        }
        v17 = p_OwnerEntry;
        goto LABEL_24;
      }
LABEL_22:
      if ( v15 )
      {
        v17 = v15;
        p_OwnerEntry = v15;
LABEL_24:
        KeGetCurrentThread()->SchedulerApc.SpareByte0 = v17 - OwnerTable;
        goto LABEL_25;
      }
LABEL_65:
      ExpExpandResourceOwnerTable(Resource, &v32);
    }
  }
  if ( (struct _KTHREAD *)Resource->OwnerEntry.OwnerThread == CurrentThread )
  {
    Resource->OwnerEntry.TableSize = Resource->OwnerEntry.TableSize & 3 ^ ((Resource->OwnerEntry.TableSize & 0xFFFFFFFC)
                                                                         + 4);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v32, retaddr);
    }
    else
    {
      _m_prefetchw(&v32);
      v24 = v32;
      if ( !v32 )
      {
        if ( (volatile signed __int64 **)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)v33,
                                           0LL,
                                           (signed __int64)&v32) == &v32 )
          goto LABEL_48;
        v24 = (volatile signed __int64 *)KxWaitForLockChainValid((__int64 *)&v32);
      }
      v32 = 0LL;
      _InterlockedXor64(v24 + 1, 1uLL);
    }
LABEL_48:
    _enable();
    __incgsdword(0x6350u);
    __incgsdword(0x6324u);
    if ( v4 )
    {
      v31 = 65585LL;
      v30 = Resource->OwnerEntry.TableSize >> 2;
      goto LABEL_84;
    }
    return 1;
  }
  v25 = Resource->OwnerTable;
  if ( !v25 )
    goto LABEL_65;
  v26 = &v25[v25->TableSize];
  p_OwnerEntry = v25 + 1;
  while ( p_OwnerEntry->OwnerThread )
  {
    if ( ++p_OwnerEntry == v26 )
      goto LABEL_65;
  }
  KeGetCurrentThread()->SchedulerApc.SpareByte0 = (__int64)(unsigned int)((_DWORD)p_OwnerEntry
                                                                        - LODWORD(Resource->OwnerTable)) >> 4;
LABEL_57:
  if ( Wait )
  {
    TableSize = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)p_OwnerEntry->TableSize;
    p_OwnerEntry->OwnerThread = (ERESOURCE_THREAD)CurrentThread;
    p_OwnerEntry->TableSize = *(_BYTE *)&TableSize & 3 | 4;
    ++Resource->NumberOfSharedWaiters;
    memset(v34, 0, 0x20uLL);
    LOWORD(v34[1]) = 1;
    v34[3] = &v34[2];
    BYTE2(v34[1]) = 6;
    v34[2] = &v34[2];
    v34[0] = Resource->SharedWaiters;
    Resource->SharedWaiters = v34;
    HIDWORD(v34[1]) = 0;
    ExpUnlockResource(v28, &v32);
    __incgsdword(0x635Cu);
    if ( v4 )
      PerfLogExecutiveResourceWait(65604LL, Resource, 0LL);
    ExpWaitForResource((__int64)Resource, (volatile signed __int32 *)&v34[1]);
    ExpBoostIoAfterAcquire(Resource, CurrentThread);
LABEL_34:
    __incgsdword(0x6354u);
    __incgsdword(0x6324u);
    if ( v4 )
    {
LABEL_83:
      v30 = 1LL;
      v31 = 65601LL;
LABEL_84:
      PerfLogExecutiveResourceAcquire(v31, Resource, v30, Resource->ContentionCount);
    }
    return 1;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v32, retaddr);
    goto LABEL_73;
  }
  _m_prefetchw(&v32);
  v29 = v32;
  if ( v32 )
  {
LABEL_76:
    v32 = 0LL;
    _InterlockedXor64(v29 + 1, 1uLL);
    goto LABEL_73;
  }
  if ( (volatile signed __int64 **)_InterlockedCompareExchange64(
                                     (volatile signed __int64 *)v33,
                                     0LL,
                                     (signed __int64)&v32) != &v32 )
  {
    v29 = (volatile signed __int64 *)KxWaitForLockChainValid((__int64 *)&v32);
    goto LABEL_76;
  }
LABEL_73:
  _enable();
  __incgsdword(0x6360u);
  return 0;
}
