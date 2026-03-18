/*
 * XREFs of xxxClientCopyDDEIn2 @ 0x1C020CEE8
 * Callers:
 *     xxxClientCopyDDEIn1 @ 0x1C020CAD0 (xxxClientCopyDDEIn1.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientCopyDDEIn2(__int64 a1)
{
  int v1; // ebx
  __int64 *v2; // rcx
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v5[3]; // [rsp+38h] [rbp-80h] BYREF
  _OWORD v6[4]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v7; // [rsp+90h] [rbp-28h]

  v6[0] = *(_OWORD *)a1;
  v6[1] = *(_OWORD *)(a1 + 16);
  v6[2] = *(_OWORD *)(a1 + 32);
  v6[3] = *(_OWORD *)(a1 + 48);
  v7 = *(_QWORD *)(a1 + 64);
  if ( gdwInAtomicOperation )
  {
    a1 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(a1, gdwInAtomicOperation);
  EtwTraceBeginCallback(61LL);
  v1 = KeUserModeCallback(61LL, v6, 72LL, v5, &v4);
  EtwTraceEndCallback(61LL);
  EnterCrit(0LL, 1LL);
  if ( v1 < 0 || v4 != 24 )
    return 0LL;
  v2 = (__int64 *)v5[0];
  if ( (unsigned __int64)(v5[0] + 8LL) < v5[0] || (unsigned __int64)(v5[0] + 8LL) > W32UserProbeAddress )
    v2 = (__int64 *)W32UserProbeAddress;
  result = *v2;
  v5[1] = *v2;
  return result;
}
