/*
 * XREFs of SfnPOWERBROADCAST @ 0x1C011F250
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0050200 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C011D254 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C011D2F0 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     _W32ExceptionHandler @ 0x1C02D94EC (_W32ExceptionHandler.c)
 */

__int64 __fastcall SfnPOWERBROADCAST(
        _QWORD *a1,
        int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD *v8; // rdi
  __int64 v9; // rbx
  char *v10; // r12
  unsigned int v12; // ecx
  unsigned __int16 v13; // r8
  int v14; // ecx
  unsigned int v15; // r14d
  __int64 v16; // rdx
  unsigned __int8 *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // edi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 *v25; // rcx
  __int64 v26; // rdi
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-308h] BYREF
  int v28; // [rsp+38h] [rbp-300h] BYREF
  __int64 v29; // [rsp+40h] [rbp-2F8h]
  unsigned __int64 v30; // [rsp+48h] [rbp-2F0h] BYREF
  _QWORD v31[3]; // [rsp+58h] [rbp-2E0h] BYREF
  __int128 v32; // [rsp+70h] [rbp-2C8h]
  __int64 v33; // [rsp+80h] [rbp-2B8h]
  _QWORD v34[3]; // [rsp+88h] [rbp-2B0h] BYREF
  _DWORD v35[24]; // [rsp+A0h] [rbp-298h] BYREF
  unsigned __int8 v36[512]; // [rsp+100h] [rbp-238h] BYREF

  LODWORD(v29) = a2;
  v8 = a1;
  v9 = (a3 >> 15) & 1;
  if ( a1 )
    v10 = (char *)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v10 = 0LL;
  if ( a1 )
    a1 = (_QWORD *)*a1;
  if ( !HMValidateHandleNoSecure((unsigned __int64)a1, 1) )
    return 0LL;
  switch ( a3 )
  {
    case 0uLL:
      v13 = 769;
      goto LABEL_21;
    case 2uLL:
      if ( (*((_BYTE *)v8 + 43) & 1) == 0 )
        return 0LL;
      v13 = 769;
      goto LABEL_16;
    case 4uLL:
      SetOrClrWF(0, v8, 0x301u, 1);
      v13 = 770;
LABEL_21:
      v14 = 1;
      goto LABEL_22;
  }
  if ( a3 <= 5 )
  {
LABEL_23:
    v12 = 0;
    goto LABEL_24;
  }
  if ( a3 <= 7 )
  {
    SetOrClrWF(0, v8, 0x301u, 1);
    v13 = 770;
LABEL_16:
    v14 = 0;
LABEL_22:
    SetOrClrWF(v14, v8, v13, 1);
    goto LABEL_23;
  }
  if ( a3 != 32787 )
    goto LABEL_23;
  v12 = 1;
LABEL_24:
  v15 = 0;
  if ( (_DWORD)v9 )
  {
    if ( a4 )
    {
      if ( a4 >= (unsigned __int64)MmSystemRangeStart )
      {
        v15 = *(_DWORD *)(a4 + 16) + 20;
        if ( *(_DWORD *)(a4 + 16) >= 0xFFFFFFEC )
          return 0LL;
      }
    }
  }
  if ( v12 )
  {
    v17 = AllocCallbackMessage(88, v12, v15, v36, 1, 0x200uLL);
    RegionSize = (ULONG_PTR)v17;
    if ( !v17 )
      return 0LL;
  }
  else
  {
    v17 = (unsigned __int8 *)v35;
    RegionSize = (ULONG_PTR)v35;
    memset(v35, 0, 0x58uLL);
    v35[0] = 88;
  }
  if ( v17 != (unsigned __int8 *)v35 && v17 != v36 )
    PushW32ThreadLock((__int64)v17, v34, (__int64)Win32FreePool);
  *((_QWORD *)v17 + 5) = v10;
  *((_DWORD *)v17 + 12) = v29;
  *((_QWORD *)v17 + 7) = a3;
  if ( v15 )
  {
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v17, (char *)a4, v15, (void **)v17 + 10) < 0 )
      goto LABEL_53;
  }
  else
  {
    *((_QWORD *)v17 + 10) = a4;
  }
  *((_QWORD *)v17 + 8) = a5;
  *((_QWORD *)v17 + 9) = a6;
  v31[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v31;
  v31[1] = v8;
  if ( v8 )
    ++*((_DWORD *)v8 + 2);
  v18 = *(_QWORD *)(gptiCurrent + 432LL);
  v32 = *(_OWORD *)(v18 + 64);
  v29 = *(_QWORD *)(v18 + 80);
  *(_QWORD *)(v18 + 72) = v10;
  if ( v8 )
    v19 = *v8;
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v19;
  if ( v8 )
    v20 = v8[33];
  else
    v20 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v20;
  UserSessionSwitchLeaveCrit(v20, v16);
  EtwTraceBeginCallback(29LL);
  *((_QWORD *)v17 + 2) = 0LL;
  v21 = KeUserModeCallback(29LL, v17, *(unsigned int *)v17, &v30, &v28);
  EtwTraceEndCallback(29LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v23, v22);
  v24 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v24 + 64) = v32;
  *(_QWORD *)(v24 + 80) = v29;
  if ( v21 >= 0 && v28 == 24 )
  {
    v25 = (__int64 *)v30;
    if ( v30 + 8 < v30 || v30 + 8 > W32UserProbeAddress )
      v25 = (__int64 *)W32UserProbeAddress;
    v26 = *v25;
    v33 = *v25;
    goto LABEL_54;
  }
LABEL_53:
  v26 = 0LL;
LABEL_54:
  if ( v17 != (unsigned __int8 *)v35 && v17 != v36 )
  {
    if ( *((_QWORD *)v17 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v17 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v34);
  }
  return v26;
}
