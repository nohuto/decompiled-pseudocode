/*
 * XREFs of SfnINWPARAMCHAR @ 0x1C0211580
 * Callers:
 *     <none>
 * Callees:
 *     RtlWCSMessageWParamCharToMB @ 0x1C011F0F4 (RtlWCSMessageWParamCharToMB.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     _W32ExceptionHandler @ 0x1C02D8144 (_W32ExceptionHandler.c)
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
  __int64 v12; // rdx
  int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  __int128 v23; // [rsp+40h] [rbp-88h]
  _QWORD v24[3]; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v25[12]; // [rsp+68h] [rbp-60h] BYREF
  __int64 v26; // [rsp+D0h] [rbp+8h] BYREF
  __int64 v27; // [rsp+E0h] [rbp+18h] BYREF
  unsigned __int64 v28; // [rsp+E8h] [rbp+20h] BYREF

  v27 = a3;
  v8 = a3;
  if ( a1 )
    v11 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 432LL);
  else
    v11 = 0LL;
  memset(v25, 0, 0x30uLL);
  v25[0] = v11;
  LODWORD(v25[1]) = a2;
  if ( (a7 & 1) != 0 )
  {
    if ( a2 == 47 || a2 == 288 )
    {
      v26 = (unsigned __int16)v8;
      RtlWCSMessageWParamCharToMB(a2, (__int64)&v26);
      v13 = (unsigned __int16)v26 | (WORD1(v27) << 16);
      v8 = v13;
      v27 = v13;
    }
    else
    {
      RtlWCSMessageWParamCharToMB(a2, (__int64)&v27);
      v8 = v27;
    }
  }
  v25[2] = v8;
  v25[3] = a4;
  v25[4] = a5;
  v25[5] = a6;
  v24[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v24;
  v24[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v14 = *(_QWORD *)(gptiCurrent + 440LL);
  v23 = *(_OWORD *)(v14 + 64);
  a5 = *(_QWORD *)(v14 + 80);
  *(_QWORD *)(v14 + 72) = v11;
  if ( a1 )
    v15 = *a1;
  else
    v15 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 64LL) = v15;
  if ( a1 )
    v16 = a1[33];
  else
    v16 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 80LL) = v16;
  UserSessionSwitchLeaveCrit(v16, v12);
  EtwTraceBeginCallback(2LL);
  v17 = KeUserModeCallback(2LL, v25, 48LL, &v28, &a7);
  EtwTraceEndCallback(2LL);
  EnterCrit(1LL);
  ThreadUnlock1(v19, v18);
  v20 = *(_QWORD *)(gptiCurrent + 440LL);
  *(_OWORD *)(v20 + 64) = v23;
  *(_QWORD *)(v20 + 80) = a5;
  if ( v17 < 0 || a7 != 24 )
    return 0LL;
  v21 = v28;
  if ( v28 + 8 < v28 || v28 + 8 > W32UserProbeAddress )
    v21 = W32UserProbeAddress;
  return *(_QWORD *)v21;
}
