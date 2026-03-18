/*
 * XREFs of VslpEnterIumSecureMode @ 0x1400AA174
 * Callers:
 *     MiFlushEntireTbDueToAttributeChange @ 0x14001DD98 (MiFlushEntireTbDueToAttributeChange.c)
 *     KeRequestTerminationThread @ 0x1400C9DE0 (KeRequestTerminationThread.c)
 *     VslRegisterLogPages @ 0x140131CF8 (VslRegisterLogPages.c)
 *     VslGetNestedPageProtectionFlags @ 0x14013D140 (VslGetNestedPageProtectionFlags.c)
 *     KeBalanceSetManager @ 0x14013EF3C (KeBalanceSetManager.c)
 *     KeSetPagePrivilege @ 0x140146DA4 (KeSetPagePrivilege.c)
 *     VslExchangeEntropy @ 0x14014B710 (VslExchangeEntropy.c)
 *     VslpIumPhase4Initialize @ 0x14014C270 (VslpIumPhase4Initialize.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x1401BD530 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlPrepareForRootCrashdump @ 0x1401BD710 (HvlPrepareForRootCrashdump.c)
 *     HvlPrepareForSecureHibernate @ 0x1401BF360 (HvlPrepareForSecureHibernate.c)
 *     HvlCollectLivedump @ 0x1401C0300 (HvlCollectLivedump.c)
 *     HvlpGetSecurePageList @ 0x1401C1F94 (HvlpGetSecurePageList.c)
 *     HvlpStartSecurePageListIteration @ 0x1401C21B4 (HvlpStartSecurePageListIteration.c)
 *     VslAbortLiveDump @ 0x1401C25F0 (VslAbortLiveDump.c)
 *     VslConfigureDynamicMemory @ 0x1401C2728 (VslConfigureDynamicMemory.c)
 *     VslEndSecurePageIteration @ 0x1401C2794 (VslEndSecurePageIteration.c)
 *     VslFastFlushSecureRangeList @ 0x1401C27F4 (VslFastFlushSecureRangeList.c)
 *     VslFinalizeLiveDumpInSk @ 0x1401C28CC (VslFinalizeLiveDumpInSk.c)
 *     VslFlushSecureAddressSpace @ 0x1401C29D4 (VslFlushSecureAddressSpace.c)
 *     VslIsTrustletRunning @ 0x1401C2B28 (VslIsTrustletRunning.c)
 *     VslIumEfiRuntimeService @ 0x1401C2BA0 (VslIumEfiRuntimeService.c)
 *     VslLiveDumpQuerySecondaryDataSize @ 0x1401C2CF4 (VslLiveDumpQuerySecondaryDataSize.c)
 *     VslNotifyShutdown @ 0x1401C2D5C (VslNotifyShutdown.c)
 *     VslQuerySecureKernelProfileInformation @ 0x1401C2DAC (VslQuerySecureKernelProfileInformation.c)
 *     VslRegisterSecureSystemProcess @ 0x1401C2E94 (VslRegisterSecureSystemProcess.c)
 *     VslReportBugCheckProgress @ 0x1401C2F04 (VslReportBugCheckProgress.c)
 *     VslRetrieveMailbox @ 0x1401C2FF0 (VslRetrieveMailbox.c)
 *     VslSetupLiveDumpBufferInSk @ 0x1401C30D8 (VslSetupLiveDumpBufferInSk.c)
 *     VslSlowFlushSecureRangeList @ 0x1401C31C8 (VslSlowFlushSecureRangeList.c)
 *     VslpAddLiveDumpBufferChunk @ 0x1401C3268 (VslpAddLiveDumpBufferChunk.c)
 *     VslpKsrEnterIumSecureMode @ 0x1401C3310 (VslpKsrEnterIumSecureMode.c)
 *     VslpSetupLiveDumpBuffer @ 0x1401C354C (VslpSetupLiveDumpBuffer.c)
 *     KeCopyPrivilegedPage @ 0x1401D2040 (KeCopyPrivilegedPage.c)
 *     KeReservePrivilegedPages @ 0x1401D20B0 (KeReservePrivilegedPages.c)
 *     KeSecureProcess @ 0x1401D2220 (KeSecureProcess.c)
 *     KeUnsecureProcess @ 0x1401D2408 (KeUnsecureProcess.c)
 *     VslCloseSecureHandle @ 0x14023D0B4 (VslCloseSecureHandle.c)
 *     VslCreateSecureAllocation @ 0x14023D100 (VslCreateSecureAllocation.c)
 *     VslCreateSecureImageSection @ 0x14023D15C (VslCreateSecureImageSection.c)
 *     VslFillSecureAllocation @ 0x14023D248 (VslFillSecureAllocation.c)
 *     VslFinalizeSecureImageHash @ 0x14023D344 (VslFinalizeSecureImageHash.c)
 *     VslFinishSecureImageValidation @ 0x14023D420 (VslFinishSecureImageValidation.c)
 *     VslMakeCodeCatalog @ 0x14023D4F0 (VslMakeCodeCatalog.c)
 *     VslPrepareSecureImageRelocations @ 0x14023D554 (VslPrepareSecureImageRelocations.c)
 *     VslRelocateImage @ 0x14023D618 (VslRelocateImage.c)
 *     VslTransferSecureImageVersionResource @ 0x14023D668 (VslTransferSecureImageVersionResource.c)
 *     VslValidateDynamicCodePages @ 0x14023D73C (VslValidateDynamicCodePages.c)
 *     VslValidateSecureImagePages @ 0x14023D928 (VslValidateSecureImagePages.c)
 *     PspUserThreadStartup @ 0x140459060 (PspUserThreadStartup.c)
 *     DbgkCopyProcessDebugPort @ 0x14045F874 (DbgkCopyProcessDebugPort.c)
 *     PopAllocateHiberContext @ 0x14052F5C4 (PopAllocateHiberContext.c)
 *     HvlInitializeProcessor @ 0x14054E4D8 (HvlInitializeProcessor.c)
 *     NtDebugActiveProcess @ 0x1406197C4 (NtDebugActiveProcess.c)
 *     NtRemoveProcessDebug @ 0x140619B78 (NtRemoveProcessDebug.c)
 *     VslCreateSecureProcess @ 0x140620670 (VslCreateSecureProcess.c)
 *     VslCreateSecureThread @ 0x1406206D0 (VslCreateSecureThread.c)
 *     VslEnableOnDemandDebugWithResponse @ 0x140620764 (VslEnableOnDemandDebugWithResponse.c)
 *     VslFreeSecureHibernateResources @ 0x1406207D8 (VslFreeSecureHibernateResources.c)
 *     VslGetOnDemandDebugChallenge @ 0x140620820 (VslGetOnDemandDebugChallenge.c)
 *     VslGetSecurePebAddress @ 0x14062092C (VslGetSecurePebAddress.c)
 *     VslGetSecureTebAddress @ 0x140620990 (VslGetSecureTebAddress.c)
 *     VslGetSetSecureContext @ 0x1406209F8 (VslGetSetSecureContext.c)
 *     VslIumEtwEnableCallback @ 0x140620A94 (VslIumEtwEnableCallback.c)
 *     VslRundownSecureProcess @ 0x140620B10 (VslRundownSecureProcess.c)
 *     VslTerminateSecureThread @ 0x140620B5C (VslTerminateSecureThread.c)
 *     VslpConnectedStandbyPoCallback @ 0x140620BD4 (VslpConnectedStandbyPoCallback.c)
 *     VslpConnectedStandbyWnfCallback @ 0x140620C78 (VslpConnectedStandbyWnfCallback.c)
 *     VslConnectSwInterrupt @ 0x14079873C (VslConnectSwInterrupt.c)
 *     MiApplyDynamicRelocations @ 0x1407AA654 (MiApplyDynamicRelocations.c)
 *     PspInitPhase3 @ 0x1407BD288 (PspInitPhase3.c)
 *     VslpIumPhase0Initialize @ 0x1407CE270 (VslpIumPhase0Initialize.c)
 * Callees:
 *     KeReleaseSemaphore @ 0x1400529B0 (KeReleaseSemaphore.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14006A0A0 (KeLeaveCriticalRegionThread.c)
 *     HvlQueryVsmConnection @ 0x1400AA1D0 (HvlQueryVsmConnection.c)
 *     HvlSwitchToVsmVtl1 @ 0x140159AE0 (HvlSwitchToVsmVtl1.c)
 *     VslpDispatchIumSyscall @ 0x140159C30 (VslpDispatchIumSyscall.c)
 *     PsDispatchIumService @ 0x14020FC24 (PsDispatchIumService.c)
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
