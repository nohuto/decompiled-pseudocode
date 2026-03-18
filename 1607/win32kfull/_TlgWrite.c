/*
 * XREFs of _TlgWrite @ 0x1C00E5414
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0068630 (xxxSystemParametersInfo.c)
 *     RawInputThread @ 0x1C007B620 (RawInputThread.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C009190C (xxxUpdatePerUserSystemParameters.c)
 *     ?TraceLoggingRimHidDeviceArrivedEvent@@YAXGIIKKHPEAU_UNICODE_STRING@@0@Z @ 0x1C00E52C4 (-TraceLoggingRimHidDeviceArrivedEvent@@YAXGIIKKHPEAU_UNICODE_STRING@@0@Z.c)
 *     ?TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z @ 0x1C00E54AC (-TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z.c)
 *     ?TraceLoggingProcessUsageOnTerminationEvent@@YAXQEAUtagPROCESSINFO@@@Z @ 0x1C00E55F8 (-TraceLoggingProcessUsageOnTerminationEvent@@YAXQEAUtagPROCESSINFO@@@Z.c)
 *     ?TraceLoggingUserIsActive@@YAXIT_LARGE_INTEGER@@@Z @ 0x1C00E5670 (-TraceLoggingUserIsActive@@YAXIT_LARGE_INTEGER@@@Z.c)
 *     ?TraceLoggingSendMixedModeTelemetry@@YAHXZ @ 0x1C00E5700 (-TraceLoggingSendMixedModeTelemetry@@YAHXZ.c)
 *     ?TraceLoggingRimHidDeviceRemovedEvent@@YAXGIIKKHPEAU_UNICODE_STRING@@0@Z @ 0x1C00E5754 (-TraceLoggingRimHidDeviceRemovedEvent@@YAXGIIKKHPEAU_UNICODE_STRING@@0@Z.c)
 *     ?TraceLoggingHidConfigEvent@@YAXKPEAG0KKUtagRECT@@1@Z @ 0x1C00E5C7C (-TraceLoggingHidConfigEvent@@YAXKPEAG0KKUtagRECT@@1@Z.c)
 *     ?TraceLoggingSPISetMenuDropAlignmentEvent@@YAXHH@Z @ 0x1C00E722C (-TraceLoggingSPISetMenuDropAlignmentEvent@@YAXHH@Z.c)
 *     xxxUserReinitializeAutoRotation @ 0x1C00E92B0 (xxxUserReinitializeAutoRotation.c)
 *     ?AcquireDeviceBackgroundAccess@InteractiveControlManager@@QEAAJKIIPEAUtagWND@@@Z @ 0x1C0123DF0 (-AcquireDeviceBackgroundAccess@InteractiveControlManager@@QEAAJKIIPEAUtagWND@@@Z.c)
 *     ?TraceLoggingMouseWheelRoutingValueAtStartup@@YAXXZ @ 0x1C0135418 (-TraceLoggingMouseWheelRoutingValueAtStartup@@YAXXZ.c)
 *     xxxRefreshDisplayOrientation @ 0x1C0154E80 (xxxRefreshDisplayOrientation.c)
 *     xxxSetAutoRotationDocked @ 0x1C0154F04 (xxxSetAutoRotationDocked.c)
 *     xxxSetAutoRotationConvertible @ 0x1C0154F84 (xxxSetAutoRotationConvertible.c)
 *     ?xxxRotateScreen@@YAJKHPEAH@Z @ 0x1C01C9C28 (-xxxRotateScreen@@YAJKHPEAH@Z.c)
 *     ?xxxSmoothRotateScreen@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAUDISPLAYCONFIG_MODE_INFO@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C9F78 (-xxxSmoothRotateScreen@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAUDISPLAYCONFIG_MODE_INFO@@HPEAU_DXGK_.c)
 *     xxxSetAutoRotationState @ 0x1C01CA438 (xxxSetAutoRotationState.c)
 *     xxxSetSensorPresence @ 0x1C01CA528 (xxxSetSensorPresence.c)
 *     xxxSetSlateAutoRotationState @ 0x1C01CA5F0 (xxxSetSlateAutoRotationState.c)
 *     NtUserDrawMenuBarTemp @ 0x1C02120A0 (NtUserDrawMenuBarTemp.c)
 *     ?TraceLoggingEdgePalmRejection@@YAXUtagPOINT@@0@Z @ 0x1C021DE2C (-TraceLoggingEdgePalmRejection@@YAXUtagPOINT@@0@Z.c)
 *     ?TraceLoggingHitTestWindowTargeting@@YAXHHHHHHH@Z @ 0x1C021DF08 (-TraceLoggingHitTestWindowTargeting@@YAXHHHHHHH@Z.c)
 *     ?TraceLoggingIntObjUsageSummaryEvent@@YAXPEAUtagINTOBJTELEMETRYSTATE@@GGU_GUID@@1_K@Z @ 0x1C021E008 (-TraceLoggingIntObjUsageSummaryEvent@@YAXPEAUtagINTOBJTELEMETRYSTATE@@GGU_GUID@@1_K@Z.c)
 *     ?TraceLoggingMouseWheelRoutingModeChange@@YAXK@Z @ 0x1C021E364 (-TraceLoggingMouseWheelRoutingModeChange@@YAXK@Z.c)
 *     ?TraceLoggingPTPGestureUsageEvent@@YAXPEBUtagTPTELEMSTATE@@@Z @ 0x1C021E3F0 (-TraceLoggingPTPGestureUsageEvent@@YAXPEBUtagTPTELEMSTATE@@@Z.c)
 *     ?TraceLoggingPTPKeyToAATimeDeltas@@YAX_J000W4tagPTP_ACTION@@1@Z @ 0x1C021E5B8 (-TraceLoggingPTPKeyToAATimeDeltas@@YAX_J000W4tagPTP_ACTION@@1@Z.c)
 *     ?TraceLoggingPTPKeyToGestureTiming@@YAX_J0PEBUtagTPTELEMTIMINGS@@00@Z @ 0x1C021E6C8 (-TraceLoggingPTPKeyToGestureTiming@@YAX_J0PEBUtagTPTELEMTIMINGS@@00@Z.c)
 *     ?TraceLoggingPTPSettingsConfigEvent@@YAXPEAUtagTPSETTINGS@@KHPEAG1HHUtagRECT@@2@Z @ 0x1C021E994 (-TraceLoggingPTPSettingsConfigEvent@@YAXPEAUtagTPSETTINGS@@KHPEAG1HHUtagRECT@@2@Z.c)
 *     ?TraceLoggingPTPUsageDetailsEvent@@YAXPEBUtagTPTELEMSTATE@@_J@Z @ 0x1C021EB98 (-TraceLoggingPTPUsageDetailsEvent@@YAXPEBUtagTPTELEMSTATE@@_J@Z.c)
 *     ?TraceLoggingPTPWarpBack@@YAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z @ 0x1C021ECE8 (-TraceLoggingPTPWarpBack@@YAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z.c)
 *     ?TraceLoggingSPISetDesktopDPIOverrideEvent@@YAXHH@Z @ 0x1C021EDDC (-TraceLoggingSPISetDesktopDPIOverrideEvent@@YAXHH@Z.c)
 *     ?TraceLoggingSPISetModernDPIOverrideEvent@@YAXHH@Z @ 0x1C021EE8C (-TraceLoggingSPISetModernDPIOverrideEvent@@YAXHH@Z.c)
 *     ?TraceLoggingSPISetPenVisualizationEvent@@YAXKK@Z @ 0x1C021EF3C (-TraceLoggingSPISetPenVisualizationEvent@@YAXKK@Z.c)
 *     ?TraceLoggingScreenOrientationArStateChangeEvent@@YAXKW4arInitiatedBy@@W4tagAR_STATE@@@Z @ 0x1C021EFEC (-TraceLoggingScreenOrientationArStateChangeEvent@@YAXKW4arInitiatedBy@@W4tagAR_STATE@@@Z.c)
 *     ?TraceLoggingScreenOrientationChangeEvent@@YAXKW4arInitiatedBy@@HW4arFailureReason@@@Z @ 0x1C021F0C4 (-TraceLoggingScreenOrientationChangeEvent@@YAXKW4arInitiatedBy@@HW4arFailureReason@@@Z.c)
 *     ?TraceLoggingStubInvalidParamEvent@@YAXIKQEAD@Z @ 0x1C021F198 (-TraceLoggingStubInvalidParamEvent@@YAXIKQEAD@Z.c)
 *     ?TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z @ 0x1C021F268 (-TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z.c)
 *     ?TraceLoggingTouchInjection@@YAXHHHK@Z @ 0x1C021F318 (-TraceLoggingTouchInjection@@YAXHHHK@Z.c)
 *     ?TraceLoggingWinPHotKeyEvent@@YAXXZ @ 0x1C021F42C (-TraceLoggingWinPHotKeyEvent@@YAXXZ.c)
 *     TraceLoggingDesktopAllocFailureEvent @ 0x1C021F4A0 (TraceLoggingDesktopAllocFailureEvent.c)
 *     TraceLoggingDesktopAllocFailureEventForSession @ 0x1C021F5D8 (TraceLoggingDesktopAllocFailureEventForSession.c)
 *     ?ClearBackgroundAccessors@InteractiveControlManager@@QEAAJK@Z @ 0x1C023A968 (-ClearBackgroundAccessors@InteractiveControlManager@@QEAAJK@Z.c)
 *     ?ClearDeviceFocus@InteractiveControlManager@@QEAAJK@Z @ 0x1C023AA98 (-ClearDeviceFocus@InteractiveControlManager@@QEAAJK@Z.c)
 *     ?GetDeviceInfo@InteractiveControlManager@@QEAAJKPEAUtagINTERACTIVECTRL_DEVICE_INFO@@@Z @ 0x1C023AC10 (-GetDeviceInfo@InteractiveControlManager@@QEAAJKPEAUtagINTERACTIVECTRL_DEVICE_INFO@@@Z.c)
 *     ?GetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z @ 0x1C023AE10 (-GetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z.c)
 *     ?GetReportExtendedUsage@InteractiveControlManager@@QEAAJKKGGGPEAJ@Z @ 0x1C023AF78 (-GetReportExtendedUsage@InteractiveControlManager@@QEAAJKKGGGPEAJ@Z.c)
 *     ?GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1C023B1F4 (-GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z.c)
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C023B484 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C023B6F8 (-OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnInputReport@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@PEAXK@Z @ 0x1C023B958 (-OnInputReport@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@PEAXK@Z.c)
 *     ?SendDeviceHapticsOutput@InteractiveControlManager@@QEAAJKAEBU_GERERIC_HAPTICS_OUTPUT@@@Z @ 0x1C023BAB0 (-SendDeviceHapticsOutput@InteractiveControlManager@@QEAAJKAEBU_GERERIC_HAPTICS_OUTPUT@@@Z.c)
 *     ?SetDeviceComponentResolution@InteractiveControlManager@@QEAAJKW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C023BC38 (-SetDeviceComponentResolution@InteractiveControlManager@@QEAAJKW4_INTERACTIVECTRL_COMPONENT_TYPE.c)
 *     ?SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND@@@Z @ 0x1C023BE1C (-SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND.c)
 *     ?SetDeviceHapticsConfiguration@InteractiveControlManager@@QEAAJKAEBU_GERERIC_HAPTICS_CONFIGURATION@@@Z @ 0x1C023BF88 (-SetDeviceHapticsConfiguration@InteractiveControlManager@@QEAAJKAEBU_GERERIC_HAPTICS_CONFIGURATI.c)
 *     ?SetDeviceHapticsMode@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C023C130 (-SetDeviceHapticsMode@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z.c)
 *     ?SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z @ 0x1C023C2DC (-SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z.c)
 *     ?CloseHapticsWriteDevice@InteractiveControlDevice@@QEAAJH@Z @ 0x1C023C9DC (-CloseHapticsWriteDevice@InteractiveControlDevice@@QEAAJH@Z.c)
 *     ?HapticsDeviceNotify@InteractiveControlDevice@@SAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z @ 0x1C023D2B0 (-HapticsDeviceNotify@InteractiveControlDevice@@SAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z.c)
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C023D4F0 (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OpenHapticsWriteDevice@InteractiveControlDevice@@QEAAJXZ @ 0x1C023D848 (-OpenHapticsWriteDevice@InteractiveControlDevice@@QEAAJXZ.c)
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z @ 0x1C023DC24 (-QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z.c)
 *     ?SendDeviceIOControl@InteractiveControlDevice@@QEAAJKPEAXK0KPEAK@Z @ 0x1C023DEA4 (-SendDeviceIOControl@InteractiveControlDevice@@QEAAJKPEAXK0KPEAK@Z.c)
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAVInteractiveControlDevice@@PEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C023F134 (-GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAVInteractiveControlDevice@@PEAUtagI.c)
 *     ?FindDigitizerForDevice@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@PEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1C02403DC (-FindDigitizerForDevice@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@PEAU_HIDP_PRE.c)
 *     ?GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@Z @ 0x1C02406F0 (-GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@.c)
 *     ?ParseInputReport@InteractiveControlParser@@SAJPEAU_INTERACTIVECTRL_CAPABILITIES@@PEAU_HIDP_PREPARSED_DATA@@PEAEKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1C02407D8 (-ParseInputReport@InteractiveControlParser@@SAJPEAU_INTERACTIVECTRL_CAPABILITIES@@PEAU_HIDP_PREP.c)
 *     ?LogFontLoadAttempt@@YAXPEAXW4_W32KFontSourceType@@PEBGH@Z @ 0x1C0259FB8 (-LogFontLoadAttempt@@YAXPEAXW4_W32KFontSourceType@@PEBGH@Z.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C02A4314 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NH@Z @ 0x1C02BBEA0 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NH@Z.c)
 *     UmfdLoadFontFile @ 0x1C02D92B0 (UmfdLoadFontFile.c)
 * Callees:
 *     <none>
 */

TLG_STATUS __stdcall TlgWrite(
        TraceLoggingHProvider hProvider,
        const void *pEventMetadata,
        LPCGUID pActivityId,
        LPCGUID pRelatedActivityId,
        UINT32 cData,
        EVENT_DATA_DESCRIPTOR *pData)
{
  ULONG v7; // ecx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)&EventDescriptor.Id = ((_DWORD)pEventMetadata - (unsigned int)&TraceLoggingMetadata) | (*(unsigned __int8 *)pEventMetadata << 24);
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)((char *)pEventMetadata + 1);
  EventDescriptor.Keyword = *(_QWORD *)((char *)pEventMetadata + 3);
  pData->Ptr = *((_QWORD *)hProvider + 1);
  v7 = **((unsigned __int16 **)hProvider + 1);
  pData[1].Ptr = (ULONGLONG)pEventMetadata + 11;
  pData->Size = v7;
  pData->Reserved = 2;
  pData[1].Size = *(unsigned __int16 *)((char *)pEventMetadata + 11);
  pData[1].Reserved = 1;
  return EtwWriteTransfer(*((_QWORD *)hProvider + 4), &EventDescriptor, 0LL, 0LL, cData, pData);
}
