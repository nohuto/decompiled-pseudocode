/*
 * XREFs of SfnINOUTLPUAHMEASUREMENUITEM @ 0x1C00ECE50
 * Callers:
 *     <none>
 * Callees:
 *     _ServerFixupMenuDC @ 0x1C00ED968 (_ServerFixupMenuDC.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     _W32ExceptionHandler @ 0x1C02D94EC (_W32ExceptionHandler.c)
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
  __int64 v13; // rdx
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 *v22; // rcx
  __int64 v23; // rsi
  _OWORD *v24; // rcx
  __int128 v25; // xmm3
  __int128 v26; // xmm4
  __int128 v27; // xmm5
  __int128 v28; // xmm6
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  int v32; // [rsp+30h] [rbp-168h] BYREF
  unsigned __int64 v33; // [rsp+38h] [rbp-160h] BYREF
  __int64 v34; // [rsp+40h] [rbp-158h]
  __int64 v35; // [rsp+48h] [rbp-150h]
  __int64 v36; // [rsp+50h] [rbp-148h]
  __int128 v37; // [rsp+58h] [rbp-140h]
  _QWORD v38[4]; // [rsp+70h] [rbp-128h] BYREF
  _QWORD v39[20]; // [rsp+90h] [rbp-108h] BYREF

  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v12 = 0LL;
  memset(v39, 0, 0x98uLL);
  v34 = 0LL;
  v14 = ServerFixupMenuDC(*(HDC *)(a4 + 40));
  if ( v14 )
  {
    v34 = *(_QWORD *)(a4 + 40);
    *(_QWORD *)(a4 + 40) = v14;
  }
  v39[0] = v12;
  LODWORD(v39[1]) = a2 & 0x1FFFF;
  v39[2] = a3;
  *(_DWORD *)(a4 + 20) = 0;
  *(_DWORD *)(a4 + 52) = 0;
  *(_OWORD *)&v39[3] = *(_OWORD *)a4;
  *(_OWORD *)&v39[5] = *(_OWORD *)(a4 + 16);
  *(_OWORD *)&v39[7] = *(_OWORD *)(a4 + 32);
  *(_OWORD *)&v39[9] = *(_OWORD *)(a4 + 48);
  *(_OWORD *)&v39[11] = *(_OWORD *)(a4 + 64);
  *(_OWORD *)&v39[13] = *(_OWORD *)(a4 + 80);
  *(_OWORD *)&v39[15] = *(_OWORD *)(a4 + 96);
  v39[17] = a5;
  v39[18] = a6;
  v38[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v38;
  v38[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v15 = *(_QWORD *)(gptiCurrent + 432LL);
  v37 = *(_OWORD *)(v15 + 64);
  v35 = *(_QWORD *)(v15 + 80);
  *(_QWORD *)(v15 + 72) = v12;
  if ( a1 )
    v16 = *a1;
  else
    v16 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v16;
  if ( a1 )
    v17 = a1[33];
  else
    v17 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v17;
  UserSessionSwitchLeaveCrit(v17, v13);
  EtwTraceBeginCallback(108LL);
  v18 = KeUserModeCallback(108LL, v39, 152LL, &v33, &v32);
  EtwTraceEndCallback(108LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v20, v19);
  v21 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v21 + 64) = v37;
  *(_QWORD *)(v21 + 80) = v35;
  if ( v18 < 0 || v32 != 24 )
    return 0LL;
  v22 = (__int64 *)v33;
  if ( v33 + 8 < v33 || v33 + 8 > W32UserProbeAddress )
    v22 = (__int64 *)W32UserProbeAddress;
  v23 = *v22;
  v36 = *v22;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v24 = *(_OWORD **)(v33 + 16);
    if ( v24 + 7 < v24 || (unsigned __int64)(v24 + 7) > W32UserProbeAddress )
      v24 = (_OWORD *)W32UserProbeAddress;
    v25 = v24[1];
    v26 = v24[2];
    v27 = v24[3];
    v28 = v24[4];
    v29 = v24[5];
    v30 = v24[6];
    *(_OWORD *)a4 = *v24;
    *(_OWORD *)(a4 + 16) = v25;
    *(_OWORD *)(a4 + 32) = v26;
    *(_OWORD *)(a4 + 48) = v27;
    *(_OWORD *)(a4 + 64) = v28;
    *(_OWORD *)(a4 + 80) = v29;
    *(_OWORD *)(a4 + 96) = v30;
  }
  if ( v14 )
  {
    _ReleaseDC(v14);
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
      *(_QWORD *)(a4 + 40) = v34;
  }
  return v23;
}
