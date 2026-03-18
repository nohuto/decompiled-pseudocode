/*
 * XREFs of SfnINLPKDRAWSWITCHWND @ 0x1C0210070
 * Callers:
 *     <none>
 * Callees:
 *     GreSetTextColor @ 0x1C005184C (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C00518B8 (GreSetBkColor.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C005ADD0 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C005AE6C (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C005B560 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     _WindowFromDC @ 0x1C00E39B0 (_WindowFromDC.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     GreSelectFontInternal @ 0x1C0293D18 (GreSelectFontInternal.c)
 *     _W32ExceptionHandler @ 0x1C02D8144 (_W32ExceptionHandler.c)
 */

unsigned __int8 *__fastcall SfnINLPKDRAWSWITCHWND(__int64 a1, int a2, HDC a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int8 *v10; // rbx
  __int64 v11; // rsi
  unsigned int v12; // eax
  unsigned __int64 v13; // rcx
  unsigned __int8 *result; // rax
  struct tagWND *v15; // rax
  HDC DC; // r12
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int128 v21; // xmm6
  __int64 v22; // xmm7_8
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // edi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 *v29; // rcx
  __int64 v30; // rdi
  int v31; // [rsp+30h] [rbp-348h] BYREF
  int v32; // [rsp+34h] [rbp-344h]
  unsigned __int8 *v33; // [rsp+38h] [rbp-340h]
  int v34; // [rsp+40h] [rbp-338h]
  ULONG_PTR RegionSize; // [rsp+48h] [rbp-330h] BYREF
  unsigned __int64 v36; // [rsp+50h] [rbp-328h] BYREF
  _QWORD v37[5]; // [rsp+58h] [rbp-320h] BYREF
  _QWORD v38[4]; // [rsp+80h] [rbp-2F8h] BYREF
  unsigned __int8 v39[112]; // [rsp+A0h] [rbp-2D8h] BYREF
  unsigned __int8 v40[512]; // [rsp+110h] [rbp-268h] BYREF

  v10 = v39;
  if ( a1 )
    v11 = a1 - *(_QWORD *)(gptiCurrent + 432LL);
  else
    v11 = 0LL;
  v12 = *(_DWORD *)(a4 + 16);
  v13 = v12 + 2;
  if ( (unsigned int)v13 < v12 )
    goto LABEL_26;
  if ( *(int *)(a4 + 20) < 0 )
  {
    v13 *= 2LL;
    if ( v13 > 0xFFFFFFFF )
      goto LABEL_26;
  }
  result = AllocCallbackMessage(104, 1u, (unsigned int)v13, v40, 1, 0x200uLL);
  v10 = result;
  v33 = result;
  if ( !result )
    return result;
  if ( result != v39 && result != v40 )
    PushW32ThreadLock((__int64)result, v38, (__int64)Win32FreePool);
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v10,
              *(char **)(a4 + 24),
              *(_DWORD *)(a4 + 16) + 2,
              (void **)v10 + 10) < 0 )
    goto LABEL_26;
  v15 = WindowFromDC(a3);
  DC = (HDC)_GetDC(v15);
  v34 = GreSetTextColor(DC, *(_DWORD *)(gpsi + 3640LL));
  v32 = GreSetBkColor(DC, *(_DWORD *)(gpsi + 3628LL));
  GetDPIServerInfo(v18, v17, v19);
  RegionSize = GreSelectFontInternal(DC);
  *((_QWORD *)v10 + 5) = v11;
  *((_DWORD *)v10 + 12) = a2;
  *((_QWORD *)v10 + 7) = DC;
  *(_OWORD *)(v10 + 88) = *(_OWORD *)a4;
  *((_QWORD *)v10 + 8) = a5;
  *((_QWORD *)v10 + 9) = a6;
  v37[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v37;
  v37[1] = a1;
  if ( a1 )
    ++*(_DWORD *)(a1 + 8);
  v20 = *(_QWORD *)(gptiCurrent + 440LL);
  v21 = *(_OWORD *)(v20 + 64);
  v22 = *(_QWORD *)(v20 + 80);
  *(_QWORD *)(v20 + 72) = v11;
  v23 = a1 ? *(_QWORD *)a1 : 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 64LL) = v23;
  v24 = a1 ? *(_QWORD *)(a1 + 264) : 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 80LL) = v24;
  UserSessionSwitchLeaveCrit(v24, gptiCurrent);
  EtwTraceBeginCallback(96LL);
  *((_QWORD *)v10 + 2) = 0LL;
  v25 = KeUserModeCallback(96LL, v10, *(unsigned int *)v10, &v36, &v31);
  EtwTraceEndCallback(96LL);
  EnterCrit(1LL);
  ThreadUnlock1(v27, v26);
  v28 = *(_QWORD *)(gptiCurrent + 440LL);
  *(_OWORD *)(v28 + 64) = v21;
  *(_QWORD *)(v28 + 80) = v22;
  GreSelectFontInternal(DC);
  GreSetBkColor(DC, v32);
  GreSetTextColor(DC, v34);
  _ReleaseDC(DC);
  if ( v25 < 0 )
    goto LABEL_26;
  if ( v31 == 24 )
  {
    v29 = (__int64 *)v36;
    if ( v36 + 8 < v36 || v36 + 8 > W32UserProbeAddress )
      v29 = (__int64 *)W32UserProbeAddress;
    v30 = *v29;
    v37[4] = *v29;
  }
  else
  {
LABEL_26:
    v30 = 0LL;
  }
  if ( v10 != v39 && v10 != v40 )
  {
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v10 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v38);
  }
  return (unsigned __int8 *)v30;
}
