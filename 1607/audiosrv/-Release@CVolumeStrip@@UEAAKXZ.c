/*
 * XREFs of ?Release@CVolumeStrip@@UEAAKXZ @ 0x180018430
 * Callers:
 *     ??1CPerEndpointVolumeAudioSession@@EEAA@XZ @ 0x1800028E0 (--1CPerEndpointVolumeAudioSession@@EEAA@XZ.c)
 *     ?DestroyVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAXXZ @ 0x180002D3C (-DestroyVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAXXZ.c)
 *     ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAVCVolumeStrip@@@Z @ 0x180002E30 (-GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAVCVolumeStrip@@@Z.c)
 *     AudioVolumeDisconnect @ 0x180029B40 (AudioVolumeDisconnect.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53_NPEAPEAUIAudioDeviceGraph@@@Z @ 0x18002AAA0 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     ?CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAVCVolumeStrip@@@Z @ 0x18002B9B0 (-CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAVCVolumeStrip@@@Z.c)
 *     ??1?$CComPtr@VCVolumeStrip@@@ATL@@QEAA@XZ @ 0x1800506F0 (--1-$CComPtr@VCVolumeStrip@@@ATL@@QEAA@XZ.c)
 *     ?ProcessAwayModeStateChange@CAudioSrv@@AEAAKE@Z @ 0x180052B70 (-ProcessAwayModeStateChange@CAudioSrv@@AEAAKE@Z.c)
 *     ?UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J4@Z @ 0x18005F6F0 (-UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPo.c)
 * Callees:
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x180038C8C (WPP_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVolumeStrip::Release(CVolumeStrip *this)
{
  unsigned __int32 v2; // edi

  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      13LL,
      ATL::Sids::SecurityNTAuthority.SubAuthority,
      this,
      *((_DWORD *)this + 54) - 1);
  }
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 54);
  if ( !v2 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, ATL::Sids::SecurityNTAuthority.SubAuthority, this);
    }
    if ( this )
      (*(void (__fastcall **)(CVolumeStrip *, __int64))(*(_QWORD *)this + 40LL))(this, 1LL);
  }
  return v2;
}
