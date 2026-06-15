/*
 * XREFs of ?GetProcessId@CAudioSession@@UEAAJPEAK@Z @ 0x180015E90
 * Callers:
 *     ?StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x180009920 (-StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z.c)
 *     ?StartStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x180009BD0 (-StartStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z.c)
 *     ?OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18000FD20 (-OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x1800104D0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?GetCurrentPolicyGain@CAudioSession@@IEAAJPEA_JAEA_NPEAUSessionPolicyGains@@AEA_J@Z @ 0x1800153B0 (-GetCurrentPolicyGain@CAudioSession@@IEAAJPEA_JAEA_NPEAUSessionPolicyGains@@AEA_J@Z.c)
 *     ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z @ 0x180015860 (-SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z.c)
 *     ?RecalculateVolume@CAudioStream@@UEAAJXZ @ 0x180018680 (-RecalculateVolume@CAudioStream@@UEAAJXZ.c)
 *     ?SetPolicyVolume@CAudioStream@@QEAAJ_NM_J0@Z @ 0x18001A1E0 (-SetPolicyVolume@CAudioStream@@QEAAJ_NM_J0@Z.c)
 * Callees:
 *     WPP_SF_S @ 0x180038BEC (WPP_SF_S.c)
 */

__int64 __fastcall CAudioSession::GetProcessId(CAudioSession *this, unsigned int *a2)
{
  __int64 result; // rax

  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      15LL,
      &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
      *((_QWORD *)this + 107));
  }
  if ( *((_DWORD *)this + 212) )
  {
    *a2 = *((_DWORD *)this + 87);
    return 143196173LL;
  }
  else
  {
    result = 0LL;
    *a2 = *((_DWORD *)this + 210);
  }
  return result;
}
