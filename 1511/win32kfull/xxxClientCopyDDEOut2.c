/*
 * XREFs of xxxClientCopyDDEOut2 @ 0x1C0214640
 * Callers:
 *     xxxClientCopyDDEOut1 @ 0x1C0214390 (xxxClientCopyDDEOut1.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientCopyDDEOut2(__int128 *a1, __int64 a2)
{
  int v3; // ebx
  __int64 *v4; // rcx
  __int64 result; // rax
  int v6; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v7[3]; // [rsp+38h] [rbp-80h] BYREF
  __int128 v8; // [rsp+50h] [rbp-68h] BYREF
  __int128 v9; // [rsp+60h] [rbp-58h]
  __int128 v10; // [rsp+70h] [rbp-48h]
  __int128 v11; // [rsp+80h] [rbp-38h]
  __int64 v12; // [rsp+90h] [rbp-28h]

  v8 = *a1;
  v9 = a1[1];
  v10 = a1[2];
  v11 = a1[3];
  v12 = *((_QWORD *)a1 + 8);
  UserSessionSwitchLeaveCrit(a1, a2);
  EtwTraceBeginCallback(62LL);
  v3 = KeUserModeCallback(62LL, &v8, 72LL, v7, &v6);
  EtwTraceEndCallback(62LL);
  EnterCrit(0LL, 1LL);
  *((_QWORD *)a1 + 3) = *((_QWORD *)&v9 + 1);
  if ( v3 < 0 || v6 != 24 )
    return 0LL;
  v4 = (__int64 *)v7[0];
  if ( (unsigned __int64)(v7[0] + 8LL) < v7[0] || (unsigned __int64)(v7[0] + 8LL) > W32UserProbeAddress )
    v4 = (__int64 *)W32UserProbeAddress;
  result = *v4;
  v7[1] = *v4;
  return result;
}
