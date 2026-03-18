/*
 * XREFs of xxxClientGetDDEHookData @ 0x1C020D890
 * Callers:
 *     xxxDDETrackPostHook @ 0x1C01E2E50 (xxxDDETrackPostHook.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall xxxClientGetDDEHookData(int a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  int v7; // ebx
  __int64 *v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int128 v11; // xmm3
  __int128 v12; // xmm0
  __int64 v13; // xmm1_8
  int v15; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v16[5]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v17[10]; // [rsp+60h] [rbp-68h] BYREF

  memset(v17, 0, 0x48uLL);
  v17[1] = a2;
  LODWORD(v17[0]) = a1;
  if ( gdwInAtomicOperation )
  {
    v6 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v6, gdwInAtomicOperation);
  EtwTraceBeginCallback(71LL);
  v7 = KeUserModeCallback(71LL, v17, 72LL, v16, &v15);
  EtwTraceEndCallback(71LL);
  EnterCrit(0LL, 1LL);
  if ( v7 < 0 || v15 != 24 )
    return 0LL;
  v8 = (__int64 *)v16[0];
  if ( (unsigned __int64)(v16[0] + 8LL) < v16[0] || (unsigned __int64)(v16[0] + 8LL) > W32UserProbeAddress )
    v8 = (__int64 *)W32UserProbeAddress;
  v9 = *v8;
  v16[1] = *v8;
  v10 = *(_QWORD *)(v16[0] + 16LL);
  if ( v10 + 56 < v10 || v10 + 56 > W32UserProbeAddress )
    v10 = W32UserProbeAddress;
  v11 = *(_OWORD *)(v10 + 16);
  v12 = *(_OWORD *)(v10 + 32);
  v13 = *(_QWORD *)(v10 + 48);
  *(_OWORD *)a3 = *(_OWORD *)v10;
  *(_OWORD *)(a3 + 16) = v11;
  *(_OWORD *)(a3 + 32) = v12;
  *(_QWORD *)(a3 + 48) = v13;
  return (unsigned int)v9;
}
