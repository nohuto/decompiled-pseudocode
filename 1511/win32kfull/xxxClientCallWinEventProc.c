/*
 * XREFs of xxxClientCallWinEventProc @ 0x1C0061710
 * Callers:
 *     xxxProcessNotifyWinEvent @ 0x1C0060EC0 (xxxProcessNotifyWinEvent.c)
 * Callees:
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall xxxClientCallWinEventProc(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // ebx
  __int64 *v10; // rcx
  __int64 result; // rax
  _QWORD v12[10]; // [rsp+38h] [rbp-50h] BYREF
  int v13; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 v14; // [rsp+98h] [rbp+10h] BYREF
  __int64 v15; // [rsp+A0h] [rbp+18h]

  memset(v12, 0, 0x30uLL);
  v12[0] = a1;
  if ( a2 )
    v8 = *a2;
  else
    v8 = 0LL;
  v12[1] = v8;
  v12[3] = *(_QWORD *)(a3 + 24);
  LODWORD(v12[2]) = *(_DWORD *)(a3 + 16);
  v12[4] = *(_QWORD *)(a3 + 32);
  v12[5] = *(_QWORD *)(a3 + 40);
  UserSessionSwitchLeaveCrit(v7, v6);
  EtwTraceBeginCallback(87LL);
  v9 = KeUserModeCallback(87LL, v12, 48LL, &v14, &v13);
  EtwTraceEndCallback(87LL);
  EnterCrit(0LL, 1LL);
  if ( v9 < 0 || v13 != 24 )
    return 0LL;
  v10 = (__int64 *)v14;
  if ( v14 + 8 < v14 || v14 + 8 > W32UserProbeAddress )
    v10 = (__int64 *)W32UserProbeAddress;
  result = *v10;
  v15 = *v10;
  return result;
}
