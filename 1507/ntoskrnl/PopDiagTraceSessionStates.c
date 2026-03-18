/*
 * XREFs of PopDiagTraceSessionStates @ 0x14055DDB8
 * Callers:
 *     PopSessionWinlogonNotification @ 0x14040A0DC (PopSessionWinlogonNotification.c)
 *     NtPowerInformation @ 0x1404E7B24 (NtPowerInformation.c)
 *     PopSessionInputChange @ 0x14055DA90 (PopSessionInputChange.c)
 *     PopSetSessionUserStatus @ 0x14055DFC0 (PopSetSessionUserStatus.c)
 *     PopEvaluateGlobalUserStatus @ 0x14055E090 (PopEvaluateGlobalUserStatus.c)
 *     PopSessionDisconnected @ 0x1405698C0 (PopSessionDisconnected.c)
 *     PopSessionConnected @ 0x140582F38 (PopSessionConnected.c)
 *     PopSetSessionDisplayStatus @ 0x140582FD8 (PopSetSessionDisplayStatus.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceSessionStates(PCEVENT_DESCRIPTOR EventDescriptor, int a2, int a3)
{
  REGHANDLE v4; // rdi
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  int *v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]
  int v9; // [rsp+78h] [rbp+10h] BYREF
  int v10; // [rsp+80h] [rbp+18h] BYREF

  v10 = a3;
  v9 = a2;
  if ( PopDiagHandleRegistered )
  {
    v4 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, EventDescriptor) )
    {
      UserData.Reserved = 0;
      v8 = 0;
      UserData.Ptr = (ULONGLONG)&v9;
      UserData.Size = 4;
      v6 = &v10;
      v7 = 4;
      EtwWrite(v4, EventDescriptor, 0LL, 2u, &UserData);
    }
  }
}
