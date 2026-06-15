/*
 * XREFs of ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x1400171B4
 * Callers:
 *     ?ReleaseOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x1400175F0 (-ReleaseOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@.c)
 *     ?GetOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x140017900 (-GetOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z.c)
 *     ?GetCurrentPadding@CCrossProcessBaseEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x140038900 (-GetCurrentPadding@CCrossProcessBaseEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z.c)
 *     ?GetOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x14003A5B0 (-GetOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z.c)
 *     ?ReleaseOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x14003AD70 (-ReleaseOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@.c)
 * Callees:
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     WPP_SF_s @ 0x140039AAC (WPP_SF_s.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEADIJ@Z @ 0x140039BF8 (-AudCPTraceLoggingErrorHelper@@YAXPEADIJ@Z.c)
 *     ?AEWMILOG_SECURITY@@YAXKPEAXE@Z @ 0x14003C358 (-AEWMILOG_SECURITY@@YAXKPEAXE@Z.c)
 */

char __fastcall CCrossProcessBaseEndpoint::IsValidOffset(
        CCrossProcessBaseEndpoint *this,
        __int64 a2,
        unsigned __int8 a3)
{
  char v3; // bl

  v3 = 0;
  if ( a2 >= 0 )
    return 1;
  AEWMILOG_SECURITY((unsigned int)this, this, a3);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) )
  {
    WPP_SF_s(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      38LL,
      &WPP_98f64ba30fd033af17de3dc3e532c096_Traceguids,
      "Security failure - memory overwrite detected - Invalid offset.");
  }
  _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)this + 8) + 156LL), 0xFFFFFFFE);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x25u, (__int64)&WPP_98f64ba30fd033af17de3dc3e532c096_Traceguids, 0);
  }
  AudCPTraceLoggingErrorHelper("CCrossProcessBaseEndpoint::IsValidOffset", 0x645u, -2147467259);
  return v3;
}
