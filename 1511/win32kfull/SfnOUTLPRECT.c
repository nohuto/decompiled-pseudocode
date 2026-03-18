/*
 * XREFs of SfnOUTLPRECT @ 0x1C00F1C10
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0152CC0 (memset.c)
 *     _W32ExceptionHandler @ 0x1C02D94EC (_W32ExceptionHandler.c)
 */

__int64 __fastcall SfnOUTLPRECT(
        __int64 *a1,
        int a2,
        __int64 a3,
        _OWORD *a4,
        unsigned __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int128 v15; // xmm6
  __int64 v16; // xmm7_8
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 *v23; // rcx
  __int64 v24; // rdx
  __int128 *v25; // rcx
  _QWORD v27[8]; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v28[3]; // [rsp+70h] [rbp-68h] BYREF
  __int128 v29; // [rsp+88h] [rbp-50h]
  int v30; // [rsp+E8h] [rbp+10h] BYREF

  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v12 = 0LL;
  memset(v27, 0, 0x28uLL);
  v27[0] = v12;
  LODWORD(v27[1]) = a2;
  v27[2] = a3;
  v27[3] = a5;
  v27[4] = a6;
  v28[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v28;
  v28[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v14 = *(_QWORD *)(gptiCurrent + 432LL);
  v15 = *(_OWORD *)(v14 + 64);
  v16 = *(_QWORD *)(v14 + 80);
  *(_QWORD *)(v14 + 72) = v12;
  if ( a1 )
    v17 = *a1;
  else
    v17 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v17;
  if ( a1 )
    v18 = a1[33];
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v18;
  UserSessionSwitchLeaveCrit(v18, v13);
  EtwTraceBeginCallback(34LL);
  v19 = KeUserModeCallback(34LL, v27, 40LL, &a5, &v30);
  EtwTraceEndCallback(34LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v21, v20);
  v22 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v22 + 64) = v15;
  *(_QWORD *)(v22 + 80) = v16;
  if ( v19 < 0 || v30 != 24 )
    return 0LL;
  v23 = (__int64 *)a5;
  if ( a5 + 8 < a5 || a5 + 8 > W32UserProbeAddress )
    v23 = (__int64 *)W32UserProbeAddress;
  v24 = *v23;
  v27[6] = *v23;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v25 = *(__int128 **)(a5 + 16);
    if ( v25 + 1 < v25 || (unsigned __int64)(v25 + 1) > W32UserProbeAddress )
      v25 = (__int128 *)W32UserProbeAddress;
    v29 = *v25;
    *a4 = v29;
  }
  return v24;
}
