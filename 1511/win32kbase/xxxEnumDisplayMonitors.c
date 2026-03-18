/*
 * XREFs of xxxEnumDisplayMonitors @ 0x1C005E4F0
 * Callers:
 *     NtUserEnumDisplayMonitors @ 0x1C005E310 (NtUserEnumDisplayMonitors.c)
 * Callees:
 *     GetStyleWindow_0 @ 0x1C0002468 (GetStyleWindow_0.c)
 *     IsxxxClientMonitorEnumProcSupported_0 @ 0x1C0002C68 (IsxxxClientMonitorEnumProcSupported_0.c)
 *     xxxClientMonitorEnumProc_0 @ 0x1C0002C70 (xxxClientMonitorEnumProc_0.c)
 *     GreGetClipBox @ 0x1C0014B60 (GreGetClipBox.c)
 *     GreIntersectClipRect @ 0x1C0014D20 (GreIntersectClipRect.c)
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     ReleaseCacheDC @ 0x1C0034430 (ReleaseCacheDC.c)
 *     GreGetDCPoint @ 0x1C00422D0 (GreGetDCPoint.c)
 *     GreUnlockVisRgn @ 0x1C00439F0 (GreUnlockVisRgn.c)
 *     GetMonitorDC @ 0x1C0043A70 (GetMonitorDC.c)
 *     LookupDC @ 0x1C00445C0 (LookupDC.c)
 *     GreLockVisRgn @ 0x1C0044600 (GreLockVisRgn.c)
 *     IntersectRect @ 0x1C00446B8 (IntersectRect.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x1C0047D40 (TransformRectBetweenCoordinateSpaces.c)
 *     ThreadUnlock1 @ 0x1C005EA20 (ThreadUnlock1.c)
 *     ?AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z @ 0x1C005EA7C (-AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxEnumDisplayMonitors(HDC a1, int *a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v5; // ebx
  __int64 *v8; // r13
  __int64 StyleWindow_0; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 *v15; // rdi
  struct tagRECT *v16; // rax
  __int64 v17; // rsi
  unsigned int v18; // r12d
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // r8
  int *v24; // r8
  __int64 MonitorDC; // rdi
  __int64 v26; // rcx
  unsigned int v27; // eax
  __int64 v29; // rdx
  __int64 v30; // r8
  int v31; // ecx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 *v34; // rax
  __int64 v35; // rcx
  int v36; // eax
  struct tagMONITOR *v37; // rax
  __int64 (__fastcall *v38)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [rsp+20h] [rbp-61h]
  __int64 v39; // [rsp+30h] [rbp-51h] BYREF
  __int64 v40; // [rsp+38h] [rbp-49h]
  __int64 v41; // [rsp+40h] [rbp-41h]
  __int64 (__fastcall *v42)(__int64, __int64, tagRECT *, __int64, _QWORD); // [rsp+48h] [rbp-39h]
  struct tagTHREADINFO *v43; // [rsp+50h] [rbp-31h]
  _QWORD v44[3]; // [rsp+58h] [rbp-29h] BYREF
  struct tagRECT v45; // [rsp+70h] [rbp-11h] BYREF
  tagRECT v46; // [rsp+80h] [rbp-1h] BYREF

  v5 = 0;
  v41 = a4;
  v42 = (__int64 (__fastcall *)(__int64, __int64, tagRECT *, __int64, _QWORD))a3;
  v39 = 0LL;
  v43 = gptiCurrent;
  v8 = 0LL;
  v40 = 0LL;
  StyleWindow_0 = 0LL;
  v45 = 0LL;
  if ( !a1 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(0LL) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x4000) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12) + 408)
        ? (v10 = 0LL)
        : (v10 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          !(_DWORD)v10) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14) + 408)
          ? (v10 = 0LL)
          : (v10 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            (_DWORD)v10) )
      {
        v15 = (__int64 *)gpDispInfo;
        v16 = (struct tagRECT *)(gpDispInfo + 136);
      }
      else
      {
        v15 = (__int64 *)gpDispInfo;
        v16 = (struct tagRECT *)(gpDispInfo + 104);
      }
    }
    else
    {
      v15 = (__int64 *)gpDispInfo;
      v16 = (struct tagRECT *)(gpDispInfo + 120);
    }
    v45 = *v16;
    if ( a2 && !(unsigned int)IntersectRect(&v45, &v45.left, a2) )
      return 1LL;
    goto LABEL_7;
  }
  GreLockVisRgn(*(_QWORD *)gpDispInfo, (int)a2, a3);
  v34 = LookupDC((__int64)a1, 1);
  v8 = v34;
  if ( !v34 )
  {
LABEL_70:
    GreUnlockVisRgn(*(_QWORD *)gpDispInfo, v13, v14);
    return v5;
  }
  v40 = v34[2];
  if ( (v34[8] & 0x4000) != 0 )
    StyleWindow_0 = GetStyleWindow_0();
  if ( (unsigned int)GreGetClipBox(a1, &v45.left, 0) == 1 )
    goto LABEL_69;
  if ( StyleWindow_0
    && (*(_WORD *)(StyleWindow_0 + 66) & 0x3FFF) == 0x29D
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v35) + 776) & 0x4000) == 0 )
  {
    TransformRectBetweenCoordinateSpaces(&v45, &v45, 0LL, StyleWindow_0);
  }
  if ( a2 && !(unsigned int)IntersectRect(&v45, &v45.left, a2) )
  {
LABEL_69:
    v5 = 1;
    goto LABEL_70;
  }
  if ( StyleWindow_0 )
  {
    if ( (*(_WORD *)(StyleWindow_0 + 66) & 0x3FFF) != 0x29D )
    {
      GreGetDCPoint(a1, 32, (__int64)&v39);
      v36 = *(_DWORD *)(StyleWindow_0 + 112) + v39;
      LODWORD(v39) = v36;
      v10 = (unsigned int)(*(_DWORD *)(StyleWindow_0 + 116) + HIDWORD(v39));
      HIDWORD(v39) += *(_DWORD *)(StyleWindow_0 + 116);
      goto LABEL_62;
    }
  }
  else
  {
    GreGetDCPoint(a1, 32, (__int64)&v39);
  }
  v36 = v39;
  v10 = HIDWORD(v39);
LABEL_62:
  v45.left += v36;
  v45.right += v36;
  v45.bottom += v10;
  v45.top += v10;
  v15 = (__int64 *)gpDispInfo;
LABEL_7:
  v17 = v15[12];
  v18 = 1;
  while ( v17 )
  {
    if ( (*(_DWORD *)(v17 + 24) & 1) == 0 )
      goto LABEL_30;
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x4000) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20, v21) + 408)
        ? (v19 = 0LL)
        : (v19 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32, v33)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          !(_DWORD)v19) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x2000) == 0
        || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23) + 408)
          ? (v31 = 0)
          : (v31 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29, v30)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v24 = (int *)(v17 + 60),
            !v31) )
      {
        v24 = (int *)(v17 + 28);
      }
    }
    else
    {
      v24 = (int *)(v17 + 44);
    }
    if ( (unsigned int)IntersectRect(&v46, &v45.left, v24) )
    {
      if ( a1 )
      {
        v37 = AdjustDisplayMonitor((struct tagMONITOR *)v17, &v46);
        MonitorDC = GetMonitorDC((__int64)v8, (__int64)v37, v37 != (struct tagMONITOR *)v17);
        if ( !MonitorDC )
          goto LABEL_70;
        v46.top -= HIDWORD(v39);
        v46.left -= v39;
        v46.bottom -= HIDWORD(v39);
        v46.right -= v39;
        GreIntersectClipRect(MonitorDC, v46.left, v46.top, v46.right, v46.bottom);
      }
      else
      {
        MonitorDC = 0LL;
      }
      v44[0] = *((_QWORD *)v43 + 46);
      *((_QWORD *)v43 + 46) = v44;
      v44[1] = v17;
      ++*(_DWORD *)(v17 + 8);
      if ( a1 )
        GreUnlockVisRgn(*(_QWORD *)gpDispInfo, v13, v14);
      if ( a5 )
      {
        v27 = v42(v17, MonitorDC, &v46, v41, v38);
LABEL_22:
        v18 = v27;
      }
      else if ( (int)IsxxxClientMonitorEnumProcSupported_0() >= 0 )
      {
        v38 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v42;
        v27 = xxxClientMonitorEnumProc_0();
        goto LABEL_22;
      }
      if ( !ThreadUnlock1(v26)
        || (v10 = dword_1C0102D50 * (unsigned int)(unsigned __int16)*(_DWORD *)v17,
            (*(_BYTE *)(v10 + qword_1C0102D48 + 17) & 1) != 0) )
      {
        v18 = 0;
      }
      if ( MonitorDC )
        ReleaseCacheDC(MonitorDC, 0LL, v14);
      if ( !v18 )
        return 0LL;
      if ( a1 )
      {
        GreLockVisRgn(*(_QWORD *)gpDispInfo, v13, v14);
        v8 = LookupDC((__int64)a1, 1);
        if ( !v8 || v8[2] != v40 )
          goto LABEL_70;
      }
    }
    v15 = (__int64 *)gpDispInfo;
LABEL_30:
    v17 = *(_QWORD *)(v17 + 16);
  }
  if ( a1 )
    GreUnlockVisRgn(*v15, v13, v14);
  return v18;
}
