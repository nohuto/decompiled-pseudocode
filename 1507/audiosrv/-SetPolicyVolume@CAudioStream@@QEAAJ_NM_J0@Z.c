/*
 * XREFs of ?SetPolicyVolume@CAudioStream@@QEAAJ_NM_J0@Z @ 0x1800045E0
 * Callers:
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J@Z @ 0x18000E858 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIP.c)
 *     ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180076FF0 (-AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?GetProcess@CAudioSession@@QEAAPEAUIAudioProcess@@XZ @ 0x180004450 (-GetProcess@CAudioSession@@QEAAPEAUIAudioProcess@@XZ.c)
 *     ?SubjectToStreamClassPolicyGains@CProcess@@UEAAHXZ @ 0x180011120 (-SubjectToStreamClassPolicyGains@CProcess@@UEAAHXZ.c)
 *     ?IsCaptureStream@CAudioStream@@UEAAHXZ @ 0x18001E780 (-IsCaptureStream@CAudioStream@@UEAAHXZ.c)
 *     ?GetPolicyVolumeForStreamClass@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamInfo@@AEA_NAEAMAEA_J@Z @ 0x1800217C0 (-GetPolicyVolumeForStreamClass@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamInfo@@AEA_NAEAMAEA_J@.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CAudioStream::SetPolicyVolume(CAudioStream *this, char a2, float a3, __int64 a4, bool a5)
{
  CAudioSession *v6; // rcx
  int v7; // esi
  int v9; // r12d
  CProcess *Process; // r14
  __int64 (__fastcall *v11)(CProcess *__hidden); // rbx
  int v12; // eax
  __int64 (__fastcall *v13)(CWindowsPolicyManager *__hidden, struct IAudioStreamInfo *, bool *, float *, __int64 *); // rsi
  int PolicyVolumeForStreamClass; // eax
  __int64 (__fastcall *v15)(CAudioStream *__hidden); // r15
  int IsCaptureStream; // eax
  float v17; // xmm0_4
  char v18; // r13
  __int64 v19; // rax
  float v20; // xmm6_4
  float v22; // [rsp+30h] [rbp-20h] BYREF
  __int64 v23; // [rsp+38h] [rbp-18h] BYREF
  bool v24; // [rsp+90h] [rbp+40h] BYREF
  __int64 v25; // [rsp+A8h] [rbp+58h]

  v25 = a4;
  v6 = (CAudioSession *)*((_QWORD *)this + 9);
  v7 = 0;
  v23 = 0LL;
  v24 = 0;
  v9 = 0;
  v22 = 1.0;
  Process = CAudioSession::GetProcess(v6);
  v11 = *(__int64 (__fastcall **)(CProcess *__hidden))(*(_QWORD *)Process + 168LL);
  if ( v11 == CProcess::SubjectToStreamClassPolicyGains )
    v12 = CProcess::SubjectToStreamClassPolicyGains(Process);
  else
    v12 = v11(Process);
  if ( !v12
    || ((v13 = *(__int64 (__fastcall **)(CWindowsPolicyManager *__hidden, struct IAudioStreamInfo *, bool *, float *, __int64 *))(*(_QWORD *)g_PolicyManager + 48LL),
         v13 != CWindowsPolicyManager::GetPolicyVolumeForStreamClass)
      ? (PolicyVolumeForStreamClass = v13(g_PolicyManager, (CAudioStream *)((char *)this + 8), &v24, &v22, &v23))
      : (PolicyVolumeForStreamClass = CWindowsPolicyManager::GetPolicyVolumeForStreamClass(
                                        g_PolicyManager,
                                        (CAudioStream *)((char *)this + 8),
                                        &v24,
                                        &v22,
                                        &v23)),
        v7 = PolicyVolumeForStreamClass,
        PolicyVolumeForStreamClass >= 0) )
  {
    v15 = *(__int64 (__fastcall **)(CAudioStream *__hidden))(*((_QWORD *)this + 1) + 56LL);
    if ( v15 == CAudioStream::IsCaptureStream )
      IsCaptureStream = CAudioStream::IsCaptureStream((CAudioStream *)((char *)this + 8));
    else
      IsCaptureStream = v15((CAudioStream *)((char *)this + 8));
    v17 = v22;
    if ( IsCaptureStream && v22 != 0.0 )
    {
      v17 = FLOAT_1_0;
      v22 = FLOAT_1_0;
    }
    v18 = v24 | a2;
    v19 = v25;
    v20 = a3 * v17;
    if ( v25 < v23 )
      v19 = v23;
    if ( v18 != *((_BYTE *)this + 92) )
    {
      v9 = 1;
      *((_BYTE *)this + 92) = v18;
    }
    if ( v20 != *((float *)this + 22) )
    {
      *((float *)this + 22) = v20;
      v9 = 1;
    }
    *((_QWORD *)this + 12) = v19;
    if ( v9 && a5 )
      v7 = (*(__int64 (__fastcall **)(CAudioStream *))(*(_QWORD *)this + 120LL))(this);
  }
  (*(void (__fastcall **)(CProcess *))(*(_QWORD *)Process + 16LL))(Process);
  if ( v7 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      59LL,
      &WPP_ac8bf37043f63ecae5504e787611946d_Traceguids,
      (unsigned int)v7);
  }
  return (unsigned int)v7;
}
