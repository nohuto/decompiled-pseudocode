/*
 * XREFs of ?OnGroupingParamChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@U_GUID@@PEBU3@@Z @ 0x180016F50
 * Callers:
 *     ?Invoke@CAudioSessionGroupingParamChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180039A60 (-Invoke@CAudioSessionGroupingParamChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 */

__int64 __fastcall CAudioSessionManager::OnGroupingParamChanged(
        CAudioSessionManager *this,
        struct IAudioSessionInfo *a2,
        struct _GUID *a3,
        const struct _GUID *a4)
{
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x20u, (__int64)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids);
  }
  return 0LL;
}
