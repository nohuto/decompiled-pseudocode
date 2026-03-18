/*
 * XREFs of SfnINLPUAHDRAWMENUITEM @ 0x1C00E7350
 * Callers:
 *     <none>
 * Callees:
 *     _ServerFixupMenuDC @ 0x1C00E7618 (_ServerFixupMenuDC.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     _W32ExceptionHandler @ 0x1C02D8144 (_W32ExceptionHandler.c)
 */

__int64 __fastcall SfnINLPUAHDRAWMENUITEM(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 v11; // rsi
  __int64 v12; // r12
  __int64 v13; // rax
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
  int v25; // [rsp+30h] [rbp-148h] BYREF
  __int64 v26; // [rsp+38h] [rbp-140h]
  _QWORD v27[2]; // [rsp+40h] [rbp-138h] BYREF
  __int128 v28; // [rsp+50h] [rbp-128h]
  _QWORD v29[4]; // [rsp+60h] [rbp-118h] BYREF
  _QWORD v30[24]; // [rsp+80h] [rbp-F8h] BYREF

  LODWORD(v26) = a2;
  if ( a1 )
    v11 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 432LL);
  else
    v11 = 0LL;
  memset(v30, 0, 0xB8uLL);
  v12 = 0LL;
  v13 = ServerFixupMenuDC(*(HDC *)(a4 + 32));
  v14 = v13;
  if ( v13 )
  {
    v12 = *(_QWORD *)(a4 + 32);
    *(_QWORD *)(a4 + 32) = v13;
    *(_QWORD *)(a4 + 72) = v13;
  }
  v30[0] = v11;
  LODWORD(v30[1]) = v26;
  v30[2] = a3;
  *(_DWORD *)(a4 + 20) = 0;
  *(_DWORD *)(a4 + 84) = 0;
  *(_OWORD *)&v30[3] = *(_OWORD *)a4;
  *(_OWORD *)&v30[5] = *(_OWORD *)(a4 + 16);
  *(_OWORD *)&v30[7] = *(_OWORD *)(a4 + 32);
  *(_OWORD *)&v30[9] = *(_OWORD *)(a4 + 48);
  *(_OWORD *)&v30[11] = *(_OWORD *)(a4 + 64);
  *(_OWORD *)&v30[13] = *(_OWORD *)(a4 + 80);
  *(_OWORD *)&v30[15] = *(_OWORD *)(a4 + 96);
  *(_OWORD *)&v30[17] = *(_OWORD *)(a4 + 112);
  *(_OWORD *)&v30[19] = *(_OWORD *)(a4 + 128);
  v30[21] = a5;
  v30[22] = a6;
  v29[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v29;
  v29[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v15 = *(_QWORD *)(gptiCurrent + 440LL);
  v28 = *(_OWORD *)(v15 + 64);
  v26 = *(_QWORD *)(v15 + 80);
  *(_QWORD *)(v15 + 72) = v11;
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
  UserSessionSwitchLeaveCrit(v17, 128LL);
  EtwTraceBeginCallback(106LL);
  v18 = KeUserModeCallback(106LL, v30, 184LL, v27, &v25);
  EtwTraceEndCallback(106LL);
  EnterCrit(1LL);
  ThreadUnlock1(v20, v19);
  v21 = *(_QWORD *)(gptiCurrent + 440LL);
  *(_OWORD *)(v21 + 64) = v28;
  *(_QWORD *)(v21 + 80) = v26;
  if ( v18 < 0 || v25 != 24 )
    return 0LL;
  v22 = (__int64 *)v27[0];
  if ( (unsigned __int64)(v27[0] + 8LL) < v27[0] || (unsigned __int64)(v27[0] + 8LL) > W32UserProbeAddress )
    v22 = (__int64 *)W32UserProbeAddress;
  v23 = *v22;
  v27[1] = *v22;
  if ( v14 )
  {
    _ReleaseDC(v14);
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
    {
      *(_QWORD *)(a4 + 32) = v12;
      *(_QWORD *)(a4 + 72) = v12;
    }
  }
  return v23;
}
