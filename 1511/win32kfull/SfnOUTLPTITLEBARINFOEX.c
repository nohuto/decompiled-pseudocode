/*
 * XREFs of SfnOUTLPTITLEBARINFOEX @ 0x1C00FCDB0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     _W32ExceptionHandler @ 0x1C02D94EC (_W32ExceptionHandler.c)
 */

__int64 __fastcall SfnOUTLPTITLEBARINFOEX(
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
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 *v20; // rcx
  __int64 v21; // r8
  unsigned __int64 v22; // rdx
  int v24; // [rsp+30h] [rbp-1E8h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-1E0h] BYREF
  __int64 v26; // [rsp+40h] [rbp-1D8h]
  __int128 v27; // [rsp+50h] [rbp-1C8h]
  _QWORD v28[5]; // [rsp+60h] [rbp-1B8h] BYREF
  __int128 v29; // [rsp+88h] [rbp-190h]
  __int128 v30; // [rsp+98h] [rbp-180h]
  __int128 v31; // [rsp+A8h] [rbp-170h]
  __int128 v32; // [rsp+B8h] [rbp-160h]
  __int128 v33; // [rsp+C8h] [rbp-150h]
  __int128 v34; // [rsp+D8h] [rbp-140h]
  __int128 v35; // [rsp+E8h] [rbp-130h]
  __int128 v36; // [rsp+F8h] [rbp-120h]
  __int64 v37; // [rsp+108h] [rbp-110h]
  int v38; // [rsp+110h] [rbp-108h]
  _QWORD v39[24]; // [rsp+120h] [rbp-F8h] BYREF

  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v12 = 0LL;
  memset(v39, 0, 0xB8uLL);
  v39[0] = v12;
  LODWORD(v39[1]) = a2;
  v39[2] = a3;
  *(_OWORD *)&v39[3] = *(_OWORD *)a4;
  *(_OWORD *)&v39[5] = *(_OWORD *)(a4 + 16);
  *(_OWORD *)&v39[7] = *(_OWORD *)(a4 + 32);
  *(_OWORD *)&v39[9] = *(_OWORD *)(a4 + 48);
  *(_OWORD *)&v39[11] = *(_OWORD *)(a4 + 64);
  *(_OWORD *)&v39[13] = *(_OWORD *)(a4 + 80);
  *(_OWORD *)&v39[15] = *(_OWORD *)(a4 + 96);
  *(_OWORD *)&v39[17] = *(_OWORD *)(a4 + 112);
  v39[19] = *(_QWORD *)(a4 + 128);
  LODWORD(v39[20]) = *(_DWORD *)(a4 + 136);
  v39[21] = a5;
  v39[22] = a6;
  v28[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v28;
  v28[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v13 = *(_QWORD *)(gptiCurrent + 432LL);
  v27 = *(_OWORD *)(v13 + 64);
  v26 = *(_QWORD *)(v13 + 80);
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
  UserSessionSwitchLeaveCrit(v15, &v39[3]);
  EtwTraceBeginCallback(110LL);
  v16 = KeUserModeCallback(110LL, v39, 184LL, &v25, &v24);
  EtwTraceEndCallback(110LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v18, v17);
  v19 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v19 + 64) = v27;
  *(_QWORD *)(v19 + 80) = v26;
  if ( v16 < 0 || v24 != 24 )
    return 0LL;
  v20 = (__int64 *)v25;
  if ( v25 + 8 < v25 || v25 + 8 > W32UserProbeAddress )
    v20 = (__int64 *)W32UserProbeAddress;
  v21 = *v20;
  v28[4] = *v20;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v22 = *(_QWORD *)(v25 + 16);
    if ( v22 + 140 < v22 || v22 + 140 > W32UserProbeAddress )
      v22 = W32UserProbeAddress;
    v29 = *(_OWORD *)v22;
    v30 = *(_OWORD *)(v22 + 16);
    v31 = *(_OWORD *)(v22 + 32);
    v32 = *(_OWORD *)(v22 + 48);
    v33 = *(_OWORD *)(v22 + 64);
    v34 = *(_OWORD *)(v22 + 80);
    v35 = *(_OWORD *)(v22 + 96);
    v36 = *(_OWORD *)(v22 + 112);
    v37 = *(_QWORD *)(v22 + 128);
    v38 = *(_DWORD *)(v22 + 136);
    *(_OWORD *)a4 = v29;
    *(_OWORD *)(a4 + 16) = v30;
    *(_OWORD *)(a4 + 32) = v31;
    *(_OWORD *)(a4 + 48) = v32;
    *(_OWORD *)(a4 + 64) = v33;
    *(_OWORD *)(a4 + 80) = v34;
    *(_OWORD *)(a4 + 96) = v35;
    *(_OWORD *)(a4 + 112) = v36;
    *(_QWORD *)(a4 + 128) = v37;
    *(_DWORD *)(a4 + 136) = v38;
  }
  return v21;
}
