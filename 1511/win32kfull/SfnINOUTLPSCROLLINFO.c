/*
 * XREFs of SfnINOUTLPSCROLLINFO @ 0x1C00F5EC0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     _W32ExceptionHandler @ 0x1C02D94EC (_W32ExceptionHandler.c)
 */

__int64 __fastcall SfnINOUTLPSCROLLINFO(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 v12; // rdi
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
  __int64 v24; // xmm1_8
  int v25; // eax
  int v27; // [rsp+30h] [rbp-E8h] BYREF
  unsigned __int64 v28; // [rsp+38h] [rbp-E0h] BYREF
  __int64 v29; // [rsp+40h] [rbp-D8h]
  __int128 v30; // [rsp+50h] [rbp-C8h]
  __int64 v31; // [rsp+60h] [rbp-B8h]
  _QWORD v32[5]; // [rsp+68h] [rbp-B0h] BYREF
  _QWORD v33[10]; // [rsp+90h] [rbp-88h] BYREF

  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v12 = 0LL;
  memset(v33, 0, 0x48uLL);
  v33[0] = v12;
  LODWORD(v33[1]) = a2;
  v33[2] = a3;
  *(_OWORD *)&v33[3] = *(_OWORD *)a4;
  v33[5] = *(_QWORD *)(a4 + 16);
  LODWORD(v33[6]) = *(_DWORD *)(a4 + 24);
  v33[7] = a5;
  v33[8] = a6;
  v32[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v32;
  v32[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v14 = *(_QWORD *)(gptiCurrent + 432LL);
  v30 = *(_OWORD *)(v14 + 64);
  v29 = *(_QWORD *)(v14 + 80);
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
  EtwTraceBeginCallback(19LL);
  v17 = KeUserModeCallback(19LL, v33, 72LL, &v28, &v27);
  EtwTraceEndCallback(19LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v19, v18);
  v20 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v20 + 64) = v30;
  *(_QWORD *)(v20 + 80) = v29;
  if ( v17 < 0 || v27 != 24 )
    return 0LL;
  v21 = (__int64 *)v28;
  if ( v28 + 8 < v28 || v28 + 8 > W32UserProbeAddress )
    v21 = (__int64 *)W32UserProbeAddress;
  v22 = *v21;
  v31 = *v21;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v23 = *(_QWORD *)(v28 + 16);
    if ( v23 + 28 < v23 || v23 + 28 > W32UserProbeAddress )
      v23 = W32UserProbeAddress;
    v24 = *(_QWORD *)(v23 + 16);
    v25 = *(_DWORD *)(v23 + 24);
    *(_OWORD *)a4 = *(_OWORD *)v23;
    *(_QWORD *)(a4 + 16) = v24;
    *(_DWORD *)(a4 + 24) = v25;
  }
  return v22;
}
