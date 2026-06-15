/*
 * XREFs of ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x1800027B0
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180009F10 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBG.c)
 * Callees:
 *     ?GetPolicyVolumeForStream@CAudioSession@@IEAAMPEAUSessionPolicyGains@@PEAVCAudioStream@@@Z @ 0x180002398 (-GetPolicyVolumeForStream@CAudioSession@@IEAAMPEAUSessionPolicyGains@@PEAVCAudioStream@@@Z.c)
 *     ?GetCurrentSessionGain@CAudioSession@@IEAAJAEA_NAEAMAEA_J@Z @ 0x1800025A4 (-GetCurrentSessionGain@CAudioSession@@IEAAJAEA_NAEAMAEA_J@Z.c)
 *     ??1?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ @ 0x180002664 (--1-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180014540 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?GetCurrentPolicyGain@CAudioSession@@IEAAJPEA_JAEA_NPEAUSessionPolicyGains@@AEA_J@Z @ 0x1800153B0 (-GetCurrentPolicyGain@CAudioSession@@IEAAJPEA_JAEA_NPEAUSessionPolicyGains@@AEA_J@Z.c)
 *     ?SetPolicyVolume@CAudioStream@@QEAAJ_NM_J0@Z @ 0x18001A1E0 (-SetPolicyVolume@CAudioStream@@QEAAJ_NM_J0@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::AddStream(
        CPerEndpointVolumeAudioSession *this,
        struct CAudioStream *a2)
{
  int CurrentPolicyGain; // ebx
  CAudioSession *v5; // rcx
  float PolicyVolumeForStream; // xmm0_4
  void *v8; // [rsp+30h] [rbp-38h] BYREF
  __int64 v9; // [rsp+38h] [rbp-30h] BYREF
  __int128 v10; // [rsp+40h] [rbp-28h] BYREF
  int v11; // [rsp+50h] [rbp-18h]
  int v12; // [rsp+54h] [rbp-14h]
  bool v13; // [rsp+90h] [rbp+28h] BYREF
  bool v14; // [rsp+98h] [rbp+30h] BYREF
  float v15; // [rsp+A0h] [rbp+38h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+40h] BYREF

  v8 = 0LL;
  *((_QWORD *)a2 + 8) = this;
  v11 = 1065353216;
  v10 = _xmm;
  v12 = 1065353216;
  CurrentPolicyGain = CAudioSession::GetCurrentPolicyGain(this, 0LL, &v13, (struct SessionPolicyGains *)&v10, &v16);
  if ( CurrentPolicyGain )
    goto LABEL_12;
  CurrentPolicyGain = CAudioSession::GetCurrentSessionGain(this, &v14, &v15, &v9);
  if ( CurrentPolicyGain )
    goto LABEL_12;
  v5 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 68LL, &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids, a2);
  }
  PolicyVolumeForStream = CAudioSession::GetPolicyVolumeForStream(v5, (struct SessionPolicyGains *)&v10, a2);
  CurrentPolicyGain = CAudioStream::SetPolicyVolume(a2, v13, PolicyVolumeForStream, v16, 1);
  if ( CurrentPolicyGain < 0 )
LABEL_12:
    *((_QWORD *)a2 + 8) = 0LL;
  else
    CurrentPolicyGain = CAudioSession::AddStream(this, a2);
  if ( CurrentPolicyGain < 0 )
    AudSrvTraceLoggingErrorHelper("CPerEndpointVolumeAudioSession::AddStream", 0xD44u, CurrentPolicyGain);
  ATL::CHeapPtr<float,ATL::CCRTAllocator>::~CHeapPtr<float,ATL::CCRTAllocator>(&v8);
  return (unsigned int)CurrentPolicyGain;
}
