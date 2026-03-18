/*
 * XREFs of SfnINOUTLPMEASUREITEMSTRUCT @ 0x1C0147CD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall SfnINOUTLPMEASUREITEMSTRUCT(
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
  __int64 v21; // rdx
  _OWORD *v23; // rcx
  __int128 v24; // xmm1
  _DWORD v25[6]; // [rsp+30h] [rbp-108h] BYREF
  unsigned __int64 v26; // [rsp+48h] [rbp-F0h] BYREF
  __int64 v27; // [rsp+58h] [rbp-E0h]
  __int128 v28; // [rsp+60h] [rbp-D8h]
  __int64 v29; // [rsp+70h] [rbp-C8h]
  _QWORD v30[3]; // [rsp+98h] [rbp-A0h] BYREF
  _QWORD v31[10]; // [rsp+B0h] [rbp-88h] BYREF

  v27 = 0LL;
  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v12 = 0LL;
  memset(v31, 0, 0x48uLL);
  v31[0] = v12;
  LODWORD(v31[1]) = a2 & 0x1FFFF;
  v31[2] = a3;
  *(_DWORD *)(a4 + 20) = 0;
  *(_OWORD *)&v31[3] = *(_OWORD *)a4;
  *(_OWORD *)&v31[5] = *(_OWORD *)(a4 + 16);
  v31[7] = a5;
  v31[8] = a6;
  v30[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v30;
  v30[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v13 = *(_QWORD *)(gptiCurrent + 432LL);
  v28 = *(_OWORD *)(v13 + 64);
  v29 = *(_QWORD *)(v13 + 80);
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
  EtwTraceBeginCallback(16LL);
  v16 = KeUserModeCallback(16LL, v31, 72LL, &v26, v25);
  EtwTraceEndCallback(16LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v18, v17);
  v19 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v19 + 64) = v28;
  *(_QWORD *)(v19 + 80) = v29;
  if ( v16 < 0 || v25[0] != 24 )
    return 0LL;
  v20 = (__int64 *)v26;
  if ( v26 + 8 < v26 || v26 + 8 > W32UserProbeAddress )
    v20 = (__int64 *)W32UserProbeAddress;
  v21 = *v20;
  v27 = *v20;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v23 = *(_OWORD **)(v26 + 16);
    if ( v23 + 2 < v23 || (unsigned __int64)(v23 + 2) > W32UserProbeAddress )
      v23 = (_OWORD *)W32UserProbeAddress;
    v24 = v23[1];
    *(_OWORD *)a4 = *v23;
    *(_OWORD *)(a4 + 16) = v24;
  }
  return v21;
}
