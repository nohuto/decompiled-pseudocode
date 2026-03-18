/*
 * XREFs of SfnINOUTDRAG @ 0x1C02086A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall SfnINOUTDRAG(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
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
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v26; // [rsp+50h] [rbp-D8h]
  __int64 v27; // [rsp+60h] [rbp-C8h]
  _QWORD v28[3]; // [rsp+88h] [rbp-A0h] BYREF
  _QWORD v29[12]; // [rsp+A0h] [rbp-88h] BYREF
  int v30; // [rsp+138h] [rbp+10h] BYREF

  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v12 = 0LL;
  memset(v29, 0, 0x58uLL);
  v29[0] = v12;
  LODWORD(v29[1]) = a2;
  v29[2] = a3;
  *(_DWORD *)(a4 + 20) = 0;
  *(_DWORD *)(a4 + 44) = 0;
  *(_OWORD *)&v29[5] = *(_OWORD *)a4;
  *(_OWORD *)&v29[7] = *(_OWORD *)(a4 + 16);
  *(_OWORD *)&v29[9] = *(_OWORD *)(a4 + 32);
  v29[3] = a5;
  v29[4] = a6;
  v28[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v28;
  v28[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v13 = *(_QWORD *)(gptiCurrent + 432LL);
  v26 = *(_OWORD *)(v13 + 64);
  v27 = *(_QWORD *)(v13 + 80);
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
  EtwTraceBeginCallback(5LL);
  v16 = KeUserModeCallback(5LL, v29, 88LL, &a5, &v30);
  EtwTraceEndCallback(5LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v18, v17);
  v19 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v19 + 64) = v26;
  *(_QWORD *)(v19 + 80) = v27;
  if ( v16 < 0 || v30 != 24 )
    return 0LL;
  v20 = (__int64 *)a5;
  if ( a5 + 8 < a5 || a5 + 8 > W32UserProbeAddress )
    v20 = (__int64 *)W32UserProbeAddress;
  v21 = *v20;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v22 = *(_OWORD **)(a5 + 16);
    if ( v22 + 3 < v22 || (unsigned __int64)(v22 + 3) > W32UserProbeAddress )
      v22 = (_OWORD *)W32UserProbeAddress;
    v23 = v22[1];
    v24 = v22[2];
    *(_OWORD *)a4 = *v22;
    *(_OWORD *)(a4 + 16) = v23;
    *(_OWORD *)(a4 + 32) = v24;
  }
  return v21;
}
