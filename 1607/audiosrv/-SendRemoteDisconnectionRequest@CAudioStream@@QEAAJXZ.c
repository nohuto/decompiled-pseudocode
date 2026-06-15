/*
 * XREFs of ?SendRemoteDisconnectionRequest@CAudioStream@@QEAAJXZ @ 0x180064FF0
 * Callers:
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x18005ADCC (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 *     ?RemoteDisconnect@CAudioStream@@QEAAJXZ @ 0x180064E58 (-RemoteDisconnect@CAudioStream@@QEAAJXZ.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 */

__int64 __fastcall CAudioStream::SendRemoteDisconnectionRequest(CAudioStream *this)
{
  CAudioSession *v2; // rcx
  __int64 v3; // rax
  DWORD ProcessId; // eax
  __int64 v5; // r8
  __int64 v6; // r9
  int MediaEvent; // eax
  unsigned int v8; // ebx
  _DWORD v10[12]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v11; // [rsp+50h] [rbp-38h]
  __int16 v12; // [rsp+60h] [rbp-28h]

  v2 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Fu,
      (__int64)&WPP_56c0583fd767319afe66d4370de2ea71_Traceguids,
      *((_QWORD *)this + 59));
    v2 = WPP_GLOBAL_Control;
  }
  v3 = *((_QWORD *)this + 59);
  v12 = 0;
  v11 = v3;
  v10[0] = 72;
  v10[6] = 2;
  v10[1] = 0x8000;
  if ( v2 != (CAudioSession *)&WPP_GLOBAL_Control && (*((_BYTE *)v2 + 28) & 0x40) != 0 && *((_BYTE *)v2 + 25) >= 4u )
    WPP_SF_q(*((_QWORD *)v2 + 2), 0x30u, (__int64)&WPP_56c0583fd767319afe66d4370de2ea71_Traceguids, (__int64)v10);
  ProcessId = GetProcessId(*((HANDLE *)this + 9));
  MediaEvent = GenerateMediaEvent(v10, ProcessId, v5, v6);
  v8 = MediaEvent;
  if ( MediaEvent < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioStream::SendRemoteDisconnectionRequest", 2147, MediaEvent);
  return v8;
}
