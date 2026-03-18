/*
 * XREFs of SfnOPTOUTLPDWORDOPTOUTLPDWORD @ 0x1C00E90E0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C015D4C0 (memset.c)
 *     _W32ExceptionHandler @ 0x1C02D8144 (_W32ExceptionHandler.c)
 */

__int64 __fastcall SfnOPTOUTLPDWORDOPTOUTLPDWORD(
        __int64 *a1,
        int a2,
        _DWORD *a3,
        _DWORD *a4,
        unsigned __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 *v21; // rcx
  __int64 v22; // r8
  _DWORD *v23; // rdx
  _DWORD *v24; // rdx
  __int128 v26; // [rsp+40h] [rbp-68h]
  _QWORD v27[3]; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v28[5]; // [rsp+68h] [rbp-40h] BYREF
  int v29; // [rsp+B8h] [rbp+10h] BYREF

  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 432LL);
  else
    v12 = 0LL;
  memset(v28, 0, 0x20uLL);
  v28[0] = v12;
  LODWORD(v28[1]) = a2;
  v28[2] = a5;
  v28[3] = a6;
  v27[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v27;
  v27[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v14 = *(_QWORD *)(gptiCurrent + 440LL);
  v26 = *(_OWORD *)(v14 + 64);
  a6 = *(_QWORD *)(v14 + 80);
  *(_QWORD *)(v14 + 72) = v12;
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
  UserSessionSwitchLeaveCrit(v16, v13);
  EtwTraceBeginCallback(31LL);
  v17 = KeUserModeCallback(31LL, v28, 32LL, &a5, &v29);
  EtwTraceEndCallback(31LL);
  EnterCrit(1LL);
  ThreadUnlock1(v19, v18);
  v20 = *(_QWORD *)(gptiCurrent + 440LL);
  *(_OWORD *)(v20 + 64) = v26;
  *(_QWORD *)(v20 + 80) = a6;
  if ( v17 < 0 || v29 != 24 )
    return 0LL;
  v21 = (__int64 *)a5;
  if ( a5 + 8 < a5 || a5 + 8 > W32UserProbeAddress )
    v21 = (__int64 *)W32UserProbeAddress;
  v22 = *v21;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    if ( a3 )
    {
      v23 = *(_DWORD **)(a5 + 16);
      if ( (unsigned __int64)v23 >= W32UserProbeAddress )
        v23 = (_DWORD *)W32UserProbeAddress;
      *a3 = *v23;
    }
    if ( a4 )
    {
      v24 = (_DWORD *)(*(_QWORD *)(a5 + 16) + 4LL);
      if ( (unsigned __int64)v24 >= W32UserProbeAddress )
        v24 = (_DWORD *)W32UserProbeAddress;
      *a4 = *v24;
    }
  }
  return v22;
}
