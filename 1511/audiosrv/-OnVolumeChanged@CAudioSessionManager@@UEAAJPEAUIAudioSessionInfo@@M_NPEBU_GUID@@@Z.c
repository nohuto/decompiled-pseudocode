/*
 * XREFs of ?OnVolumeChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@M_NPEBU_GUID@@@Z @ 0x180016F90
 * Callers:
 *     ?Invoke@CAudioSessionVolumeChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180038800 (-Invoke@CAudioSessionVolumeChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 */

__int64 __fastcall CAudioSessionManager::OnVolumeChanged(
        CAudioSessionManager *this,
        struct IAudioSessionInfo *a2,
        float a3)
{
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Eu, (__int64)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids);
  }
  return 0LL;
}
