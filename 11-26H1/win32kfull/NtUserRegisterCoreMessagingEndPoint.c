/*
 * XREFs of NtUserRegisterCoreMessagingEndPoint @ 0x1402B9F20
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x14001F7CC (UserSetLastStatus.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline @ 0x14011CF38 (Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1401A3DAC (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserRegisterCoreMessagingEndPoint(int a1, void *a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  int v6; // ecx
  char v7; // di
  __int64 CurrentProcessWin32Process; // rax
  CoreMessagingKPort *v9; // r14
  __int64 v10; // rdx
  bool v11; // r14
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  int v15; // r15d
  char v16; // r14
  bool v17; // r12
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  NTSTATUS v21; // ecx
  int CoreMsgPort; // eax
  __int128 v24; // [rsp+60h] [rbp-88h] BYREF
  __int128 v25; // [rsp+70h] [rbp-78h]
  __int64 v26; // [rsp+80h] [rbp-68h]
  __int128 v27; // [rsp+88h] [rbp-60h] BYREF
  __int128 v28; // [rsp+98h] [rbp-50h]
  __int64 v29; // [rsp+A8h] [rbp-40h]

  v5 = 0;
  if ( (unsigned int)Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline() || a1 )
  {
    v7 = 1;
    if ( a1 >= 1 )
    {
LABEL_6:
      v6 = 87;
      goto LABEL_4;
    }
    if ( !a1 && !(unsigned __int8)HasTcbPrivilege() )
    {
      v6 = 5;
      goto LABEL_4;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v9 = *(CoreMessagingKPort **)(*(_QWORD *)(CurrentProcessWin32Process + 1208) + 72168LL);
    v27 = 0LL;
    v28 = 0LL;
    v29 = 0LL;
    if ( a2 )
    {
      v24 = 0LL;
      v25 = 0LL;
      v26 = 0LL;
      RtlCopyFromUser(&v24, a2, 0x28uLL);
      v27 = v24;
      v28 = v25;
      v29 = v26;
      if ( DWORD1(v27) != (unsigned int)PsGetCurrentThreadId() )
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
        {
          v7 = 0;
        }
        v11 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v10);
          LOBYTE(v13) = v11;
          LOBYTE(v14) = v7;
          WPP_RECORDER_AND_TRACE_SF_Dd(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v14,
            v13,
            *(_QWORD *)(UserSessionState + 69152),
            2,
            8,
            114,
            (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids,
            a1,
            SBYTE4(v27));
        }
        goto LABEL_6;
      }
      v15 = CoreMessagingKPort::RegisterEndpoint(v9, (unsigned int)a1, &v27);
      if ( v15 < 0 )
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) == 0
          || (v16 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
        {
          v16 = 0;
        }
        v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v16 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v18 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, WPP_GLOBAL_Control);
          LOBYTE(v19) = v17;
          LOBYTE(v20) = v16;
          WPP_RECORDER_AND_TRACE_SF_Dd(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v20,
            v19,
            *(_QWORD *)(v18 + 69152),
            2,
            8,
            115,
            (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids,
            a1,
            v15);
        }
        v21 = v15;
        goto LABEL_30;
      }
    }
    else
    {
      CoreMsgPort = CoreMessagingKPort::CreateCoreMsgPort(v9);
      if ( CoreMsgPort < 0 )
      {
        v21 = CoreMsgPort;
LABEL_30:
        UserSetLastStatus(v21, 1);
        return v5;
      }
    }
    return 1;
  }
  v6 = 5023;
LABEL_4:
  UserSetLastError(v6);
  return v5;
}
