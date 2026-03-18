/*
 * XREFs of SfnOUTLPSCROLLBARINFO @ 0x1C020A7A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
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
  unsigned __int64 v22; // rcx
  __int128 v23; // xmm3
  __int128 v24; // xmm0
  __int64 v25; // xmm1_8
  int v26; // eax
  _DWORD v28[6]; // [rsp+30h] [rbp-128h] BYREF
  unsigned __int64 v29; // [rsp+48h] [rbp-110h] BYREF
  __int64 v30; // [rsp+58h] [rbp-100h]
  __int128 v31; // [rsp+60h] [rbp-F8h]
  __int64 v32; // [rsp+70h] [rbp-E8h]
  _QWORD v33[3]; // [rsp+98h] [rbp-C0h] BYREF
  _QWORD v34[14]; // [rsp+B0h] [rbp-A8h] BYREF

  v30 = 0LL;
  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v12 = 0LL;
  memset(v34, 0, 0x68uLL);
  v34[0] = v12;
  LODWORD(v34[1]) = a2;
  v34[2] = a3;
  *(_OWORD *)&v34[3] = *(_OWORD *)a4;
  *(_OWORD *)&v34[5] = *(_OWORD *)(a4 + 16);
  *(_OWORD *)&v34[7] = *(_OWORD *)(a4 + 32);
  v34[9] = *(_QWORD *)(a4 + 48);
  LODWORD(v34[10]) = *(_DWORD *)(a4 + 56);
  v34[11] = a5;
  v34[12] = a6;
  v33[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v33;
  v33[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v13 = *(_QWORD *)(gptiCurrent + 432LL);
  v31 = *(_OWORD *)(v13 + 64);
  v32 = *(_QWORD *)(v13 + 80);
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
  EtwTraceBeginCallback(105LL);
  v16 = KeUserModeCallback(105LL, v34, 104LL, &v29, v28);
  EtwTraceEndCallback(105LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v18, v17);
  v19 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v19 + 64) = v31;
  *(_QWORD *)(v19 + 80) = v32;
  if ( v16 < 0 || v28[0] != 24 )
    return 0LL;
  v20 = (__int64 *)v29;
  if ( v29 + 8 < v29 || v29 + 8 > W32UserProbeAddress )
    v20 = (__int64 *)W32UserProbeAddress;
  v21 = *v20;
  v30 = *v20;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v22 = *(_QWORD *)(v29 + 16);
    if ( v22 + 60 < v22 || v22 + 60 > W32UserProbeAddress )
      v22 = W32UserProbeAddress;
    v23 = *(_OWORD *)(v22 + 16);
    v24 = *(_OWORD *)(v22 + 32);
    v25 = *(_QWORD *)(v22 + 48);
    v26 = *(_DWORD *)(v22 + 56);
    *(_OWORD *)a4 = *(_OWORD *)v22;
    *(_OWORD *)(a4 + 16) = v23;
    *(_OWORD *)(a4 + 32) = v24;
    *(_QWORD *)(a4 + 48) = v25;
    *(_DWORD *)(a4 + 56) = v26;
  }
  return v21;
}
