/*
 * XREFs of SfnDWORDOPTINLPMSG @ 0x1C00FD200
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C015A380 (memset.c)
 *     _W32ExceptionHandler @ 0x1C01BF6B8 (_W32ExceptionHandler.c)
 */

__int64 __fastcall SfnDWORDOPTINLPMSG(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  __int128 v20; // [rsp+40h] [rbp-B8h]
  _QWORD v21[4]; // [rsp+50h] [rbp-A8h] BYREF
  _OWORD v22[6]; // [rsp+70h] [rbp-88h] BYREF
  int v23; // [rsp+108h] [rbp+10h] BYREF

  if ( a1 )
    v10 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v10 = 0LL;
  memset(v22, 0, sizeof(v22));
  *(_QWORD *)&v22[0] = v10;
  DWORD2(v22[0]) = a2;
  *(_QWORD *)&v22[1] = a3;
  if ( a4 )
  {
    *(_DWORD *)(a4 + 12) = 0;
    *(_DWORD *)(a4 + 44) = 0;
  }
  *((_QWORD *)&v22[1] + 1) = a4;
  if ( a4 )
  {
    v22[3] = *(_OWORD *)a4;
    v22[4] = *(_OWORD *)(a4 + 16);
    v22[5] = *(_OWORD *)(a4 + 32);
  }
  v22[2] = __PAIR128__(a6, a5);
  v21[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v21;
  v21[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v11 = *(_QWORD *)(gptiCurrent + 432LL);
  v20 = *(_OWORD *)(v11 + 64);
  a5 = *(_QWORD *)(v11 + 80);
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
  EtwTraceBeginCallback(4LL);
  v14 = KeUserModeCallback(4LL, v22, 96LL, &a6, &v23);
  EtwTraceEndCallback(4LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v16, v15);
  v17 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v17 + 64) = v20;
  *(_QWORD *)(v17 + 80) = a5;
  if ( v14 < 0 || v23 != 24 )
    return 0LL;
  v18 = a6;
  if ( a6 + 8 < a6 || a6 + 8 > W32UserProbeAddress )
    v18 = W32UserProbeAddress;
  return *(_QWORD *)v18;
}
