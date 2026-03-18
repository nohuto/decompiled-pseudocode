/*
 * XREFs of SfnINOUTSTYLECHANGE @ 0x1C00D9930
 * Callers:
 *     <none>
 * Callees:
 *     _W32ExceptionHandler @ 0x1C02D94EC (_W32ExceptionHandler.c)
 */

__int64 __fastcall SfnINOUTSTYLECHANGE(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        _QWORD *a4,
        unsigned __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 v10; // r11
  __int64 v11; // r10
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 *v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rax
  _QWORD v22[7]; // [rsp+30h] [rbp-78h] BYREF
  __int128 v23; // [rsp+68h] [rbp-40h]
  _QWORD v24[5]; // [rsp+78h] [rbp-30h] BYREF
  int v25; // [rsp+B8h] [rbp+10h] BYREF

  if ( a1 )
  {
    v10 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
    v11 = 0LL;
  }
  else
  {
    v11 = 0LL;
    v10 = 0LL;
  }
  v22[0] = v10;
  v22[1] = a2;
  v22[2] = a3;
  v22[4] = a5;
  v22[5] = a6;
  v22[3] = *a4;
  v24[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v24;
  v24[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v12 = *(_QWORD *)(gptiCurrent + 432LL);
  v23 = *(_OWORD *)(v12 + 64);
  a6 = *(_QWORD *)(v12 + 80);
  *(_QWORD *)(v12 + 72) = v10;
  v13 = 0LL;
  if ( a1 )
    v13 = *a1;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v13;
  if ( a1 )
    v11 = a1[33];
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v11;
  UserSessionSwitchLeaveCrit(a1, v13);
  EtwTraceBeginCallback(39LL);
  v14 = KeUserModeCallback(39LL, v22, 48LL, &a5, &v25);
  EtwTraceEndCallback(39LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v16, v15);
  v17 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v17 + 64) = v23;
  *(_QWORD *)(v17 + 80) = a6;
  if ( v14 < 0 || v25 != 24 )
    return 0LL;
  v18 = (__int64 *)a5;
  if ( a5 + 8 < a5 || a5 + 8 > W32UserProbeAddress )
    v18 = (__int64 *)W32UserProbeAddress;
  v19 = *v18;
  v24[3] = *v18;
  if ( a2 == 124 && (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v20 = *(_QWORD **)(a5 + 16);
    if ( v20 + 1 < v20 || (unsigned __int64)(v20 + 1) > W32UserProbeAddress )
      v20 = (_QWORD *)W32UserProbeAddress;
    *a4 = *v20;
  }
  return v19;
}
