/*
 * XREFs of Win32AllocPoolNonPaged @ 0x1C0012700
 * Callers:
 *     UserPostNKAPC @ 0x1C0004C90 (UserPostNKAPC.c)
 *     RIMAllocateHidConfigDesc @ 0x1C0005A0C (RIMAllocateHidConfigDesc.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C00065F0 (RIMRegisterForInputWithCallbacks.c)
 *     RIMGetProductString @ 0x1C0009C4C (RIMGetProductString.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C0009EAC (RIMGetMaxCountFeatureDetails.c)
 *     QueuePowerRequest @ 0x1C000BF30 (QueuePowerRequest.c)
 *     RIMAllocateHidDesc @ 0x1C000F32C (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1C000F564 (RIMCreateHidDesc.c)
 *     RIMHidGetCaps @ 0x1C000FB7C (RIMHidGetCaps.c)
 *     RIMCreateDev @ 0x1C0011060 (RIMCreateDev.c)
 *     CreateKernelEvent @ 0x1C0011650 (CreateKernelEvent.c)
 *     ?vInit@W32PIDLOCK@@QEAAXXZ @ 0x1C0012130 (-vInit@W32PIDLOCK@@QEAAXXZ.c)
 *     GreCreateSemaphoreInternal @ 0x1C0012318 (GreCreateSemaphoreInternal.c)
 *     EngAllocMem @ 0x1C00123A0 (EngAllocMem.c)
 *     ?Initialize@CProcessData@DirectComposition@@AEAAJXZ @ 0x1C0012540 (-Initialize@CProcessData@DirectComposition@@AEAAJXZ.c)
 *     ?OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C001262C (-OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     ?Initialize@CConnection@DirectComposition@@AEAAJXZ @ 0x1C0013B0C (-Initialize@CConnection@DirectComposition@@AEAAJXZ.c)
 *     ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX@Z @ 0x1C001DB5C (-SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX@Z.c)
 *     ?Initialize@CChannel@DirectComposition@@MEAAJXZ @ 0x1C001E1C0 (-Initialize@CChannel@DirectComposition@@MEAAJXZ.c)
 *     RemoteConnect @ 0x1C00628B0 (RemoteConnect.c)
 *     CreateKernelSemaphore @ 0x1C0067CA0 (CreateKernelSemaphore.c)
 *     HmgCreate @ 0x1C006CE6C (HmgCreate.c)
 *     GreCreateFastMutex @ 0x1C006D420 (GreCreateFastMutex.c)
 *     RIMSetDeviceIdleTimeout @ 0x1C007B340 (RIMSetDeviceIdleTimeout.c)
 *     RIMGetKbdExId @ 0x1C007CBC0 (RIMGetKbdExId.c)
 *     ?OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ @ 0x1C007D048 (-OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ.c)
 *     ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1C007D114 (-OnSessionCreation@CConnection@DirectComposition@@SAJH@Z.c)
 *     rimIoBuildDeviceConfigRequest @ 0x1C0086418 (rimIoBuildDeviceConfigRequest.c)
 *     UserPostNKAPCBuffer @ 0x1C00A8FF0 (UserPostNKAPCBuffer.c)
 *     CreateKernelTimer @ 0x1C00AA990 (CreateKernelTimer.c)
 *     RIMCreateHidKeyboardDeviceInfo @ 0x1C00D0120 (RIMCreateHidKeyboardDeviceInfo.c)
 *     rimContainsCustomHidKeyboardUsages @ 0x1C00D03F8 (rimContainsCustomHidKeyboardUsages.c)
 *     rimHidKeyboardIsButtonDevice @ 0x1C00D087C (rimHidKeyboardIsButtonDevice.c)
 *     rimValidateCustomHidKeyboardUsages @ 0x1C00D0F58 (rimValidateCustomHidKeyboardUsages.c)
 *     RIMSendPTPLatencyMgtDeviceRequest @ 0x1C00D28AC (RIMSendPTPLatencyMgtDeviceRequest.c)
 *     InitializePowerRequestList @ 0x1C013C6F0 (InitializePowerRequestList.c)
 * Callees:
 *     IsWin32AllocPoolImplSupported_0 @ 0x1C0002BE8 (IsWin32AllocPoolImplSupported_0.c)
 *     Win32AllocPoolImpl_0 @ 0x1C0002BF0 (Win32AllocPoolImpl_0.c)
 */

__int64 Win32AllocPoolNonPaged()
{
  if ( (int)IsWin32AllocPoolImplSupported_0() < 0 )
    return 0LL;
  else
    return Win32AllocPoolImpl_0();
}
