/*
 * XREFs of SfnOUTLPTITLEBARINFOEX @ 0x1C011FEE0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
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
  unsigned __int64 v23; // rdx
  _DWORD v24[6]; // [rsp+30h] [rbp-208h] BYREF
  unsigned __int64 v25; // [rsp+48h] [rbp-1F0h] BYREF
  __int64 v26; // [rsp+58h] [rbp-1E0h]
  __int128 v27; // [rsp+60h] [rbp-1D8h]
  __int64 v28; // [rsp+70h] [rbp-1C8h]
  _QWORD v29[3]; // [rsp+98h] [rbp-1A0h] BYREF
  __int128 v30; // [rsp+B0h] [rbp-188h]
  __int128 v31; // [rsp+C0h] [rbp-178h]
  __int128 v32; // [rsp+D0h] [rbp-168h]
  __int128 v33; // [rsp+E0h] [rbp-158h]
  __int128 v34; // [rsp+F0h] [rbp-148h]
  __int128 v35; // [rsp+100h] [rbp-138h]
  __int128 v36; // [rsp+110h] [rbp-128h]
  __int128 v37; // [rsp+120h] [rbp-118h]
  __int64 v38; // [rsp+130h] [rbp-108h]
  int v39; // [rsp+138h] [rbp-100h]
  _QWORD v40[24]; // [rsp+140h] [rbp-F8h] BYREF

  v26 = 0LL;
  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v12 = 0LL;
  memset(v40, 0, 0xB8uLL);
  v40[0] = v12;
  LODWORD(v40[1]) = a2;
  v40[2] = a3;
  *(_OWORD *)&v40[3] = *(_OWORD *)a4;
  *(_OWORD *)&v40[5] = *(_OWORD *)(a4 + 16);
  *(_OWORD *)&v40[7] = *(_OWORD *)(a4 + 32);
  *(_OWORD *)&v40[9] = *(_OWORD *)(a4 + 48);
  *(_OWORD *)&v40[11] = *(_OWORD *)(a4 + 64);
  *(_OWORD *)&v40[13] = *(_OWORD *)(a4 + 80);
  *(_OWORD *)&v40[15] = *(_OWORD *)(a4 + 96);
  *(_OWORD *)&v40[17] = *(_OWORD *)(a4 + 112);
  v40[19] = *(_QWORD *)(a4 + 128);
  LODWORD(v40[20]) = *(_DWORD *)(a4 + 136);
  v40[21] = a5;
  v40[22] = a6;
  v29[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v29;
  v29[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v13 = *(_QWORD *)(gptiCurrent + 432LL);
  v27 = *(_OWORD *)(v13 + 64);
  v28 = *(_QWORD *)(v13 + 80);
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
  EtwTraceBeginCallback(111LL);
  v16 = KeUserModeCallback(111LL, v40, 184LL, &v25, v24);
  EtwTraceEndCallback(111LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v18, v17);
  v19 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v19 + 64) = v27;
  *(_QWORD *)(v19 + 80) = v28;
  if ( v16 < 0 || v24[0] != 24 )
    return 0LL;
  v20 = (__int64 *)v25;
  if ( v25 + 8 < v25 || v25 + 8 > W32UserProbeAddress )
    v20 = (__int64 *)W32UserProbeAddress;
  v21 = *v20;
  v26 = *v20;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v23 = *(_QWORD *)(v25 + 16);
    if ( v23 + 140 < v23 || v23 + 140 > W32UserProbeAddress )
      v23 = W32UserProbeAddress;
    v30 = *(_OWORD *)v23;
    v31 = *(_OWORD *)(v23 + 16);
    v32 = *(_OWORD *)(v23 + 32);
    v33 = *(_OWORD *)(v23 + 48);
    v34 = *(_OWORD *)(v23 + 64);
    v35 = *(_OWORD *)(v23 + 80);
    v36 = *(_OWORD *)(v23 + 96);
    v37 = *(_OWORD *)(v23 + 112);
    v38 = *(_QWORD *)(v23 + 128);
    v39 = *(_DWORD *)(v23 + 136);
    *(_OWORD *)a4 = v30;
    *(_OWORD *)(a4 + 16) = v31;
    *(_OWORD *)(a4 + 32) = v32;
    *(_OWORD *)(a4 + 48) = v33;
    *(_OWORD *)(a4 + 64) = v34;
    *(_OWORD *)(a4 + 80) = v35;
    *(_OWORD *)(a4 + 96) = v36;
    *(_OWORD *)(a4 + 112) = v37;
    *(_QWORD *)(a4 + 128) = v38;
    *(_DWORD *)(a4 + 136) = v39;
  }
  return v21;
}
