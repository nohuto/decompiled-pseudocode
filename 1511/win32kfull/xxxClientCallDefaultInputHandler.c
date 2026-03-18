/*
 * XREFs of xxxClientCallDefaultInputHandler @ 0x1C0213BD4
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0059620 (xxxRealInternalGetMessage.c)
 * Callees:
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall xxxClientCallDefaultInputHandler(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 *v4; // rcx
  __int64 result; // rax
  _QWORD v6[8]; // [rsp+38h] [rbp-40h] BYREF
  int v7; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v8; // [rsp+88h] [rbp+10h] BYREF
  __int64 v9; // [rsp+90h] [rbp+18h]

  memset(v6, 0, 0x30uLL);
  v6[0] = *(_QWORD *)a1;
  LODWORD(v6[1]) = *(_DWORD *)(a1 + 8);
  v6[2] = *(_QWORD *)(a1 + 16);
  v6[3] = *(_QWORD *)(a1 + 24);
  LODWORD(v6[4]) = *(_DWORD *)(a1 + 32);
  *(_QWORD *)((char *)&v6[4] + 4) = *(_QWORD *)(a1 + 36);
  UserSessionSwitchLeaveCrit(v3, v2);
  EtwTraceBeginCallback(115LL);
  LODWORD(a1) = KeUserModeCallback(115LL, v6, 48LL, &v8, &v7);
  EtwTraceEndCallback(115LL);
  EnterCrit(0LL, 1LL);
  if ( (int)a1 < 0 || v7 != 24 )
    return 0LL;
  v4 = (__int64 *)v8;
  if ( v8 + 8 < v8 || v8 + 8 > W32UserProbeAddress )
    v4 = (__int64 *)W32UserProbeAddress;
  result = *v4;
  v9 = *v4;
  return result;
}
