/*
 * XREFs of SfnINOUTLPUAHMEASUREMENUITEM @ 0x1C0115B30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     _ServerFixupMenuDC @ 0x1C01163C0 (_ServerFixupMenuDC.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall SfnINOUTLPUAHMEASUREMENUITEM(
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
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 *v21; // rcx
  __int64 v22; // rsi
  _OWORD *v23; // rcx
  __int128 v24; // xmm3
  __int128 v25; // xmm4
  __int128 v26; // xmm5
  __int128 v27; // xmm6
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  _DWORD v31[6]; // [rsp+30h] [rbp-198h] BYREF
  unsigned __int64 v32; // [rsp+48h] [rbp-180h] BYREF
  __int64 v33; // [rsp+50h] [rbp-178h]
  __int64 v34; // [rsp+60h] [rbp-168h]
  __int128 v35; // [rsp+68h] [rbp-160h]
  __int64 v36; // [rsp+78h] [rbp-150h]
  _QWORD v37[4]; // [rsp+A0h] [rbp-128h] BYREF
  _QWORD v38[20]; // [rsp+C0h] [rbp-108h] BYREF

  v34 = 0LL;
  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v12 = 0LL;
  memset(v38, 0, 0x98uLL);
  v33 = 0LL;
  v13 = ServerFixupMenuDC(*(HDC *)(a4 + 40));
  if ( v13 )
  {
    v33 = *(_QWORD *)(a4 + 40);
    *(_QWORD *)(a4 + 40) = v13;
  }
  v38[0] = v12;
  LODWORD(v38[1]) = a2 & 0x1FFFF;
  v38[2] = a3;
  *(_DWORD *)(a4 + 20) = 0;
  *(_DWORD *)(a4 + 52) = 0;
  *(_OWORD *)&v38[3] = *(_OWORD *)a4;
  *(_OWORD *)&v38[5] = *(_OWORD *)(a4 + 16);
  *(_OWORD *)&v38[7] = *(_OWORD *)(a4 + 32);
  *(_OWORD *)&v38[9] = *(_OWORD *)(a4 + 48);
  *(_OWORD *)&v38[11] = *(_OWORD *)(a4 + 64);
  *(_OWORD *)&v38[13] = *(_OWORD *)(a4 + 80);
  *(_OWORD *)&v38[15] = *(_OWORD *)(a4 + 96);
  v38[17] = a5;
  v38[18] = a6;
  v37[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v37;
  v37[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v14 = *(_QWORD *)(gptiCurrent + 432LL);
  v35 = *(_OWORD *)(v14 + 64);
  v36 = *(_QWORD *)(v14 + 80);
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
  if ( gdwInAtomicOperation )
  {
    v16 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v16, gdwInAtomicOperation);
  EtwTraceBeginCallback(109LL);
  v17 = KeUserModeCallback(109LL, v38, 152LL, &v32, v31);
  EtwTraceEndCallback(109LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v19, v18);
  v20 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v20 + 64) = v35;
  *(_QWORD *)(v20 + 80) = v36;
  if ( v17 < 0 || v31[0] != 24 )
    return 0LL;
  v21 = (__int64 *)v32;
  if ( v32 + 8 < v32 || v32 + 8 > W32UserProbeAddress )
    v21 = (__int64 *)W32UserProbeAddress;
  v22 = *v21;
  v34 = *v21;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v23 = *(_OWORD **)(v32 + 16);
    if ( v23 + 7 < v23 || (unsigned __int64)(v23 + 7) > W32UserProbeAddress )
      v23 = (_OWORD *)W32UserProbeAddress;
    v24 = v23[1];
    v25 = v23[2];
    v26 = v23[3];
    v27 = v23[4];
    v28 = v23[5];
    v29 = v23[6];
    *(_OWORD *)a4 = *v23;
    *(_OWORD *)(a4 + 16) = v24;
    *(_OWORD *)(a4 + 32) = v25;
    *(_OWORD *)(a4 + 48) = v26;
    *(_OWORD *)(a4 + 64) = v27;
    *(_OWORD *)(a4 + 80) = v28;
    *(_OWORD *)(a4 + 96) = v29;
  }
  if ( v13 )
  {
    _ReleaseDC(v13);
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
      *(_QWORD *)(a4 + 40) = v33;
  }
  return v22;
}
