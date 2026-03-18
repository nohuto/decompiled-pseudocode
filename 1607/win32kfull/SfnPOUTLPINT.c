/*
 * XREFs of SfnPOUTLPINT @ 0x1C020AF20
 * Callers:
 *     <none>
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0070458 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00704F4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C0091118 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memmove @ 0x1C015A040 (memmove.c)
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
  __int64 v15; // r9
  void *v16; // r13
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
  PVOID *v29; // rdx
  _DWORD v30[8]; // [rsp+38h] [rbp-390h] BYREF
  size_t Size; // [rsp+58h] [rbp-370h] BYREF
  void *v32; // [rsp+60h] [rbp-368h]
  unsigned __int64 v33; // [rsp+68h] [rbp-360h] BYREF
  int v34; // [rsp+70h] [rbp-358h]
  __int64 v35; // [rsp+80h] [rbp-348h]
  __int128 v36; // [rsp+88h] [rbp-340h]
  __int64 v37; // [rsp+98h] [rbp-330h]
  __int128 v38; // [rsp+A0h] [rbp-328h]
  void *Src; // [rsp+B0h] [rbp-318h]
  _QWORD v40[3]; // [rsp+D8h] [rbp-2F0h] BYREF
  __int128 v41; // [rsp+F0h] [rbp-2D8h]
  void *v42; // [rsp+100h] [rbp-2C8h]
  _QWORD v43[3]; // [rsp+108h] [rbp-2C0h] BYREF
  unsigned __int8 v44[96]; // [rsp+120h] [rbp-2A8h] BYREF
  unsigned __int8 v45[512]; // [rsp+180h] [rbp-248h] BYREF

  v32 = a4;
  v11 = v44;
  v35 = 0LL;
  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v12 = 0LL;
  v13 = 4LL * (unsigned int)a3;
  if ( v13 > 0xFFFFFFFF )
    goto LABEL_43;
  v34 = 4 * a3;
  Size = (unsigned int)v13;
  result = AllocCallbackMessage(96, 1u, (unsigned int)v13, v45, 0, 0x200uLL);
  v11 = result;
  if ( !result )
    return result;
  if ( result != v44 && result != v45 )
    PushW32ThreadLock((__int64)result, v43, (__int64)Win32FreePool, v15);
  *((_QWORD *)v11 + 5) = v12;
  *((_DWORD *)v11 + 12) = a2;
  *((_QWORD *)v11 + 7) = a3;
  *((_QWORD *)v11 + 8) = a5;
  *((_QWORD *)v11 + 9) = a6;
  if ( (a7 & 2) != 0 )
  {
    *((_DWORD *)v11 + 22) = v13;
    v16 = v32;
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v11, (char *)v32, v13, (void **)v11 + 10) < 0 )
      goto LABEL_43;
  }
  else
  {
    if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v11, v13, (void **)v11 + 10) < 0 )
      goto LABEL_43;
    *((_DWORD *)v11 + 22) = v13;
    v16 = v32;
  }
  v40[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v40;
  v40[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v17 = *(_QWORD *)(gptiCurrent + 432LL);
  v36 = *(_OWORD *)(v17 + 64);
  v37 = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(v17 + 72) = v12;
  if ( a1 )
    v18 = *a1;
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v18;
  if ( a1 )
    v19 = a1[33];
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v19;
  if ( gdwInAtomicOperation )
  {
    v19 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v19, gdwInAtomicOperation);
  EtwTraceBeginCallback(37LL);
  *((_QWORD *)v11 + 2) = 0LL;
  v20 = KeUserModeCallback(37LL, v11, *(unsigned int *)v11, &v33, v30);
  EtwTraceEndCallback(37LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v22, v21);
  v23 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v23 + 64) = v36;
  *(_QWORD *)(v23 + 80) = v37;
  if ( v20 >= 0 && v30[0] == 24 )
  {
    v24 = (__int64 *)v33;
    if ( v33 + 8 < v33 || v33 + 8 > W32UserProbeAddress )
      v24 = (__int64 *)W32UserProbeAddress;
    v25 = *v24;
    v35 = *v24;
    if ( (_DWORD)v13 && (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
    {
      v26 = v33;
      if ( v33 + 24 < v33 || v33 + 24 > W32UserProbeAddress )
        v26 = W32UserProbeAddress;
      v38 = *(_OWORD *)v26;
      Src = *(void **)(v26 + 16);
      v41 = v38;
      v42 = Src;
      if ( ((unsigned __int8)Src & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v27 = Src;
      v28 = Size;
      if ( (unsigned __int64)Src + Size > W32UserProbeAddress || (char *)Src + Size < Src )
        *W32UserProbeAddress = 0;
      memmove(v16, v27, v28);
    }
    goto LABEL_44;
  }
LABEL_43:
  v25 = 0LL;
LABEL_44:
  if ( v11 != v44 && v11 != v45 )
  {
    v29 = (PVOID *)(v11 + 32);
    if ( *((_QWORD *)v11 + 4) )
    {
      Size = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v29, &Size, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v43, (__int64)v29, a3, (__int64)a4);
  }
  return (unsigned __int8 *)v25;
}
