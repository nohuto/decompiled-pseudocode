/*
 * XREFs of xxxClientWOWGetProcModule @ 0x1C00EE868
 * Callers:
 *     xxxSetWindowData @ 0x1C0057B34 (xxxSetWindowData.c)
 *     xxxSetClassData @ 0x1C0103C44 (xxxSetClassData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall xxxClientWOWGetProcModule(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 result; // rax
  unsigned __int64 v4; // rcx
  int v5; // [rsp+50h] [rbp+8h] BYREF
  __int64 v6; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int64 v7; // [rsp+60h] [rbp+18h] BYREF

  v6 = a1;
  UserSessionSwitchLeaveCrit(a1, a2);
  EtwTraceBeginCallback(89LL);
  v2 = KeUserModeCallback(89LL, &v6, 8LL, &v7, &v5);
  EtwTraceEndCallback(89LL);
  EnterCrit(0LL, 1LL);
  result = 0LL;
  if ( v2 >= 0 && v5 == 24 )
  {
    v4 = v7;
    if ( v7 + 8 < v7 || v7 + 8 > W32UserProbeAddress )
      v4 = W32UserProbeAddress;
    return *(_QWORD *)v4;
  }
  return result;
}
