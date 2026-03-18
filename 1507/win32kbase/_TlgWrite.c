/*
 * XREFs of _TlgWrite @ 0x1C0057B78
 * Callers:
 *     ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0017F7C (-CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C0057258 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     xxxUserChangeDisplaySettings @ 0x1C0059800 (xxxUserChangeDisplaySettings.c)
 *     xxxUserSetDisplayConfig @ 0x1C006DFB0 (xxxUserSetDisplayConfig.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0073F6C (RIMCreatePointerDeviceInfo.c)
 *     VideoPortCalloutThread @ 0x1C00A53F4 (VideoPortCalloutThread.c)
 *     ?xxxDisplayDiagBlackScreenDetected@@YAXXZ @ 0x1C00A5B80 (-xxxDisplayDiagBlackScreenDetected@@YAXXZ.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C00CFFB4 (RIMApplyPTPConfigRemedy.c)
 *     ??$CitpBaseDataLogToEtw@U_CIT_SYSTEM_DATA@@@@YAXPEBU_CIT_SYSTEM_DATA@@PEBU_CIT_BASE_DATA_LOG_CONTEXT@@@Z @ 0x1C00E177C (--$CitpBaseDataLogToEtw@U_CIT_SYSTEM_DATA@@@@YAXPEBU_CIT_SYSTEM_DATA@@PEBU_CIT_BASE_DATA_LOG_CON.c)
 *     ??$CitpBaseDataLogToEtw@U_CIT_USE_DATA@@@@YAXPEBU_CIT_USE_DATA@@PEBU_CIT_BASE_DATA_LOG_CONTEXT@@@Z @ 0x1C00E1D14 (--$CitpBaseDataLogToEtw@U_CIT_USE_DATA@@@@YAXPEBU_CIT_USE_DATA@@PEBU_CIT_BASE_DATA_LOG_CONTEXT@@.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C00E3144 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
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
