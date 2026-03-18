/*
 * XREFs of SfnINLPUAHNCPAINTMENUPOPUP @ 0x1C014D020
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     _ServerFixupMenuDC @ 0x1C01163C0 (_ServerFixupMenuDC.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall SfnINLPUAHNCPAINTMENUPOPUP(
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
  HDC v13; // r15
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 *v21; // rcx
  __int64 v22; // rbx
  __int128 v24; // [rsp+50h] [rbp-C8h]
  __int64 v25; // [rsp+60h] [rbp-B8h]
  _QWORD v26[11]; // [rsp+70h] [rbp-A8h] BYREF
  _QWORD v27[10]; // [rsp+C8h] [rbp-50h] BYREF
  __int64 v28; // [rsp+120h] [rbp+8h]
  int v29; // [rsp+128h] [rbp+10h] BYREF
  unsigned __int64 v30; // [rsp+130h] [rbp+18h] BYREF

  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v12 = 0LL;
  memset(v26, 0, 0x40uLL);
  v28 = 0LL;
  v13 = ServerFixupMenuDC(*(HDC *)(a4 + 8), *(_QWORD *)a4, 0, 0);
  if ( v13 )
  {
    v28 = *(_QWORD *)(a4 + 8);
    *(_QWORD *)(a4 + 8) = v13;
  }
  v26[0] = v12;
  LODWORD(v26[1]) = a2 & 0x1FFFF;
  v26[2] = a3;
  *(_DWORD *)(a4 + 20) = 0;
  *(_OWORD *)&v26[3] = *(_OWORD *)a4;
  v26[5] = *(_QWORD *)(a4 + 16);
  v26[6] = a5;
  v26[7] = a6;
  v27[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v27;
  v27[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v14 = *(_QWORD *)(gptiCurrent + 432LL);
  v24 = *(_OWORD *)(v14 + 64);
  v25 = *(_QWORD *)(v14 + 80);
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
  EtwTraceBeginCallback(110LL);
  v17 = KeUserModeCallback(110LL, v26, 64LL, &v30, &v29);
  EtwTraceEndCallback(110LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v19, v18);
  v20 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v20 + 64) = v24;
  *(_QWORD *)(v20 + 80) = v25;
  if ( v17 < 0 || v29 != 24 )
    return 0LL;
  v21 = (__int64 *)v30;
  if ( v30 + 8 < v30 || v30 + 8 > W32UserProbeAddress )
    v21 = (__int64 *)W32UserProbeAddress;
  v22 = *v21;
  if ( v13 )
  {
    _ReleaseDC(v13);
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
      *(_QWORD *)(a4 + 8) = v28;
  }
  return v22;
}
