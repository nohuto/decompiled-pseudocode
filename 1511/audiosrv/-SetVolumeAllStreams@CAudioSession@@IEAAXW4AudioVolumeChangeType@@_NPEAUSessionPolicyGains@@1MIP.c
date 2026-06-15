/*
 * XREFs of ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J@Z @ 0x180025AA8
 * Callers:
 *     ?UpdateAudioVolume@CPerStreamVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J4@Z @ 0x1800357C0 (-UpdateAudioVolume@CPerStreamVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPoli.c)
 *     ?UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J4@Z @ 0x180077050 (-UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPo.c)
 * Callees:
 *     ?SetPolicyVolume@CAudioStream@@QEAAJ_NM_J0@Z @ 0x180001238 (-SetPolicyVolume@CAudioStream@@QEAAJ_NM_J0@Z.c)
 *     ?GetPolicyVolumeForStream@CAudioSession@@IEAAMPEAUSessionPolicyGains@@PEAVCAudioStream@@@Z @ 0x180001554 (-GetPolicyVolumeForStream@CAudioSession@@IEAAMPEAUSessionPolicyGains@@PEAVCAudioStream@@@Z.c)
 *     ?SetSessionVolume@CPerStreamVolumeAudioStream@@UEAAJMKQEAM_J_N@Z @ 0x18001CBA0 (-SetSessionVolume@CPerStreamVolumeAudioStream@@UEAAJMKQEAM_J_N@Z.c)
 *     ?SetSessionMute@CPerStreamVolumeAudioStream@@UEAAJ_N0@Z @ 0x18001CCC0 (-SetSessionMute@CPerStreamVolumeAudioStream@@UEAAJ_N0@Z.c)
 *     ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x1800209E0 (-UpdateStreamPriority@CAudioStream@@QEAAJXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_qq @ 0x180077B24 (WPP_SF_qq.c)
 */

void __fastcall CAudioSession::SetVolumeAllStreams(
        __int64 a1,
        int a2,
        char a3,
        struct SessionPolicyGains *a4,
        char a5,
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
  __int64 v18; // rdx
  __int64 (__fastcall *v19)(CPerStreamVolumeAudioStream *, char, char); // rsi
  int v20; // eax
  __int64 v21; // rdx
  __int64 (__fastcall *v22)(CPerStreamVolumeAudioStream *, float, unsigned int, float *const, __int64, bool); // rsi
  int v23; // [rsp+28h] [rbp-40h]

  v9 = a4;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 154LL, &WPP_c7c899a03615192e0a524739b215c826_Traceguids, a1);
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
      v15 = *(struct CAudioStream **)(*(_QWORD *)(a1 + 96) + 8 * v14);
      PolicyVolumeForStream = CAudioSession::GetPolicyVolumeForStream((CAudioSession *)v14, v9, v15);
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 155LL, &WPP_c7c899a03615192e0a524739b215c826_Traceguids, a1, v15);
      }
      if ( a2 == 3 )
      {
        a9 = *((_BYTE *)v15 + 184) != 0 ? 0x3D0900 : 0;
      }
      else if ( a2 == 4 )
      {
        a9 = *((_BYTE *)v15 + 184) != 0 ? 0x2710 : 0;
      }
      v17 = CAudioStream::SetPolicyVolume(
              (CAudioSession **)v15,
              a3,
              PolicyVolumeForStream,
              (CAudioSession *)a9,
              a7 == 0);
      if ( v17 >= 0 )
      {
        if ( !a7 )
          goto LABEL_22;
        v19 = *(__int64 (__fastcall **)(CPerStreamVolumeAudioStream *, char, char))(*(_QWORD *)v15 + 112LL);
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
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 156LL, &WPP_c7c899a03615192e0a524739b215c826_Traceguids, a1, v15);
      }
LABEL_23:
      if ( (int)CAudioStream::UpdateStreamPriority(v15) < 0
        && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 157LL, &WPP_c7c899a03615192e0a524739b215c826_Traceguids, a1, v15);
      }
      v14 = ++v12;
      if ( (unsigned __int64)v12 >= *(_QWORD *)(a1 + 104) )
        goto LABEL_6;
      v9 = a4;
    }
    v22 = *(__int64 (__fastcall **)(CPerStreamVolumeAudioStream *, float, unsigned int, float *const, __int64, bool))(*(_QWORD *)v15 + 104LL);
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
