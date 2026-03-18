/*
 * XREFs of xxxClientCallWinEventProc @ 0x1C0071D50
 * Callers:
 *     xxxProcessNotifyWinEvent @ 0x1C0071500 (xxxProcessNotifyWinEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall xxxClientCallWinEventProc(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rax
  int v4; // ebx
  _QWORD *v5; // rax
  __int64 v7; // [rsp+38h] [rbp-40h] BYREF
  __int64 v8; // [rsp+40h] [rbp-38h]
  __int64 v9; // [rsp+48h] [rbp-30h]
  __int64 v10; // [rsp+50h] [rbp-28h]
  __int64 v11; // [rsp+58h] [rbp-20h]
  __int64 v12; // [rsp+60h] [rbp-18h]
  int v13; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v14; // [rsp+88h] [rbp+10h] BYREF

  v3 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v7 = a1;
  if ( a2 )
    v3 = *a2;
  v8 = v3;
  v10 = *(_QWORD *)(a3 + 24);
  LODWORD(v9) = *(_DWORD *)(a3 + 16);
  v11 = *(_QWORD *)(a3 + 32);
  v12 = *(_QWORD *)(a3 + 40);
  UserSessionSwitchLeaveCrit(a1, a2);
  EtwTraceBeginCallback(87LL);
  v4 = KeUserModeCallback(87LL, &v7, 48LL, &v14, &v13);
  EtwTraceEndCallback(87LL);
  EnterCrit(1LL);
  if ( v4 < 0 || v13 != 24 )
    return 0LL;
  v5 = (_QWORD *)v14;
  if ( v14 + 8 < v14 || v14 + 8 > W32UserProbeAddress )
    v5 = (_QWORD *)W32UserProbeAddress;
  return (unsigned int)*v5;
}
