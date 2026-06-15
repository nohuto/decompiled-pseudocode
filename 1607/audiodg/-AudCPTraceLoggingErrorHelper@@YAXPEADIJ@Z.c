/*
 * XREFs of ?AudCPTraceLoggingErrorHelper@@YAXPEADIJ@Z @ 0x140039BF8
 * Callers:
 *     ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXIPEA_K3@Z @ 0x140013600 (-Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXIPEA_K3@Z.c)
 *     ?CreateSecurityDescriptor@@YAJPEBGKPEAPEAX@Z @ 0x140013C6C (-CreateSecurityDescriptor@@YAJPEBGKPEAPEAX@Z.c)
 *     ?GetFrameFormat@CCrossProcessBaseEndpoint@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x140013ED0 (-GetFrameFormat@CCrossProcessBaseEndpoint@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?ReleaseInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXI_K@Z @ 0x1400141F0 (-ReleaseInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXI_K@Z.c)
 *     ?GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140014330 (-GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 *     ?IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x140017138 (-IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x1400171B4 (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     ?AddTimestampMessage@CCrossProcessServerOutputEndpoint@@MEAAJW4EndpointMessageID@@IIPEAUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@W4AddTimestampMessageOptions@1@@Z @ 0x140017320 (-AddTimestampMessage@CCrossProcessServerOutputEndpoint@@MEAAJW4EndpointMessageID@@IIPEAUAE_CURRE.c)
 *     ?GetBufferSize@CCrossProcessBaseClientEndpoint@@UEAAJPEAI@Z @ 0x140038690 (-GetBufferSize@CCrossProcessBaseClientEndpoint@@UEAAJPEAI@Z.c)
 *     ?GetCharacteristics@CCrossProcessBaseClientEndpoint@@UEAAJPEAK@Z @ 0x140038770 (-GetCharacteristics@CCrossProcessBaseClientEndpoint@@UEAAJPEAK@Z.c)
 *     ?GetCurrentPadding@CCrossProcessBaseClientEndpoint@@UEAAJPEAI@Z @ 0x1400387F0 (-GetCurrentPadding@CCrossProcessBaseClientEndpoint@@UEAAJPEAI@Z.c)
 *     ?GetFramesPerPacket@CCrossProcessBaseEndpoint@@UEAAJPEAI@Z @ 0x140038AB0 (-GetFramesPerPacket@CCrossProcessBaseEndpoint@@UEAAJPEAI@Z.c)
 *     ?GetFrequency@CCrossProcessBaseClientEndpoint@@UEAAJPEA_K@Z @ 0x140038B40 (-GetFrequency@CCrossProcessBaseClientEndpoint@@UEAAJPEA_K@Z.c)
 *     ?GetLatency@CCrossProcessBaseEndpoint@@UEAAJPEA_J@Z @ 0x140038BE0 (-GetLatency@CCrossProcessBaseEndpoint@@UEAAJPEA_J@Z.c)
 *     ?GetNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAUSharedMessageQueueItem@@@Z @ 0x140038C68 (-GetNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAUSharedMessageQueueItem@@@Z.c)
 *     ?Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K0000I@Z @ 0x140038D60 (-Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K0000I@Z.c)
 *     ?IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z @ 0x140039104 (-IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z.c)
 *     ?IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x140039218 (-IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     ?PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@@Z @ 0x1400392F4 (-PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@@Z.c)
 *     ?Reset@CCrossProcessControl@@UEAAJXZ @ 0x140039400 (-Reset@CCrossProcessControl@@UEAAJXZ.c)
 *     ?SetEventHandle@CCrossProcessBaseClientEndpoint@@UEAAJPEAX@Z @ 0x140039570 (-SetEventHandle@CCrossProcessBaseClientEndpoint@@UEAAJPEAX@Z.c)
 *     ?Start@CCrossProcessControl@@UEAAJXZ @ 0x140039780 (-Start@CCrossProcessControl@@UEAAJXZ.c)
 *     ?Stop@CCrossProcessControl@@UEAAJXZ @ 0x1400398C0 (-Stop@CCrossProcessControl@@UEAAJXZ.c)
 *     ?GetDevicePosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z @ 0x140039D60 (-GetDevicePosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z.c)
 *     ?GetPosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z @ 0x14003A0F0 (-GetPosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z.c)
 *     ?GetDevicePosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x14003A3A0 (-GetDevicePosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z.c)
 *     ?GetPosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x14003A890 (-GetPosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z.c)
 * Callees:
 *     _TlgWrite @ 0x140016088 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x140016CD0 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x140018370 (__security_check_cookie.c)
 */

void __fastcall AudCPTraceLoggingErrorHelper(LPCSTR psz, int a2, int a3)
{
  LPCGUID v3; // r8
  LPCGUID v4; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp+17h] BYREF
  int *v7; // [rsp+60h] [rbp+27h]
  int v8; // [rsp+68h] [rbp+2Fh]
  int v9; // [rsp+6Ch] [rbp+33h]
  int *v10; // [rsp+70h] [rbp+37h]
  int v11; // [rsp+78h] [rbp+3Fh]
  int v12; // [rsp+7Ch] [rbp+43h]
  int v13; // [rsp+A8h] [rbp+6Fh] BYREF
  int v14; // [rsp+B0h] [rbp+77h] BYREF

  v14 = a3;
  v13 = a2;
  if ( (unsigned int)dword_140054020 > 2 )
  {
    TlgCreateSz(&pDesc, psz);
    v9 = 0;
    v12 = 0;
    v7 = &v13;
    v8 = 4;
    v11 = 4;
    v10 = &v14;
    TlgWrite((TraceLoggingHProvider)&dword_140054020, &unk_140045DFC, v3, v4, 5u, &pData);
  }
}
