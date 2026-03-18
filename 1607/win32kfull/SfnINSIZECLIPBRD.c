/*
 * XREFs of SfnINSIZECLIPBRD @ 0x1C0209800
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall SfnINSIZECLIPBRD(__int64 *a1, int a2, __int64 a3, _OWORD *a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v15; // rax
  __int128 v16; // xmm6
  __int64 v17; // xmm1_8
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // edi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 *v24; // rbx
  _DWORD v26[8]; // [rsp+30h] [rbp-108h] BYREF
  unsigned __int64 v27; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v28; // [rsp+58h] [rbp-E0h]
  _QWORD v29[3]; // [rsp+78h] [rbp-C0h] BYREF
  __int128 v30; // [rsp+90h] [rbp-A8h]
  __int64 v31; // [rsp+A0h] [rbp-98h]
  _QWORD v32[7]; // [rsp+A8h] [rbp-90h] BYREF

  v10 = 0LL;
  v28 = 0LL;
  if ( a1 )
    v11 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v11 = 0LL;
  memset(v32, 0, sizeof(v32));
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13, v12);
  if ( RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 648), 4u) )
  {
    v32[0] = v11;
    LODWORD(v32[1]) = a2;
    v32[2] = a3;
    *(_OWORD *)&v32[3] = *a4;
    v32[5] = a5;
    v32[6] = a6;
    v29[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v29;
    v29[1] = a1;
    if ( a1 )
      ++*((_DWORD *)a1 + 2);
    v15 = *(_QWORD *)(gptiCurrent + 432LL);
    v16 = *(_OWORD *)(v15 + 64);
    v30 = v16;
    v17 = *(_QWORD *)(v15 + 80);
    v31 = v17;
    *(_QWORD *)(v15 + 72) = v11;
    v18 = 0LL;
    if ( a1 )
      v18 = *a1;
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v18;
    v19 = 0LL;
    if ( a1 )
      v19 = a1[33];
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v19;
    if ( gdwInAtomicOperation )
    {
      v19 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v19, gdwInAtomicOperation);
    EtwTraceBeginCallback(24LL);
    v20 = KeUserModeCallback(24LL, v32, 56LL, &v27, v26);
    EtwTraceEndCallback(24LL);
    EnterCrit(0LL, 1LL);
    ThreadUnlock1(v22, v21);
    v23 = *(_QWORD *)(gptiCurrent + 432LL);
    *(_OWORD *)(v23 + 64) = v16;
    *(_QWORD *)(v23 + 80) = v17;
    if ( v20 < 0 || v26[0] != 24 )
      return 0LL;
    v24 = (__int64 *)v27;
    if ( v27 + 8 < v27 || v27 + 8 > W32UserProbeAddress )
      v24 = (__int64 *)W32UserProbeAddress;
    v10 = *v24;
    v28 = v10;
  }
  return v10;
}
