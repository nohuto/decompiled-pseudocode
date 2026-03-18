/*
 * XREFs of SfnINLPUAHDRAWMENUITEM @ 0x1C0116100
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     _ServerFixupMenuDC @ 0x1C01163C0 (_ServerFixupMenuDC.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall SfnINLPUAHDRAWMENUITEM(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 v11; // rsi
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 *v22; // rcx
  __int64 v23; // rbx
  _DWORD v26[7]; // [rsp+34h] [rbp-174h] BYREF
  unsigned __int64 v27; // [rsp+50h] [rbp-158h] BYREF
  __int64 v28; // [rsp+58h] [rbp-150h]
  __int128 v29; // [rsp+60h] [rbp-148h]
  __int64 v30; // [rsp+70h] [rbp-138h]
  _QWORD v31[4]; // [rsp+90h] [rbp-118h] BYREF
  _QWORD v32[24]; // [rsp+B0h] [rbp-F8h] BYREF

  v28 = 0LL;
  if ( a1 )
    v11 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v11 = 0LL;
  memset(v32, 0, 0xB8uLL);
  v12 = 0LL;
  v13 = ServerFixupMenuDC(*(HDC *)(a4 + 32));
  v14 = v13;
  if ( v13 )
  {
    v12 = *(_QWORD *)(a4 + 32);
    *(_QWORD *)(a4 + 32) = v13;
    *(_QWORD *)(a4 + 72) = v13;
  }
  v32[0] = v11;
  LODWORD(v32[1]) = a2;
  v32[2] = a3;
  *(_DWORD *)(a4 + 20) = 0;
  *(_DWORD *)(a4 + 84) = 0;
  *(_OWORD *)&v32[3] = *(_OWORD *)a4;
  *(_OWORD *)&v32[5] = *(_OWORD *)(a4 + 16);
  *(_OWORD *)&v32[7] = *(_OWORD *)(a4 + 32);
  *(_OWORD *)&v32[9] = *(_OWORD *)(a4 + 48);
  *(_OWORD *)&v32[11] = *(_OWORD *)(a4 + 64);
  *(_OWORD *)&v32[13] = *(_OWORD *)(a4 + 80);
  *(_OWORD *)&v32[15] = *(_OWORD *)(a4 + 96);
  *(_OWORD *)&v32[17] = *(_OWORD *)(a4 + 112);
  *(_OWORD *)&v32[19] = *(_OWORD *)(a4 + 128);
  v32[21] = a5;
  v32[22] = a6;
  v31[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v31;
  v31[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v15 = *(_QWORD *)(gptiCurrent + 432LL);
  v29 = *(_OWORD *)(v15 + 64);
  v30 = *(_QWORD *)(v15 + 80);
  *(_QWORD *)(v15 + 72) = v11;
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
  if ( gdwInAtomicOperation )
  {
    v17 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v17, gdwInAtomicOperation);
  EtwTraceBeginCallback(107LL);
  v18 = KeUserModeCallback(107LL, v32, 184LL, &v27, v26);
  EtwTraceEndCallback(107LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v20, v19);
  v21 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v21 + 64) = v29;
  *(_QWORD *)(v21 + 80) = v30;
  if ( v18 < 0 || v26[0] != 24 )
    return 0LL;
  v22 = (__int64 *)v27;
  if ( v27 + 8 < v27 || v27 + 8 > W32UserProbeAddress )
    v22 = (__int64 *)W32UserProbeAddress;
  v23 = *v22;
  v28 = *v22;
  if ( v14 )
  {
    _ReleaseDC(v14);
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
    {
      *(_QWORD *)(a4 + 32) = v12;
      *(_QWORD *)(a4 + 72) = v12;
    }
  }
  return v23;
}
