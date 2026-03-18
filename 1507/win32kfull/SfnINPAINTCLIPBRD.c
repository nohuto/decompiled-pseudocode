/*
 * XREFs of SfnINPAINTCLIPBRD @ 0x1C0210D20
 * Callers:
 *     <none>
 * Callees:
 *     _WindowFromDC @ 0x1C00E39B0 (_WindowFromDC.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     _W32ExceptionHandler @ 0x1C02D8144 (_W32ExceptionHandler.c)
 */

__int64 __fastcall SfnINPAINTCLIPBRD(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 CurrentProcessWin32Process; // rax
  struct tagWND *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // edi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 *v23; // rbx
  int v25; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v26; // [rsp+38h] [rbp-F0h]
  _QWORD v27[2]; // [rsp+40h] [rbp-E8h] BYREF
  __int128 v28; // [rsp+50h] [rbp-D8h]
  _QWORD v29[4]; // [rsp+60h] [rbp-C8h] BYREF
  _QWORD v30[14]; // [rsp+80h] [rbp-A8h] BYREF

  v10 = 0LL;
  if ( a1 )
    v11 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 432LL);
  else
    v11 = 0LL;
  memset(v30, 0, sizeof(v30));
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
  if ( RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 656), 4u) )
  {
    v30[0] = v11;
    LODWORD(v30[1]) = a2;
    v30[2] = a3;
    *(_DWORD *)(a4 + 68) = 0;
    *(_OWORD *)&v30[3] = *(_OWORD *)a4;
    *(_OWORD *)&v30[5] = *(_OWORD *)(a4 + 16);
    *(_OWORD *)&v30[7] = *(_OWORD *)(a4 + 32);
    *(_OWORD *)&v30[9] = *(_OWORD *)(a4 + 48);
    v30[11] = *(_QWORD *)(a4 + 64);
    v30[12] = a5;
    v30[13] = a6;
    v14 = WindowFromDC(*(HDC *)a4);
    v30[3] = _GetDC(v14);
    v29[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v29;
    v29[1] = a1;
    if ( a1 )
      ++*((_DWORD *)a1 + 2);
    v16 = *(_QWORD *)(gptiCurrent + 440LL);
    v28 = *(_OWORD *)(v16 + 64);
    v26 = *(_QWORD *)(v16 + 80);
    *(_QWORD *)(v16 + 72) = v11;
    v17 = 0LL;
    if ( a1 )
      v17 = *a1;
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 64LL) = v17;
    v18 = 0LL;
    if ( a1 )
      v18 = a1[33];
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 80LL) = v18;
    UserSessionSwitchLeaveCrit(v18, v15);
    EtwTraceBeginCallback(23LL);
    v19 = KeUserModeCallback(23LL, v30, 112LL, v27, &v25);
    EtwTraceEndCallback(23LL);
    EnterCrit(1LL);
    ThreadUnlock1(v21, v20);
    v22 = *(_QWORD *)(gptiCurrent + 440LL);
    *(_OWORD *)(v22 + 64) = v28;
    *(_QWORD *)(v22 + 80) = v26;
    if ( v19 < 0 || v25 != 24 )
      return 0LL;
    v23 = (__int64 *)v27[0];
    if ( (unsigned __int64)(v27[0] + 8LL) < v27[0] || (unsigned __int64)(v27[0] + 8LL) > W32UserProbeAddress )
      v23 = (__int64 *)W32UserProbeAddress;
    v10 = *v23;
    v27[1] = v10;
    _ReleaseDC(v30[3]);
  }
  return v10;
}
