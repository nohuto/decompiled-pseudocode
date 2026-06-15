/*
 * XREFs of AudioSessionManagerGetSessionForStreamSwitch @ 0x180080C80
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x18000BB2C (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x18000BC48 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?SetDuckingOptOutPreference@CAudioSession@@QEAAJ_N@Z @ 0x180010D60 (-SetDuckingOptOutPreference@CAudioSession@@QEAAJ_N@Z.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18001A040 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x18007A70C (-ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z.c)
 */

__int64 __fastcall AudioSessionManagerGetSessionForStreamSwitch(CAudioSessionManager ***a1, char *a2, _QWORD *a3)
{
  CAudioSessionManager **v3; // r14
  int v6; // edi
  CAudioSessionManager *v7; // rsi
  unsigned int v8; // eax
  int v9; // eax
  CAudioSession *v10; // r15
  CAudioSessionManager *v11; // r14
  __int64 v12; // rsi
  unsigned int v13; // eax
  bool v15; // [rsp+40h] [rbp-69h] BYREF
  struct IAudioProcess *v16; // [rsp+48h] [rbp-61h] BYREF
  unsigned int v17; // [rsp+50h] [rbp-59h] BYREF
  unsigned int v18; // [rsp+54h] [rbp-55h] BYREF
  CAudioSession *v19; // [rsp+58h] [rbp-51h] BYREF
  __int64 v20; // [rsp+60h] [rbp-49h] BYREF
  _BYTE v21[80]; // [rsp+70h] [rbp-39h] BYREF

  v3 = *a1;
  CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)v21);
  v19 = 0LL;
  v20 = 0LL;
  v16 = 0LL;
  *a3 = 0LL;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x5Eu,
      (__int64)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
      *v3);
  }
  v6 = (*(__int64 (__fastcall **)(CWindowsPolicyManager *, _QWORD, struct IAudioProcess **))(*(_QWORD *)g_PolicyManager
                                                                                           + 32LL))(
         g_PolicyManager,
         0LL,
         &v16);
  if ( v6 >= 0 )
  {
    v6 = CAudioSession::ParseStreamSwitchId(
           *((const unsigned __int16 **)*v3 + 30),
           a2,
           (struct CAudioSessionInstanceId *)v21,
           &v17,
           &v18,
           &v15);
    if ( v6 >= 0 )
    {
      v7 = *v3;
      v8 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v16 + 40LL))(v16);
      v9 = CAudioSessionManager::CreateAudioSession(v7, v16, (struct CAudioSessionInstanceId *)v21, v17, v18, v8, &v19);
      v10 = v19;
      v6 = v9;
      if ( v9 >= 0 )
      {
        if ( (*(unsigned int (__fastcall **)(CAudioSession *))(*(_QWORD *)v19 + 56LL))(v19)
          || (v6 = CAudioSession::SetDuckingOptOutPreference(v10, v15), v6 >= 0) )
        {
          v11 = *v3;
          v12 = *(_QWORD *)v11;
          v13 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v16 + 40LL))(v16);
          v6 = (*(__int64 (__fastcall **)(CAudioSessionManager *, _QWORD, _QWORD, CAudioSession *, __int64 *))(v12 + 104))(
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
  if ( v6 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x5Fu,
      (__int64)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
      v6);
  }
  CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v21);
  return (unsigned int)v6;
}
