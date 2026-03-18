/*
 * XREFs of xxxClientCallWinEventProc @ 0x140038D98
 * Callers:
 *     xxxProcessNotifyWinEvent @ 0x1400441AC (xxxProcessNotifyWinEvent.c)
 * Callees:
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14003AB20 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 */

__int64 __fastcall xxxClientCallWinEventProc(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  int v5; // ebx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v7; // rcx
  int v8; // ebx
  __int64 result; // rax
  _QWORD v10[2]; // [rsp+38h] [rbp-50h] BYREF
  int v11; // [rsp+48h] [rbp-40h]
  int v12; // [rsp+4Ch] [rbp-3Ch]
  __int64 v13; // [rsp+50h] [rbp-38h]
  int v14; // [rsp+58h] [rbp-30h]
  int v15; // [rsp+5Ch] [rbp-2Ch]
  int v16; // [rsp+60h] [rbp-28h]
  int v17; // [rsp+64h] [rbp-24h]
  int v18; // [rsp+90h] [rbp+8h] BYREF
  __int64 v19; // [rsp+98h] [rbp+10h] BYREF
  void *Src; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+20h]

  Src = 0LL;
  v18 = 0;
  v12 = 0;
  v10[0] = a1;
  v3 = 0LL;
  if ( a2 )
    v3 = *a2;
  v10[1] = v3;
  v13 = *(_QWORD *)(a3 + 32);
  v11 = *(_DWORD *)(a3 + 28);
  v14 = *(_DWORD *)(a3 + 40);
  v15 = *(_DWORD *)(a3 + 44);
  v16 = *(_DWORD *)(a3 + 48);
  v17 = *(_DWORD *)(a3 + 52);
  LODWORD(v19) = GET_USERCRIT_DISPOSITION(a1, a2);
  v5 = 1;
  HIDWORD(v19) = 1;
  if ( (_DWORD)v19 )
  {
    CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v4);
    if ( CurrentThreadWin32Thread )
      v7 = *CurrentThreadWin32Thread;
    else
      v7 = 0LL;
    if ( *(_BYTE *)(v7 + 1708) == 1 )
      v5 = 0;
    HIDWORD(v19) = v5;
    UserSessionSwitchLeaveCrit(v7);
  }
  EtwTraceBeginCallback(88LL);
  v8 = KeUserModeCallback(88LL, v10, 48LL, &Src, &v18);
  EtwTraceEndCallback(88LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v19);
  if ( v8 < 0 || v18 != 24 )
    return 0LL;
  v19 = 0LL;
  RtlCopyFromUser(&v19, Src, 8uLL);
  result = v19;
  v21 = v19;
  return result;
}
