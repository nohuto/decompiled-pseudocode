/*
 * XREFs of SfnINWPARAMDBCSCHAR @ 0x1C0211820
 * Callers:
 *     <none>
 * Callees:
 *     RtlWCSMessageWParamCharToMB @ 0x1C011F0F4 (RtlWCSMessageWParamCharToMB.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     _W32ExceptionHandler @ 0x1C02D8144 (_W32ExceptionHandler.c)
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
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 *v22; // rcx
  __int64 result; // rax
  _QWORD v24[7]; // [rsp+30h] [rbp-98h] BYREF
  __int128 v25; // [rsp+68h] [rbp-60h]
  _QWORD v26[5]; // [rsp+78h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+D0h] [rbp+8h] BYREF
  __int64 v28; // [rsp+E0h] [rbp+18h] BYREF

  v28 = a3;
  v8 = a3;
  v11 = (__int64 *)gptiCurrent;
  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 432LL);
  else
    v12 = 0LL;
  memset(v24, 0, sizeof(v24));
  v24[0] = v12;
  LODWORD(v24[1]) = a2;
  LODWORD(v24[6]) = a7 & 1;
  if ( (a7 & 1) != 0 )
  {
    RtlWCSMessageWParamCharToMB(a2, (__int64)&v28);
    v8 = v28;
    v11 = (__int64 *)gptiCurrent;
  }
  v24[2] = v8;
  v24[3] = a4;
  v24[4] = a5;
  v24[5] = a6;
  v14 = *v11;
  v26[0] = *(_QWORD *)(*v11 + 376);
  *(_QWORD *)(v14 + 376) = v26;
  v26[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v15 = *(_QWORD *)(gptiCurrent + 440LL);
  v25 = *(_OWORD *)(v15 + 64);
  a5 = *(_QWORD *)(v15 + 80);
  *(_QWORD *)(v15 + 72) = v12;
  if ( a1 )
    v16 = *a1;
  else
    v16 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 64LL) = v16;
  if ( a1 )
    v17 = a1[33];
  else
    v17 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 80LL) = v17;
  UserSessionSwitchLeaveCrit(v17, v13);
  EtwTraceBeginCallback(94LL);
  v18 = KeUserModeCallback(94LL, v24, 56LL, &v27, &a7);
  EtwTraceEndCallback(94LL);
  EnterCrit(1LL);
  ThreadUnlock1(v20, v19);
  v21 = *(_QWORD *)(gptiCurrent + 440LL);
  *(_OWORD *)(v21 + 64) = v25;
  *(_QWORD *)(v21 + 80) = a5;
  if ( v18 < 0 || a7 != 24 )
    return 0LL;
  v22 = (__int64 *)v27;
  if ( v27 + 8 < v27 || v27 + 8 > W32UserProbeAddress )
    v22 = (__int64 *)W32UserProbeAddress;
  result = *v22;
  v26[3] = *v22;
  return result;
}
