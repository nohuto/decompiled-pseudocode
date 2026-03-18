/*
 * XREFs of SfnSENTDDEMSG @ 0x1C020B400
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     xxxDDETrackGetMessageHook @ 0x1C01E2C4C (xxxDDETrackGetMessageHook.c)
 */

__int64 __fastcall SfnSENTDDEMSG(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v11; // rsi
  signed int v12; // r14d
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  _QWORD v23[7]; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v24; // [rsp+88h] [rbp-A0h] BYREF
  int v25; // [rsp+90h] [rbp-98h]
  __int64 v26; // [rsp+98h] [rbp-90h]
  __int64 v27; // [rsp+A0h] [rbp-88h]
  __int128 v28; // [rsp+B8h] [rbp-70h]
  __int64 v29; // [rsp+C8h] [rbp-60h]
  _QWORD v30[8]; // [rsp+E8h] [rbp-40h] BYREF
  unsigned __int64 v31; // [rsp+130h] [rbp+8h] BYREF
  int v32; // [rsp+138h] [rbp+10h] BYREF

  if ( a1 )
    v11 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v11 = 0LL;
  memset(v23, 0, sizeof(v23));
  v12 = a2 & 0xBFFFFFFF;
  v30[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v30;
  v30[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v13 = *(_QWORD *)(gptiCurrent + 432LL);
  v28 = *(_OWORD *)(v13 + 64);
  v29 = *(_QWORD *)(v13 + 80);
  *(_QWORD *)(v13 + 72) = v11;
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
  if ( v12 >= 0 )
  {
    v23[0] = v11;
    LODWORD(v23[1]) = v12;
    v23[2] = a3;
    v23[3] = a4;
  }
  else
  {
    if ( a1 )
      v24 = *a1;
    else
      v24 = 0LL;
    v25 = v12 & 0x7FFFFFFF;
    v26 = a3;
    v27 = a4;
    xxxDDETrackGetMessageHook((__int64)&v24);
    v23[0] = *(_QWORD *)(gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v24)
           - *(_QWORD *)(gptiCurrent + 424LL);
    LODWORD(v23[1]) = v25;
    v23[2] = v26;
    v23[3] = v27;
  }
  v23[4] = a5;
  v23[5] = a6;
  v16 = (a7 & 1) == 0;
  LODWORD(v23[6]) = (a7 & 1) == 0;
  if ( gdwInAtomicOperation )
  {
    v16 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v16, gdwInAtomicOperation);
  EtwTraceBeginCallback(38LL);
  v17 = KeUserModeCallback(38LL, v23, 56LL, &v31, &v32);
  EtwTraceEndCallback(38LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v19, v18);
  v20 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v20 + 64) = v28;
  *(_QWORD *)(v20 + 80) = v29;
  if ( v17 < 0 || v32 != 24 )
    return 0LL;
  v21 = v31;
  if ( v31 + 8 < v31 || v31 + 8 > W32UserProbeAddress )
    v21 = W32UserProbeAddress;
  return *(_QWORD *)v21;
}
