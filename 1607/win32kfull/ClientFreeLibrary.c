/*
 * XREFs of ClientFreeLibrary @ 0x1C0109B4C
 * Callers:
 *     xxxLoadHmodIndex @ 0x1C0109684 (xxxLoadHmodIndex.c)
 *     xxxDoSysExpunge @ 0x1C0109A1C (xxxDoSysExpunge.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ClientFreeLibrary(__int64 a1)
{
  int v1; // ebx
  __int64 *v2; // rcx
  __int64 result; // rax
  int v4; // [rsp+50h] [rbp+8h] BYREF
  __int64 v5; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int64 v6; // [rsp+60h] [rbp+18h] BYREF
  __int64 v7; // [rsp+68h] [rbp+20h]

  v5 = a1;
  if ( gdwInAtomicOperation )
  {
    a1 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(a1, gdwInAtomicOperation);
  EtwTraceBeginCallback(68LL);
  v1 = KeUserModeCallback(68LL, &v5, 8LL, &v6, &v4);
  EtwTraceEndCallback(68LL);
  EnterCrit(0LL, 1LL);
  if ( v1 < 0 || v4 != 24 )
    return 0LL;
  v2 = (__int64 *)v6;
  if ( v6 + 8 < v6 || v6 + 8 > W32UserProbeAddress )
    v2 = (__int64 *)W32UserProbeAddress;
  result = *v2;
  v7 = *v2;
  return result;
}
