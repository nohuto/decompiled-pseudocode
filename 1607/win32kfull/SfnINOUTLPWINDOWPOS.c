/*
 * XREFs of SfnINOUTLPWINDOWPOS @ 0x1C00FBBB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall SfnINOUTLPWINDOWPOS(
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
  unsigned __int64 v23; // rcx
  __int128 v24; // xmm1
  __int64 v25; // xmm0_8
  __int128 v26; // [rsp+50h] [rbp-C8h]
  __int64 v27; // [rsp+60h] [rbp-B8h]
  _QWORD v28[3]; // [rsp+88h] [rbp-90h] BYREF
  _QWORD v29[10]; // [rsp+A0h] [rbp-78h] BYREF
  int v30; // [rsp+128h] [rbp+10h] BYREF

  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v12 = 0LL;
  memset(v29, 0, sizeof(v29));
  v29[0] = v12;
  LODWORD(v29[1]) = a2;
  v29[2] = a3;
  *(_DWORD *)(a4 + 36) = 0;
  *(_OWORD *)&v29[3] = *(_OWORD *)a4;
  *(_OWORD *)&v29[5] = *(_OWORD *)(a4 + 16);
  v29[7] = *(_QWORD *)(a4 + 32);
  v29[8] = a5;
  v29[9] = a6;
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
  EtwTraceBeginCallback(22LL);
  v16 = KeUserModeCallback(22LL, v29, 80LL, &a5, &v30);
  EtwTraceEndCallback(22LL);
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
    v23 = *(_QWORD *)(a5 + 16);
    if ( v23 + 40 < v23 || v23 + 40 > W32UserProbeAddress )
      v23 = W32UserProbeAddress;
    v24 = *(_OWORD *)(v23 + 16);
    v25 = *(_QWORD *)(v23 + 32);
    *(_OWORD *)a4 = *(_OWORD *)v23;
    *(_OWORD *)(a4 + 16) = v24;
    *(_QWORD *)(a4 + 32) = v25;
  }
  return v21;
}
