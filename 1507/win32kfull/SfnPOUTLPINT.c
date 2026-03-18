/*
 * XREFs of SfnPOUTLPINT @ 0x1C0212680
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C005A7F0 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C005ADD0 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C005AE6C (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C005B560 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     _W32ExceptionHandler @ 0x1C02D8144 (_W32ExceptionHandler.c)
 */

unsigned __int8 *__fastcall SfnPOUTLPINT(
        __int64 *a1,
        int a2,
        __int64 a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  unsigned __int8 *v11; // rbx
  __int64 v12; // r14
  unsigned __int64 v13; // rsi
  unsigned __int8 *result; // rax
  void *v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // edi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 *v24; // rcx
  __int64 v25; // rdi
  unsigned __int64 v26; // rcx
  void *v27; // rdx
  size_t v28; // r8
  int v29; // [rsp+38h] [rbp-360h] BYREF
  size_t Size; // [rsp+40h] [rbp-358h] BYREF
  void *v31; // [rsp+48h] [rbp-350h]
  unsigned __int64 v32; // [rsp+50h] [rbp-348h] BYREF
  int v33; // [rsp+58h] [rbp-340h]
  __int128 v34; // [rsp+60h] [rbp-338h]
  void *Src; // [rsp+70h] [rbp-328h]
  __int128 v36; // [rsp+78h] [rbp-320h]
  __int64 v37; // [rsp+88h] [rbp-310h]
  __int64 v38; // [rsp+98h] [rbp-300h]
  _QWORD v39[3]; // [rsp+A0h] [rbp-2F8h] BYREF
  __int128 v40; // [rsp+B8h] [rbp-2E0h]
  void *v41; // [rsp+C8h] [rbp-2D0h]
  _QWORD v42[4]; // [rsp+D0h] [rbp-2C8h] BYREF
  unsigned __int8 v43[96]; // [rsp+F0h] [rbp-2A8h] BYREF
  unsigned __int8 v44[512]; // [rsp+150h] [rbp-248h] BYREF

  v31 = a4;
  v11 = v43;
  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 432LL);
  else
    v12 = 0LL;
  v13 = 4LL * (unsigned int)a3;
  if ( v13 > 0xFFFFFFFF )
    goto LABEL_40;
  v33 = 4 * a3;
  Size = (unsigned int)v13;
  result = AllocCallbackMessage(96, 1u, (unsigned int)v13, v44, 0, 0x200uLL);
  v11 = result;
  if ( !result )
    return result;
  if ( result != v43 && result != v44 )
    PushW32ThreadLock((__int64)result, v42, (__int64)Win32FreePool);
  *((_QWORD *)v11 + 5) = v12;
  *((_DWORD *)v11 + 12) = a2;
  *((_QWORD *)v11 + 7) = a3;
  *((_QWORD *)v11 + 8) = a5;
  *((_QWORD *)v11 + 9) = a6;
  if ( (a7 & 2) != 0 )
  {
    *((_DWORD *)v11 + 22) = v13;
    v15 = v31;
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v11, (char *)v31, v13, (void **)v11 + 10) < 0 )
      goto LABEL_40;
  }
  else
  {
    if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v11, v13, (void **)v11 + 10) < 0 )
      goto LABEL_40;
    *((_DWORD *)v11 + 22) = v13;
    v15 = v31;
  }
  v39[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v39;
  v39[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v17 = *(_QWORD *)(gptiCurrent + 440LL);
  v36 = *(_OWORD *)(v17 + 64);
  v37 = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(v17 + 72) = v12;
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
  UserSessionSwitchLeaveCrit(v19, v16);
  EtwTraceBeginCallback(37LL);
  *((_QWORD *)v11 + 2) = 0LL;
  v20 = KeUserModeCallback(37LL, v11, *(unsigned int *)v11, &v32, &v29);
  EtwTraceEndCallback(37LL);
  EnterCrit(1LL);
  ThreadUnlock1(v22, v21);
  v23 = *(_QWORD *)(gptiCurrent + 440LL);
  *(_OWORD *)(v23 + 64) = v36;
  *(_QWORD *)(v23 + 80) = v37;
  if ( v20 >= 0 && v29 == 24 )
  {
    v24 = (__int64 *)v32;
    if ( v32 + 8 < v32 || v32 + 8 > W32UserProbeAddress )
      v24 = (__int64 *)W32UserProbeAddress;
    v25 = *v24;
    v38 = *v24;
    if ( (_DWORD)v13 && (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
    {
      v26 = v32;
      if ( v32 + 24 < v32 || v32 + 24 > W32UserProbeAddress )
        v26 = W32UserProbeAddress;
      v34 = *(_OWORD *)v26;
      Src = *(void **)(v26 + 16);
      v40 = v34;
      v41 = Src;
      if ( ((unsigned __int8)Src & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v27 = Src;
      v28 = Size;
      if ( (unsigned __int64)Src + Size > W32UserProbeAddress || (char *)Src + Size < Src )
        *W32UserProbeAddress = 0;
      memmove(v15, v27, v28);
    }
    goto LABEL_41;
  }
LABEL_40:
  v25 = 0LL;
LABEL_41:
  if ( v11 != v43 && v11 != v44 )
  {
    if ( *((_QWORD *)v11 + 4) )
    {
      Size = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v11 + 4, &Size, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v42);
  }
  return (unsigned __int8 *)v25;
}
