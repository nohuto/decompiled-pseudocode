/*
 * XREFs of Win32AllocPoolZInit @ 0x1C004CEA0
 * Callers:
 *     ?TokenThread@CTokenManager@@SAJPEAXPEAII@Z @ 0x1C000E3E8 (-TokenThread@CTokenManager@@SAJPEAXPEAII@Z.c)
 *     ?EnsureTokenBufferSize@SfmTokenArray@@AEAAJI@Z @ 0x1C000E7D0 (-EnsureTokenBufferSize@SfmTokenArray@@AEAAJI@Z.c)
 *     ?Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12@@Z @ 0x1C00117B0 (-Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12.c)
 *     rimGetQDCActivePathsData @ 0x1C001ACEC (rimGetQDCActivePathsData.c)
 *     ?InsertAt@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAJAEBUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@I@Z @ 0x1C001D55C (-InsertAt@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@Direct.c)
 *     ?CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z @ 0x1C002F2C4 (-CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z.c)
 *     ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAIPEAPEAXI@Z @ 0x1C0047418 (-ProcessTokens@CTokenManager@@IEAAJPEAX0PEAIPEAPEAXI@Z.c)
 *     ?Initialize@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C004CD5C (-Initialize@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z.c)
 *     xxxUserChangeDisplaySettings @ 0x1C0059800 (xxxUserChangeDisplaySettings.c)
 *     RIMAllocateHidConfigDesc @ 0x1C0071604 (RIMAllocateHidConfigDesc.c)
 *     RIMCacheAxisChildIndex @ 0x1C0071EEC (RIMCacheAxisChildIndex.c)
 *     RIMInitializePointerDeviceFrameContactIdMgr @ 0x1C0073030 (RIMInitializePointerDeviceFrameContactIdMgr.c)
 *     RIMReadDigitizerToMonitorMappings @ 0x1C0073110 (RIMReadDigitizerToMonitorMappings.c)
 *     RIMGetDeviceButtons @ 0x1C00737A8 (RIMGetDeviceButtons.c)
 *     RIMAssignTouchType @ 0x1C0073A74 (RIMAssignTouchType.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1C0073C5C (RIMRetrieveAllLinkIndexUsages.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0073F6C (RIMCreatePointerDeviceInfo.c)
 *     RIMAllocateHidDesc @ 0x1C0077398 (RIMAllocateHidDesc.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C0077F94 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMReleasePointerDeviceInfo @ 0x1C00782B4 (RIMReleasePointerDeviceInfo.c)
 *     ?OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ @ 0x1C0080558 (-OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ.c)
 *     ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1C0080624 (-OnSessionCreation@CConnection@DirectComposition@@SAJH@Z.c)
 *     ?Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z @ 0x1C0080BAC (-Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z.c)
 *     ?RecordPnpNotification@@YAXW4tagPNP_NOTIFICATION_TYPE@@PEAUDEVICEINFO@@_K@Z @ 0x1C00A4720 (-RecordPnpNotification@@YAXW4tagPNP_NOTIFICATION_TYPE@@PEAUDEVICEINFO@@_K@Z.c)
 *     RIMAddSimulatedPointerDeviceData @ 0x1C00C39B4 (RIMAddSimulatedPointerDeviceData.c)
 *     RIMAddToActiveDevices @ 0x1C00C3B84 (RIMAddToActiveDevices.c)
 *     RIMInsertInPointerDeviceFrameContactIdMgr @ 0x1C00C3FB0 (RIMInsertInPointerDeviceFrameContactIdMgr.c)
 *     RIMIDEAllocateInjectedInfo @ 0x1C00C4B9C (RIMIDEAllocateInjectedInfo.c)
 *     RIMIDECreateHIDDesc @ 0x1C00C4E54 (RIMIDECreateHIDDesc.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00C51A8 (RIMIDECreatePointerDeviceInfo.c)
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C00C5F7C (RIMIDEInjectHIDReportFromPointerInfo.c)
 *     RIMIDEResetPointerDeviceMaxCount @ 0x1C00C684C (RIMIDEResetPointerDeviceMaxCount.c)
 *     ?BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z @ 0x1C00C732C (-BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z.c)
 *     ?BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z @ 0x1C00C7638 (-BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z.c)
 *     RIMGetCompleteFrameAndReleaseHoldingFrame @ 0x1C00C8588 (RIMGetCompleteFrameAndReleaseHoldingFrame.c)
 *     RIMStartHoldingFrame @ 0x1C00C88F4 (RIMStartHoldingFrame.c)
 *     RIMStoreFrameNodes @ 0x1C00C8970 (RIMStoreFrameNodes.c)
 *     RIMStoreRawDataBlock @ 0x1C00C8B2C (RIMStoreRawDataBlock.c)
 *     RIMCALMAddAfterLifeContact @ 0x1C00C8F70 (RIMCALMAddAfterLifeContact.c)
 *     rimProcessPTPDeviceInput @ 0x1C00CC708 (rimProcessPTPDeviceInput.c)
 *     rimProcessPointerDeviceInput @ 0x1C00CCB80 (rimProcessPointerDeviceInput.c)
 *     RIMCreateHidKeyboardDeviceInfo @ 0x1C00CED4C (RIMCreateHidKeyboardDeviceInfo.c)
 *     RIMAllocatePTPButtons @ 0x1C00CFE9C (RIMAllocatePTPButtons.c)
 *     rimObsDeliverInputToObserver @ 0x1C00D1588 (rimObsDeliverInputToObserver.c)
 *     ?InsertAt@?$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAJAEBUPointerCaptureInfo@CInputManager@@I@Z @ 0x1C00DE718 (-InsertAt@-$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAJAEBUPointerCaptureInfo.c)
 * Callees:
 *     Win32AllocPool @ 0x1C004C2C0 (Win32AllocPool.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

void *__fastcall Win32AllocPoolZInit(size_t Size)
{
  void *v2; // rax
  void *v3; // rbx

  v2 = (void *)Win32AllocPool();
  v3 = v2;
  if ( v2 )
    memset(v2, 0, Size);
  return v3;
}
