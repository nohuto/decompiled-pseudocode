/*
 * XREFs of SfnINLPKDRAWSWITCHWND @ 0x1C0210460
 * Callers:
 *     <none>
 * Callees:
 *     GreSetTextColor @ 0x1C00155BC (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0015630 (GreSetBkColor.c)
 *     GreSelectFont @ 0x1C0018350 (GreSelectFont.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0050200 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     _WindowFromDC @ 0x1C00E5F40 (_WindowFromDC.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C011D254 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C011D2F0 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _W32ExceptionHandler @ 0x1C02D94EC (_W32ExceptionHandler.c)
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
  __int64 DPIServerInfo; // rax
  __int64 v21; // rax
  __int128 v22; // xmm6
  __int64 v23; // xmm7_8
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // edi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 *v30; // rcx
  __int64 v31; // rdi
  int v32; // [rsp+30h] [rbp-348h] BYREF
  int v33; // [rsp+34h] [rbp-344h]
  unsigned __int8 *v34; // [rsp+38h] [rbp-340h]
  int v35; // [rsp+40h] [rbp-338h]
  ULONG_PTR RegionSize; // [rsp+48h] [rbp-330h] BYREF
  unsigned __int64 v37; // [rsp+50h] [rbp-328h] BYREF
  _QWORD v38[5]; // [rsp+58h] [rbp-320h] BYREF
  _QWORD v39[4]; // [rsp+80h] [rbp-2F8h] BYREF
  unsigned __int8 v40[112]; // [rsp+A0h] [rbp-2D8h] BYREF
  unsigned __int8 v41[512]; // [rsp+110h] [rbp-268h] BYREF

  v10 = v40;
  if ( a1 )
    v11 = a1 - *(_QWORD *)(gptiCurrent + 424LL);
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
  result = AllocCallbackMessage(104, 1u, (unsigned int)v13, v41, 1, 0x200uLL);
  v10 = result;
  v34 = result;
  if ( !result )
    return result;
  if ( result != v40 && result != v41 )
    PushW32ThreadLock((__int64)result, v39, (__int64)Win32FreePool);
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v10,
              *(char **)(a4 + 24),
              *(_DWORD *)(a4 + 16) + 2,
              (void **)v10 + 10) < 0 )
    goto LABEL_26;
  v15 = WindowFromDC(a3);
  DC = (HDC)_GetDC(v15);
  v35 = GreSetTextColor(DC, *(_DWORD *)(gpsi + 3640LL));
  v33 = GreSetBkColor(DC, *(_DWORD *)(gpsi + 3628LL));
  DPIServerInfo = GetDPIServerInfo(v18, v17, v19);
  RegionSize = GreSelectFont((__int64)DC, *(_QWORD *)(DPIServerInfo + 8));
  *((_QWORD *)v10 + 5) = v11;
  *((_DWORD *)v10 + 12) = a2;
  *((_QWORD *)v10 + 7) = DC;
  *(_OWORD *)(v10 + 88) = *(_OWORD *)a4;
  *((_QWORD *)v10 + 8) = a5;
  *((_QWORD *)v10 + 9) = a6;
  v38[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v38;
  v38[1] = a1;
  if ( a1 )
    ++*(_DWORD *)(a1 + 8);
  v21 = *(_QWORD *)(gptiCurrent + 432LL);
  v22 = *(_OWORD *)(v21 + 64);
  v23 = *(_QWORD *)(v21 + 80);
  *(_QWORD *)(v21 + 72) = v11;
  v24 = a1 ? *(_QWORD *)a1 : 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v24;
  v25 = a1 ? *(_QWORD *)(a1 + 264) : 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v25;
  UserSessionSwitchLeaveCrit(v25, gptiCurrent);
  EtwTraceBeginCallback(96LL);
  *((_QWORD *)v10 + 2) = 0LL;
  v26 = KeUserModeCallback(96LL, v10, *(unsigned int *)v10, &v37, &v32);
  EtwTraceEndCallback(96LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v28, v27);
  v29 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v29 + 64) = v22;
  *(_QWORD *)(v29 + 80) = v23;
  GreSelectFont((__int64)DC, RegionSize);
  GreSetBkColor(DC, v33);
  GreSetTextColor(DC, v35);
  _ReleaseDC(DC);
  if ( v26 < 0 )
    goto LABEL_26;
  if ( v32 == 24 )
  {
    v30 = (__int64 *)v37;
    if ( v37 + 8 < v37 || v37 + 8 > W32UserProbeAddress )
      v30 = (__int64 *)W32UserProbeAddress;
    v31 = *v30;
    v38[4] = *v30;
  }
  else
  {
LABEL_26:
    v31 = 0LL;
  }
  if ( v10 != v40 && v10 != v41 )
  {
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v10 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v39);
  }
  return (unsigned __int8 *)v31;
}
