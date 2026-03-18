/*
 * XREFs of SfnINPAINTCLIPBRD @ 0x1C0209110
 * Callers:
 *     <none>
 * Callees:
 *     _WindowFromDC @ 0x1C005CB00 (_WindowFromDC.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall SfnINPAINTCLIPBRD(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 CurrentProcessWin32Process; // rax
  struct tagWND *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // edi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 *v23; // rbx
  _DWORD v25[8]; // [rsp+30h] [rbp-128h] BYREF
  unsigned __int64 v26; // [rsp+50h] [rbp-108h] BYREF
  __int64 v27; // [rsp+58h] [rbp-100h]
  __int128 v28; // [rsp+60h] [rbp-F8h]
  __int64 v29; // [rsp+70h] [rbp-E8h]
  _QWORD v30[4]; // [rsp+90h] [rbp-C8h] BYREF
  _QWORD v31[14]; // [rsp+B0h] [rbp-A8h] BYREF

  v10 = 0LL;
  v27 = 0LL;
  if ( a1 )
    v11 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v11 = 0LL;
  memset(v31, 0, sizeof(v31));
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13, v12);
  if ( RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 648), 4u) )
  {
    v31[0] = v11;
    LODWORD(v31[1]) = a2;
    v31[2] = a3;
    *(_DWORD *)(a4 + 68) = 0;
    *(_OWORD *)&v31[3] = *(_OWORD *)a4;
    *(_OWORD *)&v31[5] = *(_OWORD *)(a4 + 16);
    *(_OWORD *)&v31[7] = *(_OWORD *)(a4 + 32);
    *(_OWORD *)&v31[9] = *(_OWORD *)(a4 + 48);
    v31[11] = *(_QWORD *)(a4 + 64);
    v31[12] = a5;
    v31[13] = a6;
    v15 = WindowFromDC(*(HDC *)a4);
    v31[3] = _GetDC(v15);
    v30[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v30;
    v30[1] = a1;
    if ( a1 )
      ++*((_DWORD *)a1 + 2);
    v16 = *(_QWORD *)(gptiCurrent + 432LL);
    v28 = *(_OWORD *)(v16 + 64);
    v29 = *(_QWORD *)(v16 + 80);
    *(_QWORD *)(v16 + 72) = v11;
    v17 = 0LL;
    if ( a1 )
      v17 = *a1;
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v17;
    v18 = 0LL;
    if ( a1 )
      v18 = a1[33];
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v18;
    if ( gdwInAtomicOperation )
    {
      v18 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v18, gdwInAtomicOperation);
    EtwTraceBeginCallback(23LL);
    v19 = KeUserModeCallback(23LL, v31, 112LL, &v26, v25);
    EtwTraceEndCallback(23LL);
    EnterCrit(0LL, 1LL);
    ThreadUnlock1(v21, v20);
    v22 = *(_QWORD *)(gptiCurrent + 432LL);
    *(_OWORD *)(v22 + 64) = v28;
    *(_QWORD *)(v22 + 80) = v29;
    if ( v19 < 0 || v25[0] != 24 )
      return 0LL;
    v23 = (__int64 *)v26;
    if ( v26 + 8 < v26 || v26 + 8 > W32UserProbeAddress )
      v23 = (__int64 *)W32UserProbeAddress;
    v10 = *v23;
    v27 = v10;
    _ReleaseDC(v31[3]);
  }
  return v10;
}
