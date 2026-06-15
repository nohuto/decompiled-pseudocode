/*
 * XREFs of ?Release@CVolumeStrip@@UEAAKXZ @ 0x18000F5E0
 * Callers:
 *     AUDIOVOLUMECONTROL_rundown @ 0x180003800 (AUDIOVOLUMECONTROL_rundown.c)
 *     ??1?$CComPtr@VCVolumeStrip@@@ATL@@QEAA@XZ @ 0x18000EFF0 (--1-$CComPtr@VCVolumeStrip@@@ATL@@QEAA@XZ.c)
 *     AudioVolumeDisconnect @ 0x180039910 (AudioVolumeDisconnect.c)
 *     ?CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAVCVolumeStrip@@@Z @ 0x180043FEC (-CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAVCVolumeStrip@@@Z.c)
 *     ?ProcessAwayModeStateChange@CAudioSrv@@AEAAKE@Z @ 0x18006862C (-ProcessAwayModeStateChange@CAudioSrv@@AEAAKE@Z.c)
 *     ??1CPerEndpointVolumeAudioSession@@EEAA@XZ @ 0x180071794 (--1CPerEndpointVolumeAudioSession@@EEAA@XZ.c)
 *     ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAVCVolumeStrip@@@Z @ 0x180074560 (-GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAVCVolumeStrip@@@Z.c)
 *     ?UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J4@Z @ 0x180077050 (-UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPo.c)
 *     ??_ECEndpointVolumeState@@UEAAPEAXI@Z @ 0x18009BD30 (--_ECEndpointVolumeState@@UEAAPEAXI@Z.c)
 *     ?ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKPEAH1PEAM11@Z @ 0x18009E4C8 (-ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKPEAH1PEAM11@Z.c)
 *     ?UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z @ 0x18009F3EC (-UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x180048AE8 (WPP_SF_qD.c)
 */

__int64 __fastcall CVolumeStrip::Release(CVolumeStrip *this)
{
  unsigned __int32 v2; // esi

  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      14LL,
      &WPP_209d1f8e26de95f2e61304f36bddda66_Traceguids,
      this,
      *((_DWORD *)this + 54) - 1);
  }
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 54);
  if ( !v2 )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, &WPP_209d1f8e26de95f2e61304f36bddda66_Traceguids, this);
    }
    if ( this )
      (*(void (__fastcall **)(CVolumeStrip *, __int64))(*(_QWORD *)this + 40LL))(this, 1LL);
  }
  return v2;
}
