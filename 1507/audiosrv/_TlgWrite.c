/*
 * XREFs of _TlgWrite @ 0x1800315C0
 * Callers:
 *     ?UpdateOffloadPowerRequest@@YAXXZ @ 0x180008FE0 (-UpdateOffloadPowerRequest@@YAXXZ.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180025240 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpo.c)
 *     ?EndInitialization@CAudioSrv@@UEAAJJ@Z @ 0x18003A6B0 (-EndInitialization@CAudioSrv@@UEAAJJ@Z.c)
 *     ?OnADGProcessTerminatedHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x18006B5A0 (-OnADGProcessTerminatedHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@.c)
 *     ?TimerCallback@CWatchDogTimer@@SAXPEAXE@Z @ 0x18008C460 (-TimerCallback@CWatchDogTimer@@SAXPEAXE@Z.c)
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
  _DWORD v8[6]; // [rsp+30h] [rbp-18h] BYREF

  v8[0] = ((_DWORD)pEventMetadata - (unsigned int)&TraceLoggingMetadata) | (*(unsigned __int8 *)pEventMetadata << 24);
  v8[1] = *(unsigned __int16 *)((char *)pEventMetadata + 1);
  v8[2] = *(_DWORD *)((char *)pEventMetadata + 3);
  v8[3] = *(_DWORD *)((char *)pEventMetadata + 7);
  pData->Ptr = (ULONGLONG)off_1800E7508;
  v6 = *(unsigned __int16 *)off_1800E7508;
  pData[1].Ptr = (ULONGLONG)pEventMetadata + 11;
  pData->Size = v6;
  pData->Reserved = 2;
  pData[1].Size = *(unsigned __int16 *)((char *)pEventMetadata + 11);
  pData[1].Reserved = 1;
  return ((__int64 (__fastcall *)(__int64, _DWORD *, _QWORD, _QWORD, UINT32, EVENT_DATA_DESCRIPTOR *))EtwEventWriteTransfer)(
           qword_1800E7520,
           v8,
           0LL,
           0LL,
           cData,
           pData);
}
