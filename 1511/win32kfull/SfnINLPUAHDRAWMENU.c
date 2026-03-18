/*
 * XREFs of SfnINLPUAHDRAWMENU @ 0x1C00ED1C0
 * Callers:
 *     <none>
 * Callees:
 *     _ServerFixupMenuDC @ 0x1C00ED968 (_ServerFixupMenuDC.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     _W32ExceptionHandler @ 0x1C02D94EC (_W32ExceptionHandler.c)
 */

__int64 __fastcall SfnINLPUAHDRAWMENU(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 *v22; // rcx
  __int64 v23; // rbx
  _QWORD v25[8]; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v26; // [rsp+70h] [rbp-78h]
  _QWORD v27[13]; // [rsp+80h] [rbp-68h] BYREF
  __int64 v28; // [rsp+F0h] [rbp+8h]
  int v29; // [rsp+F8h] [rbp+10h] BYREF
  unsigned __int64 v30; // [rsp+100h] [rbp+18h] BYREF

  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v12 = 0LL;
  memset(v25, 0, sizeof(v25));
  v28 = 0LL;
  v14 = ServerFixupMenuDC(*(HDC *)(a4 + 8));
  if ( v14 )
  {
    v28 = *(_QWORD *)(a4 + 8);
    *(_QWORD *)(a4 + 8) = v14;
  }
  v25[0] = v12;
  LODWORD(v25[1]) = a2 & 0x1FFFF;
  v25[2] = a3;
  *(_DWORD *)(a4 + 20) = 0;
  *(_OWORD *)&v25[3] = *(_OWORD *)a4;
  v25[5] = *(_QWORD *)(a4 + 16);
  v25[6] = a5;
  v25[7] = a6;
  v27[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v27;
  v27[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v15 = *(_QWORD *)(gptiCurrent + 432LL);
  v26 = *(_OWORD *)(v15 + 64);
  a5 = *(_QWORD *)(v15 + 80);
  *(_QWORD *)(v15 + 72) = v12;
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
  UserSessionSwitchLeaveCrit(v17, v13);
  EtwTraceBeginCallback(105LL);
  v18 = KeUserModeCallback(105LL, v25, 64LL, &v30, &v29);
  EtwTraceEndCallback(105LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v20, v19);
  v21 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v21 + 64) = v26;
  *(_QWORD *)(v21 + 80) = a5;
  if ( v18 < 0 || v29 != 24 )
    return 0LL;
  v22 = (__int64 *)v30;
  if ( v30 + 8 < v30 || v30 + 8 > W32UserProbeAddress )
    v22 = (__int64 *)W32UserProbeAddress;
  v23 = *v22;
  v27[3] = *v22;
  if ( v14 )
  {
    _ReleaseDC(v14);
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
      *(_QWORD *)(a4 + 8) = v28;
  }
  return v23;
}
