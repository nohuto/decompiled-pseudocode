/*
 * XREFs of ?IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x140039218
 * Callers:
 *     ?IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z @ 0x140039104 (-IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z.c)
 *     ?Reset@CCrossProcessControl@@UEAAJXZ @ 0x140039400 (-Reset@CCrossProcessControl@@UEAAJXZ.c)
 *     ?Start@CCrossProcessControl@@UEAAJXZ @ 0x140039780 (-Start@CCrossProcessControl@@UEAAJXZ.c)
 *     ?Stop@CCrossProcessControl@@UEAAJXZ @ 0x1400398C0 (-Stop@CCrossProcessControl@@UEAAJXZ.c)
 *     ?GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140039E60 (-GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 *     ?ReleaseInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXI_K@Z @ 0x14003A1F0 (-ReleaseInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXI_K@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     WPP_SF_s @ 0x140039AAC (WPP_SF_s.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEADIJ@Z @ 0x140039BF8 (-AudCPTraceLoggingErrorHelper@@YAXPEADIJ@Z.c)
 *     ?AEWMILOG_SECURITY@@YAXKPEAXE@Z @ 0x14003C358 (-AEWMILOG_SECURITY@@YAXKPEAXE@Z.c)
 */

char __fastcall CCrossProcessBaseEndpoint::IsValidFlags(CCrossProcessBaseEndpoint *this, int a2, unsigned __int8 a3)
{
  char v4; // bl

  if ( (a2 & 0xFFFFFFF8) == 0 )
    return 1;
  AEWMILOG_SECURITY((unsigned int)this, this, a3);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) )
  {
    WPP_SF_s(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      35LL,
      &WPP_98f64ba30fd033af17de3dc3e532c096_Traceguids,
      "Security failure - memory overwrite detected -invalid flags.");
  }
  _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)this + 8) + 156LL), 0xFFFFFFFE);
  v4 = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x24u, (__int64)&WPP_98f64ba30fd033af17de3dc3e532c096_Traceguids, 0);
  }
  AudCPTraceLoggingErrorHelper("CCrossProcessBaseEndpoint::IsValidFlags", 0x623u, -2147467259);
  return v4;
}
