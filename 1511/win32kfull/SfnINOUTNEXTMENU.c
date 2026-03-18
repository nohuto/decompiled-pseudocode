/*
 * XREFs of SfnINOUTNEXTMENU @ 0x1C0210E40
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0152CC0 (memset.c)
 *     _W32ExceptionHandler @ 0x1C02D94EC (_W32ExceptionHandler.c)
 */

__int64 __fastcall SfnINOUTNEXTMENU(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 *v21; // rcx
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  __int64 v24; // xmm1_8
  _QWORD v26[9]; // [rsp+30h] [rbp-98h] BYREF
  __int128 v27; // [rsp+78h] [rbp-50h]
  _QWORD v28[5]; // [rsp+88h] [rbp-40h] BYREF
  int v29; // [rsp+D8h] [rbp+10h] BYREF

  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v12 = 0LL;
  memset(v26, 0, 0x40uLL);
  v26[0] = v12;
  LODWORD(v26[1]) = a2;
  v26[2] = a3;
  v26[6] = a5;
  v26[7] = a6;
  *(_OWORD *)&v26[3] = *(_OWORD *)a4;
  v26[5] = *(_QWORD *)(a4 + 16);
  v28[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v28;
  v28[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v14 = *(_QWORD *)(gptiCurrent + 432LL);
  v27 = *(_OWORD *)(v14 + 64);
  a6 = *(_QWORD *)(v14 + 80);
  *(_QWORD *)(v14 + 72) = v12;
  if ( a1 )
    v15 = *a1;
  else
    v15 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v15;
  if ( a1 )
    v16 = a1[33];
  else
    v16 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v16;
  UserSessionSwitchLeaveCrit(v16, v13);
  EtwTraceBeginCallback(30LL);
  v17 = KeUserModeCallback(30LL, v26, 64LL, &a5, &v29);
  EtwTraceEndCallback(30LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v19, v18);
  v20 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v20 + 64) = v27;
  *(_QWORD *)(v20 + 80) = a6;
  if ( v17 < 0 || v29 != 24 )
    return 0LL;
  v21 = (__int64 *)a5;
  if ( a5 + 8 < a5 || a5 + 8 > W32UserProbeAddress )
    v21 = (__int64 *)W32UserProbeAddress;
  v22 = *v21;
  v28[3] = *v21;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v23 = *(_QWORD *)(a5 + 16);
    if ( v23 + 24 < v23 || v23 + 24 > W32UserProbeAddress )
      v23 = W32UserProbeAddress;
    v24 = *(_QWORD *)(v23 + 16);
    *(_OWORD *)a4 = *(_OWORD *)v23;
    *(_QWORD *)(a4 + 16) = v24;
  }
  return v22;
}
