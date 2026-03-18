/*
 * XREFs of SfnINOUTNEXTMENU @ 0x1C0208DD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall SfnINOUTNEXTMENU(
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
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 v23; // xmm1_8
  __int128 v25; // [rsp+50h] [rbp-B8h]
  __int64 v26; // [rsp+60h] [rbp-A8h]
  _QWORD v27[12]; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v28[4]; // [rsp+D0h] [rbp-38h] BYREF
  int v29; // [rsp+118h] [rbp+10h] BYREF

  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v12 = 0LL;
  memset(v27, 0, 0x40uLL);
  v27[0] = v12;
  LODWORD(v27[1]) = a2;
  v27[2] = a3;
  v27[6] = a5;
  v27[7] = a6;
  *(_OWORD *)&v27[3] = *(_OWORD *)a4;
  v27[5] = *(_QWORD *)(a4 + 16);
  v28[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v28;
  v28[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v13 = *(_QWORD *)(gptiCurrent + 432LL);
  v25 = *(_OWORD *)(v13 + 64);
  v26 = *(_QWORD *)(v13 + 80);
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
  EtwTraceBeginCallback(30LL);
  v16 = KeUserModeCallback(30LL, v27, 64LL, &a5, &v29);
  EtwTraceEndCallback(30LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v18, v17);
  v19 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v19 + 64) = v25;
  *(_QWORD *)(v19 + 80) = v26;
  if ( v16 < 0 || v29 != 24 )
    return 0LL;
  v20 = (__int64 *)a5;
  if ( a5 + 8 < a5 || a5 + 8 > W32UserProbeAddress )
    v20 = (__int64 *)W32UserProbeAddress;
  v21 = *v20;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v22 = *(_QWORD *)(a5 + 16);
    if ( v22 + 24 < v22 || v22 + 24 > W32UserProbeAddress )
      v22 = W32UserProbeAddress;
    v23 = *(_QWORD *)(v22 + 16);
    *(_OWORD *)a4 = *(_OWORD *)v22;
    *(_QWORD *)(a4 + 16) = v23;
  }
  return v21;
}
