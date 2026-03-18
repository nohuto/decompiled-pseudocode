/*
 * XREFs of xxxEnumDisplayMonitors @ 0x1C0052BD0
 * Callers:
 *     NtUserEnumDisplayMonitors @ 0x1C00557F0 (NtUserEnumDisplayMonitors.c)
 * Callees:
 *     GetStyleWindow_0 @ 0x1C0002438 (GetStyleWindow_0.c)
 *     IsxxxClientMonitorEnumProcSupported_0 @ 0x1C0002C38 (IsxxxClientMonitorEnumProcSupported_0.c)
 *     xxxClientMonitorEnumProc_0 @ 0x1C0002C40 (xxxClientMonitorEnumProc_0.c)
 *     GreGetClipBox @ 0x1C0026E80 (GreGetClipBox.c)
 *     GreIntersectClipRect @ 0x1C00279E0 (GreIntersectClipRect.c)
 *     ReleaseCacheDC @ 0x1C00357B0 (ReleaseCacheDC.c)
 *     GreLockVisRgn @ 0x1C0036AA0 (GreLockVisRgn.c)
 *     W32GetThreadWin32Thread @ 0x1C00384E0 (W32GetThreadWin32Thread.c)
 *     GreUnlockVisRgn @ 0x1C0038810 (GreUnlockVisRgn.c)
 *     ThreadUnlock1 @ 0x1C0052B70 (ThreadUnlock1.c)
 *     GetMonitorDC @ 0x1C0053E98 (GetMonitorDC.c)
 *     LookupDC @ 0x1C0054B00 (LookupDC.c)
 *     GreGetDCPoint @ 0x1C0054BF0 (GreGetDCPoint.c)
 *     IntersectRect @ 0x1C00553DC (IntersectRect.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x1C0055AC0 (TransformRectBetweenCoordinateSpaces.c)
 *     ?AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z @ 0x1C008403C (-AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxEnumDisplayMonitors(
        HDC a1,
        __int64 a2,
        __int64 (__fastcall *a3)(__int64, HDC, tagRECT *, __int64),
        __int64 a4,
        int a5)
{
  unsigned int v5; // ebx
  __int64 v8; // r13
  __int64 StyleWindow_0; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *v14; // rdi
  __int128 *v15; // rax
  __int64 v16; // rsi
  unsigned int v17; // r12d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r8
  HDC MonitorDC; // rdi
  unsigned int v24; // eax
  int v26; // ecx
  __int64 v27; // rax
  __int64 v28; // rcx
  int v29; // eax
  struct tagMONITOR *v30; // rax
  int v31[2]; // [rsp+20h] [rbp-61h]
  __int64 v32; // [rsp+28h] [rbp-59h]
  __int64 v33; // [rsp+30h] [rbp-51h]
  __int64 v34; // [rsp+38h] [rbp-49h]
  struct tagTHREADINFO *v37; // [rsp+50h] [rbp-31h]
  _QWORD v38[3]; // [rsp+58h] [rbp-29h] BYREF
  __int128 v39; // [rsp+70h] [rbp-11h] BYREF
  tagRECT v40; // [rsp+80h] [rbp-1h] BYREF

  v5 = 0;
  v33 = 0LL;
  v37 = gptiCurrent;
  v8 = 0LL;
  v34 = 0LL;
  StyleWindow_0 = 0LL;
  v39 = 0LL;
  if ( !a1 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(0LL, a2, a3, a4, *(_QWORD *)v31, v32) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11, v10, v12, v13, *(_QWORD *)v31, v32) + 776) & 0x4000) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v11 = 0LL)
        : (v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          !(_DWORD)v11) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11, v10, v12, v13, *(_QWORD *)v31, v32) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v11 = 0LL)
          : (v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            (_DWORD)v11) )
      {
        v14 = (__int64 *)gpDispInfo;
        v15 = (__int128 *)(gpDispInfo + 136);
      }
      else
      {
        v14 = (__int64 *)gpDispInfo;
        v15 = (__int128 *)(gpDispInfo + 104);
      }
    }
    else
    {
      v14 = (__int64 *)gpDispInfo;
      v15 = (__int128 *)(gpDispInfo + 120);
    }
    v39 = *v15;
    if ( a2 && !(unsigned int)IntersectRect(&v39, &v39, a2) )
      return 1LL;
    goto LABEL_7;
  }
  GreLockVisRgn(*(_QWORD *)gpDispInfo, a2, (__int64)a3);
  v27 = LookupDC(a1, 1LL);
  v8 = v27;
  if ( !v27 )
  {
LABEL_70:
    GreUnlockVisRgn(*(_QWORD *)gpDispInfo, v10, v12);
    return v5;
  }
  v34 = *(_QWORD *)(v27 + 16);
  if ( (*(_DWORD *)(v27 + 64) & 0x4000) != 0 )
    StyleWindow_0 = GetStyleWindow_0();
  if ( (unsigned int)GreGetClipBox(a1, (int *)&v39, 0) == 1 )
    goto LABEL_69;
  if ( StyleWindow_0
    && (*(_WORD *)(StyleWindow_0 + 66) & 0x3FFF) == 0x29D
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v28, v10, v12, v13, *(_QWORD *)v31, v32) + 776) & 0x4000) == 0 )
  {
    TransformRectBetweenCoordinateSpaces(&v39, &v39, 0LL, StyleWindow_0);
  }
  if ( a2 && !(unsigned int)IntersectRect(&v39, &v39, a2) )
  {
LABEL_69:
    v5 = 1;
    goto LABEL_70;
  }
  if ( StyleWindow_0 )
  {
    if ( (*(_WORD *)(StyleWindow_0 + 66) & 0x3FFF) != 0x29D )
    {
      GreGetDCPoint(a1);
      v29 = *(_DWORD *)(StyleWindow_0 + 112);
      LODWORD(v33) = v29;
      v11 = *(unsigned int *)(StyleWindow_0 + 116);
      HIDWORD(v33) = *(_DWORD *)(StyleWindow_0 + 116);
      goto LABEL_62;
    }
  }
  else
  {
    GreGetDCPoint(a1);
  }
  v29 = 0;
  v11 = 0LL;
LABEL_62:
  LODWORD(v39) = v29 + v39;
  DWORD2(v39) += v29;
  HIDWORD(v39) += v11;
  DWORD1(v39) += v11;
  v14 = (__int64 *)gpDispInfo;
LABEL_7:
  v16 = v14[12];
  v17 = 1;
  while ( v16 )
  {
    if ( (*(_DWORD *)(v16 + 24) & 1) == 0 )
      goto LABEL_30;
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11, v10, v12, v13, *(_QWORD *)v31, v32) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19, v18, v20, v21, *(_QWORD *)v31, v32) + 776) & 0x4000) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v19 = 0LL)
        : (v19 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          !(_DWORD)v19) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19, v18, v20, v21, *(_QWORD *)v31, v32) + 776) & 0x2000) == 0
        || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v26 = 0)
          : (v26 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v22 = v16 + 60,
            !v26) )
      {
        v22 = v16 + 28;
      }
    }
    else
    {
      v22 = v16 + 44;
    }
    if ( (unsigned int)IntersectRect(&v40, &v39, v22) )
    {
      if ( a1 )
      {
        v30 = AdjustDisplayMonitor((struct tagMONITOR *)v16, &v40);
        MonitorDC = (HDC)GetMonitorDC(v8, v30, v30 != (struct tagMONITOR *)v16);
        if ( !MonitorDC )
          goto LABEL_70;
        v40.top -= HIDWORD(v33);
        v40.left -= v33;
        v40.bottom -= HIDWORD(v33);
        v40.right -= v33;
        GreIntersectClipRect(MonitorDC, v40.left, v40.top, v40.right, v40.bottom);
      }
      else
      {
        MonitorDC = 0LL;
      }
      v38[0] = *((_QWORD *)v37 + 47);
      *((_QWORD *)v37 + 47) = v38;
      v38[1] = v16;
      ++*(_DWORD *)(v16 + 8);
      if ( a1 )
        GreUnlockVisRgn(*(_QWORD *)gpDispInfo, v10, v12);
      if ( a5 )
      {
        v24 = a3(v16, MonitorDC, &v40, a4);
LABEL_22:
        v17 = v24;
      }
      else if ( (int)IsxxxClientMonitorEnumProcSupported_0() >= 0 )
      {
        *(_QWORD *)v31 = a3;
        v24 = xxxClientMonitorEnumProc_0();
        goto LABEL_22;
      }
      if ( !ThreadUnlock1()
        || (v11 = dword_1C01003F0 * (unsigned int)(unsigned __int16)*(_DWORD *)v16,
            (*(_BYTE *)(v11 + qword_1C01003E8 + 17) & 1) != 0) )
      {
        v17 = 0;
      }
      if ( MonitorDC )
        ReleaseCacheDC((__int64)MonitorDC, 0, v12);
      if ( !v17 )
        return 0LL;
      if ( a1 )
      {
        GreLockVisRgn(*(_QWORD *)gpDispInfo, v10, v12);
        v8 = LookupDC(a1, 1LL);
        if ( !v8 || *(_QWORD *)(v8 + 16) != v34 )
          goto LABEL_70;
      }
    }
    v14 = (__int64 *)gpDispInfo;
LABEL_30:
    v16 = *(_QWORD *)(v16 + 16);
  }
  if ( a1 )
    GreUnlockVisRgn(*v14, v10, v12);
  return v17;
}
