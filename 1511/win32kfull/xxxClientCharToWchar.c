/*
 * XREFs of xxxClientCharToWchar @ 0x1C014CEF0
 * Callers:
 *     xxxInternalToUnicode @ 0x1C0099650 (xxxInternalToUnicode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall xxxClientCharToWchar(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 *v3; // rcx
  __int64 result; // rax
  __int16 v5; // [rsp+50h] [rbp+8h] BYREF
  __int16 v6; // [rsp+52h] [rbp+Ah]
  int v7; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int64 v8; // [rsp+60h] [rbp+18h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h]

  v5 = a1;
  v6 = a2;
  UserSessionSwitchLeaveCrit(a1, a2);
  EtwTraceBeginCallback(81LL);
  v2 = KeUserModeCallback(81LL, &v5, 4LL, &v8, &v7);
  EtwTraceEndCallback(81LL);
  EnterCrit(0LL, 1LL);
  if ( v2 < 0 || v7 != 24 )
    return 95LL;
  v3 = (__int64 *)v8;
  if ( v8 + 8 < v8 || v8 + 8 > W32UserProbeAddress )
    v3 = (__int64 *)W32UserProbeAddress;
  result = *v3;
  v9 = *v3;
  return result;
}
