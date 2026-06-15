/*
 * XREFs of AudioSessionManagerGetExistingSession @ 0x180080AF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x18000BB2C (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x18000BC48 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@H@Z @ 0x18001A544 (-FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x180083FE4 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall AudioSessionManagerGetExistingSession(
        CAudioSessionManager ***a1,
        const unsigned __int16 *a2,
        _QWORD *a3)
{
  CAudioSessionManager **v3; // rbx
  RPC_STATUS v6; // eax
  signed int v7; // edi
  int AudioSession; // eax
  struct CAudioSession *v9; // rsi
  unsigned int Pid; // [rsp+30h] [rbp-49h] BYREF
  struct CAudioSession *v12; // [rsp+38h] [rbp-41h] BYREF
  __int64 v13; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v14[80]; // [rsp+50h] [rbp-29h] BYREF

  v3 = *a1;
  CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)v14);
  v12 = 0LL;
  v13 = 0LL;
  *a3 = 0LL;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x5Cu,
      (__int64)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
      *v3);
  }
  v6 = I_RpcBindingInqLocalClientPID(0LL, &Pid);
  v7 = v6;
  if ( v6 )
  {
    if ( v6 > 0 )
      v7 = (unsigned __int16)v6 | 0x80070000;
    goto LABEL_14;
  }
  v7 = CAudioSessionInstanceId::Initialize((CAudioSessionInstanceId *)v14, a2);
  if ( v7 >= 0 )
  {
    AudioSession = CAudioSessionManager::FindAudioSession(*v3, (struct CAudioSessionInstanceId *)v14, &v12, 1);
    v9 = v12;
    v7 = AudioSession;
    if ( AudioSession >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(CAudioSessionManager *, _QWORD, _QWORD, struct CAudioSession *, __int64 *))(*(_QWORD *)*v3 + 104LL))(
             *v3,
             Pid,
             0LL,
             v12,
             &v13);
      if ( v7 >= 0 )
        *a3 = v13;
    }
    if ( v9 )
      (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v9 + 16LL))(v9);
LABEL_14:
    if ( v7 >= 0 )
      goto LABEL_19;
  }
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x5Du,
      (__int64)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
      v7);
  }
LABEL_19:
  CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v14);
  return (unsigned int)v7;
}
