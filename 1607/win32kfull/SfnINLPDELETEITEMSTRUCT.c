/*
 * XREFs of SfnINLPDELETEITEMSTRUCT @ 0x1C0207840
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall SfnINLPDELETEITEMSTRUCT(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6)
{
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int128 v20; // [rsp+50h] [rbp-C8h]
  __int64 v21; // [rsp+60h] [rbp-B8h]
  _QWORD v22[4]; // [rsp+80h] [rbp-98h] BYREF
  _QWORD v23[10]; // [rsp+A0h] [rbp-78h] BYREF
  int v24; // [rsp+128h] [rbp+10h] BYREF

  if ( a1 )
    v10 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v10 = 0LL;
  memset(v23, 0, 0x48uLL);
  v23[0] = v10;
  LODWORD(v23[1]) = a2;
  v23[2] = a3;
  *(_DWORD *)(a4 + 12) = 0;
  *(_OWORD *)&v23[3] = *(_OWORD *)a4;
  *(_OWORD *)&v23[5] = *(_OWORD *)(a4 + 16);
  v23[7] = a5;
  v23[8] = a6;
  v22[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v22;
  v22[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v11 = *(_QWORD *)(gptiCurrent + 432LL);
  v20 = *(_OWORD *)(v11 + 64);
  v21 = *(_QWORD *)(v11 + 80);
  *(_QWORD *)(v11 + 72) = v10;
  if ( a1 )
    v12 = *a1;
  else
    v12 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v12;
  if ( a1 )
    v13 = a1[33];
  else
    v13 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v13;
  if ( gdwInAtomicOperation )
  {
    v13 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v13, gdwInAtomicOperation);
  EtwTraceBeginCallback(11LL);
  v14 = KeUserModeCallback(11LL, v23, 72LL, &a5, &v24);
  EtwTraceEndCallback(11LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v16, v15);
  v17 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v17 + 64) = v20;
  *(_QWORD *)(v17 + 80) = v21;
  if ( v14 < 0 || v24 != 24 )
    return 0LL;
  v18 = a5;
  if ( a5 + 8 < a5 || a5 + 8 > W32UserProbeAddress )
    v18 = W32UserProbeAddress;
  return *(_QWORD *)v18;
}
