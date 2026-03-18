/*
 * XREFs of SfnCOPYGLOBALDATA @ 0x1C020E100
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C005ADD0 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C005AE6C (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C005B560 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _W32ExceptionHandler @ 0x1C02D8144 (_W32ExceptionHandler.c)
 */

unsigned __int8 *__fastcall SfnCOPYGLOBALDATA(__int64 a1, __int64 a2, __int64 a3, char *a4)
{
  unsigned int v5; // r15d
  __int64 v7; // rsi
  unsigned __int8 *result; // rax
  unsigned __int8 *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 *v18; // rcx
  __int64 v19; // rdi
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-2F0h] BYREF
  int v21; // [rsp+40h] [rbp-2E8h] BYREF
  unsigned __int64 v22; // [rsp+48h] [rbp-2E0h] BYREF
  _QWORD v23[3]; // [rsp+58h] [rbp-2D0h] BYREF
  __int128 v24; // [rsp+70h] [rbp-2B8h]
  __int64 v25; // [rsp+80h] [rbp-2A8h]
  _QWORD v26[3]; // [rsp+88h] [rbp-2A0h] BYREF
  unsigned __int8 v27[64]; // [rsp+A0h] [rbp-288h] BYREF
  unsigned __int8 v28[512]; // [rsp+E0h] [rbp-248h] BYREF

  v5 = a3;
  if ( a1 )
    v7 = a1 - *(_QWORD *)(gptiCurrent + 432LL);
  else
    v7 = 0LL;
  result = AllocCallbackMessage(56, 1u, a3, v28, 1, 0x200uLL);
  v9 = result;
  if ( result )
  {
    if ( result != v27 && result != v28 )
      PushW32ThreadLock((__int64)result, v26, (__int64)Win32FreePool);
    if ( !a4 )
      goto LABEL_24;
    *((_DWORD *)v9 + 10) = v5;
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v9, a4, v5, (void **)v9 + 6) < 0 )
      goto LABEL_24;
    v23[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v23;
    v23[1] = a1;
    if ( a1 )
      ++*(_DWORD *)(a1 + 8);
    v11 = *(_QWORD *)(gptiCurrent + 440LL);
    v24 = *(_OWORD *)(v11 + 64);
    RegionSize = *(_QWORD *)(v11 + 80);
    *(_QWORD *)(v11 + 72) = v7;
    v12 = a1 ? *(_QWORD *)a1 : 0LL;
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 64LL) = v12;
    v13 = a1 ? *(_QWORD *)(a1 + 264) : 0LL;
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 80LL) = v13;
    UserSessionSwitchLeaveCrit(v13, v10);
    EtwTraceBeginCallback(1LL);
    *((_QWORD *)v9 + 2) = 0LL;
    v14 = KeUserModeCallback(1LL, v9, *(unsigned int *)v9, &v22, &v21);
    EtwTraceEndCallback(1LL);
    EnterCrit(1LL);
    ThreadUnlock1(v16, v15);
    v17 = *(_QWORD *)(gptiCurrent + 440LL);
    *(_OWORD *)(v17 + 64) = v24;
    *(_QWORD *)(v17 + 80) = RegionSize;
    if ( v14 < 0 )
      goto LABEL_24;
    if ( v21 == 24 )
    {
      v18 = (__int64 *)v22;
      if ( v22 + 8 < v22 || v22 + 8 > W32UserProbeAddress )
        v18 = (__int64 *)W32UserProbeAddress;
      v19 = *v18;
      v25 = *v18;
    }
    else
    {
LABEL_24:
      v19 = 0LL;
    }
    if ( v9 != v27 && v9 != v28 )
    {
      if ( *((_QWORD *)v9 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v9 + 4, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)v26);
    }
    return (unsigned __int8 *)v19;
  }
  return result;
}
