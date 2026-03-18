/*
 * XREFs of SfnCOPYDATA @ 0x1C0114500
 * Callers:
 *     xxxSendShutdownData @ 0x1C01546B0 (xxxSendShutdownData.c)
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0070458 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00704F4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall SfnCOPYDATA(__int64 *a1, int a2, ULONG_PTR a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rsi
  unsigned int v9; // r12d
  unsigned __int8 *v10; // rbx
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // edi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 *v21; // rcx
  __int64 v22; // rdi
  PVOID *v23; // rdx
  _DWORD v26[5]; // [rsp+3Ch] [rbp-33Ch] BYREF
  ULONG_PTR RegionSize[2]; // [rsp+50h] [rbp-328h] BYREF
  unsigned __int64 v28; // [rsp+60h] [rbp-318h] BYREF
  __int64 v29; // [rsp+68h] [rbp-310h]
  __int128 v30; // [rsp+70h] [rbp-308h]
  __int64 v31; // [rsp+80h] [rbp-2F8h]
  _QWORD v32[3]; // [rsp+A0h] [rbp-2D8h] BYREF
  _QWORD v33[3]; // [rsp+B8h] [rbp-2C0h] BYREF
  _DWORD v34[28]; // [rsp+D0h] [rbp-2A8h] BYREF
  unsigned __int8 v35[512]; // [rsp+140h] [rbp-238h] BYREF

  RegionSize[0] = a3;
  v29 = 0LL;
  if ( a1 )
    v8 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v8 = 0LL;
  if ( a4 )
  {
    v9 = *(_DWORD *)(a4 + 8);
    v10 = AllocCallbackMessage(112, 1u, v9, v35, 1, 0x200uLL);
    if ( !v10 )
      return 0LL;
  }
  else
  {
    v9 = 0;
    v10 = (unsigned __int8 *)v34;
    memset(v34, 0, sizeof(v34));
    v34[0] = 112;
  }
  if ( v10 != (unsigned __int8 *)v34 && v10 != v35 )
    PushW32ThreadLock((__int64)v10, v33, (__int64)Win32FreePool, v11);
  *((_QWORD *)v10 + 5) = v8;
  *((_DWORD *)v10 + 12) = a2;
  *((_QWORD *)v10 + 7) = RegionSize[0];
  if ( a4 )
  {
    *((_DWORD *)v10 + 16) = 1;
    *(_DWORD *)(a4 + 12) = 0;
    *(_OWORD *)(v10 + 72) = *(_OWORD *)a4;
    *((_QWORD *)v10 + 11) = *(_QWORD *)(a4 + 16);
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v10, *(char **)(a4 + 16), v9, (void **)v10 + 11) < 0 )
      goto LABEL_32;
  }
  else
  {
    *((_DWORD *)v10 + 16) = 0;
  }
  *((_QWORD *)v10 + 12) = a5;
  *((_QWORD *)v10 + 13) = a6;
  v32[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v32;
  v32[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v14 = *(_QWORD *)(gptiCurrent + 432LL);
  v30 = *(_OWORD *)(v14 + 64);
  v31 = *(_QWORD *)(v14 + 80);
  *(_QWORD *)(v14 + 72) = v8;
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
  EtwTraceBeginCallback(0LL);
  *((_QWORD *)v10 + 2) = 0LL;
  v17 = KeUserModeCallback(0LL, v10, *(unsigned int *)v10, &v28, v26);
  EtwTraceEndCallback(0LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v19, v18);
  v20 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v20 + 64) = v30;
  *(_QWORD *)(v20 + 80) = v31;
  if ( v17 >= 0 && v26[0] == 24 )
  {
    v21 = (__int64 *)v28;
    if ( v28 + 8 < v28 || v28 + 8 > W32UserProbeAddress )
      v21 = (__int64 *)W32UserProbeAddress;
    v22 = *v21;
    v29 = *v21;
    goto LABEL_25;
  }
LABEL_32:
  v22 = 0LL;
LABEL_25:
  if ( v10 != (unsigned __int8 *)v34 && v10 != v35 )
  {
    v23 = (PVOID *)(v10 + 32);
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v23, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v33, (__int64)v23, v12, v13);
  }
  return v22;
}
