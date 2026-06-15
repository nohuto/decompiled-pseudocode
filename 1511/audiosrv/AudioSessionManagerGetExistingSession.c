/*
 * XREFs of AudioSessionManagerGetExistingSession @ 0x18007BC80
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x180014328 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x180014D68 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@H@Z @ 0x1800178A0 (-FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x18007EB78 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall AudioSessionManagerGetExistingSession(__int64 **a1, const unsigned __int16 *a2, _QWORD *a3)
{
  __int64 *v3; // rbx
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
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x5Cu, (__int64)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids, *v3);
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
    AudioSession = CAudioSessionManager::FindAudioSession(
                     (CAudioSessionManager *)*v3,
                     (struct CAudioSessionInstanceId *)v14,
                     &v12,
                     1);
    v9 = v12;
    v7 = AudioSession;
    if ( AudioSession >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, struct CAudioSession *, __int64 *))(*(_QWORD *)*v3 + 104LL))(
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
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x5Du, (__int64)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids, v7);
  }
LABEL_19:
  CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v14);
  return (unsigned int)v7;
}
