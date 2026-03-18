/*
 * XREFs of SfnKEYBOARDCORRECTIONCALLOUT @ 0x1C020A100
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall SfnKEYBOARDCORRECTIONCALLOUT(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 v12; // r14
  _OWORD *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 *v22; // rcx
  __int64 result; // rax
  _DWORD v24[8]; // [rsp+30h] [rbp-228h] BYREF
  unsigned __int64 v25; // [rsp+50h] [rbp-208h] BYREF
  __int64 v26; // [rsp+58h] [rbp-200h]
  __int128 v27; // [rsp+60h] [rbp-1F8h]
  __int64 v28; // [rsp+70h] [rbp-1E8h]
  _QWORD v29[4]; // [rsp+90h] [rbp-1C8h] BYREF
  _QWORD v30[46]; // [rsp+B0h] [rbp-1A8h] BYREF

  v26 = 0LL;
  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v12 = 0LL;
  if ( gptiCurrent == *(_QWORD *)(a8 + 32) )
    return 0LL;
  memset(v30, 0, sizeof(v30));
  v30[0] = v12;
  LODWORD(v30[1]) = a2 & 0x1FFFF;
  v30[2] = a3;
  *(_DWORD *)(a4 + 12) = 0;
  v13 = &v30[3];
  v14 = 2LL;
  do
  {
    *v13 = *(_OWORD *)a4;
    v13[1] = *(_OWORD *)(a4 + 16);
    v13[2] = *(_OWORD *)(a4 + 32);
    v13[3] = *(_OWORD *)(a4 + 48);
    v13[4] = *(_OWORD *)(a4 + 64);
    v13[5] = *(_OWORD *)(a4 + 80);
    v13[6] = *(_OWORD *)(a4 + 96);
    v13 += 8;
    *(v13 - 1) = *(_OWORD *)(a4 + 112);
    a4 += 128LL;
    --v14;
  }
  while ( v14 );
  *v13 = *(_OWORD *)a4;
  v13[1] = *(_OWORD *)(a4 + 16);
  v13[2] = *(_OWORD *)(a4 + 32);
  v13[3] = *(_OWORD *)(a4 + 48);
  *((_QWORD *)v13 + 8) = *(_QWORD *)(a4 + 64);
  v30[44] = a5;
  v30[45] = a6;
  v29[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v29;
  v29[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v15 = *(_QWORD *)(gptiCurrent + 432LL);
  v27 = *(_OWORD *)(v15 + 64);
  v28 = *(_QWORD *)(v15 + 80);
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
  if ( gdwInAtomicOperation )
  {
    v17 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v17, gdwInAtomicOperation);
  EtwTraceBeginCallback(52LL);
  v18 = KeUserModeCallback(52LL, v30, 368LL, &v25, v24);
  EtwTraceEndCallback(52LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v20, v19);
  v21 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v21 + 64) = v27;
  *(_QWORD *)(v21 + 80) = v28;
  if ( v18 < 0 || v24[0] != 24 )
    return 0LL;
  v22 = (__int64 *)v25;
  if ( v25 + 8 < v25 || v25 + 8 > W32UserProbeAddress )
    v22 = (__int64 *)W32UserProbeAddress;
  result = *v22;
  v26 = *v22;
  return result;
}
