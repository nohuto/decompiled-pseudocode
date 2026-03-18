/*
 * XREFs of SfnSHELLWINDOWMANAGEMENTNOTIFY @ 0x1C00FB1D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     _W32ExceptionHandler @ 0x1C02D94EC (_W32ExceptionHandler.c)
 */

__int64 __fastcall SfnSHELLWINDOWMANAGEMENTNOTIFY(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 *v19; // rcx
  __int64 result; // rax
  int v21; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v22; // [rsp+38h] [rbp-D0h]
  _QWORD v23[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v24; // [rsp+50h] [rbp-B8h]
  _QWORD v25[4]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v26[10]; // [rsp+80h] [rbp-88h] BYREF

  if ( a1 )
    v10 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v10 = 0LL;
  memset(v26, 0, sizeof(v26));
  v26[0] = v10;
  LODWORD(v26[1]) = a2 & 0x1FFFF;
  v26[2] = a3;
  *(_DWORD *)(a4 + 12) = 0;
  *(_OWORD *)&v26[3] = *(_OWORD *)a4;
  *(_OWORD *)&v26[5] = *(_OWORD *)(a4 + 16);
  v26[7] = *(_QWORD *)(a4 + 32);
  v26[8] = a5;
  v26[9] = a6;
  v25[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v25;
  v25[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v12 = *(_QWORD *)(gptiCurrent + 432LL);
  v24 = *(_OWORD *)(v12 + 64);
  v22 = *(_QWORD *)(v12 + 80);
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
  EtwTraceBeginCallback(54LL);
  v15 = KeUserModeCallback(54LL, v26, 80LL, v23, &v21);
  EtwTraceEndCallback(54LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v17, v16);
  v18 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v18 + 64) = v24;
  *(_QWORD *)(v18 + 80) = v22;
  if ( v15 < 0 || v21 != 24 )
    return 0LL;
  v19 = (__int64 *)v23[0];
  if ( (unsigned __int64)(v23[0] + 8LL) < v23[0] || (unsigned __int64)(v23[0] + 8LL) > W32UserProbeAddress )
    v19 = (__int64 *)W32UserProbeAddress;
  result = *v19;
  v23[1] = *v19;
  return result;
}
