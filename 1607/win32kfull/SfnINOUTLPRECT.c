/*
 * XREFs of SfnINOUTLPRECT @ 0x1C010E440
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
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
  __int64 v13; // rax
  __int128 v14; // xmm6
  __int64 v15; // xmm1_8
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 *v22; // rcx
  __int64 v23; // rdx
  __int128 *v24; // rcx
  _DWORD v26[6]; // [rsp+30h] [rbp-118h] BYREF
  unsigned __int64 v27; // [rsp+48h] [rbp-100h] BYREF
  __int64 v28; // [rsp+58h] [rbp-F0h]
  _QWORD v29[3]; // [rsp+80h] [rbp-C8h] BYREF
  __int128 v30; // [rsp+98h] [rbp-B0h]
  __int64 v31; // [rsp+A8h] [rbp-A0h]
  __int128 v32; // [rsp+B0h] [rbp-98h]
  _QWORD v33[7]; // [rsp+C0h] [rbp-88h] BYREF

  v28 = 0LL;
  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v12 = 0LL;
  memset(v33, 0, sizeof(v33));
  v33[0] = v12;
  LODWORD(v33[1]) = a2;
  v33[2] = a3;
  *(_OWORD *)&v33[3] = *a4;
  v33[5] = a5;
  v33[6] = a6;
  v29[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v29;
  v29[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v13 = *(_QWORD *)(gptiCurrent + 432LL);
  v14 = *(_OWORD *)(v13 + 64);
  v30 = v14;
  v15 = *(_QWORD *)(v13 + 80);
  v31 = v15;
  *(_QWORD *)(v13 + 72) = v12;
  if ( a1 )
    v16 = *a1;
  else
    v16 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v16;
  if ( a1 )
    v17 = a1[33];
  else
    v17 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v17;
  if ( gdwInAtomicOperation )
  {
    v17 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v17, gdwInAtomicOperation);
  EtwTraceBeginCallback(20LL);
  v18 = KeUserModeCallback(20LL, v33, 56LL, &v27, v26);
  EtwTraceEndCallback(20LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v20, v19);
  v21 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v21 + 64) = v14;
  *(_QWORD *)(v21 + 80) = v15;
  if ( v18 < 0 || v26[0] != 24 )
    return 0LL;
  v22 = (__int64 *)v27;
  if ( v27 + 8 < v27 || v27 + 8 > W32UserProbeAddress )
    v22 = (__int64 *)W32UserProbeAddress;
  v23 = *v22;
  v28 = *v22;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v24 = *(__int128 **)(v27 + 16);
    if ( v24 + 1 < v24 || (unsigned __int64)(v24 + 1) > W32UserProbeAddress )
      v24 = (__int128 *)W32UserProbeAddress;
    v32 = *v24;
    *a4 = v32;
  }
  return v23;
}
