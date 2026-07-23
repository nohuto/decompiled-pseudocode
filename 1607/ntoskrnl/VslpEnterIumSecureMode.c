/*
 * XREFs of VslpEnterIumSecureMode @ 0x1400A86F4
 * Callers:
 *     MiFlushEntireTbDueToAttributeChange @ 0x14001D918 (MiFlushEntireTbDueToAttributeChange.c)
 *     KeRequestTerminationThread @ 0x1400C7C80 (KeRequestTerminationThread.c)
 *     VslRegisterLogPages @ 0x140132268 (VslRegisterLogPages.c)
 *     VslGetNestedPageProtectionFlags @ 0x14013D6B0 (VslGetNestedPageProtectionFlags.c)
 *     KeBalanceSetManager @ 0x14013F4AC (KeBalanceSetManager.c)
 *     KeSetPagePrivilege @ 0x140147314 (KeSetPagePrivilege.c)
 *     VslExchangeEntropy @ 0x14014BC80 (VslExchangeEntropy.c)
 *     VslpIumPhase4Initialize @ 0x14014C7E0 (VslpIumPhase4Initialize.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x1401BD414 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlPrepareForRootCrashdump @ 0x1401BD5F4 (HvlPrepareForRootCrashdump.c)
 *     HvlPrepareForSecureHibernate @ 0x1401BF244 (HvlPrepareForSecureHibernate.c)
 *     HvlCollectLivedump @ 0x1401C01E4 (HvlCollectLivedump.c)
 *     HvlpGetSecurePageList @ 0x1401C1E78 (HvlpGetSecurePageList.c)
 *     HvlpStartSecurePageListIteration @ 0x1401C2098 (HvlpStartSecurePageListIteration.c)
 *     VslAbortLiveDump @ 0x1401C24D4 (VslAbortLiveDump.c)
 *     VslConfigureDynamicMemory @ 0x1401C260C (VslConfigureDynamicMemory.c)
 *     VslEndSecurePageIteration @ 0x1401C2678 (VslEndSecurePageIteration.c)
 *     VslFastFlushSecureRangeList @ 0x1401C26D8 (VslFastFlushSecureRangeList.c)
 *     VslFinalizeLiveDumpInSk @ 0x1401C27B0 (VslFinalizeLiveDumpInSk.c)
 *     VslFlushSecureAddressSpace @ 0x1401C28B8 (VslFlushSecureAddressSpace.c)
 *     VslIsTrustletRunning @ 0x1401C2A0C (VslIsTrustletRunning.c)
 *     VslIumEfiRuntimeService @ 0x1401C2A84 (VslIumEfiRuntimeService.c)
 *     VslLiveDumpQuerySecondaryDataSize @ 0x1401C2BD8 (VslLiveDumpQuerySecondaryDataSize.c)
 *     VslNotifyShutdown @ 0x1401C2C40 (VslNotifyShutdown.c)
 *     VslQuerySecureKernelProfileInformation @ 0x1401C2C90 (VslQuerySecureKernelProfileInformation.c)
 *     VslRegisterSecureSystemProcess @ 0x1401C2D78 (VslRegisterSecureSystemProcess.c)
 *     VslReportBugCheckProgress @ 0x1401C2DE8 (VslReportBugCheckProgress.c)
 *     VslRetrieveMailbox @ 0x1401C2ED4 (VslRetrieveMailbox.c)
 *     VslSetupLiveDumpBufferInSk @ 0x1401C2FBC (VslSetupLiveDumpBufferInSk.c)
 *     VslSlowFlushSecureRangeList @ 0x1401C30AC (VslSlowFlushSecureRangeList.c)
 *     VslpAddLiveDumpBufferChunk @ 0x1401C314C (VslpAddLiveDumpBufferChunk.c)
 *     VslpKsrEnterIumSecureMode @ 0x1401C31F4 (VslpKsrEnterIumSecureMode.c)
 *     VslpSetupLiveDumpBuffer @ 0x1401C3430 (VslpSetupLiveDumpBuffer.c)
 *     KeCopyPrivilegedPage @ 0x1401D1E6C (KeCopyPrivilegedPage.c)
 *     KeReservePrivilegedPages @ 0x1401D1EDC (KeReservePrivilegedPages.c)
 *     KeSecureProcess @ 0x1401D204C (KeSecureProcess.c)
 *     KeUnsecureProcess @ 0x1401D2234 (KeUnsecureProcess.c)
 *     VslCloseSecureHandle @ 0x14023CF98 (VslCloseSecureHandle.c)
 *     VslCreateSecureAllocation @ 0x14023CFE4 (VslCreateSecureAllocation.c)
 *     VslCreateSecureImageSection @ 0x14023D040 (VslCreateSecureImageSection.c)
 *     VslFillSecureAllocation @ 0x14023D12C (VslFillSecureAllocation.c)
 *     VslFinalizeSecureImageHash @ 0x14023D228 (VslFinalizeSecureImageHash.c)
 *     VslFinishSecureImageValidation @ 0x14023D304 (VslFinishSecureImageValidation.c)
 *     VslMakeCodeCatalog @ 0x14023D3D4 (VslMakeCodeCatalog.c)
 *     VslPrepareSecureImageRelocations @ 0x14023D438 (VslPrepareSecureImageRelocations.c)
 *     VslRelocateImage @ 0x14023D4FC (VslRelocateImage.c)
 *     VslTransferSecureImageVersionResource @ 0x14023D54C (VslTransferSecureImageVersionResource.c)
 *     VslValidateDynamicCodePages @ 0x14023D620 (VslValidateDynamicCodePages.c)
 *     VslValidateSecureImagePages @ 0x14023D80C (VslValidateSecureImagePages.c)
 *     PspUserThreadStartup @ 0x140457F30 (PspUserThreadStartup.c)
 *     DbgkCopyProcessDebugPort @ 0x14045E744 (DbgkCopyProcessDebugPort.c)
 *     PopAllocateHiberContext @ 0x14052FB04 (PopAllocateHiberContext.c)
 *     HvlInitializeProcessor @ 0x14054E878 (HvlInitializeProcessor.c)
 *     NtDebugActiveProcess @ 0x140619878 (NtDebugActiveProcess.c)
 *     NtRemoveProcessDebug @ 0x140619C2C (NtRemoveProcessDebug.c)
 *     VslCreateSecureProcess @ 0x140620724 (VslCreateSecureProcess.c)
 *     VslCreateSecureThread @ 0x140620784 (VslCreateSecureThread.c)
 *     VslEnableOnDemandDebugWithResponse @ 0x140620818 (VslEnableOnDemandDebugWithResponse.c)
 *     VslFreeSecureHibernateResources @ 0x14062088C (VslFreeSecureHibernateResources.c)
 *     VslGetOnDemandDebugChallenge @ 0x1406208D4 (VslGetOnDemandDebugChallenge.c)
 *     VslGetSecurePebAddress @ 0x1406209E0 (VslGetSecurePebAddress.c)
 *     VslGetSecureTebAddress @ 0x140620A44 (VslGetSecureTebAddress.c)
 *     VslGetSetSecureContext @ 0x140620AAC (VslGetSetSecureContext.c)
 *     VslIumEtwEnableCallback @ 0x140620B48 (VslIumEtwEnableCallback.c)
 *     VslRundownSecureProcess @ 0x140620BC4 (VslRundownSecureProcess.c)
 *     VslTerminateSecureThread @ 0x140620C10 (VslTerminateSecureThread.c)
 *     VslpConnectedStandbyPoCallback @ 0x140620C88 (VslpConnectedStandbyPoCallback.c)
 *     VslpConnectedStandbyWnfCallback @ 0x140620D2C (VslpConnectedStandbyWnfCallback.c)
 *     VslConnectSwInterrupt @ 0x14079873C (VslConnectSwInterrupt.c)
 *     MiApplyDynamicRelocations @ 0x1407AA654 (MiApplyDynamicRelocations.c)
 *     PspInitPhase3 @ 0x1407BD288 (PspInitPhase3.c)
 *     VslpIumPhase0Initialize @ 0x1407CE270 (VslpIumPhase0Initialize.c)
 * Callees:
 *     KeReleaseSemaphore @ 0x140052530 (KeReleaseSemaphore.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegionThread @ 0x140069C20 (KeLeaveCriticalRegionThread.c)
 *     HvlQueryVsmConnection @ 0x1400A8750 (HvlQueryVsmConnection.c)
 *     HvlSwitchToVsmVtl1 @ 0x14015A050 (HvlSwitchToVsmVtl1.c)
 *     VslpDispatchIumSyscall @ 0x14015A1A0 (VslpDispatchIumSyscall.c)
 *     PsDispatchIumService @ 0x14020FA50 (PsDispatchIumService.c)
 */

NTSTATUS __fastcall VslpEnterIumSecureMode(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  __int16 v6; // dx
  __int64 v7; // rcx
  unsigned __int8 v8; // r8
  __int64 v9; // r9
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int8 CurrentIrql; // r15
  unsigned int SecureThreadCookie; // eax
  bool v14; // r14
  char PreviousMode; // r12

  v4 = a3;
  LOBYTE(a3) = a1;
  if ( !(unsigned __int8)HvlQueryVsmConnection(0LL, a2, a3) )
    return -1073741667;
  *(_BYTE *)v9 = v8;
  *(_WORD *)(v9 + 2) = v6;
  if ( v8 > 1u )
  {
    HvlSwitchToVsmVtl1(v7, v9);
    if ( *(char *)(a4 + 1) < 0 )
    {
      __debugbreak();
      *(_BYTE *)(a4 + 1) &= ~0x80u;
    }
    return 0;
  }
  CurrentThread = KeGetCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  if ( v4 )
  {
    *(_DWORD *)(v9 + 4) = v4;
  }
  else
  {
    SecureThreadCookie = CurrentThread->SecureThreadCookie;
    *(_DWORD *)(v9 + 4) = SecureThreadCookie;
    if ( SecureThreadCookie )
    {
      v4 = SecureThreadCookie;
    }
    else if ( VslVsmEnabled )
    {
      if ( CurrentIrql < 2u )
      {
        result = KeWaitForSingleObject(&VslpIumThreadSemaphore, Executive, 0, 0, 0LL);
        if ( result < 0 )
          return result;
      }
    }
  }
  if ( CurrentIrql == 1 )
  {
    v14 = 1;
LABEL_20:
    --CurrentThread->KernelApcDisable;
    goto LABEL_21;
  }
  v14 = CurrentThread->SecureThreadCookie == 0;
  if ( CurrentIrql )
    v14 = 0;
  if ( v14 )
    goto LABEL_20;
  while ( 1 )
  {
LABEL_21:
    HvlSwitchToVsmVtl1(0LL, a4);
    if ( *(char *)(a4 + 1) < 0 )
    {
      __debugbreak();
      *(_BYTE *)(a4 + 1) &= ~0x80u;
    }
    if ( *(_BYTE *)(a4 + 1) == 1 )
      break;
    if ( !v4 )
      CurrentThread->SecureThreadCookie = *(_DWORD *)(a4 + 4);
    switch ( *(_BYTE *)(a4 + 1) )
    {
      case 0:
        goto LABEL_30;
      case 2:
        if ( !CurrentThread->PreviousMode )
        {
          *(_QWORD *)(a4 + 8) = -1073741776LL;
          goto LABEL_31;
        }
        break;
      case 3:
        break;
      case 5:
LABEL_30:
        PsDispatchIumService(a4);
        goto LABEL_31;
      default:
        goto LABEL_31;
    }
    if ( *(unsigned __int16 *)(a4 + 2) < (unsigned int)xmmword_1403AA7D0 )
    {
      PreviousMode = CurrentThread->PreviousMode;
      if ( *(_BYTE *)(a4 + 1) == 3 )
        CurrentThread->PreviousMode = 0;
      *(_QWORD *)(a4 + 8) = (int)VslpDispatchIumSyscall(
                                   KeServiceDescriptorTable
                                 + (*(int *)(KeServiceDescriptorTable + 4LL * *(unsigned __int16 *)(a4 + 2)) >> 4),
                                   a4 + 8,
                                   *(_DWORD *)(KeServiceDescriptorTable + 4LL * *(unsigned __int16 *)(a4 + 2)) & 0xF);
      CurrentThread->PreviousMode = PreviousMode;
    }
    else
    {
      *(_QWORD *)(a4 + 8) = -1073741796LL;
    }
LABEL_31:
    if ( !v4 )
      CurrentThread->SecureThreadCookie = 0;
    *(_BYTE *)a4 = 0;
    *(_WORD *)(a4 + 2) = 0;
  }
  if ( !v4 && CurrentIrql < 2u && VslVsmEnabled )
    KeReleaseSemaphore(&VslpIumThreadSemaphore, 0, 1, 0);
  if ( v14 )
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return *(_DWORD *)(a4 + 8);
}
