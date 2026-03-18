/*
 * XREFs of SfnINOUTLPSCROLLINFO @ 0x1C01164F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
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
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 *v20; // rcx
  __int64 v21; // r8
  unsigned __int64 v23; // rcx
  __int64 v24; // xmm1_8
  int v25; // eax
  _DWORD v26[6]; // [rsp+30h] [rbp-108h] BYREF
  unsigned __int64 v27; // [rsp+48h] [rbp-F0h] BYREF
  __int64 v28; // [rsp+58h] [rbp-E0h]
  __int128 v29; // [rsp+60h] [rbp-D8h]
  __int64 v30; // [rsp+70h] [rbp-C8h]
  _QWORD v31[3]; // [rsp+98h] [rbp-A0h] BYREF
  _QWORD v32[10]; // [rsp+B0h] [rbp-88h] BYREF

  v28 = 0LL;
  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v12 = 0LL;
  memset(v32, 0, 0x48uLL);
  v32[0] = v12;
  LODWORD(v32[1]) = a2;
  v32[2] = a3;
  *(_OWORD *)&v32[3] = *(_OWORD *)a4;
  v32[5] = *(_QWORD *)(a4 + 16);
  LODWORD(v32[6]) = *(_DWORD *)(a4 + 24);
  v32[7] = a5;
  v32[8] = a6;
  v31[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v31;
  v31[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v13 = *(_QWORD *)(gptiCurrent + 432LL);
  v29 = *(_OWORD *)(v13 + 64);
  v30 = *(_QWORD *)(v13 + 80);
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
  EtwTraceBeginCallback(19LL);
  v16 = KeUserModeCallback(19LL, v32, 72LL, &v27, v26);
  EtwTraceEndCallback(19LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v18, v17);
  v19 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v19 + 64) = v29;
  *(_QWORD *)(v19 + 80) = v30;
  if ( v16 < 0 || v26[0] != 24 )
    return 0LL;
  v20 = (__int64 *)v27;
  if ( v27 + 8 < v27 || v27 + 8 > W32UserProbeAddress )
    v20 = (__int64 *)W32UserProbeAddress;
  v21 = *v20;
  v28 = *v20;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v23 = *(_QWORD *)(v27 + 16);
    if ( v23 + 28 < v23 || v23 + 28 > W32UserProbeAddress )
      v23 = W32UserProbeAddress;
    v24 = *(_QWORD *)(v23 + 16);
    v25 = *(_DWORD *)(v23 + 24);
    *(_OWORD *)a4 = *(_OWORD *)v23;
    *(_QWORD *)(a4 + 16) = v24;
    *(_DWORD *)(a4 + 24) = v25;
  }
  return v21;
}
