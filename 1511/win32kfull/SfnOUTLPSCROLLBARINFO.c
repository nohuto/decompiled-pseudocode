/*
 * XREFs of SfnOUTLPSCROLLBARINFO @ 0x1C0147750
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     _W32ExceptionHandler @ 0x1C02D94EC (_W32ExceptionHandler.c)
 */

__int64 __fastcall SfnOUTLPSCROLLBARINFO(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
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
  __int64 v22; // r8
  unsigned __int64 v23; // rcx
  __int128 v24; // xmm3
  __int128 v25; // xmm0
  __int64 v26; // xmm1_8
  int v27; // eax
  int v29; // [rsp+30h] [rbp-108h] BYREF
  unsigned __int64 v30; // [rsp+38h] [rbp-100h] BYREF
  __int64 v31; // [rsp+40h] [rbp-F8h]
  __int128 v32; // [rsp+50h] [rbp-E8h]
  __int64 v33; // [rsp+60h] [rbp-D8h]
  _QWORD v34[5]; // [rsp+68h] [rbp-D0h] BYREF
  _QWORD v35[14]; // [rsp+90h] [rbp-A8h] BYREF

  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v12 = 0LL;
  memset(v35, 0, 0x68uLL);
  v35[0] = v12;
  LODWORD(v35[1]) = a2;
  v35[2] = a3;
  *(_OWORD *)&v35[3] = *(_OWORD *)a4;
  *(_OWORD *)&v35[5] = *(_OWORD *)(a4 + 16);
  *(_OWORD *)&v35[7] = *(_OWORD *)(a4 + 32);
  v35[9] = *(_QWORD *)(a4 + 48);
  LODWORD(v35[10]) = *(_DWORD *)(a4 + 56);
  v35[11] = a5;
  v35[12] = a6;
  v34[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v34;
  v34[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v14 = *(_QWORD *)(gptiCurrent + 432LL);
  v32 = *(_OWORD *)(v14 + 64);
  v31 = *(_QWORD *)(v14 + 80);
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
  EtwTraceBeginCallback(104LL);
  v17 = KeUserModeCallback(104LL, v35, 104LL, &v30, &v29);
  EtwTraceEndCallback(104LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v19, v18);
  v20 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v20 + 64) = v32;
  *(_QWORD *)(v20 + 80) = v31;
  if ( v17 < 0 || v29 != 24 )
    return 0LL;
  v21 = (__int64 *)v30;
  if ( v30 + 8 < v30 || v30 + 8 > W32UserProbeAddress )
    v21 = (__int64 *)W32UserProbeAddress;
  v22 = *v21;
  v33 = *v21;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v23 = *(_QWORD *)(v30 + 16);
    if ( v23 + 60 < v23 || v23 + 60 > W32UserProbeAddress )
      v23 = W32UserProbeAddress;
    v24 = *(_OWORD *)(v23 + 16);
    v25 = *(_OWORD *)(v23 + 32);
    v26 = *(_QWORD *)(v23 + 48);
    v27 = *(_DWORD *)(v23 + 56);
    *(_OWORD *)a4 = *(_OWORD *)v23;
    *(_OWORD *)(a4 + 16) = v24;
    *(_OWORD *)(a4 + 32) = v25;
    *(_QWORD *)(a4 + 48) = v26;
    *(_DWORD *)(a4 + 56) = v27;
  }
  return v22;
}
