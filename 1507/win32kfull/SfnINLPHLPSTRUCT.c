/*
 * XREFs of SfnINLPHLPSTRUCT @ 0x1C020FD60
 * Callers:
 *     <none>
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C005ADD0 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C005AE6C (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C005B560 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _W32ExceptionHandler @ 0x1C02D8144 (_W32ExceptionHandler.c)
 */

unsigned __int8 *__fastcall SfnINLPHLPSTRUCT(__int64 a1, unsigned int a2, __int64 a3, char *a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rsi
  unsigned __int8 *result; // rax
  unsigned __int8 *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // edi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 *v21; // rcx
  __int64 v22; // rdi
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-300h] BYREF
  int v24; // [rsp+40h] [rbp-2F8h] BYREF
  unsigned __int64 v25; // [rsp+48h] [rbp-2F0h] BYREF
  _QWORD v26[3]; // [rsp+58h] [rbp-2E0h] BYREF
  __int128 v27; // [rsp+70h] [rbp-2C8h]
  __int64 v28; // [rsp+80h] [rbp-2B8h]
  _QWORD v29[3]; // [rsp+88h] [rbp-2B0h] BYREF
  unsigned __int8 v30[96]; // [rsp+A0h] [rbp-298h] BYREF
  unsigned __int8 v31[512]; // [rsp+100h] [rbp-238h] BYREF

  if ( a1 )
    v10 = a1 - *(_QWORD *)(gptiCurrent + 432LL);
  else
    v10 = 0LL;
  result = AllocCallbackMessage(88, 1u, *(unsigned __int16 *)a4, v31, 1, 0x200uLL);
  v12 = result;
  if ( result )
  {
    if ( result != v30 && result != v31 )
      PushW32ThreadLock((__int64)result, v29, (__int64)Win32FreePool);
    *((_QWORD *)v12 + 5) = v10;
    *((_DWORD *)v12 + 12) = a2;
    *((_QWORD *)v12 + 7) = a3;
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v12, a4, *(unsigned __int16 *)a4, (void **)v12 + 8) < 0 )
      goto LABEL_23;
    *((_QWORD *)v12 + 9) = a5;
    *((_QWORD *)v12 + 10) = a6;
    v26[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v26;
    v26[1] = a1;
    if ( a1 )
      ++*(_DWORD *)(a1 + 8);
    v14 = *(_QWORD *)(gptiCurrent + 440LL);
    v27 = *(_OWORD *)(v14 + 64);
    RegionSize = *(_QWORD *)(v14 + 80);
    *(_QWORD *)(v14 + 72) = v10;
    v15 = a1 ? *(_QWORD *)a1 : 0LL;
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 64LL) = v15;
    v16 = a1 ? *(_QWORD *)(a1 + 264) : 0LL;
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 80LL) = v16;
    UserSessionSwitchLeaveCrit(v16, v13);
    EtwTraceBeginCallback(14LL);
    *((_QWORD *)v12 + 2) = 0LL;
    v17 = KeUserModeCallback(14LL, v12, *(unsigned int *)v12, &v25, &v24);
    EtwTraceEndCallback(14LL);
    EnterCrit(1LL);
    ThreadUnlock1(v19, v18);
    v20 = *(_QWORD *)(gptiCurrent + 440LL);
    *(_OWORD *)(v20 + 64) = v27;
    *(_QWORD *)(v20 + 80) = RegionSize;
    if ( v17 < 0 )
      goto LABEL_23;
    if ( v24 == 24 )
    {
      v21 = (__int64 *)v25;
      if ( v25 + 8 < v25 || v25 + 8 > W32UserProbeAddress )
        v21 = (__int64 *)W32UserProbeAddress;
      v22 = *v21;
      v28 = *v21;
    }
    else
    {
LABEL_23:
      v22 = 0LL;
    }
    if ( v12 != v30 && v12 != v31 )
    {
      if ( *((_QWORD *)v12 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v12 + 4, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)v29);
    }
    return (unsigned __int8 *)v22;
  }
  return result;
}
