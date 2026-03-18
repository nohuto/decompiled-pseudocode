/*
 * XREFs of Win32AllocPoolNonPaged @ 0x1C0024780
 * Callers:
 *     UserPostNKAPC @ 0x1C0003CD0 (UserPostNKAPC.c)
 *     QueuePowerRequest @ 0x1C0007A70 (QueuePowerRequest.c)
 *     CreateKernelEvent @ 0x1C0016C90 (CreateKernelEvent.c)
 *     ?Initialize@CChannel@DirectComposition@@MEAAJXZ @ 0x1C0023530 (-Initialize@CChannel@DirectComposition@@MEAAJXZ.c)
 *     ?Create@CSemaphore@DirectComposition@@SAJPEAPEAV12@@Z @ 0x1C002405C (-Create@CSemaphore@DirectComposition@@SAJPEAPEAV12@@Z.c)
 *     ?vInit@W32PIDLOCK@@QEAAXXZ @ 0x1C00241AC (-vInit@W32PIDLOCK@@QEAAXXZ.c)
 *     GreCreateSemaphoreInternal @ 0x1C002439C (GreCreateSemaphoreInternal.c)
 *     EngAllocMem @ 0x1C0024420 (EngAllocMem.c)
 *     ?Initialize@CProcessData@DirectComposition@@AEAAJXZ @ 0x1C00245C0 (-Initialize@CProcessData@DirectComposition@@AEAAJXZ.c)
 *     ?OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C00246AC (-OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX@Z @ 0x1C003098C (-SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX@Z.c)
 *     rimIoBuildDeviceConfigRequest @ 0x1C006E7E8 (rimIoBuildDeviceConfigRequest.c)
 *     RIMAllocateHidConfigDesc @ 0x1C0071604 (RIMAllocateHidConfigDesc.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C0072EBC (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetProductString @ 0x1C0073538 (RIMGetProductString.c)
 *     RIMSetDeviceIdleTimeout @ 0x1C00750A0 (RIMSetDeviceIdleTimeout.c)
 *     RIMCreateDev @ 0x1C0076274 (RIMCreateDev.c)
 *     RIMAllocateHidDesc @ 0x1C0077398 (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1C00775D0 (RIMCreateHidDesc.c)
 *     RIMHidGetCaps @ 0x1C0077BE8 (RIMHidGetCaps.c)
 *     RemoteConnect @ 0x1C0078CF0 (RemoteConnect.c)
 *     CreateKernelSemaphore @ 0x1C007B838 (CreateKernelSemaphore.c)
 *     HmgCreate @ 0x1C007CEA4 (HmgCreate.c)
 *     GreCreateFastMutex @ 0x1C007D450 (GreCreateFastMutex.c)
 *     ?OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ @ 0x1C0080558 (-OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ.c)
 *     ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1C0080624 (-OnSessionCreation@CConnection@DirectComposition@@SAJH@Z.c)
 *     ?Initialize@CConnection@DirectComposition@@AEAAJXZ @ 0x1C0080A2C (-Initialize@CConnection@DirectComposition@@AEAAJXZ.c)
 *     RIMGetKbdExId @ 0x1C0082A48 (RIMGetKbdExId.c)
 *     UserPostNKAPCBuffer @ 0x1C00A4580 (UserPostNKAPCBuffer.c)
 *     CreateKernelTimer @ 0x1C00A61B0 (CreateKernelTimer.c)
 *     RIMCreateHidKeyboardDeviceInfo @ 0x1C00CED4C (RIMCreateHidKeyboardDeviceInfo.c)
 *     rimContainsCustomHidKeyboardUsages @ 0x1C00CF024 (rimContainsCustomHidKeyboardUsages.c)
 *     rimHidKeyboardIsButtonDevice @ 0x1C00CF4A8 (rimHidKeyboardIsButtonDevice.c)
 *     rimValidateCustomHidKeyboardUsages @ 0x1C00CFB7C (rimValidateCustomHidKeyboardUsages.c)
 *     RIMSendPTPLatencyMgtDeviceRequest @ 0x1C00D0E34 (RIMSendPTPLatencyMgtDeviceRequest.c)
 *     InitializePowerRequestList @ 0x1C0137000 (InitializePowerRequestList.c)
 * Callees:
 *     IsWin32AllocPoolImplSupported_0 @ 0x1C0002BB8 (IsWin32AllocPoolImplSupported_0.c)
 *     Win32AllocPoolImpl_0 @ 0x1C0002BC0 (Win32AllocPoolImpl_0.c)
 */

__int64 Win32AllocPoolNonPaged()
{
  if ( (int)IsWin32AllocPoolImplSupported_0() < 0 )
    return 0LL;
  else
    return Win32AllocPoolImpl_0();
}
