/*
 * XREFs of ?PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@@Z @ 0x1400392F4
 * Callers:
 *     ?GetCurrentPadding@CCrossProcessClientInputEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x140039CA0 (-GetCurrentPadding@CCrossProcessClientInputEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z.c)
 *     ?GetDevicePosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z @ 0x140039D60 (-GetDevicePosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z.c)
 *     ?GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140039E60 (-GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 * Callees:
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     ?IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x140017138 (-IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEADIJ@Z @ 0x140039BF8 (-AudCPTraceLoggingErrorHelper@@YAXPEADIJ@Z.c)
 */

char __fastcall CCrossProcessBaseEndpoint::PeekNextTimestampMessage(
        CCrossProcessBaseEndpoint *this,
        struct SharedMessageQueueItem **a2)
{
  char v2; // bl
  __int64 v5; // rsi

  v2 = 0;
  v5 = **((unsigned int **)this + 8);
  if ( (_DWORD)v5 != *(_DWORD *)(*((_QWORD *)this + 8) + 4LL) )
  {
    if ( CCrossProcessBaseEndpoint::IsValidQueueIndex(this, v5) )
    {
      v2 = 1;
      *a2 = (struct SharedMessageQueueItem *)(*((_QWORD *)this + 13) + (v5 << 6));
    }
    else
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x1Eu,
          (__int64)&WPP_98f64ba30fd033af17de3dc3e532c096_Traceguids,
          0);
      }
      AudCPTraceLoggingErrorHelper("CCrossProcessBaseEndpoint::PeekNextTimestampMessage", 0x4EDu, -2147467259);
    }
  }
  return v2;
}
