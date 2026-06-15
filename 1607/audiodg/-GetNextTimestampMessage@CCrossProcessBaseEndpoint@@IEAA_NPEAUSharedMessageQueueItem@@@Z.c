/*
 * XREFs of ?GetNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAUSharedMessageQueueItem@@@Z @ 0x140038C68
 * Callers:
 *     ?ReleaseInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXI_K@Z @ 0x14003A1F0 (-ReleaseInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXI_K@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     ?IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x140017138 (-IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEADIJ@Z @ 0x140039BF8 (-AudCPTraceLoggingErrorHelper@@YAXPEADIJ@Z.c)
 */

char __fastcall CCrossProcessBaseEndpoint::GetNextTimestampMessage(
        CCrossProcessBaseEndpoint *this,
        struct SharedMessageQueueItem *a2)
{
  char v2; // di
  __int64 v5; // rsi
  __int64 v6; // rax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 v10; // rax
  __int32 v11; // ecx

  v2 = 0;
  v5 = **((unsigned int **)this + 8);
  if ( (_DWORD)v5 != *(_DWORD *)(*((_QWORD *)this + 8) + 4LL) )
  {
    if ( CCrossProcessBaseEndpoint::IsValidQueueIndex(this, v5) )
    {
      v6 = *((_QWORD *)this + 13);
      v7 = *(_OWORD *)((v5 << 6) + v6 + 16);
      *(_OWORD *)a2 = *(_OWORD *)((v5 << 6) + v6);
      v8 = *(_OWORD *)((v5 << 6) + v6 + 32);
      *((_OWORD *)a2 + 1) = v7;
      v9 = *(_OWORD *)((v5 << 6) + v6 + 48);
      v10 = *((_QWORD *)this + 9);
      v11 = v5 + 1;
      *((_OWORD *)a2 + 2) = v8;
      *((_OWORD *)a2 + 3) = v9;
      if ( (_DWORD)v5 + 1 == *(_DWORD *)(v10 + 132) )
        v11 = 0;
      v2 = 1;
      _InterlockedExchange(*((volatile __int32 **)this + 8), v11);
    }
    else
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x1Fu,
          (__int64)&WPP_98f64ba30fd033af17de3dc3e532c096_Traceguids,
          0);
      }
      AudCPTraceLoggingErrorHelper("CCrossProcessBaseEndpoint::GetNextTimestampMessage", 0x524u, -2147467259);
    }
  }
  return v2;
}
