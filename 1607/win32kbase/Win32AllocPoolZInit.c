/*
 * XREFs of Win32AllocPoolZInit @ 0x1C0037AC0
 * Callers:
 *     ?_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x1C00053C4 (-_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     rimSetupPalmTelemetry @ 0x1C0005530 (rimSetupPalmTelemetry.c)
 *     RIMInitializeDeadzone @ 0x1C0005588 (RIMInitializeDeadzone.c)
 *     RIMAllocateHidConfigDesc @ 0x1C000560C (RIMAllocateHidConfigDesc.c)
 *     RIMCacheAxisChildIndex @ 0x1C00060D0 (RIMCacheAxisChildIndex.c)
 *     RIMReadDigitizerToMonitorMappings @ 0x1C0006568 (RIMReadDigitizerToMonitorMappings.c)
 *     rimGetQDCActivePathsData @ 0x1C00065F8 (rimGetQDCActivePathsData.c)
 *     RIMReleasePointerDeviceInfo @ 0x1C00067A0 (RIMReleasePointerDeviceInfo.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1C0006D58 (RIMCmAllocPointerDeviceContacts.c)
 *     RIMGetDeviceButtons @ 0x1C0007734 (RIMGetDeviceButtons.c)
 *     RIMAssignTouchType @ 0x1C0007A34 (RIMAssignTouchType.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1C0008928 (RIMRetrieveAllLinkIndexUsages.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0008C38 (RIMCreatePointerDeviceInfo.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C0009CB4 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMAllocateHidDesc @ 0x1C000B524 (RIMAllocateHidDesc.c)
 *     ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C001A2A0 (-ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     ?GetInfo@CFlipExBuffer@@UEBAJPEAUCSM_BUFFER_INFO@@@Z @ 0x1C001E270 (-GetInfo@CFlipExBuffer@@UEBAJPEAUCSM_BUFFER_INFO@@@Z.c)
 *     ?Initialize@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C002008C (-Initialize@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z.c)
 *     HMAllocObject @ 0x1C0038CC0 (HMAllocObject.c)
 *     ?CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z @ 0x1C00417CC (-CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z.c)
 *     ?InsertAt@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAJAEBUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@I@Z @ 0x1C004C59C (-InsertAt@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@Direct.c)
 *     ?TokenThread@CTokenManager@@SAJPEAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C004DEE4 (-TokenThread@CTokenManager@@SAJPEAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 *     ?EnsureTokenBufferSize@SfmTokenArray@@AEAAJI@Z @ 0x1C004E2D0 (-EnsureTokenBufferSize@SfmTokenArray@@AEAAJI@Z.c)
 *     xxxUserChangeDisplaySettings @ 0x1C0061850 (xxxUserChangeDisplaySettings.c)
 *     ?Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12@@Z @ 0x1C0079780 (-Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12.c)
 *     ?Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z @ 0x1C0079F60 (-Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z.c)
 *     ?OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ @ 0x1C0080B88 (-OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ.c)
 *     ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1C0080C54 (-OnSessionCreation@CConnection@DirectComposition@@SAJH@Z.c)
 *     RecordPnpNotification @ 0x1C00B45D0 (RecordPnpNotification.c)
 *     RIMCreatePointerDeviceDeadzone @ 0x1C00D1BF0 (RIMCreatePointerDeviceDeadzone.c)
 *     RIMAddSimulatedPointerDeviceData @ 0x1C00D472C (RIMAddSimulatedPointerDeviceData.c)
 *     RIMAddToActiveDevices @ 0x1C00D48CC (RIMAddToActiveDevices.c)
 *     RIMIDEAllocateInjectedInfo @ 0x1C00D4F90 (RIMIDEAllocateInjectedInfo.c)
 *     RIMIDECreateHIDDesc @ 0x1C00D53A8 (RIMIDECreateHIDDesc.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00D5734 (RIMIDECreatePointerDeviceInfo.c)
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C00D6568 (RIMIDEInjectHIDReportFromPointerInfo.c)
 *     RIMIDEResetPointerDeviceMaxCount @ 0x1C00D6E88 (RIMIDEResetPointerDeviceMaxCount.c)
 *     ?BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z @ 0x1C00D78D0 (-BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z.c)
 *     ?BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z @ 0x1C00D7BDC (-BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z.c)
 *     RIMStartPointerDeviceFrame @ 0x1C00D9D18 (RIMStartPointerDeviceFrame.c)
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C00DA060 (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x1C00DA2AC (rimStorePointersInHoldingFrame.c)
 *     rimStoreRawDataBlock @ 0x1C00DA560 (rimStoreRawDataBlock.c)
 *     RIMCreateHidKeyboardDeviceInfo @ 0x1C00DE924 (RIMCreateHidKeyboardDeviceInfo.c)
 *     rimObsDeliverInputToObserver @ 0x1C00E0080 (rimObsDeliverInputToObserver.c)
 *     rimObsPushInputMessage @ 0x1C00E0548 (rimObsPushInputMessage.c)
 *     ?Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z @ 0x1C00E084C (-Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z.c)
 *     ?SetDeadzonePalmTelemetry@RIMDeadzone@@QEAAJXZ @ 0x1C00E0DC8 (-SetDeadzonePalmTelemetry@RIMDeadzone@@QEAAJXZ.c)
 *     ?_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x1C00E0F1C (-_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     ?CaptureManipulationToCompositor@CInteractionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@II_K@Z @ 0x1C00E7480 (-CaptureManipulationToCompositor@CInteractionMarshaler@DirectComposition@@UEAAJPEAVCApplicationC.c)
 *     ?InsertAt@?$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAJAEBUPointerCaptureInfo@CInputManager@@I@Z @ 0x1C00F24B8 (-InsertAt@-$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAJAEBUPointerCaptureInfo.c)
 *     InitializeGre @ 0x1C0154000 (InitializeGre.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0034690 (Win32AllocPool.c)
 *     memset @ 0x1C008A080 (memset.c)
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
