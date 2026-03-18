/*
 * XREFs of Win32AllocPoolZInit @ 0x1C004F690
 * Callers:
 *     RIMAllocateHidConfigDesc @ 0x1C0005A0C (RIMAllocateHidConfigDesc.c)
 *     RIMCacheAxisChildIndex @ 0x1C0005F00 (RIMCacheAxisChildIndex.c)
 *     RIMGetDeviceButtons @ 0x1C0007494 (RIMGetDeviceButtons.c)
 *     RIMAssignTouchType @ 0x1C0007760 (RIMAssignTouchType.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1C0007948 (RIMRetrieveAllLinkIndexUsages.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0007C58 (RIMCreatePointerDeviceInfo.c)
 *     RIMReadDigitizerToMonitorMappings @ 0x1C0009E00 (RIMReadDigitizerToMonitorMappings.c)
 *     RIMInitializePointerDeviceFrameContactIdMgr @ 0x1C0009FBC (RIMInitializePointerDeviceFrameContactIdMgr.c)
 *     RIMReleasePointerDeviceInfo @ 0x1C000ABDC (RIMReleasePointerDeviceInfo.c)
 *     RIMAllocateHidDesc @ 0x1C000F32C (RIMAllocateHidDesc.c)
 *     ?CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z @ 0x1C001C64C (-CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z.c)
 *     ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C003D07C (-ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     ?Initialize@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C003F144 (-Initialize@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z.c)
 *     ?TokenThread@CTokenManager@@SAJPEAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C004E418 (-TokenThread@CTokenManager@@SAJPEAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 *     ?EnsureTokenBufferSize@SfmTokenArray@@AEAAJI@Z @ 0x1C004E800 (-EnsureTokenBufferSize@SfmTokenArray@@AEAAJI@Z.c)
 *     ?InsertAt@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAJAEBUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@I@Z @ 0x1C004F4D0 (-InsertAt@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@Direct.c)
 *     rimGetQDCActivePathsData @ 0x1C00503A8 (rimGetQDCActivePathsData.c)
 *     xxxUserChangeDisplaySettings @ 0x1C0052F30 (xxxUserChangeDisplaySettings.c)
 *     ?Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12@@Z @ 0x1C0073924 (-Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C007B95C (RIMAllocateAndLinkHidTLCInfo.c)
 *     ?OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ @ 0x1C007D048 (-OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ.c)
 *     ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1C007D114 (-OnSessionCreation@CConnection@DirectComposition@@SAJH@Z.c)
 *     ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C007D970 (-Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     ?Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z @ 0x1C007EB18 (-Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z.c)
 *     ?RecordPnpNotification@@YAXW4tagPNP_NOTIFICATION_TYPE@@PEAUDEVICEINFO@@_K@Z @ 0x1C00A9190 (-RecordPnpNotification@@YAXW4tagPNP_NOTIFICATION_TYPE@@PEAUDEVICEINFO@@_K@Z.c)
 *     RIMAddSimulatedPointerDeviceData @ 0x1C00C47F4 (RIMAddSimulatedPointerDeviceData.c)
 *     RIMAddToActiveDevices @ 0x1C00C49C4 (RIMAddToActiveDevices.c)
 *     RIMInsertInPointerDeviceFrameContactIdMgr @ 0x1C00C4E44 (RIMInsertInPointerDeviceFrameContactIdMgr.c)
 *     RIMIDEAllocateInjectedInfo @ 0x1C00C5A98 (RIMIDEAllocateInjectedInfo.c)
 *     RIMIDECreateHIDDesc @ 0x1C00C5D50 (RIMIDECreateHIDDesc.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00C60A4 (RIMIDECreatePointerDeviceInfo.c)
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C00C6E68 (RIMIDEInjectHIDReportFromPointerInfo.c)
 *     RIMIDEResetPointerDeviceMaxCount @ 0x1C00C7720 (RIMIDEResetPointerDeviceMaxCount.c)
 *     ?BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z @ 0x1C00C8228 (-BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z.c)
 *     ?BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z @ 0x1C00C8534 (-BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z.c)
 *     RIMGetCompleteFrameAndReleaseHoldingFrame @ 0x1C00C9488 (RIMGetCompleteFrameAndReleaseHoldingFrame.c)
 *     RIMStartHoldingFrame @ 0x1C00C97F4 (RIMStartHoldingFrame.c)
 *     RIMStoreFrameNodes @ 0x1C00C9870 (RIMStoreFrameNodes.c)
 *     RIMStoreRawDataBlock @ 0x1C00C9A2C (RIMStoreRawDataBlock.c)
 *     RIMCALMAddAfterLifeContact @ 0x1C00C9E70 (RIMCALMAddAfterLifeContact.c)
 *     rimProcessPTPDeviceInput @ 0x1C00CD9FC (rimProcessPTPDeviceInput.c)
 *     rimProcessPointerDeviceInput @ 0x1C00CDE70 (rimProcessPointerDeviceInput.c)
 *     RIMCreateHidKeyboardDeviceInfo @ 0x1C00D0120 (RIMCreateHidKeyboardDeviceInfo.c)
 *     RIMAllocatePTPButtons @ 0x1C00D1278 (RIMAllocatePTPButtons.c)
 *     rimObsDeliverInputToObserver @ 0x1C00D3280 (rimObsDeliverInputToObserver.c)
 *     rimObsPushInputMessage @ 0x1C00D3748 (rimObsPushInputMessage.c)
 *     ?InsertAt@?$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAJAEBUPointerCaptureInfo@CInputManager@@I@Z @ 0x1C00E03C8 (-InsertAt@-$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAJAEBUPointerCaptureInfo.c)
 *     InitializeGre @ 0x1C013A000 (InitializeGre.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0020C90 (Win32AllocPool.c)
 *     memset @ 0x1C00890C0 (memset.c)
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
