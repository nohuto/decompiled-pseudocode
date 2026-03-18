/*
 * XREFs of SfnPOPTINLPUINT @ 0x1C0212320
 * Callers:
 *     <none>
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C005ADD0 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C005AE6C (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C005B560 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     _W32ExceptionHandler @ 0x1C02D8144 (_W32ExceptionHandler.c)
 */

unsigned __int8 *__fastcall SfnPOPTINLPUINT(__int64 *a1, int a2, __int64 a3, char *a4, __int64 a5, __int64 a6)
{
  unsigned __int8 *v9; // rbx
  __int64 v10; // rsi
  unsigned int v11; // edx
  unsigned __int64 v12; // r14
  unsigned __int8 *result; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 *v22; // rcx
  __int64 v23; // rdi
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-318h] BYREF
  int v25; // [rsp+38h] [rbp-310h] BYREF
  __int64 v26; // [rsp+40h] [rbp-308h]
  unsigned __int64 v27; // [rsp+48h] [rbp-300h] BYREF
  _QWORD v28[3]; // [rsp+58h] [rbp-2F0h] BYREF
  __int128 v29; // [rsp+70h] [rbp-2D8h]
  __int64 v30; // [rsp+80h] [rbp-2C8h]
  _QWORD v31[3]; // [rsp+88h] [rbp-2C0h] BYREF
  _DWORD v32[24]; // [rsp+A0h] [rbp-2A8h] BYREF
  unsigned __int8 v33[512]; // [rsp+100h] [rbp-248h] BYREF

  LODWORD(v26) = a2;
  v9 = (unsigned __int8 *)v32;
  if ( a1 )
    v10 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 432LL);
  else
    v10 = 0LL;
  if ( a4 )
  {
    v11 = 1;
    v12 = 4LL * (unsigned int)a3;
    if ( v12 > 0xFFFFFFFF )
      goto LABEL_33;
  }
  else
  {
    LODWORD(v12) = 0;
    v11 = 0;
  }
  if ( v11 )
  {
    result = AllocCallbackMessage(88, v11, (unsigned int)v12, v33, 1, 0x200uLL);
    v9 = result;
    RegionSize = (ULONG_PTR)result;
    if ( !result )
      return result;
  }
  else
  {
    v9 = (unsigned __int8 *)v32;
    RegionSize = (ULONG_PTR)v32;
    memset(v32, 0, 0x58uLL);
    v32[0] = 88;
  }
  if ( v9 != (unsigned __int8 *)v32 && v9 != v33 )
    PushW32ThreadLock((__int64)v9, v31, (__int64)Win32FreePool);
  *((_QWORD *)v9 + 5) = v10;
  *((_DWORD *)v9 + 12) = v26;
  *((_QWORD *)v9 + 7) = a3;
  if ( a4 )
  {
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v9, a4, v12, (void **)v9 + 8) < 0 )
      goto LABEL_33;
  }
  else
  {
    *((_QWORD *)v9 + 8) = 0LL;
  }
  *((_QWORD *)v9 + 9) = a5;
  *((_QWORD *)v9 + 10) = a6;
  v28[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v28;
  v28[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v15 = *(_QWORD *)(gptiCurrent + 440LL);
  v29 = *(_OWORD *)(v15 + 64);
  v26 = *(_QWORD *)(v15 + 80);
  *(_QWORD *)(v15 + 72) = v10;
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
  UserSessionSwitchLeaveCrit(v17, v14);
  EtwTraceBeginCallback(36LL);
  *((_QWORD *)v9 + 2) = 0LL;
  v18 = KeUserModeCallback(36LL, v9, *(unsigned int *)v9, &v27, &v25);
  EtwTraceEndCallback(36LL);
  EnterCrit(1LL);
  ThreadUnlock1(v20, v19);
  v21 = *(_QWORD *)(gptiCurrent + 440LL);
  *(_OWORD *)(v21 + 64) = v29;
  *(_QWORD *)(v21 + 80) = v26;
  if ( v18 >= 0 && v25 == 24 )
  {
    v22 = (__int64 *)v27;
    if ( v27 + 8 < v27 || v27 + 8 > W32UserProbeAddress )
      v22 = (__int64 *)W32UserProbeAddress;
    v23 = *v22;
    v30 = *v22;
    goto LABEL_34;
  }
LABEL_33:
  v23 = 0LL;
LABEL_34:
  if ( v9 != (unsigned __int8 *)v32 && v9 != v33 )
  {
    if ( *((_QWORD *)v9 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v9 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v31);
  }
  return (unsigned __int8 *)v23;
}
