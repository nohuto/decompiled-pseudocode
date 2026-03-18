/*
 * XREFs of SfnINWPARAMCHAR @ 0x1C0209B00
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C02461D8 (RtlWCSMessageWParamCharToMB.c)
 */

__int64 __fastcall SfnINWPARAMCHAR(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  __int64 v8; // r15
  __int64 v11; // rdi
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  __int128 v22; // [rsp+50h] [rbp-A8h]
  __int64 v23; // [rsp+60h] [rbp-98h]
  _QWORD v24[9]; // [rsp+68h] [rbp-90h] BYREF
  _QWORD v25[9]; // [rsp+B0h] [rbp-48h] BYREF
  __int64 v26; // [rsp+100h] [rbp+8h] BYREF
  __int64 v27; // [rsp+110h] [rbp+18h] BYREF
  unsigned __int64 v28; // [rsp+118h] [rbp+20h] BYREF

  v27 = a3;
  v8 = a3;
  if ( a1 )
    v11 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v11 = 0LL;
  memset(v24, 0, 0x30uLL);
  v24[0] = v11;
  LODWORD(v24[1]) = a2;
  if ( (a7 & 1) != 0 )
  {
    if ( a2 == 47 || a2 == 288 )
    {
      v26 = (unsigned __int16)v8;
      RtlWCSMessageWParamCharToMB(a2, &v26);
      v12 = (unsigned __int16)v26 | (WORD1(v27) << 16);
      v8 = v12;
      v27 = v12;
    }
    else
    {
      RtlWCSMessageWParamCharToMB(a2, &v27);
      v8 = v27;
    }
  }
  v24[2] = v8;
  v24[3] = a4;
  v24[4] = a5;
  v24[5] = a6;
  v25[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v25;
  v25[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v13 = *(_QWORD *)(gptiCurrent + 432LL);
  v22 = *(_OWORD *)(v13 + 64);
  v23 = *(_QWORD *)(v13 + 80);
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
  if ( gdwInAtomicOperation )
  {
    v15 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v15, gdwInAtomicOperation);
  EtwTraceBeginCallback(2LL);
  v16 = KeUserModeCallback(2LL, v24, 48LL, &v28, &a7);
  EtwTraceEndCallback(2LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v18, v17);
  v19 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v19 + 64) = v22;
  *(_QWORD *)(v19 + 80) = v23;
  if ( v16 < 0 || a7 != 24 )
    return 0LL;
  v20 = v28;
  if ( v28 + 8 < v28 || v28 + 8 > W32UserProbeAddress )
    v20 = W32UserProbeAddress;
  return *(_QWORD *)v20;
}
