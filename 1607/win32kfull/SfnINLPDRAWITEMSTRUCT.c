/*
 * XREFs of SfnINLPDRAWITEMSTRUCT @ 0x1C01469C0
 * Callers:
 *     <none>
 * Callees:
 *     _WindowFromDC @ 0x1C005CB00 (_WindowFromDC.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
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
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 *v21; // rcx
  __int64 v22; // rbx
  HDC v24; // rcx
  struct tagWND *v25; // rax
  _DWORD v27[7]; // [rsp+34h] [rbp-124h] BYREF
  unsigned __int64 v28; // [rsp+50h] [rbp-108h] BYREF
  __int64 v29; // [rsp+58h] [rbp-100h]
  __int128 v30; // [rsp+60h] [rbp-F8h]
  __int64 v31; // [rsp+70h] [rbp-E8h]
  _QWORD v32[4]; // [rsp+90h] [rbp-C8h] BYREF
  _QWORD v33[14]; // [rsp+B0h] [rbp-A8h] BYREF

  v29 = 0LL;
  if ( a1 )
    v11 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v11 = 0LL;
  memset(v33, 0, 0x68uLL);
  v12 = 0LL;
  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  if ( (unsigned int)GreGetObjectOwner(*(_QWORD *)(a4 + 32), 1LL) != (CurrentProcessId & 0xFFFFFFFC) )
  {
    v24 = *(HDC *)(a4 + 32);
    if ( v24 )
    {
      v25 = WindowFromDC(v24);
      if ( v25 )
      {
        v12 = *(_QWORD *)(a4 + 32);
        *(_QWORD *)(a4 + 32) = _GetDC(v25);
      }
    }
  }
  v33[0] = v11;
  LODWORD(v33[1]) = a2;
  v33[2] = a3;
  *(_DWORD *)(a4 + 20) = 0;
  *(_OWORD *)&v33[3] = *(_OWORD *)a4;
  *(_OWORD *)&v33[5] = *(_OWORD *)(a4 + 16);
  *(_OWORD *)&v33[7] = *(_OWORD *)(a4 + 32);
  *(_OWORD *)&v33[9] = *(_OWORD *)(a4 + 48);
  v33[11] = a5;
  v33[12] = a6;
  v32[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v32;
  v32[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v14 = *(_QWORD *)(gptiCurrent + 432LL);
  v30 = *(_OWORD *)(v14 + 64);
  v31 = *(_QWORD *)(v14 + 80);
  *(_QWORD *)(v14 + 72) = v11;
  if ( a1 )
    v15 = *a1;
  else
    v15 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v15;
  if ( a1 )
    v16 = a1[33];
  else
    v16 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v16;
  if ( gdwInAtomicOperation )
  {
    v16 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v16, gdwInAtomicOperation);
  EtwTraceBeginCallback(12LL);
  v17 = KeUserModeCallback(12LL, v33, 104LL, &v28, v27);
  EtwTraceEndCallback(12LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v19, v18);
  v20 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v20 + 64) = v30;
  *(_QWORD *)(v20 + 80) = v31;
  if ( v17 < 0 || v27[0] != 24 )
    return 0LL;
  v21 = (__int64 *)v28;
  if ( v28 + 8 < v28 || v28 + 8 > W32UserProbeAddress )
    v21 = (__int64 *)W32UserProbeAddress;
  v22 = *v21;
  v29 = *v21;
  if ( v12 && (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    _ReleaseDC(*(_QWORD *)(a4 + 32));
    *(_QWORD *)(a4 + 32) = v12;
  }
  return v22;
}
