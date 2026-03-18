/*
 * XREFs of SfnINLPHLPSTRUCT @ 0x1C0207EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0070458 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00704F4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

unsigned __int8 *__fastcall SfnINLPHLPSTRUCT(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        char *a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v10; // rsi
  unsigned __int8 *result; // rax
  __int64 v12; // r9
  unsigned __int8 *v13; // rbx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // edi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 *v23; // rcx
  __int64 v24; // rdi
  PVOID *v25; // rdx
  _DWORD v26[6]; // [rsp+30h] [rbp-338h] BYREF
  unsigned __int8 *v27; // [rsp+48h] [rbp-320h]
  unsigned __int64 v28; // [rsp+58h] [rbp-310h] BYREF
  __int64 v29; // [rsp+60h] [rbp-308h]
  ULONG_PTR RegionSize; // [rsp+68h] [rbp-300h] BYREF
  __int128 v31; // [rsp+70h] [rbp-2F8h]
  __int64 v32; // [rsp+80h] [rbp-2E8h]
  _QWORD v33[3]; // [rsp+A0h] [rbp-2C8h] BYREF
  _QWORD v34[3]; // [rsp+B8h] [rbp-2B0h] BYREF
  unsigned __int8 v35[96]; // [rsp+D0h] [rbp-298h] BYREF
  unsigned __int8 v36[512]; // [rsp+130h] [rbp-238h] BYREF

  v29 = 0LL;
  if ( a1 )
    v10 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v10 = 0LL;
  result = AllocCallbackMessage(88, 1u, *(unsigned __int16 *)a4, v36, 1, 0x200uLL);
  v13 = result;
  v27 = result;
  if ( result )
  {
    if ( result != v35 && result != v36 )
      PushW32ThreadLock((__int64)result, v34, (__int64)Win32FreePool, v12);
    *((_QWORD *)v13 + 5) = v10;
    *((_DWORD *)v13 + 12) = a2;
    *((_QWORD *)v13 + 7) = a3;
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v13, a4, *(unsigned __int16 *)a4, (void **)v13 + 8) < 0 )
      goto LABEL_26;
    *((_QWORD *)v13 + 9) = a5;
    *((_QWORD *)v13 + 10) = a6;
    v33[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v33;
    v33[1] = a1;
    if ( a1 )
      ++*((_DWORD *)a1 + 2);
    v16 = *(_QWORD *)(gptiCurrent + 432LL);
    v31 = *(_OWORD *)(v16 + 64);
    v32 = *(_QWORD *)(v16 + 80);
    *(_QWORD *)(v16 + 72) = v10;
    if ( a1 )
      v17 = *a1;
    else
      v17 = 0LL;
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v17;
    if ( a1 )
      v18 = a1[33];
    else
      v18 = 0LL;
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v18;
    if ( gdwInAtomicOperation )
    {
      v18 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v18, gdwInAtomicOperation);
    EtwTraceBeginCallback(14LL);
    *((_QWORD *)v13 + 2) = 0LL;
    v19 = KeUserModeCallback(14LL, v13, *(unsigned int *)v13, &v28, v26);
    EtwTraceEndCallback(14LL);
    EnterCrit(0LL, 1LL);
    ThreadUnlock1(v21, v20);
    v22 = *(_QWORD *)(gptiCurrent + 432LL);
    *(_OWORD *)(v22 + 64) = v31;
    *(_QWORD *)(v22 + 80) = v32;
    if ( v19 < 0 )
      goto LABEL_26;
    if ( v26[0] == 24 )
    {
      v23 = (__int64 *)v28;
      if ( v28 + 8 < v28 || v28 + 8 > W32UserProbeAddress )
        v23 = (__int64 *)W32UserProbeAddress;
      v24 = *v23;
      v29 = *v23;
    }
    else
    {
LABEL_26:
      v24 = 0LL;
    }
    if ( v13 != v35 && v13 != v36 )
    {
      v25 = (PVOID *)(v13 + 32);
      if ( *((_QWORD *)v13 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v25, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)v34, (__int64)v25, v14, v15);
    }
    return (unsigned __int8 *)v24;
  }
  return result;
}
