/*
 * XREFs of SfnINLPDRAWITEMSTRUCT @ 0x1C0113DA0
 * Callers:
 *     <none>
 * Callees:
 *     _WindowFromDC @ 0x1C00E39B0 (_WindowFromDC.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     _W32ExceptionHandler @ 0x1C02D8144 (_W32ExceptionHandler.c)
 */

__int64 __fastcall SfnINLPDRAWITEMSTRUCT(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 v11; // r14
  __int64 v12; // r12
  unsigned int CurrentProcessId; // ebx
  __int64 v14; // rdx
  HDC v15; // rcx
  struct tagWND *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 *v24; // rcx
  __int64 v25; // rbx
  int v27; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v28; // [rsp+38h] [rbp-F0h]
  _QWORD v29[2]; // [rsp+40h] [rbp-E8h] BYREF
  __int128 v30; // [rsp+50h] [rbp-D8h]
  _QWORD v31[4]; // [rsp+60h] [rbp-C8h] BYREF
  _QWORD v32[14]; // [rsp+80h] [rbp-A8h] BYREF

  LODWORD(v28) = a2;
  if ( a1 )
    v11 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 432LL);
  else
    v11 = 0LL;
  memset(v32, 0, 0x68uLL);
  v12 = 0LL;
  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  if ( (unsigned int)GreGetObjectOwner(*(_QWORD *)(a4 + 32), 1LL) != (CurrentProcessId & 0xFFFFFFFC) )
  {
    v15 = *(HDC *)(a4 + 32);
    if ( v15 )
    {
      v16 = WindowFromDC(v15);
      if ( v16 )
      {
        v12 = *(_QWORD *)(a4 + 32);
        *(_QWORD *)(a4 + 32) = _GetDC(v16);
      }
    }
  }
  v32[0] = v11;
  LODWORD(v32[1]) = v28;
  v32[2] = a3;
  *(_DWORD *)(a4 + 20) = 0;
  *(_OWORD *)&v32[3] = *(_OWORD *)a4;
  *(_OWORD *)&v32[5] = *(_OWORD *)(a4 + 16);
  *(_OWORD *)&v32[7] = *(_OWORD *)(a4 + 32);
  *(_OWORD *)&v32[9] = *(_OWORD *)(a4 + 48);
  v32[11] = a5;
  v32[12] = a6;
  v31[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v31;
  v31[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v17 = *(_QWORD *)(gptiCurrent + 440LL);
  v30 = *(_OWORD *)(v17 + 64);
  v28 = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(v17 + 72) = v11;
  if ( a1 )
    v18 = *a1;
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 64LL) = v18;
  if ( a1 )
    v19 = a1[33];
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 80LL) = v19;
  UserSessionSwitchLeaveCrit(v19, v14);
  EtwTraceBeginCallback(12LL);
  v20 = KeUserModeCallback(12LL, v32, 104LL, v29, &v27);
  EtwTraceEndCallback(12LL);
  EnterCrit(1LL);
  ThreadUnlock1(v22, v21);
  v23 = *(_QWORD *)(gptiCurrent + 440LL);
  *(_OWORD *)(v23 + 64) = v30;
  *(_QWORD *)(v23 + 80) = v28;
  if ( v20 < 0 || v27 != 24 )
    return 0LL;
  v24 = (__int64 *)v29[0];
  if ( (unsigned __int64)(v29[0] + 8LL) < v29[0] || (unsigned __int64)(v29[0] + 8LL) > W32UserProbeAddress )
    v24 = (__int64 *)W32UserProbeAddress;
  v25 = *v24;
  v29[1] = *v24;
  if ( v12 && (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    _ReleaseDC(*(_QWORD *)(a4 + 32));
    *(_QWORD *)(a4 + 32) = v12;
  }
  return v25;
}
