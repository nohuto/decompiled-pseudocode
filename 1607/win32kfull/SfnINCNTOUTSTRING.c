/*
 * XREFs of SfnINCNTOUTSTRING @ 0x1C02068D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00704F4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C0090FDC (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C00910A4 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C0091118 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
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
  unsigned __int64 v13; // rsi
  unsigned __int8 *result; // rax
  __int64 v15; // r9
  unsigned __int16 v16; // cx
  __int16 v17; // ax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // esi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 *v25; // rsi
  __int64 v26; // rsi
  unsigned __int64 v27; // rcx
  __int64 v28; // xmm1_8
  _WORD *v29; // rax
  PVOID *v30; // rdx
  unsigned __int16 v32; // [rsp+30h] [rbp-388h]
  int v33; // [rsp+44h] [rbp-374h] BYREF
  int v34; // [rsp+48h] [rbp-370h]
  ULONG_PTR RegionSize; // [rsp+60h] [rbp-358h] BYREF
  unsigned __int64 v36; // [rsp+68h] [rbp-350h] BYREF
  __int64 v37; // [rsp+70h] [rbp-348h]
  __int128 v38; // [rsp+80h] [rbp-338h]
  __int64 v39; // [rsp+90h] [rbp-328h]
  __int128 v40; // [rsp+98h] [rbp-320h] BYREF
  __int64 v41; // [rsp+A8h] [rbp-310h]
  _QWORD v42[3]; // [rsp+D8h] [rbp-2E0h] BYREF
  _QWORD v43[4]; // [rsp+F0h] [rbp-2C8h] BYREF
  unsigned __int8 v44[112]; // [rsp+110h] [rbp-2A8h] BYREF
  unsigned __int8 v45[512]; // [rsp+180h] [rbp-238h] BYREF

  RegionSize = a3;
  v34 = a7 & 1;
  v10 = v44;
  v37 = 0LL;
  if ( a1 )
    v11 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v11 = 0LL;
  v12 = *(_DWORD *)(a4 + 4) & 0x7FFFFFFF;
  v13 = v12 + 2;
  if ( (unsigned int)v13 < v12 )
    goto LABEL_42;
  if ( *(int *)(a4 + 4) < 0 && (a7 & 1) == 0 )
  {
    v13 *= 2LL;
    if ( v13 > 0xFFFFFFFF )
      goto LABEL_42;
  }
  result = AllocCallbackMessage(104, 1u, (unsigned int)v13, v45, 0, 0x200uLL);
  v10 = result;
  if ( !result )
    return result;
  if ( result != v44 && result != v45 )
    PushW32ThreadLock((__int64)result, v43, (__int64)Win32FreePool, v15);
  *((_QWORD *)v10 + 5) = v11;
  *((_DWORD *)v10 + 12) = a2;
  *((_QWORD *)v10 + 7) = RegionSize;
  v16 = *(_WORD *)(a4 + 4);
  v32 = v16;
  if ( *(int *)(a4 + 4) >= 0 )
  {
    v16 >>= 1;
    v32 = v16;
  }
  v17 = -1;
  if ( v16 != 0xFFFF )
    v17 = v16;
  *((_WORD *)v10 + 40) = v17;
  *((_QWORD *)v10 + 8) = a5;
  *((_QWORD *)v10 + 9) = a6;
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v10, v13, (void **)v10 + 11) < 0 )
    goto LABEL_42;
  *((_DWORD *)v10 + 24) = v13;
  v42[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v42;
  v42[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v18 = *(_QWORD *)(gptiCurrent + 432LL);
  v38 = *(_OWORD *)(v18 + 64);
  v39 = *(_QWORD *)(v18 + 80);
  *(_QWORD *)(v18 + 72) = v11;
  v19 = 0LL;
  if ( a1 )
    v19 = *a1;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v19;
  v20 = 0LL;
  if ( a1 )
    v20 = a1[33];
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v20;
  if ( gdwInAtomicOperation )
  {
    v20 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v20, gdwInAtomicOperation);
  EtwTraceBeginCallback(7LL);
  *((_QWORD *)v10 + 2) = 0LL;
  v21 = KeUserModeCallback(7LL, v10, *(unsigned int *)v10, &v36, &v33);
  EtwTraceEndCallback(7LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v23, v22);
  v24 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v24 + 64) = v38;
  *(_QWORD *)(v24 + 80) = v39;
  if ( v21 < 0 )
    goto LABEL_42;
  if ( v33 == 24 )
  {
    v25 = (__int64 *)v36;
    if ( v36 + 8 < v36 || v36 + 8 > W32UserProbeAddress )
      v25 = (__int64 *)W32UserProbeAddress;
    v26 = *v25;
    v37 = v26;
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
    {
      if ( v26 )
      {
        v27 = v36;
        if ( v36 + 24 < v36 || v36 + 24 > W32UserProbeAddress )
          v27 = W32UserProbeAddress;
        v28 = *(_QWORD *)(v27 + 16);
        v40 = *(_OWORD *)v27;
        v41 = v28;
        v26 = (unsigned int)CalcOutputStringSize((struct _CALLBACKSTATUS *)&v40, v26, *(_DWORD *)(a4 + 4) >> 31, v34);
        v37 = v26;
        CopyOutputString((struct _CALLBACKSTATUS *)&v40, (struct _LARGE_STRING *)a4, v32, v34);
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
LABEL_42:
    v26 = 0LL;
  }
  if ( v10 != v44 && v10 != v45 )
  {
    v30 = (PVOID *)(v10 + 32);
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v30, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v43, (__int64)v30, a3, a4);
  }
  return (unsigned __int8 *)v26;
}
