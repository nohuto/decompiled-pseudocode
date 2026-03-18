/*
 * XREFs of SfnINSIZECLIPBRD @ 0x1C0211310
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     _W32ExceptionHandler @ 0x1C02D8144 (_W32ExceptionHandler.c)
 */

__int64 __fastcall SfnINSIZECLIPBRD(__int64 *a1, int a2, __int64 a3, _OWORD *a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int128 v16; // xmm6
  __int64 v17; // xmm7_8
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // edi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 *v24; // rbx
  int v26; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD v27[2]; // [rsp+38h] [rbp-C0h] BYREF
  _QWORD v28[4]; // [rsp+48h] [rbp-B0h] BYREF
  _QWORD v29[7]; // [rsp+68h] [rbp-90h] BYREF

  v10 = 0LL;
  if ( a1 )
    v11 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 432LL);
  else
    v11 = 0LL;
  memset(v29, 0, sizeof(v29));
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
  if ( RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 656), 4u) )
  {
    v29[0] = v11;
    LODWORD(v29[1]) = a2;
    v29[2] = a3;
    *(_OWORD *)&v29[3] = *a4;
    v29[5] = a5;
    v29[6] = a6;
    v28[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v28;
    v28[1] = a1;
    if ( a1 )
      ++*((_DWORD *)a1 + 2);
    v15 = *(_QWORD *)(gptiCurrent + 440LL);
    v16 = *(_OWORD *)(v15 + 64);
    v17 = *(_QWORD *)(v15 + 80);
    *(_QWORD *)(v15 + 72) = v11;
    v18 = 0LL;
    if ( a1 )
      v18 = *a1;
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 64LL) = v18;
    v19 = 0LL;
    if ( a1 )
      v19 = a1[33];
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 80LL) = v19;
    UserSessionSwitchLeaveCrit(v19, v14);
    EtwTraceBeginCallback(24LL);
    v20 = KeUserModeCallback(24LL, v29, 56LL, v27, &v26);
    EtwTraceEndCallback(24LL);
    EnterCrit(1LL);
    ThreadUnlock1(v22, v21);
    v23 = *(_QWORD *)(gptiCurrent + 440LL);
    *(_OWORD *)(v23 + 64) = v16;
    *(_QWORD *)(v23 + 80) = v17;
    if ( v20 < 0 || v26 != 24 )
      return 0LL;
    v24 = (__int64 *)v27[0];
    if ( (unsigned __int64)(v27[0] + 8LL) < v27[0] || (unsigned __int64)(v27[0] + 8LL) > W32UserProbeAddress )
      v24 = (__int64 *)W32UserProbeAddress;
    v10 = *v24;
    v27[1] = v10;
  }
  return v10;
}
