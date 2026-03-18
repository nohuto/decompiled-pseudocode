/*
 * XREFs of _TlgWrite @ 0x1C0091E28
 * Callers:
 *     ?TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z @ 0x1C00095E4 (-TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z.c)
 *     ?TraceLoggingDpiChangedWindowPosOrSizeNotChangedEvent@@YAXQEAUtagWND@@@Z @ 0x1C0091D88 (-TraceLoggingDpiChangedWindowPosOrSizeNotChangedEvent@@YAXQEAUtagWND@@@Z.c)
 *     ?TraceLoggingProcessUsageOnTerminationEvent@@YAXQEAUtagPROCESSINFO@@@Z @ 0x1C009427C (-TraceLoggingProcessUsageOnTerminationEvent@@YAXQEAUtagPROCESSINFO@@@Z.c)
 *     ?TraceLoggingUserIsActive@@YAXIT_LARGE_INTEGER@@@Z @ 0x1C00944F0 (-TraceLoggingUserIsActive@@YAXIT_LARGE_INTEGER@@@Z.c)
 *     ?TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z @ 0x1C00945E4 (-TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z.c)
 *     ?TraceLoggingRIMHIDDeviceArrivedEvent@@YAXGIIKKHPEAU_UNICODE_STRING@@0@Z @ 0x1C00948AC (-TraceLoggingRIMHIDDeviceArrivedEvent@@YAXGIIKKHPEAU_UNICODE_STRING@@0@Z.c)
 *     xxxUserReinitializeAutoRotation @ 0x1C009A300 (xxxUserReinitializeAutoRotation.c)
 *     ?TraceLoggingMouseWheelRoutingValueAtStartup@@YAXXZ @ 0x1C009E0C8 (-TraceLoggingMouseWheelRoutingValueAtStartup@@YAXXZ.c)
 *     ?TraceLoggingSPISetMenuDropAlignmentEvent@@YAXHH@Z @ 0x1C0111468 (-TraceLoggingSPISetMenuDropAlignmentEvent@@YAXHH@Z.c)
 *     ?TraceLoggingAutoRotationStateEvent@@YAXXZ @ 0x1C01137CC (-TraceLoggingAutoRotationStateEvent@@YAXXZ.c)
 *     ?xxxRotateScreen@@YAJKHPEAH@Z @ 0x1C01D2388 (-xxxRotateScreen@@YAJKHPEAH@Z.c)
 *     ?xxxSmoothRotateScreen@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAUDISPLAYCONFIG_MODE_INFO@@H@Z @ 0x1C01D2528 (-xxxSmoothRotateScreen@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAUDISPLAYCONFIG_MODE_INFO@@H@Z.c)
 *     xxxSetAutoRotationState @ 0x1C01D295C (xxxSetAutoRotationState.c)
 *     xxxSetSensorPresence @ 0x1C01D2A44 (xxxSetSensorPresence.c)
 *     ?TraceLoggingHIDDeviceArrivedEvent@@YAXGPEAUDEVICEINFO@@@Z @ 0x1C0225548 (-TraceLoggingHIDDeviceArrivedEvent@@YAXGPEAUDEVICEINFO@@@Z.c)
 *     ?TraceLoggingHitTestWindowTargeting@@YAXHHHHHHH@Z @ 0x1C0225688 (-TraceLoggingHitTestWindowTargeting@@YAXHHHHHHH@Z.c)
 *     ?TraceLoggingMouseWheelRoutingModeChange@@YAXK@Z @ 0x1C022577C (-TraceLoggingMouseWheelRoutingModeChange@@YAXK@Z.c)
 *     ?TraceLoggingPTPGestureUsageEvent@@YAXPEBUtagTPTELEMSTATE@@@Z @ 0x1C02257F8 (-TraceLoggingPTPGestureUsageEvent@@YAXPEBUtagTPTELEMSTATE@@@Z.c)
 *     ?TraceLoggingPTPKeyToAATimeDeltas@@YAX_J00W4tagPTP_ACTION@@1@Z @ 0x1C022595C (-TraceLoggingPTPKeyToAATimeDeltas@@YAX_J00W4tagPTP_ACTION@@1@Z.c)
 *     ?TraceLoggingPTPKeyToGestureTiming@@YAX_J0PEBUtagTPTELEMTIMINGS@@00@Z @ 0x1C0225A38 (-TraceLoggingPTPKeyToGestureTiming@@YAX_J0PEBUtagTPTELEMTIMINGS@@00@Z.c)
 *     ?TraceLoggingPTPSettingsConfigEvent@@YAXPEAUtagTPSETTINGS@@KHPEAG1HH@Z @ 0x1C0225CC0 (-TraceLoggingPTPSettingsConfigEvent@@YAXPEAUtagTPSETTINGS@@KHPEAG1HH@Z.c)
 *     ?TraceLoggingSPISetDesktopDPIOverrideEvent@@YAXHH@Z @ 0x1C0225DEC (-TraceLoggingSPISetDesktopDPIOverrideEvent@@YAXHH@Z.c)
 *     ?TraceLoggingSPISetModernDPIOverrideEvent@@YAXHH@Z @ 0x1C0225E90 (-TraceLoggingSPISetModernDPIOverrideEvent@@YAXHH@Z.c)
 *     ?TraceLoggingSPISetPenVisualizationEvent@@YAXKK@Z @ 0x1C0225F34 (-TraceLoggingSPISetPenVisualizationEvent@@YAXKK@Z.c)
 *     ?TraceLoggingScreenOrientationArStateChangeEvent@@YAXKW4arInitiatedBy@@W4tagAR_STATE@@@Z @ 0x1C0225FD4 (-TraceLoggingScreenOrientationArStateChangeEvent@@YAXKW4arInitiatedBy@@W4tagAR_STATE@@@Z.c)
 *     ?TraceLoggingScreenOrientationChangeEvent@@YAXKW4arInitiatedBy@@HW4arFailureReason@@@Z @ 0x1C0226090 (-TraceLoggingScreenOrientationChangeEvent@@YAXKW4arInitiatedBy@@HW4arFailureReason@@@Z.c)
 *     ?TraceLoggingStubInvalidParamEvent@@YAXIKPEAD@Z @ 0x1C022614C (-TraceLoggingStubInvalidParamEvent@@YAXIKPEAD@Z.c)
 *     ?TraceLoggingTouchInjection@@YAXHHHK@Z @ 0x1C0226258 (-TraceLoggingTouchInjection@@YAXHHHK@Z.c)
 *     ?TraceLoggingWinPHotKeyEvent@@YAXXZ @ 0x1C0226354 (-TraceLoggingWinPHotKeyEvent@@YAXXZ.c)
 *     ?LogFontLoadAttempt@@YAXPEAXW4_W32KFontSourceType@@PEBGH@Z @ 0x1C025CBB8 (-LogFontLoadAttempt@@YAXPEAXW4_W32KFontSourceType@@PEBGH@Z.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C02A31F0 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C02B8A20 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     UmfdLoadFontFile @ 0x1C02D6210 (UmfdLoadFontFile.c)
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
  ULONG v6; // ecx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)&EventDescriptor.Id = ((_DWORD)pEventMetadata - (unsigned int)&TraceLoggingMetadata) | (*(unsigned __int8 *)pEventMetadata << 24);
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)((char *)pEventMetadata + 1);
  EventDescriptor.Keyword = *(_QWORD *)((char *)pEventMetadata + 3);
  pData->Ptr = (ULONGLONG)EventInformation;
  v6 = *(unsigned __int16 *)EventInformation;
  pData[1].Ptr = (ULONGLONG)pEventMetadata + 11;
  pData->Size = v6;
  pData->Reserved = 2;
  pData[1].Size = *(unsigned __int16 *)((char *)pEventMetadata + 11);
  pData[1].Reserved = 1;
  return EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, cData, pData);
}
