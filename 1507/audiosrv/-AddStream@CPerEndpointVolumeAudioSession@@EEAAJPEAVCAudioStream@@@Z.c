/*
 * XREFs of ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180076FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPolicyVolumeForStream@CAudioSession@@IEAAMPEAUSessionPolicyGains@@PEAVCAudioStream@@@Z @ 0x1800044A0 (-GetPolicyVolumeForStream@CAudioSession@@IEAAMPEAUSessionPolicyGains@@PEAVCAudioStream@@@Z.c)
 *     ?SetPolicyVolume@CAudioStream@@QEAAJ_NM_J0@Z @ 0x1800045E0 (-SetPolicyVolume@CAudioStream@@QEAAJ_NM_J0@Z.c)
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x18000F940 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?GetCurrentPolicyGain@CAudioSession@@IEAAJPEA_JAEA_NPEAUSessionPolicyGains@@AEA_J@Z @ 0x180010340 (-GetCurrentPolicyGain@CAudioSession@@IEAAJPEA_JAEA_NPEAUSessionPolicyGains@@AEA_J@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     ?GetCurrentSessionGain@CAudioSession@@IEAAJAEA_NAEAMAEA_J@Z @ 0x180066A4C (-GetCurrentSessionGain@CAudioSession@@IEAAJAEA_NAEAMAEA_J@Z.c)
 *     ??1?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ @ 0x180067ECC (--1-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::AddStream(
        CPerEndpointVolumeAudioSession *this,
        struct CAudioStream *a2)
{
  int CurrentPolicyGain; // ebx
  CAudioSession *v5; // rcx
  float PolicyVolumeForStream; // xmm0_4
  void *v8; // [rsp+30h] [rbp-30h] BYREF
  __int64 v9; // [rsp+38h] [rbp-28h] BYREF
  __int128 v10; // [rsp+40h] [rbp-20h] BYREF
  int v11; // [rsp+50h] [rbp-10h]
  int v12; // [rsp+54h] [rbp-Ch]
  bool v13; // [rsp+90h] [rbp+30h] BYREF
  bool v14; // [rsp+98h] [rbp+38h] BYREF
  float v15; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+48h] BYREF

  v8 = 0LL;
  *((_QWORD *)a2 + 9) = this;
  v11 = 1065353216;
  v10 = _xmm;
  v12 = 1065353216;
  CurrentPolicyGain = CAudioSession::GetCurrentPolicyGain(this, 0LL, &v13, (struct SessionPolicyGains *)&v10, &v16);
  if ( CurrentPolicyGain )
    goto LABEL_9;
  CurrentPolicyGain = CAudioSession::GetCurrentSessionGain((struct _RTL_CRITICAL_SECTION *)this, &v14, &v15, &v9);
  if ( CurrentPolicyGain )
    goto LABEL_9;
  v5 = *(CAudioSession **)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x67u,
      (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      a2);
  }
  PolicyVolumeForStream = CAudioSession::GetPolicyVolumeForStream(v5, (struct SessionPolicyGains *)&v10, a2);
  CurrentPolicyGain = CAudioStream::SetPolicyVolume(a2, v13, PolicyVolumeForStream, v16, 1);
  if ( CurrentPolicyGain < 0 )
LABEL_9:
    *((_QWORD *)a2 + 9) = 0LL;
  else
    CurrentPolicyGain = CAudioSession::AddStream(this, a2);
  if ( CurrentPolicyGain < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x68u,
      (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      CurrentPolicyGain);
  }
  ATL::CHeapPtr<float,ATL::CCRTAllocator>::~CHeapPtr<float,ATL::CCRTAllocator>(&v8);
  return (unsigned int)CurrentPolicyGain;
}
