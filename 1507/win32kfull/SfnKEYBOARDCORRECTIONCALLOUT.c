/*
 * XREFs of SfnKEYBOARDCORRECTIONCALLOUT @ 0x1C0211A80
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     _W32ExceptionHandler @ 0x1C02D8144 (_W32ExceptionHandler.c)
 */

__int64 __fastcall SfnKEYBOARDCORRECTIONCALLOUT(
        __int64 a1,
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
  int v24; // [rsp+30h] [rbp-1F8h] BYREF
  __int64 v25; // [rsp+38h] [rbp-1F0h]
  _QWORD v26[2]; // [rsp+40h] [rbp-1E8h] BYREF
  __int128 v27; // [rsp+50h] [rbp-1D8h]
  _QWORD v28[4]; // [rsp+60h] [rbp-1C8h] BYREF
  _QWORD v29[46]; // [rsp+80h] [rbp-1A8h] BYREF

  if ( a1 )
    v12 = a1 - *(_QWORD *)(gptiCurrent + 432LL);
  else
    v12 = 0LL;
  if ( gptiCurrent == *(_QWORD *)(a8 + 32) )
    return 0LL;
  memset(v29, 0, sizeof(v29));
  v29[0] = v12;
  LODWORD(v29[1]) = a2 & 0x1FFFF;
  v29[2] = a3;
  *(_DWORD *)(a4 + 12) = 0;
  v13 = &v29[3];
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
  v29[44] = a5;
  v29[45] = a6;
  v28[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v28;
  v28[1] = a1;
  if ( a1 )
    ++*(_DWORD *)(a1 + 8);
  v15 = *(_QWORD *)(gptiCurrent + 440LL);
  v27 = *(_OWORD *)(v15 + 64);
  v25 = *(_QWORD *)(v15 + 80);
  *(_QWORD *)(v15 + 72) = v12;
  v16 = a1 ? *(_QWORD *)a1 : 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 64LL) = v16;
  v17 = a1 ? *(_QWORD *)(a1 + 264) : 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 80LL) = v17;
  UserSessionSwitchLeaveCrit(v17, 128LL);
  EtwTraceBeginCallback(52LL);
  v18 = KeUserModeCallback(52LL, v29, 368LL, v26, &v24);
  EtwTraceEndCallback(52LL);
  EnterCrit(1LL);
  ThreadUnlock1(v20, v19);
  v21 = *(_QWORD *)(gptiCurrent + 440LL);
  *(_OWORD *)(v21 + 64) = v27;
  *(_QWORD *)(v21 + 80) = v25;
  if ( v18 < 0 || v24 != 24 )
    return 0LL;
  v22 = (__int64 *)v26[0];
  if ( (unsigned __int64)(v26[0] + 8LL) < v26[0] || (unsigned __int64)(v26[0] + 8LL) > W32UserProbeAddress )
    v22 = (__int64 *)W32UserProbeAddress;
  result = *v22;
  v26[1] = *v22;
  return result;
}
