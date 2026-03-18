/*
 * XREFs of SfnOUTLPRECT @ 0x1C0110A60
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall SfnOUTLPRECT(
        __int64 *a1,
        int a2,
        __int64 a3,
        _OWORD *a4,
        unsigned __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 v12; // rdi
  __int64 v13; // rax
  __int128 v14; // xmm6
  __int64 v15; // xmm1_8
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 *v22; // rcx
  __int64 v23; // rdx
  __int128 *v25; // rcx
  _QWORD v26[9]; // [rsp+50h] [rbp-C8h] BYREF
  _QWORD v27[3]; // [rsp+98h] [rbp-80h] BYREF
  __int128 v28; // [rsp+B0h] [rbp-68h]
  __int64 v29; // [rsp+C0h] [rbp-58h]
  __int128 v30; // [rsp+C8h] [rbp-50h]
  int v31; // [rsp+128h] [rbp+10h] BYREF

  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v12 = 0LL;
  memset(v26, 0, 0x28uLL);
  v26[0] = v12;
  LODWORD(v26[1]) = a2;
  v26[2] = a3;
  v26[3] = a5;
  v26[4] = a6;
  v27[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v27;
  v27[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v13 = *(_QWORD *)(gptiCurrent + 432LL);
  v14 = *(_OWORD *)(v13 + 64);
  v28 = v14;
  v15 = *(_QWORD *)(v13 + 80);
  v29 = v15;
  *(_QWORD *)(v13 + 72) = v12;
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
  EtwTraceBeginCallback(34LL);
  v18 = KeUserModeCallback(34LL, v26, 40LL, &a5, &v31);
  EtwTraceEndCallback(34LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v20, v19);
  v21 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v21 + 64) = v14;
  *(_QWORD *)(v21 + 80) = v15;
  if ( v18 < 0 || v31 != 24 )
    return 0LL;
  v22 = (__int64 *)a5;
  if ( a5 + 8 < a5 || a5 + 8 > W32UserProbeAddress )
    v22 = (__int64 *)W32UserProbeAddress;
  v23 = *v22;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v25 = *(__int128 **)(a5 + 16);
    if ( v25 + 1 < v25 || (unsigned __int64)(v25 + 1) > W32UserProbeAddress )
      v25 = (__int128 *)W32UserProbeAddress;
    v30 = *v25;
    *a4 = v30;
  }
  return v23;
}
