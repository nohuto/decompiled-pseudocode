/*
 * XREFs of SfnSHELLWINDOWMANAGEMENTCALLOUT @ 0x1C020B750
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall SfnSHELLWINDOWMANAGEMENTCALLOUT(
        __int64 *a1,
        int a2,
        __int64 a3,
        _OWORD *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 *v20; // rcx
  __int64 v21; // r8
  _OWORD *v22; // rcx
  __int128 v23; // xmm3
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  _DWORD v27[6]; // [rsp+30h] [rbp-128h] BYREF
  unsigned __int64 v28; // [rsp+48h] [rbp-110h] BYREF
  __int64 v29; // [rsp+58h] [rbp-100h]
  __int128 v30; // [rsp+60h] [rbp-F8h]
  __int64 v31; // [rsp+70h] [rbp-E8h]
  _QWORD v32[3]; // [rsp+98h] [rbp-C0h] BYREF
  _QWORD v33[14]; // [rsp+B0h] [rbp-A8h] BYREF

  v29 = 0LL;
  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v12 = 0LL;
  memset(v33, 0, 0x68uLL);
  v33[0] = v12;
  LODWORD(v33[1]) = a2 & 0x1FFFF;
  v33[2] = a3;
  *(_OWORD *)&v33[3] = *a4;
  *(_OWORD *)&v33[5] = a4[1];
  *(_OWORD *)&v33[7] = a4[2];
  *(_OWORD *)&v33[9] = a4[3];
  v33[11] = a5;
  v33[12] = a6;
  v32[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v32;
  v32[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v13 = *(_QWORD *)(gptiCurrent + 432LL);
  v30 = *(_OWORD *)(v13 + 64);
  v31 = *(_QWORD *)(v13 + 80);
  *(_QWORD *)(v13 + 72) = v12;
  if ( a1 )
    v14 = *a1;
  else
    v14 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v14;
  if ( a1 )
    v15 = a1[33];
  else
    v15 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v15;
  if ( gdwInAtomicOperation )
  {
    v15 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v15, gdwInAtomicOperation);
  EtwTraceBeginCallback(53LL);
  v16 = KeUserModeCallback(53LL, v33, 104LL, &v28, v27);
  EtwTraceEndCallback(53LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v18, v17);
  v19 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v19 + 64) = v30;
  *(_QWORD *)(v19 + 80) = v31;
  if ( v16 < 0 || v27[0] != 24 )
    return 0LL;
  v20 = (__int64 *)v28;
  if ( v28 + 8 < v28 || v28 + 8 > W32UserProbeAddress )
    v20 = (__int64 *)W32UserProbeAddress;
  v21 = *v20;
  v29 = *v20;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v22 = *(_OWORD **)(v28 + 16);
    if ( v22 + 4 < v22 || (unsigned __int64)(v22 + 4) > W32UserProbeAddress )
      v22 = (_OWORD *)W32UserProbeAddress;
    v23 = v22[1];
    v24 = v22[2];
    v25 = v22[3];
    *a4 = *v22;
    a4[1] = v23;
    a4[2] = v24;
    a4[3] = v25;
  }
  return v21;
}
