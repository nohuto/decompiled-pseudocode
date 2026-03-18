/*
 * XREFs of SfnINSTRING @ 0x1C0146DF0
 * Callers:
 *     ?_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z @ 0x1C0146D14 (-_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z.c)
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0070458 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00704F4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0091150 (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00911EC (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

unsigned __int8 *__fastcall SfnINSTRING(
        __int64 *a1,
        unsigned int a2,
        ULONG_PTR a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int8 *v9; // rbx
  __int64 v10; // r12
  unsigned __int64 v11; // rcx
  unsigned int v12; // r15d
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 *v22; // rcx
  __int64 v23; // rdi
  unsigned __int8 *result; // rax
  void **v25; // r9
  unsigned int v26; // r8d
  CHAR *v27; // rdx
  int v28; // eax
  unsigned int v29; // r8d
  PVOID *v30; // rdx
  _DWORD v32[5]; // [rsp+44h] [rbp-334h] BYREF
  ULONG_PTR RegionSize[2]; // [rsp+58h] [rbp-320h] BYREF
  unsigned __int64 v34; // [rsp+68h] [rbp-310h] BYREF
  __int64 v35; // [rsp+70h] [rbp-308h]
  __int128 v36; // [rsp+78h] [rbp-300h]
  __int64 v37; // [rsp+88h] [rbp-2F0h]
  _QWORD v38[3]; // [rsp+A8h] [rbp-2D0h] BYREF
  _QWORD v39[4]; // [rsp+C0h] [rbp-2B8h] BYREF
  _DWORD v40[24]; // [rsp+E0h] [rbp-298h] BYREF
  unsigned __int8 v41[512]; // [rsp+140h] [rbp-238h] BYREF

  RegionSize[0] = a3;
  v9 = (unsigned __int8 *)v40;
  v35 = 0LL;
  if ( a1 )
    v10 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v10 = 0LL;
  if ( a4 && (*(_QWORD *)(a4 + 8) >= (unsigned __int64)MmSystemRangeStart || *(_DWORD *)(a4 + 4) >> 31 != (a7 & 1)) )
  {
    v12 = 1;
    v11 = (unsigned int)(*(_DWORD *)a4 + 2);
    if ( (unsigned int)v11 < *(_DWORD *)a4 )
      goto LABEL_31;
    if ( *(int *)(a4 + 4) < 0 && (a7 & 1) == 0 )
    {
      v11 *= 2LL;
      if ( v11 > 0xFFFFFFFF )
        goto LABEL_31;
    }
  }
  else
  {
    LODWORD(v11) = 0;
    v12 = 0;
  }
  if ( v12 )
  {
    result = AllocCallbackMessage(88, v12, (unsigned int)v11, v41, 1, 0x200uLL);
    v9 = result;
    if ( !result )
      return result;
  }
  else
  {
    v9 = (unsigned __int8 *)v40;
    memset(v40, 0, 0x58uLL);
    v40[0] = 88;
  }
  if ( v9 != (unsigned __int8 *)v40 && v9 != v41 )
    PushW32ThreadLock((__int64)v9, v39, (__int64)Win32FreePool, v13);
  *((_QWORD *)v9 + 5) = v10;
  *((_DWORD *)v9 + 12) = a2;
  *((_QWORD *)v9 + 7) = RegionSize[0];
  if ( v12 )
  {
    v25 = (void **)(v9 + 80);
    v26 = *(_DWORD *)a4;
    v27 = *(CHAR **)(a4 + 8);
    if ( *(int *)(a4 + 4) < 0 )
    {
      if ( (a7 & 1) == 0 )
      {
        v28 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v9, v27, 2 * v26 + 2, v25);
LABEL_50:
        if ( v28 < 0 )
          goto LABEL_31;
        goto LABEL_14;
      }
      v29 = v26 + 1;
    }
    else
    {
      if ( (a7 & 1) != 0 )
      {
        v28 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v9, (PCWCH)v27, (v26 >> 1) + 1, v25);
        goto LABEL_50;
      }
      v29 = v26 + 2;
    }
    v28 = CaptureCallbackData((struct _CAPTUREBUF *)v9, v27, v29, v25);
    goto LABEL_50;
  }
  if ( a4 )
    v14 = *(_QWORD *)(a4 + 8);
  else
    v14 = 0LL;
  *((_QWORD *)v9 + 10) = v14;
LABEL_14:
  *((_QWORD *)v9 + 8) = a5;
  *((_QWORD *)v9 + 9) = a6;
  v38[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v38;
  v38[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v15 = *(_QWORD *)(gptiCurrent + 432LL);
  v36 = *(_OWORD *)(v15 + 64);
  v37 = *(_QWORD *)(v15 + 80);
  *(_QWORD *)(v15 + 72) = v10;
  if ( a1 )
    v16 = *a1;
  else
    v16 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v16;
  if ( a1 )
    v17 = a1[33];
  else
    v17 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v17;
  if ( gdwInAtomicOperation )
  {
    v17 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v17, gdwInAtomicOperation);
  EtwTraceBeginCallback(26LL);
  *((_QWORD *)v9 + 2) = 0LL;
  v18 = KeUserModeCallback(26LL, v9, *(unsigned int *)v9, &v34, v32);
  EtwTraceEndCallback(26LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v20, v19);
  v21 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v21 + 64) = v36;
  *(_QWORD *)(v21 + 80) = v37;
  if ( v18 >= 0 && v32[0] == 24 )
  {
    v22 = (__int64 *)v34;
    if ( v34 + 8 < v34 || v34 + 8 > W32UserProbeAddress )
      v22 = (__int64 *)W32UserProbeAddress;
    v23 = *v22;
    v35 = *v22;
    goto LABEL_29;
  }
LABEL_31:
  v23 = 0LL;
LABEL_29:
  if ( v9 != (unsigned __int8 *)v40 && v9 != v41 )
  {
    v30 = (PVOID *)(v9 + 32);
    if ( *((_QWORD *)v9 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v30, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v39, (__int64)v30, a3, a4);
  }
  return (unsigned __int8 *)v23;
}
