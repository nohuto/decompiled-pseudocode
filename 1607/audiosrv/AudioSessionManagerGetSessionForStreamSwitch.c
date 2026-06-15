/*
 * XREFs of AudioSessionManagerGetSessionForStreamSwitch @ 0x180063590
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x1800104D0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x180011770 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?SetDuckingOptOutPreference@CAudioSession@@QEAAJ_N@Z @ 0x180012DD8 (-SetDuckingOptOutPreference@CAudioSession@@QEAAJ_N@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x180050280 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x18005DF00 (-ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z.c)
 */

__int64 __fastcall AudioSessionManagerGetSessionForStreamSwitch(__int64 **a1, char *a2, _QWORD *a3)
{
  __int64 *v3; // rdi
  int v6; // ebx
  CAudioSessionManager *v7; // rbx
  unsigned int v8; // eax
  int v9; // eax
  CAudioSession *v10; // rsi
  __int64 *v11; // rdi
  __int64 v12; // rbx
  unsigned int v13; // eax
  bool v15; // [rsp+40h] [rbp-59h] BYREF
  struct IAudioProcess *v16; // [rsp+48h] [rbp-51h] BYREF
  unsigned int v17; // [rsp+50h] [rbp-49h] BYREF
  unsigned int v18; // [rsp+54h] [rbp-45h] BYREF
  CAudioSession *v19; // [rsp+58h] [rbp-41h] BYREF
  __int64 v20; // [rsp+60h] [rbp-39h] BYREF
  _BYTE v21[80]; // [rsp+70h] [rbp-29h] BYREF

  v3 = *a1;
  CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)v21);
  v19 = 0LL;
  v20 = 0LL;
  v16 = 0LL;
  *a3 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x49u, (__int64)&WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids, *v3);
  }
  v6 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, struct IAudioProcess **))(*(_QWORD *)g_PolicyManager
                                                                                                + 32LL))(
         g_PolicyManager,
         0LL,
         &v16);
  if ( v6 >= 0 )
  {
    v6 = CAudioSession::ParseStreamSwitchId(
           *(const unsigned __int16 **)(*v3 + 240),
           a2,
           (struct CAudioSessionInstanceId *)v21,
           &v18,
           &v17,
           &v15);
    if ( v6 >= 0 )
    {
      v7 = (CAudioSessionManager *)*v3;
      v8 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v16 + 40LL))(v16);
      v9 = CAudioSessionManager::CreateAudioSession(v7, v16, (struct CAudioSessionInstanceId *)v21, v18, v17, v8, &v19);
      v10 = v19;
      v6 = v9;
      if ( v9 >= 0 )
      {
        if ( (*(unsigned int (__fastcall **)(CAudioSession *))(*(_QWORD *)v19 + 56LL))(v19)
          || (v6 = CAudioSession::SetDuckingOptOutPreference(v10, v15), v6 >= 0) )
        {
          v11 = (__int64 *)*v3;
          v12 = *v11;
          v13 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v16 + 40LL))(v16);
          v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, CAudioSession *, __int64 *))(v12 + 104))(
                 v11,
                 v13,
                 0LL,
                 v10,
                 &v20);
          if ( v6 >= 0 )
            *a3 = v20;
        }
      }
      if ( v10 )
        (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  if ( v16 )
  {
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v16 + 16LL))(v16);
    v16 = 0LL;
  }
  if ( v6 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionManagerGetSessionForStreamSwitch", 2269, v6);
  CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v21);
  return (unsigned int)v6;
}
