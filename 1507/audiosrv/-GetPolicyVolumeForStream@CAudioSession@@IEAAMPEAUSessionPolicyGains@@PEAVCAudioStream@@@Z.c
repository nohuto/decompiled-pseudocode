/*
 * XREFs of ?GetPolicyVolumeForStream@CAudioSession@@IEAAMPEAUSessionPolicyGains@@PEAVCAudioStream@@@Z @ 0x1800044A0
 * Callers:
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J@Z @ 0x18000E858 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIP.c)
 *     ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180076FF0 (-AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?IsCaptureStream@CAudioStream@@UEAAHXZ @ 0x18001E780 (-IsCaptureStream@CAudioStream@@UEAAHXZ.c)
 *     ?IsAnAlwaysAudibleStreamType@CWindowsPolicyManager@@UEAAHK@Z @ 0x180021D90 (-IsAnAlwaysAudibleStreamType@CWindowsPolicyManager@@UEAAHK@Z.c)
 *     ?IsSubjectToSessionDisplayPolicyGain@CWindowsPolicyManager@@UEAAHK@Z @ 0x180021DB0 (-IsSubjectToSessionDisplayPolicyGain@CWindowsPolicyManager@@UEAAHK@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

float __fastcall CAudioSession::GetPolicyVolumeForStream(
        CAudioSession *this,
        struct SessionPolicyGains *a2,
        struct CAudioStream *a3)
{
  CAudioStream *v3; // rbx
  float v4; // xmm6_4
  __int64 (__fastcall *v7)(CAudioStream *__hidden); // rsi
  int IsCaptureStream; // eax
  __int64 (__fastcall *v9)(CAudioStream *__hidden); // rsi
  int v10; // eax
  CWindowsPolicyManager *v11; // rsi
  float v12; // xmm6_4
  unsigned int v13; // r14d
  __int64 (__fastcall *v14)(CWindowsPolicyManager *__hidden, unsigned int); // rbx
  int IsSubjectToSessionDisplayPolicyGain; // eax
  unsigned int v16; // r14d
  __int64 (__fastcall *v17)(CWindowsPolicyManager *__hidden, unsigned int); // rbx
  int IsAnAlwaysAudibleStreamType; // eax

  v3 = (struct CAudioStream *)((char *)a3 + 8);
  v4 = FLOAT_1_0;
  v7 = *(__int64 (__fastcall **)(CAudioStream *__hidden))(*((_QWORD *)a3 + 1) + 56LL);
  if ( v7 == CAudioStream::IsCaptureStream )
    IsCaptureStream = CAudioStream::IsCaptureStream((struct CAudioStream *)((char *)a3 + 8));
  else
    IsCaptureStream = v7((struct CAudioStream *)((char *)a3 + 8));
  if ( !IsCaptureStream )
    v4 = *((float *)a2 + 2);
  v9 = *(__int64 (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)v3 + 56LL);
  if ( v9 == CAudioStream::IsCaptureStream )
    v10 = CAudioStream::IsCaptureStream(v3);
  else
    v10 = v9(v3);
  if ( !v10 && !*((_BYTE *)a3 + 42) )
    v4 = v4 * *(float *)a2;
  v11 = g_PolicyManager;
  v12 = v4 * *((float *)a2 + 1);
  v13 = *((_DWORD *)a3 + 76);
  v14 = *(__int64 (__fastcall **)(CWindowsPolicyManager *__hidden, unsigned int))(*(_QWORD *)g_PolicyManager + 72LL);
  if ( v14 == CWindowsPolicyManager::IsSubjectToSessionDisplayPolicyGain )
  {
    IsSubjectToSessionDisplayPolicyGain = CWindowsPolicyManager::IsSubjectToSessionDisplayPolicyGain(
                                            g_PolicyManager,
                                            v13);
  }
  else
  {
    IsSubjectToSessionDisplayPolicyGain = v14(g_PolicyManager, v13);
    v11 = g_PolicyManager;
  }
  if ( IsSubjectToSessionDisplayPolicyGain )
    v12 = v12 * *((float *)a2 + 3);
  v16 = *((_DWORD *)a3 + 76);
  v17 = *(__int64 (__fastcall **)(CWindowsPolicyManager *__hidden, unsigned int))(*(_QWORD *)v11 + 120LL);
  if ( v17 == CWindowsPolicyManager::IsAnAlwaysAudibleStreamType )
  {
    IsAnAlwaysAudibleStreamType = CWindowsPolicyManager::IsAnAlwaysAudibleStreamType(v11, v16);
  }
  else
  {
    IsAnAlwaysAudibleStreamType = v17(v11, v16);
    v11 = g_PolicyManager;
  }
  if ( !IsAnAlwaysAudibleStreamType )
    v12 = v12 * *((float *)a2 + 4);
  if ( (*(unsigned int (__fastcall **)(CWindowsPolicyManager *, _QWORD))(*(_QWORD *)v11 + 168LL))(
         v11,
         *((unsigned int *)a3 + 76)) )
  {
    return v12 * *((float *)a2 + 5);
  }
  return v12;
}
