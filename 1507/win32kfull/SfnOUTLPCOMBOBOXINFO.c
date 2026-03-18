/*
 * XREFs of SfnOUTLPCOMBOBOXINFO @ 0x1C00DEF40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     _W32ExceptionHandler @ 0x1C02D8144 (_W32ExceptionHandler.c)
 */

__int64 __fastcall SfnOUTLPCOMBOBOXINFO(
        __int64 *a1,
        int a2,
        __int64 a3,
        _OWORD *a4,
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
  _OWORD *v23; // rcx
  __int128 v24; // xmm3
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  int v28; // [rsp+30h] [rbp-108h] BYREF
  unsigned __int64 v29; // [rsp+38h] [rbp-100h] BYREF
  __int64 v30; // [rsp+40h] [rbp-F8h]
  __int128 v31; // [rsp+50h] [rbp-E8h]
  __int64 v32; // [rsp+60h] [rbp-D8h]
  _QWORD v33[5]; // [rsp+68h] [rbp-D0h] BYREF
  _QWORD v34[14]; // [rsp+90h] [rbp-A8h] BYREF

  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 432LL);
  else
    v12 = 0LL;
  memset(v34, 0, 0x68uLL);
  v34[0] = v12;
  LODWORD(v34[1]) = a2;
  v34[2] = a3;
  *(_OWORD *)&v34[3] = *a4;
  *(_OWORD *)&v34[5] = a4[1];
  *(_OWORD *)&v34[7] = a4[2];
  *(_OWORD *)&v34[9] = a4[3];
  v34[11] = a5;
  v34[12] = a6;
  v33[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v33;
  v33[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v14 = *(_QWORD *)(gptiCurrent + 440LL);
  v31 = *(_OWORD *)(v14 + 64);
  v30 = *(_QWORD *)(v14 + 80);
  *(_QWORD *)(v14 + 72) = v12;
  if ( a1 )
    v15 = *a1;
  else
    v15 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 64LL) = v15;
  if ( a1 )
    v16 = a1[33];
  else
    v16 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 80LL) = v16;
  UserSessionSwitchLeaveCrit(v16, v13);
  EtwTraceBeginCallback(103LL);
  v17 = KeUserModeCallback(103LL, v34, 104LL, &v29, &v28);
  EtwTraceEndCallback(103LL);
  EnterCrit(1LL);
  ThreadUnlock1(v19, v18);
  v20 = *(_QWORD *)(gptiCurrent + 440LL);
  *(_OWORD *)(v20 + 64) = v31;
  *(_QWORD *)(v20 + 80) = v30;
  if ( v17 < 0 || v28 != 24 )
    return 0LL;
  v21 = (__int64 *)v29;
  if ( v29 + 8 < v29 || v29 + 8 > W32UserProbeAddress )
    v21 = (__int64 *)W32UserProbeAddress;
  v22 = *v21;
  v32 = *v21;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v23 = *(_OWORD **)(v29 + 16);
    if ( v23 + 4 < v23 || (unsigned __int64)(v23 + 4) > W32UserProbeAddress )
      v23 = (_OWORD *)W32UserProbeAddress;
    v24 = v23[1];
    v25 = v23[2];
    v26 = v23[3];
    *a4 = *v23;
    a4[1] = v24;
    a4[2] = v25;
    a4[3] = v26;
  }
  return v22;
}
