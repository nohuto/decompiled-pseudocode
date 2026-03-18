/*
 * XREFs of SfnINLPKDRAWSWITCHWND @ 0x1C0208230
 * Callers:
 *     <none>
 * Callees:
 *     _WindowFromDC @ 0x1C005CB00 (_WindowFromDC.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0070458 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00704F4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     GreSetTextColor @ 0x1C00B112C (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C00B1198 (GreSetBkColor.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     GreSelectFontInternal @ 0x1C0292FA8 (GreSelectFontInternal.c)
 */

unsigned __int8 *__fastcall SfnINLPKDRAWSWITCHWND(__int64 *a1, int a2, HDC a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int8 *v10; // rbx
  __int64 v11; // rsi
  unsigned int v12; // eax
  unsigned __int64 v13; // rcx
  unsigned __int8 *result; // rax
  __int64 v15; // r9
  struct tagWND *v16; // rax
  HDC DC; // r12
  __int64 v18; // rax
  __int128 v19; // xmm6
  __int64 v20; // xmm1_8
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // edi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 *v27; // rcx
  __int64 v28; // rdi
  PVOID *v29; // rdx
  int v30; // [rsp+34h] [rbp-384h]
  int v31; // [rsp+38h] [rbp-380h]
  _DWORD v32[5]; // [rsp+3Ch] [rbp-37Ch] BYREF
  unsigned __int8 *v33; // [rsp+50h] [rbp-368h]
  ULONG_PTR RegionSize[2]; // [rsp+58h] [rbp-360h] BYREF
  unsigned __int64 v35; // [rsp+68h] [rbp-350h] BYREF
  __int64 v36; // [rsp+70h] [rbp-348h]
  _QWORD v37[3]; // [rsp+90h] [rbp-328h] BYREF
  __int128 v38; // [rsp+A8h] [rbp-310h]
  __int64 v39; // [rsp+B8h] [rbp-300h]
  _QWORD v40[4]; // [rsp+C0h] [rbp-2F8h] BYREF
  unsigned __int8 v41[112]; // [rsp+E0h] [rbp-2D8h] BYREF
  unsigned __int8 v42[512]; // [rsp+150h] [rbp-268h] BYREF

  v10 = v41;
  v36 = 0LL;
  if ( a1 )
    v11 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v11 = 0LL;
  v12 = *(_DWORD *)(a4 + 16);
  v13 = v12 + 2;
  if ( (unsigned int)v13 < v12 )
    goto LABEL_29;
  if ( *(int *)(a4 + 20) < 0 )
  {
    v13 *= 2LL;
    if ( v13 > 0xFFFFFFFF )
      goto LABEL_29;
  }
  result = AllocCallbackMessage(104, 1u, (unsigned int)v13, v42, 1, 0x200uLL);
  v10 = result;
  v33 = result;
  if ( !result )
    return result;
  if ( result != v41 && result != v42 )
    PushW32ThreadLock((__int64)result, v40, (__int64)Win32FreePool, v15);
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v10,
              *(char **)(a4 + 24),
              *(_DWORD *)(a4 + 16) + 2,
              (void **)v10 + 10) < 0 )
    goto LABEL_29;
  v16 = WindowFromDC(a3);
  DC = (HDC)_GetDC(v16);
  v31 = GreSetTextColor(DC, *(_DWORD *)(gpsi + 5032LL));
  v30 = GreSetBkColor(DC, *(_DWORD *)(gpsi + 5020LL));
  GetDPIServerInfo();
  RegionSize[0] = GreSelectFontInternal(DC);
  *((_QWORD *)v10 + 5) = v11;
  *((_DWORD *)v10 + 12) = a2;
  *((_QWORD *)v10 + 7) = DC;
  *(_OWORD *)(v10 + 88) = *(_OWORD *)a4;
  *((_QWORD *)v10 + 8) = a5;
  *((_QWORD *)v10 + 9) = a6;
  v37[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v37;
  v37[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v18 = *(_QWORD *)(gptiCurrent + 432LL);
  v19 = *(_OWORD *)(v18 + 64);
  v38 = v19;
  v20 = *(_QWORD *)(v18 + 80);
  v39 = v20;
  *(_QWORD *)(v18 + 72) = v11;
  if ( a1 )
    v21 = *a1;
  else
    v21 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v21;
  if ( a1 )
    v22 = a1[33];
  else
    v22 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v22;
  if ( gdwInAtomicOperation )
  {
    v22 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v22, gdwInAtomicOperation);
  EtwTraceBeginCallback(97LL);
  *((_QWORD *)v10 + 2) = 0LL;
  v23 = KeUserModeCallback(97LL, v10, *(unsigned int *)v10, &v35, v32);
  EtwTraceEndCallback(97LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v25, v24);
  v26 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v26 + 64) = v19;
  *(_QWORD *)(v26 + 80) = v20;
  GreSelectFontInternal(DC);
  GreSetBkColor(DC, v30);
  GreSetTextColor(DC, v31);
  _ReleaseDC(DC);
  if ( v23 < 0 )
    goto LABEL_29;
  if ( v32[0] == 24 )
  {
    v27 = (__int64 *)v35;
    if ( v35 + 8 < v35 || v35 + 8 > W32UserProbeAddress )
      v27 = (__int64 *)W32UserProbeAddress;
    v28 = *v27;
    v36 = *v27;
  }
  else
  {
LABEL_29:
    v28 = 0LL;
  }
  if ( v10 != v41 && v10 != v42 )
  {
    v29 = (PVOID *)(v10 + 32);
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v29, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v40, (__int64)v29, (__int64)a3, a4);
  }
  return (unsigned __int8 *)v28;
}
