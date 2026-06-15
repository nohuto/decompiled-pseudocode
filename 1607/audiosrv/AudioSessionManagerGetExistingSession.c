/*
 * XREFs of AudioSessionManagerGetExistingSession @ 0x180063440
 * Callers:
 *     <none>
 * Callees:
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@@Z @ 0x180010DAC (-FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x180011770 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x180050280 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x1800664A4 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall AudioSessionManagerGetExistingSession(__int64 **a1, const unsigned __int16 *a2, _QWORD *a3)
{
  __int64 *v3; // rsi
  RPC_STATUS v6; // eax
  signed int v7; // ebx
  int AudioSession; // eax
  struct CAudioSession *v9; // rdi
  unsigned int Pid; // [rsp+30h] [rbp-49h] BYREF
  struct CAudioSession *v12; // [rsp+38h] [rbp-41h] BYREF
  __int64 v13; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v14[80]; // [rsp+50h] [rbp-29h] BYREF

  v3 = *a1;
  CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)v14);
  v12 = 0LL;
  v13 = 0LL;
  *a3 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x48u, (__int64)&WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids, *v3);
  }
  v6 = I_RpcBindingInqLocalClientPID(0LL, &Pid);
  v7 = v6;
  if ( v6 )
  {
    if ( v6 > 0 )
      v7 = (unsigned __int16)v6 | 0x80070000;
  }
  else
  {
    v7 = CAudioSessionInstanceId::Initialize((CAudioSessionInstanceId *)v14, a2);
    if ( v7 < 0 )
    {
LABEL_15:
      AudSrvTraceLoggingErrorHelper("AudioSessionManagerGetExistingSession", 2198, v7);
      goto LABEL_16;
    }
    AudioSession = CAudioSessionManager::FindAudioSession(
                     (CAudioSessionManager *)*v3,
                     (struct CAudioSessionInstanceId *)v14,
                     &v12);
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
  }
  if ( v7 < 0 )
    goto LABEL_15;
LABEL_16:
  CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v14);
  return (unsigned int)v7;
}
