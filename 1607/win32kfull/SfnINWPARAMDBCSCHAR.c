/*
 * XREFs of SfnINWPARAMDBCSCHAR @ 0x1C0209E20
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C02461D8 (RtlWCSMessageWParamCharToMB.c)
 */

__int64 __fastcall SfnINWPARAMDBCSCHAR(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  __int64 v8; // r14
  __int64 *v11; // r15
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  __int128 v23; // [rsp+50h] [rbp-A8h]
  __int64 v24; // [rsp+60h] [rbp-98h]
  _QWORD v25[10]; // [rsp+68h] [rbp-90h] BYREF
  _QWORD v26[3]; // [rsp+B8h] [rbp-40h] BYREF
  unsigned __int64 v27; // [rsp+100h] [rbp+8h] BYREF
  __int64 v28; // [rsp+110h] [rbp+18h] BYREF

  v28 = a3;
  v8 = a3;
  v11 = (__int64 *)gptiCurrent;
  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v12 = 0LL;
  memset(v25, 0, 0x38uLL);
  v25[0] = v12;
  LODWORD(v25[1]) = a2;
  LODWORD(v25[6]) = a7 & 1;
  if ( (a7 & 1) != 0 )
  {
    RtlWCSMessageWParamCharToMB(a2, &v28);
    v8 = v28;
    v11 = (__int64 *)gptiCurrent;
  }
  v25[2] = v8;
  v25[3] = a4;
  v25[4] = a5;
  v25[5] = a6;
  v13 = *v11;
  v26[0] = *(_QWORD *)(*v11 + 368);
  *(_QWORD *)(v13 + 368) = v26;
  v26[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v14 = *(_QWORD *)(gptiCurrent + 432LL);
  v23 = *(_OWORD *)(v14 + 64);
  v24 = *(_QWORD *)(v14 + 80);
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
  EtwTraceBeginCallback(95LL);
  v17 = KeUserModeCallback(95LL, v25, 56LL, &v27, &a7);
  EtwTraceEndCallback(95LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v19, v18);
  v20 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v20 + 64) = v23;
  *(_QWORD *)(v20 + 80) = v24;
  if ( v17 < 0 || a7 != 24 )
    return 0LL;
  v21 = v27;
  if ( v27 + 8 < v27 || v27 + 8 > W32UserProbeAddress )
    v21 = W32UserProbeAddress;
  return *(_QWORD *)v21;
}
