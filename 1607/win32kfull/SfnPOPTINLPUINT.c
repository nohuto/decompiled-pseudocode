/*
 * XREFs of SfnPOPTINLPUINT @ 0x1C020AB30
 * Callers:
 *     <none>
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0070458 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00704F4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

unsigned __int8 *__fastcall SfnPOPTINLPUINT(
        __int64 *a1,
        unsigned int a2,
        ULONG_PTR a3,
        char *a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int8 *v8; // rbx
  __int64 v9; // r14
  unsigned int v10; // edx
  unsigned __int64 v11; // rsi
  unsigned __int8 *result; // rax
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
  _DWORD v25[6]; // [rsp+40h] [rbp-338h] BYREF
  ULONG_PTR RegionSize[2]; // [rsp+58h] [rbp-320h] BYREF
  unsigned __int64 v27; // [rsp+68h] [rbp-310h] BYREF
  __int64 v28; // [rsp+70h] [rbp-308h]
  __int128 v29; // [rsp+78h] [rbp-300h]
  __int64 v30; // [rsp+88h] [rbp-2F0h]
  _QWORD v31[3]; // [rsp+A8h] [rbp-2D0h] BYREF
  _QWORD v32[4]; // [rsp+C0h] [rbp-2B8h] BYREF
  _DWORD v33[24]; // [rsp+E0h] [rbp-298h] BYREF
  unsigned __int8 v34[512]; // [rsp+140h] [rbp-238h] BYREF

  RegionSize[0] = a3;
  v8 = (unsigned __int8 *)v33;
  v28 = 0LL;
  if ( a1 )
    v9 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v9 = 0LL;
  if ( a4 )
  {
    v10 = 1;
    v11 = 4LL * (unsigned int)a3;
    if ( v11 > 0xFFFFFFFF )
      goto LABEL_36;
  }
  else
  {
    LODWORD(v11) = 0;
    v10 = 0;
  }
  if ( v10 )
  {
    result = AllocCallbackMessage(88, v10, (unsigned int)v11, v34, 1, 0x200uLL);
    v8 = result;
    if ( !result )
      return result;
  }
  else
  {
    v8 = (unsigned __int8 *)v33;
    memset(v33, 0, 0x58uLL);
    v33[0] = 88;
  }
  if ( v8 != (unsigned __int8 *)v33 && v8 != v34 )
    PushW32ThreadLock((__int64)v8, v32, (__int64)Win32FreePool, v13);
  *((_QWORD *)v8 + 5) = v9;
  *((_DWORD *)v8 + 12) = a2;
  *((_QWORD *)v8 + 7) = RegionSize[0];
  if ( a4 )
  {
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v8, a4, v11, (void **)v8 + 8) < 0 )
      goto LABEL_36;
  }
  else
  {
    *((_QWORD *)v8 + 8) = 0LL;
  }
  *((_QWORD *)v8 + 9) = a5;
  *((_QWORD *)v8 + 10) = a6;
  v31[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v31;
  v31[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v14 = *(_QWORD *)(gptiCurrent + 432LL);
  v29 = *(_OWORD *)(v14 + 64);
  v30 = *(_QWORD *)(v14 + 80);
  *(_QWORD *)(v14 + 72) = v9;
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
  EtwTraceBeginCallback(36LL);
  *((_QWORD *)v8 + 2) = 0LL;
  v17 = KeUserModeCallback(36LL, v8, *(unsigned int *)v8, &v27, v25);
  EtwTraceEndCallback(36LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v19, v18);
  v20 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v20 + 64) = v29;
  *(_QWORD *)(v20 + 80) = v30;
  if ( v17 >= 0 && v25[0] == 24 )
  {
    v21 = (__int64 *)v27;
    if ( v27 + 8 < v27 || v27 + 8 > W32UserProbeAddress )
      v21 = (__int64 *)W32UserProbeAddress;
    v22 = *v21;
    v28 = *v21;
    goto LABEL_37;
  }
LABEL_36:
  v22 = 0LL;
LABEL_37:
  if ( v8 != (unsigned __int8 *)v33 && v8 != v34 )
  {
    v23 = (PVOID *)(v8 + 32);
    if ( *((_QWORD *)v8 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v23, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v32, (__int64)v23, a3, (__int64)a4);
  }
  return (unsigned __int8 *)v22;
}
