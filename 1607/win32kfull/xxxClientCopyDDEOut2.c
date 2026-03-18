/*
 * XREFs of xxxClientCopyDDEOut2 @ 0x1C020D348
 * Callers:
 *     xxxClientCopyDDEOut1 @ 0x1C020D020 (xxxClientCopyDDEOut1.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientCopyDDEOut2(__int64 a1)
{
  __int64 v1; // rdi
  int v2; // ebx
  __int64 *v3; // rcx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v6[3]; // [rsp+38h] [rbp-80h] BYREF
  __int128 v7; // [rsp+50h] [rbp-68h] BYREF
  __int128 v8; // [rsp+60h] [rbp-58h]
  __int128 v9; // [rsp+70h] [rbp-48h]
  __int128 v10; // [rsp+80h] [rbp-38h]
  __int64 v11; // [rsp+90h] [rbp-28h]

  v1 = a1;
  v7 = *(_OWORD *)a1;
  v8 = *(_OWORD *)(a1 + 16);
  v9 = *(_OWORD *)(a1 + 32);
  v10 = *(_OWORD *)(a1 + 48);
  v11 = *(_QWORD *)(a1 + 64);
  if ( gdwInAtomicOperation )
  {
    a1 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(a1, gdwInAtomicOperation);
  EtwTraceBeginCallback(63LL);
  v2 = KeUserModeCallback(63LL, &v7, 72LL, v6, &v5);
  EtwTraceEndCallback(63LL);
  EnterCrit(0LL, 1LL);
  *(_QWORD *)(v1 + 24) = *((_QWORD *)&v8 + 1);
  if ( v2 < 0 || v5 != 24 )
    return 0LL;
  v3 = (__int64 *)v6[0];
  if ( (unsigned __int64)(v6[0] + 8LL) < v6[0] || (unsigned __int64)(v6[0] + 8LL) > W32UserProbeAddress )
    v3 = (__int64 *)W32UserProbeAddress;
  result = *v3;
  v6[1] = *v3;
  return result;
}
