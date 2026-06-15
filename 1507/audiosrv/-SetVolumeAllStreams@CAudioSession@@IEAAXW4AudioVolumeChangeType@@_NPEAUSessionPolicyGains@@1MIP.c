/*
 * XREFs of ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J@Z @ 0x18000E858
 * Callers:
 *     ?UpdateAudioVolume@CPerStreamVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J4@Z @ 0x1800137D0 (-UpdateAudioVolume@CPerStreamVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPoli.c)
 *     ?UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J4@Z @ 0x18007BDC0 (-UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPo.c)
 * Callees:
 *     ?GetPolicyVolumeForStream@CAudioSession@@IEAAMPEAUSessionPolicyGains@@PEAVCAudioStream@@@Z @ 0x1800044A0 (-GetPolicyVolumeForStream@CAudioSession@@IEAAMPEAUSessionPolicyGains@@PEAVCAudioStream@@@Z.c)
 *     ?SetPolicyVolume@CAudioStream@@QEAAJ_NM_J0@Z @ 0x1800045E0 (-SetPolicyVolume@CAudioStream@@QEAAJ_NM_J0@Z.c)
 *     ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x18001E410 (-UpdateStreamPriority@CAudioStream@@QEAAJXZ.c)
 *     ?SetSessionMute@CPerStreamVolumeAudioStream@@UEAAJ_N0@Z @ 0x18002F060 (-SetSessionMute@CPerStreamVolumeAudioStream@@UEAAJ_N0@Z.c)
 *     ?SetSessionVolume@CPerStreamVolumeAudioStream@@UEAAJMKQEAM_J_N@Z @ 0x18002F0A0 (-SetSessionVolume@CPerStreamVolumeAudioStream@@UEAAJMKQEAM_J_N@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_qq @ 0x18007C834 (WPP_SF_qq.c)
 */

void __fastcall CAudioSession::SetVolumeAllStreams(
        __int64 a1,
        int a2,
        char a3,
        struct SessionPolicyGains *a4,
        bool a5,
        float a6,
        unsigned int a7,
        float *a8,
        __int64 a9)
{
  struct SessionPolicyGains *v9; // rsi
  unsigned int v12; // r15d
  unsigned __int64 v14; // rcx
  struct CAudioStream *v15; // rbx
  float PolicyVolumeForStream; // xmm0_4
  int v17; // eax
  _BOOL8 v18; // rdx
  __int64 (__fastcall *v19)(CPerStreamVolumeAudioStream *__hidden, bool, bool); // rsi
  int v20; // eax
  __int64 v21; // rdx
  __int64 (__usercall *v22)@<rax>(CPerStreamVolumeAudioStream *__hidden@<rcx>, float@<xmm1>, unsigned int@<r8d>, float *const@<r9>, __int64, bool); // rsi
  int v23; // [rsp+28h] [rbp-40h]

  v9 = a4;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      154LL,
      &WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      a1);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  v12 = 0;
  if ( *(_QWORD *)(a1 + 104) )
  {
    v14 = 0LL;
    while ( 1 )
    {
      if ( v14 >= *(_QWORD *)(a1 + 104) )
        ATL::AtlThrowImpl(-2147024809);
      _mm_lfence();
      v15 = *(struct CAudioStream **)(*(_QWORD *)(a1 + 96) + 8 * v14);
      PolicyVolumeForStream = CAudioSession::GetPolicyVolumeForStream((CAudioSession *)v14, v9, v15);
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_qq(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          155LL,
          &WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
          a1,
          v15);
      }
      if ( a2 == 3 )
      {
        a9 = *((_BYTE *)v15 + 192) != 0 ? 0x3D0900 : 0;
      }
      else if ( a2 == 4 )
      {
        a9 = *((_BYTE *)v15 + 192) != 0 ? 0x2710 : 0;
      }
      v17 = CAudioStream::SetPolicyVolume(v15, a3, PolicyVolumeForStream, a9, a7 == 0);
      if ( v17 >= 0 )
      {
        if ( !a7 )
          goto LABEL_22;
        v19 = *(__int64 (__fastcall **)(CPerStreamVolumeAudioStream *__hidden, bool, bool))(*(_QWORD *)v15 + 104LL);
        if ( v19 == CPerStreamVolumeAudioStream::SetSessionMute )
        {
          v20 = CPerStreamVolumeAudioStream::SetSessionMute(v15, a5, 0);
        }
        else
        {
          LOBYTE(v18) = a5;
          v20 = v19(v15, v18, 0);
        }
        if ( v20 >= 0 )
          break;
      }
LABEL_30:
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
      {
        WPP_SF_qq(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          156LL,
          &WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
          a1,
          v15);
      }
LABEL_23:
      if ( (int)CAudioStream::UpdateStreamPriority(v15) < 0
        && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
      {
        WPP_SF_qq(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          157LL,
          &WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
          a1,
          v15);
      }
      v14 = ++v12;
      if ( (unsigned __int64)v12 >= *(_QWORD *)(a1 + 104) )
        goto LABEL_6;
      v9 = a4;
    }
    v22 = *(__int64 (__usercall **)@<rax>(CPerStreamVolumeAudioStream *__hidden@<rcx>, float@<xmm1>, unsigned int@<r8d>, float *const@<r9>, __int64, bool))(*(_QWORD *)v15 + 96LL);
    if ( v22 == CPerStreamVolumeAudioStream::SetSessionVolume )
    {
      v17 = CPerStreamVolumeAudioStream::SetSessionVolume(v15, a6, a7, a8, a9, 1);
    }
    else
    {
      LOBYTE(v23) = 1;
      v17 = ((__int64 (__fastcall *)(struct CAudioStream *, __int64, _QWORD, float *, __int64, int))v22)(
              v15,
              v21,
              a7,
              a8,
              a9,
              v23);
    }
LABEL_22:
    if ( v17 >= 0 )
      goto LABEL_23;
    goto LABEL_30;
  }
LABEL_6:
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
}
