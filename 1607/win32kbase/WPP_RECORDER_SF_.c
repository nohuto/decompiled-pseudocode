/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C0012AB0
 * Callers:
 *     rimSetupPalmTelemetry @ 0x1C0005530 (rimSetupPalmTelemetry.c)
 *     RIMInitializeDeadzone @ 0x1C0005588 (RIMInitializeDeadzone.c)
 *     RIMAllocateHidConfigDesc @ 0x1C000560C (RIMAllocateHidConfigDesc.c)
 *     RIMDeliverConfigRequest @ 0x1C0005780 (RIMDeliverConfigRequest.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C00062DC (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetFeatureReport @ 0x1C00064BC (RIMGetFeatureReport.c)
 *     RIMGetProductString @ 0x1C0006B34 (RIMGetProductString.c)
 *     RIMSetDeviceIdleTimeout @ 0x1C00075E8 (RIMSetDeviceIdleTimeout.c)
 *     RIMOnMonitorNotification @ 0x1C0007D20 (RIMOnMonitorNotification.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0007F84 (rimFindMonitorForDigitizerWithQDCData.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1C0008928 (RIMRetrieveAllLinkIndexUsages.c)
 *     RIMGetPropertyCount @ 0x1C0008AB8 (RIMGetPropertyCount.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0008C38 (RIMCreatePointerDeviceInfo.c)
 *     RIMIsEssentialUsage @ 0x1C00096CC (RIMIsEssentialUsage.c)
 *     RIMRetrieveLinkCollection @ 0x1C00097F0 (RIMRetrieveLinkCollection.c)
 *     RIMIsParallelDevice @ 0x1C0009A3C (RIMIsParallelDevice.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C0009CB4 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0009D90 (RIMAddNonPnpDeviceOfType.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C000A8A0 (RIMRegisterForInputWithCallbacks.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C000B3F0 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMAllocateHidDesc @ 0x1C000B524 (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1C000B820 (RIMCreateHidDesc.c)
 *     RIMHidGetCaps @ 0x1C000BD6C (RIMHidGetCaps.c)
 *     RIMDeviceClassNotify @ 0x1C000BFC0 (RIMDeviceClassNotify.c)
 *     rimOnPnpArrived @ 0x1C000C7E8 (rimOnPnpArrived.c)
 *     RIMResetPointerDevices @ 0x1C000CFF0 (RIMResetPointerDevices.c)
 *     RIMEndAllActiveContacts @ 0x1C000D10C (RIMEndAllActiveContacts.c)
 *     RIMCreateDev @ 0x1C000E2BC (RIMCreateDev.c)
 *     rimOnPnpRemoveComplete @ 0x1C000EA9C (rimOnPnpRemoveComplete.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C000F448 (RIMAbandonPointerDeviceFrame.c)
 *     RIMDeviceIoControl @ 0x1C000FB90 (RIMDeviceIoControl.c)
 *     rimProcessInput @ 0x1C000FF78 (rimProcessInput.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C0010070 (RIMDirectStartStopDeviceRead.c)
 *     RIMReadInput @ 0x1C00117E0 (RIMReadInput.c)
 *     RIMUnregisterCurrentProcessForInput @ 0x1C00127C0 (RIMUnregisterCurrentProcessForInput.c)
 *     RIMRemoveInputOfType @ 0x1C007D9C0 (RIMRemoveInputOfType.c)
 *     RIMUnregisterForInput @ 0x1C007DAD0 (RIMUnregisterForInput.c)
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C007F190 (RIMDirectPnpRemoveDevicesOfType.c)
 *     RIMDirectStopDeviceClassNotifications @ 0x1C007F450 (RIMDirectStopDeviceClassNotifications.c)
 *     RIMConfigurePointerDevice @ 0x1C007F890 (RIMConfigurePointerDevice.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C007FBEC (RIMDiscoverDevicesOfInputType.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C0081960 (rimProcessAnyQueuedCompleteFrames.c)
 *     RIMSendLatencyMgtRequest @ 0x1C0086B00 (RIMSendLatencyMgtRequest.c)
 *     RIMOnPowerNotification @ 0x1C0086BF0 (RIMOnPowerNotification.c)
 *     RIMDoOnPowerNotification @ 0x1C0086D18 (RIMDoOnPowerNotification.c)
 *     RIMDeliverConfigRequestWithTimeout @ 0x1C0086F50 (RIMDeliverConfigRequestWithTimeout.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0087FB0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1C0088380 (RIMDirectStartDeviceClassNotifications.c)
 *     RIMRefreshDeviceAttributes @ 0x1C0088A20 (RIMRefreshDeviceAttributes.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C00CD874 (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     RIMIDEProcessRemoveInjectionDevices @ 0x1C00CD998 (RIMIDEProcessRemoveInjectionDevices.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C00CE230 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddInputOfType @ 0x1C00CE630 (RIMAddInputOfType.c)
 *     RIMAreSiblingDevices @ 0x1C00CE760 (RIMAreSiblingDevices.c)
 *     RIMFreeInputBuffer @ 0x1C00CE9D0 (RIMFreeInputBuffer.c)
 *     RIMGetDevicePreparsedData @ 0x1C00CEAF0 (RIMGetDevicePreparsedData.c)
 *     RIMGetDeviceProperties @ 0x1C00CED50 (RIMGetDeviceProperties.c)
 *     RIMGetDownContactCount @ 0x1C00CF090 (RIMGetDownContactCount.c)
 *     RIMGetPhysicalDeviceRect @ 0x1C00CF1B0 (RIMGetPhysicalDeviceRect.c)
 *     RIMGetSourceProcessId @ 0x1C00CF360 (RIMGetSourceProcessId.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C00CF4C0 (RIMIDERemoveInjectionDevice.c)
 *     RIMInjectInput @ 0x1C00CF600 (RIMInjectInput.c)
 *     RIMIsPrimaryPointerDeviceDown @ 0x1C00CF860 (RIMIsPrimaryPointerDeviceDown.c)
 *     RIMOnCheckPointerDeviceMonitors @ 0x1C00CF9B0 (RIMOnCheckPointerDeviceMonitors.c)
 *     RIMOnPnpNotification @ 0x1C00CFB10 (RIMOnPnpNotification.c)
 *     RIMOnTimerNotification @ 0x1C00CFE90 (RIMOnTimerNotification.c)
 *     RIMRemoveInjectionDevice @ 0x1C00D0310 (RIMRemoveInjectionDevice.c)
 *     RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C00D04D8 (RIMRemoveMouseOrKeyboardInjectionDevice.c)
 *     rimAbRemoveGlobalPenDeadzoneIfExpired @ 0x1C00D0EB4 (rimAbRemoveGlobalPenDeadzoneIfExpired.c)
 *     rimAbShouldButtonContactBeSuppressed @ 0x1C00D0F30 (rimAbShouldButtonContactBeSuppressed.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C00D1040 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C00D13A8 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C00D16F4 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C00D19A8 (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMActivatePointerDeviceDeadzone @ 0x1C00D1AF0 (RIMActivatePointerDeviceDeadzone.c)
 *     RIMCreatePointerDeviceDeadzone @ 0x1C00D1BF0 (RIMCreatePointerDeviceDeadzone.c)
 *     RIMDestroyPointerDeviceDeadzone @ 0x1C00D1D50 (RIMDestroyPointerDeviceDeadzone.c)
 *     RIMUpdatePointerDeviceDeadzoneOrigin @ 0x1C00D1E70 (RIMUpdatePointerDeviceDeadzoneOrigin.c)
 *     rimConfigurationChange @ 0x1C00D2DCC (rimConfigurationChange.c)
 *     rimReadSingleDigitizerToMonitorMappings @ 0x1C00D31BC (rimReadSingleDigitizerToMonitorMappings.c)
 *     rimNotifyPointerDeviceChangeClients @ 0x1C00D44CC (rimNotifyPointerDeviceChangeClients.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00D5734 (RIMIDECreatePointerDeviceInfo.c)
 *     RIMIDECreatePseudoHIDDevice @ 0x1C00D5BB4 (RIMIDECreatePseudoHIDDevice.c)
 *     RIMIDEValidateDeviceSize @ 0x1C00D71CC (RIMIDEValidateDeviceSize.c)
 *     ?RIMOnTTMDeviceClose@@YAX_K@Z @ 0x1C00D86B0 (-RIMOnTTMDeviceClose@@YAX_K@Z.c)
 *     traceFrame @ 0x1C00D9450 (traceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C00D9824 (RIMCompletePointerDeviceFrame.c)
 *     RIMFixUpCompleteFrame @ 0x1C00D9B58 (RIMFixUpCompleteFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C00D9D18 (RIMStartPointerDeviceFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x1C00DA2AC (rimStorePointersInHoldingFrame.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C00DA8B8 (RIMSignalOnPnpNotificationAndWait.c)
 *     rimFakePnpRemoveComplete @ 0x1C00DB150 (rimFakePnpRemoveComplete.c)
 *     rimOnPnpQueryRemove @ 0x1C00DB234 (rimOnPnpQueryRemove.c)
 *     rimOnPnpRemoveCancelled @ 0x1C00DB2CC (rimOnPnpRemoveCancelled.c)
 *     RIMProcessAnyPointerDeviceInput @ 0x1C00DB5A8 (RIMProcessAnyPointerDeviceInput.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C00DC190 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C00DC28C (rimDoProcessAnyPointerDeviceInput.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C00DC620 (rimEndPointerDeviceStaleContacts.c)
 *     rimExtractParallelFrameInfoAndAbandonIncompleteFrame @ 0x1C00DCD98 (rimExtractParallelFrameInfoAndAbandonIncompleteFrame.c)
 *     rimExtractPointerDeviceUsages @ 0x1C00DD0D8 (rimExtractPointerDeviceUsages.c)
 *     rimExtractScantime @ 0x1C00DD530 (rimExtractScantime.c)
 *     rimFindOrCreateActiveContact @ 0x1C00DDA20 (rimFindOrCreateActiveContact.c)
 *     rimPopulateContactFrameData @ 0x1C00DDD00 (rimPopulateContactFrameData.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1C00DDFEC (rimProcessPointerDeviceButtonContact.c)
 *     rimProcessPointerDeviceContact @ 0x1C00DE1A8 (rimProcessPointerDeviceContact.c)
 *     RIMCreateHidKeyboardDeviceInfo @ 0x1C00DE924 (RIMCreateHidKeyboardDeviceInfo.c)
 *     rimFillKeyboardInputData @ 0x1C00DEFDC (rimFillKeyboardInputData.c)
 *     rimProcessHidKeyboardInput @ 0x1C00DF3B4 (rimProcessHidKeyboardInput.c)
 *     rimValidateCustomHidKeyboardUsages @ 0x1C00DF75C (rimValidateCustomHidKeyboardUsages.c)
 *     rimObsAddInputObserver @ 0x1C00DFB04 (rimObsAddInputObserver.c)
 *     rimObsDeliverInputToObserver @ 0x1C00E0080 (rimObsDeliverInputToObserver.c)
 *     rimObsPushInputMessage @ 0x1C00E0548 (rimObsPushInputMessage.c)
 *     RIMValidatePTPButtons @ 0x1C00E2560 (RIMValidatePTPButtons.c)
 *     RIMValidatePTPProperties @ 0x1C00E262C (RIMValidatePTPProperties.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x1C0012AB0
 * Reason: Hex-Rays returned no pseudocode for 0x1C0012AB0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0012AB0: mov     [rsp+arg_0], rbx
 * 00000001C0012AB5: mov     [rsp+arg_8], rbp
 * 00000001C0012ABA: mov     [rsp+arg_10], rsi
 * 00000001C0012ABF: push    rdi
 * 00000001C0012AC0: push    r14
 * 00000001C0012AC2: push    r15
 * 00000001C0012AC4: sub     rsp, 30h
 * 00000001C0012AC8: mov     r14d, r8d
 * 00000001C0012ACB: movzx   ebp, r9w
 * 00000001C0012ACF: mov     edi, r8d
 * 00000001C0012AD2: mov     sil, dl
 * 00000001C0012AD5: shr     rdi, 10h
 * 00000001C0012AD9: mov     r15, rcx
 * 00000001C0012ADC: lea     ebx, [r14-1]
 * 00000001C0012AE0: mov     r10d, ebx
 * 00000001C0012AE3: and     ebx, 1Fh
 * 00000001C0012AE6: shr     r10, 5
 * 00000001C0012AEA: lea     rax, [rdi+rdi*4]
 * 00000001C0012AEE: and     r10d, 7FFh
 * 00000001C0012AF5: lea     r11, [r10+rax*4]
 * 00000001C0012AF9: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0012B00: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0012B05: bt      eax, ebx
 * 00000001C0012B08: jb      loc_1C0097C1E
 * 00000001C0012B0E: and     [rsp+48h+var_20], 0
 * 00000001C0012B14: mov     r8d, r14d
 * 00000001C0012B17: mov     r9, [rsp+48h+arg_20]
 * 00000001C0012B1C: mov     rcx, r15
 * 00000001C0012B1F: movzx   edx, sil
 * 00000001C0012B23: mov     word ptr [rsp+48h+var_28], bp
 * 00000001C0012B28: call    cs:__imp_WppAutoLogTrace
 * 00000001C0012B2E: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0012B33: mov     rbp, [rsp+48h+arg_8]
 * 00000001C0012B38: mov     rsi, [rsp+48h+arg_10]
 * 00000001C0012B3D: add     rsp, 30h
 * 00000001C0012B41: pop     r15
 * 00000001C0012B43: pop     r14
 * 00000001C0012B45: pop     rdi
 * 00000001C0012B46: retn
 * 00000001C0097C1E: lea     rcx, [rdi+rdi*4]
 * 00000001C0097C22: add     rcx, rcx
 * 00000001C0097C25: cmp     [r10+rcx*8+29h], sil
 * 00000001C0097C2A: jb      loc_1C0012B0E
 * 00000001C0097C30: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0097C37: mov     edx, 2Bh ; '+'
 * 00000001C0097C3C: and     [rsp+48h+var_28], 0
 * 00000001C0097C42: mov     r8, [rsp+48h+arg_20]
 * 00000001C0097C47: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0097C4C: movzx   r9d, bp
 * 00000001C0097C50: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0097C56: nop
 * 00000001C0097C57: jmp     loc_1C0012B0E
 */
