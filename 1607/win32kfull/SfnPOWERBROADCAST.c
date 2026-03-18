/*
 * XREFs of SfnPOWERBROADCAST @ 0x1C0112E90
 * Callers:
 *     <none>
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0070458 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00704F4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall SfnPOWERBROADCAST(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD *v8; // rdi
  __int64 v9; // rbx
  char *v10; // r12
  unsigned int v11; // ecx
  unsigned int v12; // esi
  unsigned __int8 *v13; // rbx
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // edi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 *v24; // rcx
  __int64 v25; // rdi
  unsigned __int16 v27; // r8
  int v28; // ecx
  PVOID *v29; // rdx
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-338h] BYREF
  _DWORD v31[8]; // [rsp+48h] [rbp-330h] BYREF
  unsigned __int64 v32; // [rsp+68h] [rbp-310h] BYREF
  __int64 v33; // [rsp+70h] [rbp-308h]
  __int128 v34; // [rsp+78h] [rbp-300h]
  __int64 v35; // [rsp+88h] [rbp-2F0h]
  _QWORD v36[3]; // [rsp+A8h] [rbp-2D0h] BYREF
  _QWORD v37[4]; // [rsp+C0h] [rbp-2B8h] BYREF
  _DWORD v38[24]; // [rsp+E0h] [rbp-298h] BYREF
  unsigned __int8 v39[512]; // [rsp+140h] [rbp-238h] BYREF

  LODWORD(RegionSize) = a2;
  v8 = a1;
  v9 = (a3 >> 15) & 1;
  v33 = 0LL;
  if ( a1 )
    v10 = (char *)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v10 = 0LL;
  if ( a1 )
    a1 = (_QWORD *)*a1;
  LOBYTE(a2) = 1;
  if ( !HMValidateHandleNoSecure((unsigned __int64)a1, a2, a3, a4) )
    return 0LL;
  if ( a3 > 0x8013 )
    goto LABEL_48;
  switch ( (_DWORD)a3 )
  {
    case 0:
      v27 = 769;
      goto LABEL_50;
    case 4:
      SetOrClrWF(0, v8, 0x301u, 1);
      v27 = 770;
LABEL_50:
      v28 = 1;
      goto LABEL_47;
    case 2:
      if ( (*((_BYTE *)v8 + 43) & 1) == 0 )
        return 0LL;
      v27 = 769;
      goto LABEL_46;
  }
  if ( (unsigned int)a3 <= 5 )
    goto LABEL_48;
  if ( (unsigned int)a3 <= 7 )
  {
    SetOrClrWF(0, v8, 0x301u, 1);
    v27 = 770;
LABEL_46:
    v28 = 0;
LABEL_47:
    SetOrClrWF(v28, v8, v27, 1);
    goto LABEL_48;
  }
  if ( (_DWORD)a3 == 32787 )
  {
    v11 = 1;
    goto LABEL_14;
  }
LABEL_48:
  v11 = 0;
LABEL_14:
  v12 = 0;
  if ( (_DWORD)v9 )
  {
    if ( a4 )
    {
      if ( a4 >= (unsigned __int64)MmSystemRangeStart )
      {
        v12 = *(_DWORD *)(a4 + 16) + 20;
        if ( *(_DWORD *)(a4 + 16) >= 0xFFFFFFEC )
          return 0LL;
      }
    }
  }
  if ( !v11 )
  {
    v13 = (unsigned __int8 *)v38;
    memset(v38, 0, 0x58uLL);
    v38[0] = 88;
    goto LABEL_20;
  }
  v13 = AllocCallbackMessage(88, v11, v12, v39, 1, 0x200uLL);
  if ( !v13 )
    return 0LL;
LABEL_20:
  if ( v13 != (unsigned __int8 *)v38 && v13 != v39 )
    PushW32ThreadLock((__int64)v13, v37, (__int64)Win32FreePool, v14);
  *((_QWORD *)v13 + 5) = v10;
  *((_DWORD *)v13 + 12) = RegionSize;
  *((_QWORD *)v13 + 7) = a3;
  if ( v12 )
  {
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v13, (char *)a4, v12, (void **)v13 + 10) < 0 )
      goto LABEL_58;
  }
  else
  {
    *((_QWORD *)v13 + 10) = a4;
  }
  *((_QWORD *)v13 + 8) = a5;
  *((_QWORD *)v13 + 9) = a6;
  v36[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v36;
  v36[1] = v8;
  if ( v8 )
    ++*((_DWORD *)v8 + 2);
  v17 = *(_QWORD *)(gptiCurrent + 432LL);
  v34 = *(_OWORD *)(v17 + 64);
  v35 = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(v17 + 72) = v10;
  if ( v8 )
    v18 = *v8;
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v18;
  if ( v8 )
    v19 = v8[33];
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
  EtwTraceBeginCallback(29LL);
  *((_QWORD *)v13 + 2) = 0LL;
  v20 = KeUserModeCallback(29LL, v13, *(unsigned int *)v13, &v32, v31);
  EtwTraceEndCallback(29LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v22, v21);
  v23 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v23 + 64) = v34;
  *(_QWORD *)(v23 + 80) = v35;
  if ( v20 >= 0 && v31[0] == 24 )
  {
    v24 = (__int64 *)v32;
    if ( v32 + 8 < v32 || v32 + 8 > W32UserProbeAddress )
      v24 = (__int64 *)W32UserProbeAddress;
    v25 = *v24;
    v33 = *v24;
    goto LABEL_40;
  }
LABEL_58:
  v25 = 0LL;
LABEL_40:
  if ( v13 != (unsigned __int8 *)v38 && v13 != v39 )
  {
    v29 = (PVOID *)(v13 + 32);
    if ( *((_QWORD *)v13 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v29, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v37, (__int64)v29, v15, v16);
  }
  return v25;
}
