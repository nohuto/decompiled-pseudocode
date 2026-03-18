/*
 * XREFs of SfnCOPYDATA @ 0x1C00F1580
 * Callers:
 *     xxxSendShutdownData @ 0x1C0215440 (xxxSendShutdownData.c)
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C005ADD0 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C005AE6C (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C005B560 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     _W32ExceptionHandler @ 0x1C02D8144 (_W32ExceptionHandler.c)
 */

unsigned __int8 *__fastcall SfnCOPYDATA(__int64 *a1, unsigned int a2, ULONG_PTR a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rsi
  unsigned int v9; // r13d
  unsigned __int8 *v10; // rbx
  __int64 v11; // rdx
  unsigned __int8 *result; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // edi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 *v20; // rcx
  __int64 v21; // rdi
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-318h] BYREF
  unsigned __int8 *v23; // [rsp+38h] [rbp-310h]
  int v24; // [rsp+40h] [rbp-308h] BYREF
  unsigned int v25; // [rsp+44h] [rbp-304h]
  _QWORD v26[2]; // [rsp+48h] [rbp-300h] BYREF
  _QWORD v27[3]; // [rsp+58h] [rbp-2F0h] BYREF
  __int128 v28; // [rsp+70h] [rbp-2D8h]
  _QWORD v29[3]; // [rsp+88h] [rbp-2C0h] BYREF
  _DWORD v30[28]; // [rsp+A0h] [rbp-2A8h] BYREF
  unsigned __int8 v31[512]; // [rsp+110h] [rbp-238h] BYREF

  RegionSize = a3;
  v25 = a2;
  if ( a1 )
    v8 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 432LL);
  else
    v8 = 0LL;
  if ( a4 )
  {
    v9 = *(_DWORD *)(a4 + 8);
    result = AllocCallbackMessage(112, 1u, v9, v31, 1, 0x200uLL);
    v10 = result;
    v23 = result;
    if ( !result )
      return result;
  }
  else
  {
    v9 = 0;
    v10 = (unsigned __int8 *)v30;
    v23 = (unsigned __int8 *)v30;
    memset(v30, 0, sizeof(v30));
    v30[0] = 112;
  }
  if ( v10 != (unsigned __int8 *)v30 && v10 != v31 )
    PushW32ThreadLock((__int64)v10, v29, (__int64)Win32FreePool);
  *((_QWORD *)v10 + 5) = v8;
  *((_DWORD *)v10 + 12) = v25;
  *((_QWORD *)v10 + 7) = RegionSize;
  if ( a4 )
  {
    *((_DWORD *)v10 + 16) = 1;
    *(_DWORD *)(a4 + 12) = 0;
    *(_OWORD *)(v10 + 72) = *(_OWORD *)a4;
    *((_QWORD *)v10 + 11) = *(_QWORD *)(a4 + 16);
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v10, *(char **)(a4 + 16), v9, (void **)v10 + 11) < 0 )
      goto LABEL_28;
  }
  else
  {
    *((_DWORD *)v10 + 16) = 0;
  }
  *((_QWORD *)v10 + 12) = a5;
  *((_QWORD *)v10 + 13) = a6;
  v27[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v27;
  v27[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v13 = *(_QWORD *)(gptiCurrent + 440LL);
  v28 = *(_OWORD *)(v13 + 64);
  RegionSize = *(_QWORD *)(v13 + 80);
  *(_QWORD *)(v13 + 72) = v8;
  if ( a1 )
    v14 = *a1;
  else
    v14 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 64LL) = v14;
  if ( a1 )
    v15 = a1[33];
  else
    v15 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 80LL) = v15;
  UserSessionSwitchLeaveCrit(v15, v11);
  EtwTraceBeginCallback(0LL);
  *((_QWORD *)v10 + 2) = 0LL;
  v16 = KeUserModeCallback(0LL, v10, *(unsigned int *)v10, v26, &v24);
  EtwTraceEndCallback(0LL);
  EnterCrit(1LL);
  ThreadUnlock1(v18, v17);
  v19 = *(_QWORD *)(gptiCurrent + 440LL);
  *(_OWORD *)(v19 + 64) = v28;
  *(_QWORD *)(v19 + 80) = RegionSize;
  if ( v16 >= 0 && v24 == 24 )
  {
    v20 = (__int64 *)v26[0];
    if ( (unsigned __int64)(v26[0] + 8LL) < v26[0] || (unsigned __int64)(v26[0] + 8LL) > W32UserProbeAddress )
      v20 = (__int64 *)W32UserProbeAddress;
    v21 = *v20;
    v26[1] = *v20;
    goto LABEL_29;
  }
LABEL_28:
  v21 = 0LL;
LABEL_29:
  if ( v10 != (unsigned __int8 *)v30 && v10 != v31 )
  {
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v10 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v29);
  }
  return (unsigned __int8 *)v21;
}
