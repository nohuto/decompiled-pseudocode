/*
 * XREFs of Win32AllocPoolNonPaged @ 0x1C000DDF0
 * Callers:
 *     UserPostNKAPC @ 0x1C0004580 (UserPostNKAPC.c)
 *     RIMAllocateHidConfigDesc @ 0x1C000560C (RIMAllocateHidConfigDesc.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C00062DC (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetProductString @ 0x1C0006B34 (RIMGetProductString.c)
 *     RIMSetDeviceIdleTimeout @ 0x1C00075E8 (RIMSetDeviceIdleTimeout.c)
 *     QueuePowerRequest @ 0x1C000A740 (QueuePowerRequest.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C000A8A0 (RIMRegisterForInputWithCallbacks.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C000B3F0 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMAllocateHidDesc @ 0x1C000B524 (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1C000B820 (RIMCreateHidDesc.c)
 *     RIMHidGetCaps @ 0x1C000BD6C (RIMHidGetCaps.c)
 *     CreateKernelEvent @ 0x1C000D450 (CreateKernelEvent.c)
 *     ?vInit@W32PIDLOCK@@QEAAXXZ @ 0x1C000D6A8 (-vInit@W32PIDLOCK@@QEAAXXZ.c)
 *     GreCreateSemaphoreInternal @ 0x1C000D92C (GreCreateSemaphoreInternal.c)
 *     EngAllocMem @ 0x1C000D9B0 (EngAllocMem.c)
 *     ?Initialize@CProcessData@DirectComposition@@AEAAJXZ @ 0x1C000DB74 (-Initialize@CProcessData@DirectComposition@@AEAAJXZ.c)
 *     ?OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C000DD1C (-OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     RIMCreateDev @ 0x1C000E2BC (RIMCreateDev.c)
 *     ?Initialize@CConnection@DirectComposition@@AEAAJXZ @ 0x1C0019340 (-Initialize@CConnection@DirectComposition@@AEAAJXZ.c)
 *     ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX@Z @ 0x1C003DC80 (-SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX@Z.c)
 *     ?Initialize@CChannel@DirectComposition@@MEAAJXZ @ 0x1C00424F0 (-Initialize@CChannel@DirectComposition@@MEAAJXZ.c)
 *     CreateKernelSemaphore @ 0x1C0052BF0 (CreateKernelSemaphore.c)
 *     HmgCreate @ 0x1C00533A4 (HmgCreate.c)
 *     GreCreateFastMutex @ 0x1C0053C9C (GreCreateFastMutex.c)
 *     RIMGetKbdExId @ 0x1C0080A64 (RIMGetKbdExId.c)
 *     ?OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ @ 0x1C0080B88 (-OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ.c)
 *     ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1C0080C54 (-OnSessionCreation@CConnection@DirectComposition@@SAJH@Z.c)
 *     rimIoBuildDeviceConfigRequest @ 0x1C0087120 (rimIoBuildDeviceConfigRequest.c)
 *     UserPostNKAPCBuffer @ 0x1C00B1770 (UserPostNKAPCBuffer.c)
 *     xxxRemoteConnect @ 0x1C00B1960 (xxxRemoteConnect.c)
 *     CreateKernelTimer @ 0x1C00B3ED0 (CreateKernelTimer.c)
 *     RIMCreateHidKeyboardDeviceInfo @ 0x1C00DE924 (RIMCreateHidKeyboardDeviceInfo.c)
 *     rimContainsCustomHidKeyboardUsages @ 0x1C00DEBFC (rimContainsCustomHidKeyboardUsages.c)
 *     rimHidKeyboardIsButtonDevice @ 0x1C00DF080 (rimHidKeyboardIsButtonDevice.c)
 *     rimValidateCustomHidKeyboardUsages @ 0x1C00DF75C (rimValidateCustomHidKeyboardUsages.c)
 *     InitializePowerRequestList @ 0x1C01550AC (InitializePowerRequestList.c)
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
