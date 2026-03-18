/*
 * XREFs of xxxClientBroadcastThemeChange @ 0x1C0129914
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00889B8 (xxxProcessEventMessage.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientBroadcastThemeChange(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 *v3; // rcx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v6[3]; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v7[2]; // [rsp+50h] [rbp-28h] BYREF

  v7[0] = a1;
  v7[1] = a2;
  if ( gdwInAtomicOperation )
  {
    a1 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(a1, gdwInAtomicOperation);
  EtwTraceBeginCallback(58LL);
  v2 = KeUserModeCallback(58LL, v7, 16LL, v6, &v5);
  EtwTraceEndCallback(58LL);
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
