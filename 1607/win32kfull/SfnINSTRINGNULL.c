/*
 * XREFs of SfnINSTRINGNULL @ 0x1C006FAA0
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

__int64 __fastcall SfnINSTRINGNULL(
        __int64 *a1,
        unsigned int a2,
        ULONG_PTR a3,
        int *a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int8 *v9; // rbx
  __int64 v10; // r12
  unsigned int v11; // r15d
  unsigned __int64 v12; // rdx
  void **v13; // r9
  unsigned int v14; // r8d
  CHAR *v15; // rdx
  unsigned int v16; // r8d
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // edi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 *v25; // rcx
  __int64 v26; // rdi
  __int64 v28; // rax
  _DWORD v30[5]; // [rsp+44h] [rbp-334h] BYREF
  ULONG_PTR RegionSize[2]; // [rsp+58h] [rbp-320h] BYREF
  unsigned __int64 v32; // [rsp+68h] [rbp-310h] BYREF
  __int64 v33; // [rsp+70h] [rbp-308h]
  __int128 v34; // [rsp+78h] [rbp-300h]
  __int64 v35; // [rsp+88h] [rbp-2F0h]
  _QWORD v36[3]; // [rsp+A8h] [rbp-2D0h] BYREF
  _BYTE v37[32]; // [rsp+C0h] [rbp-2B8h] BYREF
  _DWORD v38[24]; // [rsp+E0h] [rbp-298h] BYREF
  unsigned __int8 v39[512]; // [rsp+140h] [rbp-238h] BYREF

  RegionSize[0] = a3;
  v9 = (unsigned __int8 *)v38;
  v33 = 0LL;
  if ( a1 )
    v10 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v10 = 0LL;
  v11 = 0;
  LODWORD(v12) = 0;
  if ( a4 && (*((_QWORD *)a4 + 1) >= (unsigned __int64)MmSystemRangeStart || (unsigned int)a4[1] >> 31 != (a7 & 1)) )
  {
    v11 = 1;
    v12 = (unsigned int)(*a4 + 2);
    if ( (unsigned int)v12 < *a4 )
      goto LABEL_57;
    if ( a4[1] < 0 && (a7 & 1) == 0 )
    {
      v12 *= 2LL;
      if ( v12 > 0xFFFFFFFF )
        goto LABEL_57;
    }
  }
  if ( v11 )
  {
    v9 = (unsigned __int8 *)AllocCallbackMessage(0x58u, v11, (unsigned int)v12, v39, 1, 0x200uLL);
    if ( !v9 )
      return 0LL;
  }
  else
  {
    v9 = (unsigned __int8 *)v38;
    memset(v38, 0, 0x58uLL);
    v38[0] = 88;
  }
  if ( v9 != (unsigned __int8 *)v38 && v9 != v39 )
    PushW32ThreadLock(v9, v37, Win32FreePool);
  *((_QWORD *)v9 + 5) = v10;
  *((_DWORD *)v9 + 12) = a2;
  *((_QWORD *)v9 + 7) = RegionSize[0];
  if ( v11 )
  {
    v13 = (void **)(v9 + 80);
    v14 = *a4;
    v15 = (CHAR *)*((_QWORD *)a4 + 1);
    if ( a4[1] < 0 )
    {
      if ( (a7 & 1) != 0 )
      {
        v16 = v14 + 1;
        goto LABEL_16;
      }
      v17 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v9, v15, 2 * v14 + 2, v13);
    }
    else
    {
      if ( (a7 & 1) == 0 )
      {
        v16 = v14 + 2;
LABEL_16:
        v17 = CaptureCallbackData((struct _CAPTUREBUF *)v9, v15, v16, v13);
        goto LABEL_17;
      }
      v17 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v9, (PCWCH)v15, (v14 >> 1) + 1, v13);
    }
LABEL_17:
    if ( v17 < 0 )
      goto LABEL_57;
    goto LABEL_18;
  }
  if ( a4 )
    v28 = *((_QWORD *)a4 + 1);
  else
    v28 = 0LL;
  *((_QWORD *)v9 + 10) = v28;
LABEL_18:
  *((_QWORD *)v9 + 8) = a5;
  *((_QWORD *)v9 + 9) = a6;
  v36[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v36;
  v36[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v18 = *(_QWORD *)(gptiCurrent + 432LL);
  v34 = *(_OWORD *)(v18 + 64);
  v35 = *(_QWORD *)(v18 + 80);
  *(_QWORD *)(v18 + 72) = v10;
  if ( a1 )
    v19 = *a1;
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v19;
  if ( a1 )
    v20 = a1[33];
  else
    v20 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v20;
  if ( gdwInAtomicOperation )
  {
    v20 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v20, gdwInAtomicOperation);
  EtwTraceBeginCallback(27LL);
  *((_QWORD *)v9 + 2) = 0LL;
  v21 = KeUserModeCallback(27LL, v9, *(unsigned int *)v9, &v32, v30);
  EtwTraceEndCallback(27LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v23, v22);
  v24 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v24 + 64) = v34;
  *(_QWORD *)(v24 + 80) = v35;
  if ( v21 >= 0 && v30[0] == 24 )
  {
    v25 = (__int64 *)v32;
    if ( v32 + 8 < v32 || v32 + 8 > W32UserProbeAddress )
      v25 = (__int64 *)W32UserProbeAddress;
    v26 = *v25;
    v33 = *v25;
    goto LABEL_33;
  }
LABEL_57:
  v26 = 0LL;
LABEL_33:
  if ( v9 != (unsigned __int8 *)v38 && v9 != v39 )
  {
    if ( *((_QWORD *)v9 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v9 + 4, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(v37);
  }
  return v26;
}
