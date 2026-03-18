/*
 * XREFs of xxxClientCopyDDEIn2 @ 0x1C021428C
 * Callers:
 *     xxxClientCopyDDEIn1 @ 0x1C0213ED8 (xxxClientCopyDDEIn1.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientCopyDDEIn2(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 *v3; // rcx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v6[3]; // [rsp+38h] [rbp-80h] BYREF
  _OWORD v7[4]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v8; // [rsp+90h] [rbp-28h]

  v7[0] = *(_OWORD *)a1;
  v7[1] = *(_OWORD *)(a1 + 16);
  v7[2] = *(_OWORD *)(a1 + 32);
  v7[3] = *(_OWORD *)(a1 + 48);
  v8 = *(_QWORD *)(a1 + 64);
  UserSessionSwitchLeaveCrit(a1, a2);
  EtwTraceBeginCallback(60LL);
  v2 = KeUserModeCallback(60LL, v7, 72LL, v6, &v5);
  EtwTraceEndCallback(60LL);
  EnterCrit(0LL, 1LL);
  if ( v2 < 0 || v5 != 24 )
    return 0LL;
  v3 = (__int64 *)v6[0];
  if ( (unsigned __int64)(v6[0] + 8LL) < v6[0] || (unsigned __int64)(v6[0] + 8LL) > W32UserProbeAddress )
    v3 = (__int64 *)W32UserProbeAddress;
  result = *v3;
  v6[1] = *v3;
  return result;
}
