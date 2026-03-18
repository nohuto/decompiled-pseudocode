/*
 * XREFs of SfnOUTDWORDINDWORD @ 0x1C020A470
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall SfnOUTDWORDINDWORD(
        __int64 *a1,
        int a2,
        _DWORD *a3,
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
  _DWORD *v22; // rdx
  __int128 v24; // [rsp+60h] [rbp-98h]
  __int64 v25; // [rsp+70h] [rbp-88h]
  _QWORD v26[10]; // [rsp+78h] [rbp-80h] BYREF
  _QWORD v27[3]; // [rsp+C8h] [rbp-30h] BYREF
  int v28; // [rsp+108h] [rbp+10h] BYREF

  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v12 = 0LL;
  memset(v26, 0, 0x30uLL);
  v26[0] = v12;
  LODWORD(v26[1]) = a2;
  v26[3] = a4;
  v26[4] = a5;
  v26[5] = a6;
  v27[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v27;
  v27[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v13 = *(_QWORD *)(gptiCurrent + 432LL);
  v24 = *(_OWORD *)(v13 + 64);
  v25 = *(_QWORD *)(v13 + 80);
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
  EtwTraceBeginCallback(33LL);
  v16 = KeUserModeCallback(33LL, v26, 48LL, &a5, &v28);
  EtwTraceEndCallback(33LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v18, v17);
  v19 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v19 + 64) = v24;
  *(_QWORD *)(v19 + 80) = v25;
  if ( v16 < 0 || v28 != 24 )
    return 0LL;
  v20 = (__int64 *)a5;
  if ( a5 + 8 < a5 || a5 + 8 > W32UserProbeAddress )
    v20 = (__int64 *)W32UserProbeAddress;
  v21 = *v20;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v22 = *(_DWORD **)(a5 + 16);
    if ( (unsigned __int64)v22 >= W32UserProbeAddress )
      v22 = (_DWORD *)W32UserProbeAddress;
    *a3 = *v22;
  }
  return v21;
}
