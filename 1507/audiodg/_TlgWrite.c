/*
 * XREFs of _TlgWrite @ 0x140002780
 * Callers:
 *     ?GetLatency@CPipeInstance@@QEBAJPEA_J@Z @ 0x140004800 (-GetLatency@CPipeInstance@@QEBAJPEA_J@Z.c)
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14000FD30 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 *     ?PostMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140014944 (-PostMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     ?RunMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140014B24 (-RunMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     ?LogTelemetry@CCrossProcessEndpointGlitchValues@CCrossProcessEndpointTraceLogger@@UEAAXXZ @ 0x140017B80 (-LogTelemetry@CCrossProcessEndpointGlitchValues@CCrossProcessEndpointTraceLogger@@UEAAXXZ.c)
 *     ?TimerCallback@CWatchDogTimer@@SAXPEAXE@Z @ 0x14002E430 (-TimerCallback@CWatchDogTimer@@SAXPEAXE@Z.c)
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
  _DWORD v9[6]; // [rsp+30h] [rbp-18h] BYREF

  v9[0] = ((_DWORD)pEventMetadata - (unsigned int)&TraceLoggingMetadata) | (*(unsigned __int8 *)pEventMetadata << 24);
  v9[1] = *(unsigned __int16 *)((char *)pEventMetadata + 1);
  v9[2] = *(_DWORD *)((char *)pEventMetadata + 3);
  v9[3] = *(_DWORD *)((char *)pEventMetadata + 7);
  pData->Ptr = *((_QWORD *)hProvider + 1);
  v7 = **((unsigned __int16 **)hProvider + 1);
  pData[1].Ptr = (ULONGLONG)pEventMetadata + 11;
  pData->Size = v7;
  pData->Reserved = 2;
  pData[1].Size = *(unsigned __int16 *)((char *)pEventMetadata + 11);
  pData[1].Reserved = 1;
  return ((__int64 (__fastcall *)(_QWORD, _DWORD *, _QWORD, _QWORD, UINT32, EVENT_DATA_DESCRIPTOR *))EtwEventWriteTransfer)(
           *((_QWORD *)hProvider + 4),
           v9,
           0LL,
           0LL,
           cData,
           pData);
}
