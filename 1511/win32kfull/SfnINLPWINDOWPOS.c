/*
 * XREFs of SfnINLPWINDOWPOS @ 0x1C00E0660
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0152CC0 (memset.c)
 *     _W32ExceptionHandler @ 0x1C02D94EC (_W32ExceptionHandler.c)
 */

__int64 __fastcall SfnINLPWINDOWPOS(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, unsigned __int64 a6)
{
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int128 v21; // [rsp+30h] [rbp-A8h]
  _QWORD v22[5]; // [rsp+48h] [rbp-90h] BYREF
  _QWORD v23[10]; // [rsp+70h] [rbp-68h] BYREF
  int v24; // [rsp+E8h] [rbp+10h] BYREF

  if ( a1 )
    v10 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v10 = 0LL;
  memset(v23, 0, sizeof(v23));
  v23[0] = v10;
  LODWORD(v23[1]) = a2;
  v23[2] = a3;
  *(_OWORD *)&v23[3] = *(_OWORD *)a4;
  *(_OWORD *)&v23[5] = *(_OWORD *)(a4 + 16);
  v23[7] = *(_QWORD *)(a4 + 32);
  v23[8] = a5;
  v23[9] = a6;
  v22[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v22;
  v22[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v12 = *(_QWORD *)(gptiCurrent + 432LL);
  v21 = *(_OWORD *)(v12 + 64);
  a5 = *(_QWORD *)(v12 + 80);
  *(_QWORD *)(v12 + 72) = v10;
  if ( a1 )
    v13 = *a1;
  else
    v13 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v13;
  if ( a1 )
    v14 = a1[33];
  else
    v14 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v14;
  UserSessionSwitchLeaveCrit(v14, v11);
  EtwTraceBeginCallback(17LL);
  v15 = KeUserModeCallback(17LL, v23, 80LL, &a6, &v24);
  EtwTraceEndCallback(17LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v17, v16);
  v18 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v18 + 64) = v21;
  *(_QWORD *)(v18 + 80) = a5;
  if ( v15 < 0 || v24 != 24 )
    return 0LL;
  v19 = a6;
  if ( a6 + 8 < a6 || a6 + 8 > W32UserProbeAddress )
    v19 = W32UserProbeAddress;
  return *(_QWORD *)v19;
}
