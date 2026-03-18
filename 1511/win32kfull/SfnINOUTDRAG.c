/*
 * XREFs of SfnINOUTDRAG @ 0x1C0210830
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0152CC0 (memset.c)
 *     _W32ExceptionHandler @ 0x1C02D94EC (_W32ExceptionHandler.c)
 */

__int64 __fastcall SfnINOUTDRAG(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
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
  _OWORD *v23; // rcx
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v27; // [rsp+38h] [rbp-C0h]
  _QWORD v28[4]; // [rsp+50h] [rbp-A8h] BYREF
  _QWORD v29[12]; // [rsp+70h] [rbp-88h] BYREF
  int v30; // [rsp+108h] [rbp+10h] BYREF

  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v12 = 0LL;
  memset(v29, 0, 0x58uLL);
  v29[0] = v12;
  LODWORD(v29[1]) = a2;
  v29[2] = a3;
  *(_DWORD *)(a4 + 20) = 0;
  *(_DWORD *)(a4 + 44) = 0;
  *(_OWORD *)&v29[5] = *(_OWORD *)a4;
  *(_OWORD *)&v29[7] = *(_OWORD *)(a4 + 16);
  *(_OWORD *)&v29[9] = *(_OWORD *)(a4 + 32);
  v29[3] = a5;
  v29[4] = a6;
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
  EtwTraceBeginCallback(5LL);
  v17 = KeUserModeCallback(5LL, v29, 88LL, &a5, &v30);
  EtwTraceEndCallback(5LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v19, v18);
  v20 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v20 + 64) = v27;
  *(_QWORD *)(v20 + 80) = a6;
  if ( v17 < 0 || v30 != 24 )
    return 0LL;
  v21 = (__int64 *)a5;
  if ( a5 + 8 < a5 || a5 + 8 > W32UserProbeAddress )
    v21 = (__int64 *)W32UserProbeAddress;
  v22 = *v21;
  v28[3] = *v21;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v23 = *(_OWORD **)(a5 + 16);
    if ( v23 + 3 < v23 || (unsigned __int64)(v23 + 3) > W32UserProbeAddress )
      v23 = (_OWORD *)W32UserProbeAddress;
    v24 = v23[1];
    v25 = v23[2];
    *(_OWORD *)a4 = *v23;
    *(_OWORD *)(a4 + 16) = v24;
    *(_OWORD *)(a4 + 32) = v25;
  }
  return v22;
}
