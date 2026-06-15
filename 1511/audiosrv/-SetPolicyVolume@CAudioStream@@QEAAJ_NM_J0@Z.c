/*
 * XREFs of ?SetPolicyVolume@CAudioStream@@QEAAJ_NM_J0@Z @ 0x180001238
 * Callers:
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J@Z @ 0x180025AA8 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIP.c)
 *     ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180071AA0 (-AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?GetProcess@CAudioSession@@QEAAPEAUIAudioProcess@@XZ @ 0x180001504 (-GetProcess@CAudioSession@@QEAAPEAUIAudioProcess@@XZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CAudioStream::SetPolicyVolume(CAudioSession **this, char a2, float a3, CAudioSession *a4, bool a5)
{
  float v5; // xmm6_4
  int v6; // r14d
  char v7; // r13
  char *v11; // rbp
  int v12; // ebp
  struct IAudioProcess *Process; // rdi
  char v14; // r13
  float v15; // xmm6_4
  char v16; // r15
  float v17; // xmm7_4
  CAudioSession *v19; // [rsp+20h] [rbp-78h]
  char v20[4]; // [rsp+30h] [rbp-68h] BYREF
  float v21; // [rsp+34h] [rbp-64h]
  char v22; // [rsp+38h] [rbp-60h]
  float v23; // [rsp+3Ch] [rbp-5Ch]
  CAudioSession *v24; // [rsp+40h] [rbp-58h]

  v5 = FLOAT_1_0;
  v6 = 0;
  v19 = 0LL;
  v7 = 0;
  if ( this )
    v11 = (char *)(this + 1);
  else
    v11 = 0LL;
  v12 = (*(__int64 (__fastcall **)(CWindowsPolicyManager *, char *, char *))(*(_QWORD *)g_PolicyManager + 48LL))(
          g_PolicyManager,
          v11,
          v20);
  if ( v12 < 0 )
    goto LABEL_22;
  Process = CAudioSession::GetProcess(this[8]);
  if ( (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)Process + 168LL))(Process) )
  {
    v7 = v20[0];
    v5 = v21;
    v19 = v24;
  }
  v14 = v22 | v7;
  v15 = v5 * v23;
  if ( (*((unsigned int (__fastcall **)(char *))this[1] + 7))((char *)this + 8) && v15 != 0.0 )
    v15 = FLOAT_1_0;
  v16 = v14 | a2;
  v17 = a3 * v15;
  if ( (__int64)a4 < (__int64)v19 )
    a4 = v19;
  if ( v16 != *((_BYTE *)this + 84) )
  {
    v6 = 1;
    *((_BYTE *)this + 84) = v16;
  }
  if ( v17 != *((float *)this + 20) )
  {
    *((float *)this + 20) = v17;
    v6 = 1;
  }
  this[11] = a4;
  if ( v6 && a5 )
    v12 = (*((__int64 (__fastcall **)(CAudioSession **))*this + 16))(this);
  (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)Process + 16LL))(Process);
  if ( v12 < 0 )
  {
LABEL_22:
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        55LL,
        &WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids,
        (unsigned int)v12);
    }
  }
  return (unsigned int)v12;
}
