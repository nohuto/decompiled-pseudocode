/*
 * XREFs of ClientFreeLibrary @ 0x1C00EBD6C
 * Callers:
 *     xxxLoadHmodIndex @ 0x1C005735C (xxxLoadHmodIndex.c)
 *     xxxDoSysExpunge @ 0x1C00EBC3C (xxxDoSysExpunge.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ClientFreeLibrary(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 *v3; // rcx
  __int64 result; // rax
  int v5; // [rsp+50h] [rbp+8h] BYREF
  __int64 v6; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int64 v7; // [rsp+60h] [rbp+18h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h]

  v6 = a1;
  UserSessionSwitchLeaveCrit(a1, a2);
  EtwTraceBeginCallback(67LL);
  v2 = KeUserModeCallback(67LL, &v6, 8LL, &v7, &v5);
  EtwTraceEndCallback(67LL);
  EnterCrit(1LL);
  if ( v2 < 0 || v5 != 24 )
    return 0LL;
  v3 = (__int64 *)v7;
  if ( v7 + 8 < v7 || v7 + 8 > W32UserProbeAddress )
    v3 = (__int64 *)W32UserProbeAddress;
  result = *v3;
  v8 = *v3;
  return result;
}
