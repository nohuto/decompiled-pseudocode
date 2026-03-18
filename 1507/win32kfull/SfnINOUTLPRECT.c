/*
 * XREFs of SfnINOUTLPRECT @ 0x1C00EA200
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     _W32ExceptionHandler @ 0x1C02D8144 (_W32ExceptionHandler.c)
 */

__int64 __fastcall SfnINOUTLPRECT(
        __int64 *a1,
        int a2,
        __int64 a3,
        _OWORD *a4,
        __int64 a5,
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
  int v27; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int64 v28[3]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v29[4]; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v30; // [rsp+70h] [rbp-98h]
  _QWORD v31[7]; // [rsp+80h] [rbp-88h] BYREF

  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 432LL);
  else
    v12 = 0LL;
  memset(v31, 0, sizeof(v31));
  v31[0] = v12;
  LODWORD(v31[1]) = a2;
  v31[2] = a3;
  *(_OWORD *)&v31[3] = *a4;
  v31[5] = a5;
  v31[6] = a6;
  v29[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v29;
  v29[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v14 = *(_QWORD *)(gptiCurrent + 440LL);
  v15 = *(_OWORD *)(v14 + 64);
  v16 = *(_QWORD *)(v14 + 80);
  *(_QWORD *)(v14 + 72) = v12;
  if ( a1 )
    v17 = *a1;
  else
    v17 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 64LL) = v17;
  if ( a1 )
    v18 = a1[33];
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 80LL) = v18;
  UserSessionSwitchLeaveCrit(v18, v13);
  EtwTraceBeginCallback(20LL);
  v19 = KeUserModeCallback(20LL, v31, 56LL, v28, &v27);
  EtwTraceEndCallback(20LL);
  EnterCrit(1LL);
  ThreadUnlock1(v21, v20);
  v22 = *(_QWORD *)(gptiCurrent + 440LL);
  *(_OWORD *)(v22 + 64) = v15;
  *(_QWORD *)(v22 + 80) = v16;
  if ( v19 < 0 || v27 != 24 )
    return 0LL;
  v23 = (__int64 *)v28[0];
  if ( v28[0] + 8 < v28[0] || v28[0] + 8 > W32UserProbeAddress )
    v23 = (__int64 *)W32UserProbeAddress;
  v24 = *v23;
  v29[3] = *v23;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v25 = *(__int128 **)(v28[0] + 16);
    if ( v25 + 1 < v25 || (unsigned __int64)(v25 + 1) > W32UserProbeAddress )
      v25 = (__int128 *)W32UserProbeAddress;
    v30 = *v25;
    *a4 = v30;
  }
  return v24;
}
