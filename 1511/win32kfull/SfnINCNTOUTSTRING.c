/*
 * XREFs of SfnINCNTOUTSTRING @ 0x1C0122410
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0050200 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C011D2F0 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C011F134 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C0122E0C (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C0122F00 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _W32ExceptionHandler @ 0x1C02D94EC (_W32ExceptionHandler.c)
 */

unsigned __int8 *__fastcall SfnINCNTOUTSTRING(
        __int64 *a1,
        int a2,
        ULONG_PTR a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  unsigned __int8 *v10; // rdi
  __int64 v11; // r15
  unsigned int v12; // eax
  unsigned __int64 v13; // r14
  unsigned __int8 *result; // rax
  unsigned __int16 v15; // cx
  __int16 v16; // ax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // esi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  ULONG_PTR *v25; // rsi
  ULONG_PTR v26; // rsi
  unsigned __int64 v27; // rcx
  __int64 v28; // xmm1_8
  _WORD *v29; // rax
  unsigned __int16 v31; // [rsp+30h] [rbp-338h]
  ULONG_PTR RegionSize[2]; // [rsp+38h] [rbp-330h] BYREF
  int v33; // [rsp+48h] [rbp-320h]
  int v34; // [rsp+4Ch] [rbp-31Ch] BYREF
  unsigned __int64 v35; // [rsp+50h] [rbp-318h] BYREF
  __int128 v36; // [rsp+58h] [rbp-310h] BYREF
  __int64 v37; // [rsp+68h] [rbp-300h]
  _QWORD v38[5]; // [rsp+78h] [rbp-2F0h] BYREF
  _QWORD v39[4]; // [rsp+A0h] [rbp-2C8h] BYREF
  unsigned __int8 v40[112]; // [rsp+C0h] [rbp-2A8h] BYREF
  unsigned __int8 v41[512]; // [rsp+130h] [rbp-238h] BYREF

  RegionSize[0] = a3;
  v33 = a7 & 1;
  v10 = v40;
  if ( a1 )
    v11 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v11 = 0LL;
  v12 = *(_DWORD *)(a4 + 4) & 0x7FFFFFFF;
  v13 = v12 + 2;
  if ( (unsigned int)v13 < v12 )
    goto LABEL_39;
  if ( *(int *)(a4 + 4) < 0 && (a7 & 1) == 0 )
  {
    v13 *= 2LL;
    if ( v13 > 0xFFFFFFFF )
      goto LABEL_39;
  }
  result = AllocCallbackMessage(104, 1u, (unsigned int)v13, v41, 0, 0x200uLL);
  v10 = result;
  RegionSize[1] = (ULONG_PTR)result;
  if ( !result )
    return result;
  if ( result != v40 && result != v41 )
    PushW32ThreadLock((__int64)result, v39, (__int64)Win32FreePool);
  *((_QWORD *)v10 + 5) = v11;
  *((_DWORD *)v10 + 12) = a2;
  *((_QWORD *)v10 + 7) = RegionSize[0];
  v15 = *(_WORD *)(a4 + 4);
  v31 = v15;
  if ( *(int *)(a4 + 4) >= 0 )
  {
    v15 >>= 1;
    v31 = v15;
  }
  v16 = -1;
  if ( v15 != 0xFFFF )
    v16 = v15;
  *((_WORD *)v10 + 40) = v16;
  *((_QWORD *)v10 + 8) = a5;
  *((_QWORD *)v10 + 9) = a6;
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v10, v13, (void **)v10 + 11) < 0 )
    goto LABEL_39;
  *((_DWORD *)v10 + 24) = v13;
  v38[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v38;
  v38[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v18 = *(_QWORD *)(gptiCurrent + 432LL);
  v36 = *(_OWORD *)(v18 + 64);
  RegionSize[0] = *(_QWORD *)(v18 + 80);
  *(_QWORD *)(v18 + 72) = v11;
  v19 = 0LL;
  if ( a1 )
    v19 = *a1;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v19;
  v20 = 0LL;
  if ( a1 )
    v20 = a1[33];
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v20;
  UserSessionSwitchLeaveCrit(v20, v17);
  EtwTraceBeginCallback(7LL);
  *((_QWORD *)v10 + 2) = 0LL;
  v21 = KeUserModeCallback(7LL, v10, *(unsigned int *)v10, &v35, &v34);
  EtwTraceEndCallback(7LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v23, v22);
  v24 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v24 + 64) = v36;
  *(_QWORD *)(v24 + 80) = RegionSize[0];
  if ( v21 < 0 )
    goto LABEL_39;
  if ( v34 == 24 )
  {
    v25 = (ULONG_PTR *)v35;
    if ( v35 + 8 < v35 || v35 + 8 > W32UserProbeAddress )
      v25 = (ULONG_PTR *)W32UserProbeAddress;
    v26 = *v25;
    RegionSize[0] = v26;
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
    {
      if ( v26 )
      {
        v27 = v35;
        if ( v35 + 24 < v35 || v35 + 24 > W32UserProbeAddress )
          v27 = W32UserProbeAddress;
        v28 = *(_QWORD *)(v27 + 16);
        v36 = *(_OWORD *)v27;
        v37 = v28;
        v26 = CalcOutputStringSize((struct _CALLBACKSTATUS *)&v36, v26, *(_DWORD *)(a4 + 4) >> 31, v33);
        RegionSize[0] = v26;
        CopyOutputString((struct _CALLBACKSTATUS *)&v36, (struct _LARGE_STRING *)a4, v31, v33);
      }
      else
      {
        v29 = *(_WORD **)(a4 + 8);
        if ( *(int *)(a4 + 4) >= 0 )
          *v29 = 0;
        else
          *(_BYTE *)v29 = 0;
      }
    }
  }
  else
  {
LABEL_39:
    v26 = 0LL;
  }
  if ( v10 != v40 && v10 != v41 )
  {
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v10 + 4, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v39);
  }
  return (unsigned __int8 *)v26;
}
