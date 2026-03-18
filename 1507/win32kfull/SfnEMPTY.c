/*
 * XREFs of SfnEMPTY @ 0x1C00E54A0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C015D4C0 (memset.c)
 *     _W32ExceptionHandler @ 0x1C02D8144 (_W32ExceptionHandler.c)
 */

__int64 __fastcall SfnEMPTY(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, unsigned __int64 a6)
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
  __int128 v21; // [rsp+40h] [rbp-78h]
  _QWORD v22[3]; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v23[7]; // [rsp+68h] [rbp-50h] BYREF
  int v24; // [rsp+C8h] [rbp+10h] BYREF

  if ( a1 )
    v10 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 432LL);
  else
    v10 = 0LL;
  memset(v23, 0, 0x30uLL);
  v23[0] = v10;
  LODWORD(v23[1]) = a2;
  v23[2] = a3;
  v23[3] = a4;
  v23[4] = a5;
  v23[5] = a6;
  v22[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v22;
  v22[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v12 = *(_QWORD *)(gptiCurrent + 440LL);
  v21 = *(_OWORD *)(v12 + 64);
  a5 = *(_QWORD *)(v12 + 80);
  *(_QWORD *)(v12 + 72) = v10;
  if ( a1 )
    v13 = *a1;
  else
    v13 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 64LL) = v13;
  if ( a1 )
    v14 = a1[33];
  else
    v14 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 80LL) = v14;
  UserSessionSwitchLeaveCrit(v14, v11);
  EtwTraceBeginCallback(116LL);
  v15 = KeUserModeCallback(116LL, v23, 48LL, &a6, &v24);
  EtwTraceEndCallback(116LL);
  EnterCrit(1LL);
  ThreadUnlock1(v17, v16);
  v18 = *(_QWORD *)(gptiCurrent + 440LL);
  *(_OWORD *)(v18 + 64) = v21;
  *(_QWORD *)(v18 + 80) = a5;
  if ( v15 < 0 || v24 != 24 )
    return 0LL;
  v19 = a6;
  if ( a6 + 8 < a6 || a6 + 8 > W32UserProbeAddress )
    v19 = W32UserProbeAddress;
  return *(_QWORD *)v19;
}
