/*
 * XREFs of SfnINSTRING @ 0x1C013F760
 * Callers:
 *     ?_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z @ 0x1C013F684 (-_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0050200 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C011D254 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C011D2F0 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C011F098 (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C011F16C (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     _W32ExceptionHandler @ 0x1C02D94EC (_W32ExceptionHandler.c)
 */

unsigned __int8 *__fastcall SfnINSTRING(
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
  unsigned __int64 v12; // rcx
  unsigned __int8 *result; // rax
  __int64 v14; // rdx
  void **v15; // r9
  unsigned int v16; // r8d
  CHAR *v17; // rdx
  int v18; // eax
  unsigned int v19; // r8d
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // edi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 *v28; // rcx
  __int64 v29; // rdi
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-308h] BYREF
  unsigned __int8 *v31; // [rsp+38h] [rbp-300h]
  int v32; // [rsp+40h] [rbp-2F8h] BYREF
  unsigned int v33; // [rsp+44h] [rbp-2F4h]
  _QWORD v34[2]; // [rsp+48h] [rbp-2F0h] BYREF
  _QWORD v35[3]; // [rsp+58h] [rbp-2E0h] BYREF
  __int128 v36; // [rsp+70h] [rbp-2C8h]
  _QWORD v37[3]; // [rsp+88h] [rbp-2B0h] BYREF
  _DWORD v38[24]; // [rsp+A0h] [rbp-298h] BYREF
  unsigned __int8 v39[512]; // [rsp+100h] [rbp-238h] BYREF

  RegionSize = a3;
  v33 = a2;
  v9 = (unsigned __int8 *)v38;
  if ( a1 )
    v10 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v10 = 0LL;
  if ( !a4 || *((_QWORD *)a4 + 1) < (unsigned __int64)MmSystemRangeStart && (unsigned int)a4[1] >> 31 == (a7 & 1) )
  {
    LODWORD(v12) = 0;
    v11 = 0;
  }
  else
  {
    v11 = 1;
    v12 = (unsigned int)(*a4 + 2);
    if ( (unsigned int)v12 < *a4 )
      goto LABEL_49;
    if ( a4[1] < 0 && (a7 & 1) == 0 )
    {
      v12 *= 2LL;
      if ( v12 > 0xFFFFFFFF )
        goto LABEL_49;
    }
  }
  if ( v11 )
  {
    result = AllocCallbackMessage(88, v11, (unsigned int)v12, v39, 1, 0x200uLL);
    v9 = result;
    v31 = result;
    if ( !result )
      return result;
  }
  else
  {
    v9 = (unsigned __int8 *)v38;
    v31 = (unsigned __int8 *)v38;
    memset(v38, 0, 0x58uLL);
    v38[0] = 88;
  }
  if ( v9 != (unsigned __int8 *)v38 && v9 != v39 )
    PushW32ThreadLock((__int64)v9, v37, (__int64)Win32FreePool);
  *((_QWORD *)v9 + 5) = v10;
  *((_DWORD *)v9 + 12) = v33;
  *((_QWORD *)v9 + 7) = RegionSize;
  if ( v11 )
  {
    v15 = (void **)(v9 + 80);
    v16 = *a4;
    v17 = (CHAR *)*((_QWORD *)a4 + 1);
    if ( a4[1] < 0 )
    {
      if ( (a7 & 1) == 0 )
      {
        v18 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v9, v17, 2 * v16 + 2, v15);
LABEL_29:
        if ( v18 < 0 )
          goto LABEL_49;
        goto LABEL_35;
      }
      v19 = v16 + 1;
    }
    else
    {
      if ( (a7 & 1) != 0 )
      {
        v18 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v9, (PCWCH)v17, (v16 >> 1) + 1, v15);
        goto LABEL_29;
      }
      v19 = v16 + 2;
    }
    v18 = CaptureCallbackData((struct _CAPTUREBUF *)v9, v17, v19, v15);
    goto LABEL_29;
  }
  if ( a4 )
    v20 = *((_QWORD *)a4 + 1);
  else
    v20 = 0LL;
  *((_QWORD *)v9 + 10) = v20;
LABEL_35:
  *((_QWORD *)v9 + 8) = a5;
  *((_QWORD *)v9 + 9) = a6;
  v35[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v35;
  v35[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v21 = *(_QWORD *)(gptiCurrent + 432LL);
  v36 = *(_OWORD *)(v21 + 64);
  RegionSize = *(_QWORD *)(v21 + 80);
  *(_QWORD *)(v21 + 72) = v10;
  if ( a1 )
    v22 = *a1;
  else
    v22 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v22;
  if ( a1 )
    v23 = a1[33];
  else
    v23 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v23;
  UserSessionSwitchLeaveCrit(v23, v14);
  EtwTraceBeginCallback(26LL);
  *((_QWORD *)v9 + 2) = 0LL;
  v24 = KeUserModeCallback(26LL, v9, *(unsigned int *)v9, v34, &v32);
  EtwTraceEndCallback(26LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v26, v25);
  v27 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v27 + 64) = v36;
  *(_QWORD *)(v27 + 80) = RegionSize;
  if ( v24 >= 0 && v32 == 24 )
  {
    v28 = (__int64 *)v34[0];
    if ( (unsigned __int64)(v34[0] + 8LL) < v34[0] || (unsigned __int64)(v34[0] + 8LL) > W32UserProbeAddress )
      v28 = (__int64 *)W32UserProbeAddress;
    v29 = *v28;
    v34[1] = *v28;
    goto LABEL_50;
  }
LABEL_49:
  v29 = 0LL;
LABEL_50:
  if ( v9 != (unsigned __int8 *)v38 && v9 != v39 )
  {
    if ( *((_QWORD *)v9 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v9 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v37);
  }
  return (unsigned __int8 *)v29;
}
