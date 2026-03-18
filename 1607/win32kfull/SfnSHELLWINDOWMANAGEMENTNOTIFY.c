/*
 * XREFs of SfnSHELLWINDOWMANAGEMENTNOTIFY @ 0x1C0112080
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall SfnSHELLWINDOWMANAGEMENTNOTIFY(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 *v18; // rcx
  __int64 result; // rax
  _DWORD v20[8]; // [rsp+30h] [rbp-108h] BYREF
  unsigned __int64 v21; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v22; // [rsp+58h] [rbp-E0h]
  __int128 v23; // [rsp+60h] [rbp-D8h]
  __int64 v24; // [rsp+70h] [rbp-C8h]
  _QWORD v25[4]; // [rsp+90h] [rbp-A8h] BYREF
  _QWORD v26[10]; // [rsp+B0h] [rbp-88h] BYREF

  v22 = 0LL;
  if ( a1 )
    v10 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v10 = 0LL;
  memset(v26, 0, sizeof(v26));
  v26[0] = v10;
  LODWORD(v26[1]) = a2 & 0x1FFFF;
  v26[2] = a3;
  *(_DWORD *)(a4 + 12) = 0;
  *(_OWORD *)&v26[3] = *(_OWORD *)a4;
  *(_OWORD *)&v26[5] = *(_OWORD *)(a4 + 16);
  v26[7] = *(_QWORD *)(a4 + 32);
  v26[8] = a5;
  v26[9] = a6;
  v25[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v25;
  v25[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v11 = *(_QWORD *)(gptiCurrent + 432LL);
  v23 = *(_OWORD *)(v11 + 64);
  v24 = *(_QWORD *)(v11 + 80);
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
  EtwTraceBeginCallback(54LL);
  v14 = KeUserModeCallback(54LL, v26, 80LL, &v21, v20);
  EtwTraceEndCallback(54LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v16, v15);
  v17 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v17 + 64) = v23;
  *(_QWORD *)(v17 + 80) = v24;
  if ( v14 < 0 || v20[0] != 24 )
    return 0LL;
  v18 = (__int64 *)v21;
  if ( v21 + 8 < v21 || v21 + 8 > W32UserProbeAddress )
    v18 = (__int64 *)W32UserProbeAddress;
  result = *v18;
  v22 = *v18;
  return result;
}
