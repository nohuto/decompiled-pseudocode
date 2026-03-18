/*
 * XREFs of _TlgWrite @ 0x1C000FA24
 * Callers:
 *     RIMUpdateMonitorQuirk @ 0x1C0006E58 (RIMUpdateMonitorQuirk.c)
 *     RIMDeviceClassNotify @ 0x1C000BFC0 (RIMDeviceClassNotify.c)
 *     rimOnPnpArrived @ 0x1C000C7E8 (rimOnPnpArrived.c)
 *     ?CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z @ 0x1C000F624 (-CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C0010ED8 (RIMApplyPTPConfigRemedy.c)
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C00112CC (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C004FC78 (-CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CoreMsgInitialize@@YAJXZ @ 0x1C005261C (-CoreMsgInitialize@@YAJXZ.c)
 *     PowerIsDimTimeOutManual @ 0x1C0053180 (PowerIsDimTimeOutManual.c)
 *     xxxUserChangeDisplaySettings @ 0x1C0061850 (xxxUserChangeDisplaySettings.c)
 *     ?CoreMsgUninitialize@@YAXXZ @ 0x1C006F3F0 (-CoreMsgUninitialize@@YAXXZ.c)
 *     LookUpTableFlushComplete @ 0x1C006F6EC (LookUpTableFlushComplete.c)
 *     ?ShouldEscapeProximity@@YAEXZ @ 0x1C00B24F8 (-ShouldEscapeProximity@@YAEXZ.c)
 *     ?xxxDisplayDiagBlackScreenDetected@@YAXI@Z @ 0x1C00B3610 (-xxxDisplayDiagBlackScreenDetected@@YAXI@Z.c)
 *     ?_Report@PalmTelemetry@@AEAAXK@Z @ 0x1C00E17F4 (-_Report@PalmTelemetry@@AEAAXK@Z.c)
 *     ?_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z @ 0x1C00E1B50 (-_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C00F6204 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 *     ?CoreMsgObjectCallout@@YAJW4_WIN32_CALLOUTS_OPERATION@@PEAX@Z @ 0x1C00F832C (-CoreMsgObjectCallout@@YAJW4_WIN32_CALLOUTS_OPERATION@@PEAX@Z.c)
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
  return EtwWriteTransfer(*((_QWORD *)hProvider + 4), &EventDescriptor, pActivityId, 0LL, cData, pData);
}
