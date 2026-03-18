/*
 * XREFs of xxxEnumDisplayMonitors @ 0x1C0058B60
 * Callers:
 *     NtUserEnumDisplayMonitors @ 0x1C0058780 (NtUserEnumDisplayMonitors.c)
 * Callees:
 *     GetStyleWindow_0 @ 0x1C0002440 (GetStyleWindow_0.c)
 *     IsxxxClientMonitorEnumProcSupported_0 @ 0x1C0002C68 (IsxxxClientMonitorEnumProcSupported_0.c)
 *     xxxClientMonitorEnumProc_0 @ 0x1C0002C70 (xxxClientMonitorEnumProc_0.c)
 *     ReleaseCacheDC @ 0x1C0024AF0 (ReleaseCacheDC.c)
 *     GreLockVisRgn @ 0x1C0025520 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C00255C0 (GreUnlockVisRgn.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00352B8 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C0036CBC (W32GetThreadWin32Thread.c)
 *     GetMonitorDC @ 0x1C0038300 (GetMonitorDC.c)
 *     GreGetClipBox @ 0x1C0045240 (GreGetClipBox.c)
 *     GreIntersectClipRect @ 0x1C00453F0 (GreIntersectClipRect.c)
 *     LookupDC @ 0x1C0054F80 (LookupDC.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x1C00588F0 (TransformRectBetweenCoordinateSpaces.c)
 *     IntersectRect @ 0x1C005903C (IntersectRect.c)
 *     ThreadUnlock1 @ 0x1C00590B0 (ThreadUnlock1.c)
 *     GreGetDCPoint @ 0x1C0075BA0 (GreGetDCPoint.c)
 *     ?AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z @ 0x1C0082240 (-AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxEnumDisplayMonitors(
        HDC a1,
        __int64 a2,
        __int64 (__fastcall *a3)(__int64, HDC, struct tagRECT *, __int64, _QWORD),
        __int64 a4,
        int a5)
{
  unsigned int v5; // ebx
  __int64 *v8; // r13
  __int64 StyleWindow_0; // rsi
  __int64 *v10; // r14
  struct tagRECT *v11; // rax
  __int64 v12; // rsi
  unsigned int v13; // r12d
  __int64 v14; // r8
  HDC MonitorDC; // r14
  __int64 v16; // rcx
  unsigned int v17; // eax
  int v18; // edx
  int v19; // r8d
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  __int64 *v25; // rax
  int v26; // eax
  int v27; // ecx
  struct tagMONITOR *v28; // rax
  int v29[2]; // [rsp+20h] [rbp-61h]
  __int64 v30; // [rsp+30h] [rbp-51h]
  __int64 v33; // [rsp+48h] [rbp-39h]
  struct tagTHREADINFO *v34; // [rsp+50h] [rbp-31h]
  _QWORD v35[3]; // [rsp+58h] [rbp-29h] BYREF
  struct tagRECT v36; // [rsp+70h] [rbp-11h] BYREF
  struct tagRECT v37; // [rsp+80h] [rbp-1h] BYREF

  v5 = 0;
  v30 = 0LL;
  v34 = gptiCurrent;
  v8 = 0LL;
  v33 = 0LL;
  StyleWindow_0 = 0LL;
  v36 = 0LL;
  if ( !a1 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v23 = 0)
        : (v23 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          !v23) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v21 = 0)
          : (v21 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v21) )
      {
        v10 = (__int64 *)gpDispInfo;
        v11 = (struct tagRECT *)(gpDispInfo + 136);
      }
      else
      {
        v10 = (__int64 *)gpDispInfo;
        v11 = (struct tagRECT *)(gpDispInfo + 104);
      }
    }
    else
    {
      v10 = (__int64 *)gpDispInfo;
      v11 = (struct tagRECT *)(gpDispInfo + 120);
    }
    v36 = *v11;
    if ( a2 && !(unsigned int)IntersectRect(&v36, &v36, a2) )
      return 1LL;
    goto LABEL_6;
  }
  GreLockVisRgn(*(_QWORD *)gpDispInfo, a2, (int)a3);
  v25 = LookupDC((__int64)a1, 1);
  v8 = v25;
  if ( !v25 )
  {
LABEL_68:
    GreUnlockVisRgn(*(_QWORD *)gpDispInfo);
    return v5;
  }
  v33 = v25[2];
  if ( (v25[8] & 0x4000) != 0 )
    StyleWindow_0 = GetStyleWindow_0();
  if ( (unsigned int)GreGetClipBox(a1, (struct ERECTL *)&v36, 0) == 1 )
    goto LABEL_67;
  if ( StyleWindow_0
    && (*(_WORD *)(StyleWindow_0 + 66) & 0x3FFF) == 0x29D
    && (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 2 )
  {
    TransformRectBetweenCoordinateSpaces(&v36, &v36, 0LL, StyleWindow_0);
  }
  if ( a2 && !(unsigned int)IntersectRect(&v36, &v36, a2) )
  {
LABEL_67:
    v5 = 1;
    goto LABEL_68;
  }
  if ( StyleWindow_0 )
  {
    if ( (*(_WORD *)(StyleWindow_0 + 66) & 0x3FFF) != 0x29D )
    {
      GreGetDCPoint(a1);
      v26 = *(_DWORD *)(StyleWindow_0 + 112);
      LODWORD(v30) = v26;
      v27 = *(_DWORD *)(StyleWindow_0 + 116);
      HIDWORD(v30) = v27;
      goto LABEL_60;
    }
  }
  else
  {
    GreGetDCPoint(a1);
  }
  v26 = 0;
  v27 = 0;
LABEL_60:
  v36.left += v26;
  v36.right += v26;
  v36.bottom += v27;
  v36.top += v27;
  v10 = (__int64 *)gpDispInfo;
LABEL_6:
  v12 = v10[12];
  v13 = 1;
  while ( v12 )
  {
    if ( (*(_DWORD *)(v12 + 24) & 1) == 0 )
      goto LABEL_28;
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v24 = 0)
        : (v24 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          !v24) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 1
        || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v22 = 0)
          : (v22 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v14 = v12 + 60,
            !v22) )
      {
        v14 = v12 + 28;
      }
    }
    else
    {
      v14 = v12 + 44;
    }
    if ( (unsigned int)IntersectRect(&v37, &v36, v14) )
    {
      if ( a1 )
      {
        v28 = AdjustDisplayMonitor((struct tagMONITOR *)v12, &v37);
        MonitorDC = (HDC)GetMonitorDC((__int64)v8, (__int64)v28, v28 != (struct tagMONITOR *)v12);
        if ( !MonitorDC )
          goto LABEL_68;
        v37.top -= HIDWORD(v30);
        v37.left -= v30;
        v37.bottom -= HIDWORD(v30);
        v37.right -= v30;
        GreIntersectClipRect(MonitorDC, v37.left, v37.top, v37.right, v37.bottom);
      }
      else
      {
        MonitorDC = 0LL;
      }
      v35[0] = *((_QWORD *)v34 + 46);
      *((_QWORD *)v34 + 46) = v35;
      v35[1] = v12;
      ++*(_DWORD *)(v12 + 8);
      if ( a1 )
        GreUnlockVisRgn(*(_QWORD *)gpDispInfo);
      if ( a5 )
      {
        v17 = a3(v12, MonitorDC, &v37, a4, *(_QWORD *)v29);
LABEL_20:
        v13 = v17;
      }
      else if ( (int)IsxxxClientMonitorEnumProcSupported_0() >= 0 )
      {
        *(_QWORD *)v29 = a3;
        v17 = xxxClientMonitorEnumProc_0();
        goto LABEL_20;
      }
      if ( !ThreadUnlock1(v16)
        || (*(_BYTE *)(dword_1C011A130 * (unsigned int)(unsigned __int16)*(_DWORD *)v12 + qword_1C011A128 + 17) & 1) != 0 )
      {
        v13 = 0;
      }
      if ( MonitorDC )
        ReleaseCacheDC((__int64)MonitorDC, 0, v19);
      if ( !v13 )
        return 0LL;
      if ( a1 )
      {
        GreLockVisRgn(*(_QWORD *)gpDispInfo, v18, v19);
        v8 = LookupDC((__int64)a1, 1);
        if ( !v8 || v8[2] != v33 )
          goto LABEL_68;
      }
    }
    v10 = (__int64 *)gpDispInfo;
LABEL_28:
    v12 = *(_QWORD *)(v12 + 16);
  }
  if ( a1 )
    GreUnlockVisRgn(*v10);
  return v13;
}
