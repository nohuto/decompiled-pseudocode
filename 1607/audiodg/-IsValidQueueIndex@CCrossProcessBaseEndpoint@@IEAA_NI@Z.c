/*
 * XREFs of ?IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x140017138
 * Callers:
 *     ?AddTimestampMessage@CCrossProcessServerOutputEndpoint@@MEAAJW4EndpointMessageID@@IIPEAUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@W4AddTimestampMessageOptions@1@@Z @ 0x140017320 (-AddTimestampMessage@CCrossProcessServerOutputEndpoint@@MEAAJW4EndpointMessageID@@IIPEAUAE_CURRE.c)
 *     ?GetNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAUSharedMessageQueueItem@@@Z @ 0x140038C68 (-GetNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAUSharedMessageQueueItem@@@Z.c)
 *     ?IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z @ 0x140039104 (-IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z.c)
 *     ?PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@@Z @ 0x1400392F4 (-PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEADIJ@Z @ 0x140039BF8 (-AudCPTraceLoggingErrorHelper@@YAXPEADIJ@Z.c)
 */

char __fastcall CCrossProcessBaseEndpoint::IsValidQueueIndex(CCrossProcessBaseEndpoint *this, unsigned int a2)
{
  char v2; // bl

  if ( a2 < *(_DWORD *)(*((_QWORD *)this + 9) + 132LL) )
    return 1;
  v2 = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x27u,
      (__int64)&WPP_98f64ba30fd033af17de3dc3e532c096_Traceguids,
      -2147467259);
  }
  AudCPTraceLoggingErrorHelper("CCrossProcessBaseEndpoint::IsValidQueueIndex", 0x68Au, -2147467259);
  return v2;
}
