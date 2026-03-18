/*
 * XREFs of xxxDrawDragRectEx @ 0x1C0202F18
 * Callers:
 *     xxxReleaseCapture @ 0x1C00BB8C0 (xxxReleaseCapture.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FF724 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C0201E1C (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C0202188 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxCancelTrackingForThread @ 0x1C0202E30 (xxxCancelTrackingForThread.c)
 *     xxxMoveSize @ 0x1C0204D60 (xxxMoveSize.c)
 * Callees:
 *     FreeSpb @ 0x1C000CAC0 (FreeSpb.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00579A0 (PopAndFreeW32ThreadLock.c)
 *     GetMonitorFlagsFromWindow @ 0x1C0058654 (GetMonitorFlagsFromWindow.c)
 *     IntersectRect @ 0x1C005D934 (IntersectRect.c)
 *     _IsTopLevelWindow @ 0x1C00725F0 (_IsTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     bSetDevDragRect @ 0x1C00940E0 (bSetDevDragRect.c)
 *     LockW32Thread @ 0x1C009E9CC (LockW32Thread.c)
 *     xxxSetWindowPos @ 0x1C00A5850 (xxxSetWindowPos.c)
 *     zzzSetFMouseMoved @ 0x1C00DC310 (zzzSetFMouseMoved.c)
 *     _ScreenToClient @ 0x1C00DD204 (_ScreenToClient.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     DetectNewMonitor @ 0x1C01DB9AC (DetectNewMonitor.c)
 *     FindSpb @ 0x1C01E12B4 (FindSpb.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C01FF6E4 (-xxxMS_FlushWigglies@@YAXXZ.c)
 *     xxxUpdateThreadsWindows @ 0x1C02053DC (xxxUpdateThreadsWindows.c)
 *     bMoveDevDragRect @ 0x1C0278970 (bMoveDevDragRect.c)
 *     bMoveDevPreviewRect @ 0x1C0278C38 (bMoveDevPreviewRect.c)
 *     bSetDevPreviewRect @ 0x1C0278E04 (bSetDevPreviewRect.c)
 *     vSetDevDragRectDPI @ 0x1C0278FE8 (vSetDevDragRectDPI.c)
 */

__int64 __fastcall xxxDrawDragRectEx(struct _MOVESIZEDATA *a1, LONG *a2, __int64 a3, LONG *a4)
{
  int v6; // r15d
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // r13d
  unsigned int v13; // edx
  unsigned int v14; // r14d
  unsigned int v15; // r15d
  __int64 v16; // rcx
  struct tagRECT *v17; // rax
  unsigned int v18; // r14d
  int v19; // esi
  BOOL v20; // eax
  LARGE_INTEGER PerformanceCounter; // rax
  struct tagRECT v22; // xmm0
  int v23; // ecx
  __int64 v24; // rdx
  __int64 v25; // r14
  __int64 v26; // rsi
  __int64 v27; // r9
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // r9
  int v31; // r15d
  unsigned int v32; // r13d
  __int64 **Spb; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 RectRgnIndirect; // rax
  __int64 v37; // rsi
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r9
  __int128 v45; // xmm0
  __int64 v46; // rax
  __int64 v47; // rdi
  __int64 v48; // r8
  __int64 v49; // rdx
  __int64 v50; // r15
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  LONG v56; // eax
  __int64 v57; // rcx
  __int64 v58; // r8
  unsigned int MonitorFlagsFromWindow; // eax
  __int64 v60; // r8
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  char v66; // di
  unsigned int v67; // eax
  BOOL v68; // [rsp+40h] [rbp-99h]
  __int128 v69; // [rsp+50h] [rbp-89h] BYREF
  _DWORD v70[2]; // [rsp+60h] [rbp-79h] BYREF
  struct tagRECT v71; // [rsp+68h] [rbp-71h] BYREF
  __int64 v72; // [rsp+78h] [rbp-61h] BYREF
  __int64 v73; // [rsp+80h] [rbp-59h]
  __int128 v74; // [rsp+90h] [rbp-49h] BYREF
  _DWORD v75[2]; // [rsp+A0h] [rbp-39h] BYREF
  __int64 v76; // [rsp+A8h] [rbp-31h]
  __int64 v77; // [rsp+B0h] [rbp-29h]
  _BYTE v78[24]; // [rsp+C0h] [rbp-19h] BYREF
  struct _RECTL v79; // [rsp+D8h] [rbp-1h] BYREF
  __int128 v80; // [rsp+E8h] [rbp+Fh] BYREF

  v6 = a3;
  result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, a3, (__int64)a4);
  if ( *(_QWORD *)(result + 408) )
  {
    result = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v10, v11) + 408) + 8LL);
    v12 = *(_DWORD *)(result + 244) & 1;
  }
  else
  {
    v12 = 0;
  }
  v13 = *((_DWORD *)a1 + 45);
  v14 = v6 & 0xF0000000;
  v15 = v6 & 0xFFFFFFF;
  if ( (v13 & 0x10) == 0 )
  {
    result = *(_QWORD *)a1;
    if ( (*(_BYTE *)(*(_QWORD *)a1 + 51LL) & 8) == 0 )
    {
      if ( a2 )
        *(_OWORD *)a4 = *(_OWORD *)a2;
      return result;
    }
  }
  if ( !a2 )
  {
    v17 = (struct tagRECT *)a4;
LABEL_14:
    v68 = 0;
    v71 = *v17;
    v18 = v14 & 0x80000000;
    if ( !v18 && v15 == 3 )
    {
      v19 = (v13 >> 25) & 1;
      if ( (v13 & 0x20) != 0 )
        *((_DWORD *)a1 + 45) = v13 & 0xFDFFFFFF;
      v20 = (unsigned int)DetectNewMonitor((struct tagWND **)a1, &v71)
         && (*(_DWORD *)(*(_QWORD *)a1 + 352LL) & 0xF) != 2;
      v68 = v20;
      *((_DWORD *)a1 + 45) ^= (*((_DWORD *)a1 + 45) ^ (v19 << 25)) & 0x2000000;
      if ( v20 )
      {
        xxxMS_FlushWigglies();
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        zzzSetFMouseMoved(PerformanceCounter.QuadPart, 0LL);
        if ( a2 )
        {
          v22 = v71;
          *(struct tagRECT *)a4 = v71;
          *(struct tagRECT *)a2 = v22;
        }
      }
    }
    v23 = *((_DWORD *)a1 + 45);
    v24 = 0x4000000LL;
    if ( (v23 & 0x20) == 0 || (v23 & 0x4000000) != 0 && v15 < 2 )
    {
      if ( a2 )
      {
        v79.left = *a2;
        v79.top = a2[1];
        v79.right = a2[2];
        v56 = a2[3];
      }
      else
      {
        v79.left = *a4;
        v79.top = a4[1];
        v79.right = a4[2];
        v56 = a4[3];
      }
      v79.bottom = v56;
      *(_QWORD *)&v80 = *((_QWORD *)a1 + 9);
      DWORD2(v80) = *((_DWORD *)a1 + 20);
      result = *((unsigned int *)a1 + 21);
      HIDWORD(v80) = *((_DWORD *)a1 + 21);
      if ( a2 )
      {
        if ( (v23 & 0x10000000) != 0 )
        {
          v57 = *(_QWORD *)a1;
          v58 = *((_QWORD *)a1 + 23);
          v75[0] = *(_DWORD *)(*(_QWORD *)a1 + 352LL) & 0xF;
          v75[1] = *(unsigned __int16 *)(v58 + 154);
          MonitorFlagsFromWindow = GetMonitorFlagsFromWindow(v57);
          v61 = OriginFromMonFlags(MonitorFlagsFromWindow, v60);
          v62 = *((_QWORD *)a1 + 23);
          v76 = v61;
          v77 = OriginFromMonFlags(32LL, v62);
          vSetDevDragRectDPI(*gpDispInfo, v75);
          *((_DWORD *)a1 + 45) &= ~0x10000000u;
        }
        if ( v18 )
        {
          LogicalToPhysicalDPIRect(&v79, &v79, 0LL, 0LL);
          result = bMoveDevPreviewRect(*gpDispInfo, &v79, *(_QWORD *)(gpsi + 5368LL));
        }
        else
        {
          if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v10, v11) + 408) )
            W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v63, v64, v65);
          result = bMoveDevDragRect(*gpDispInfo);
        }
        *(_OWORD *)a4 = *(_OWORD *)a2;
      }
      else if ( v15 )
      {
        if ( v15 == 1 && v18 )
          result = bSetDevPreviewRect(*gpDispInfo, **(_QWORD **)a1, *(_QWORD *)(gpsi + 5368LL));
      }
      else
      {
        v66 = v12 != 0;
        if ( (v23 & 0x4000000) != 0 )
          v66 |= 4u;
        if ( v18 )
        {
          LogicalToPhysicalDPIRect(&v79, &v79, 0LL, 0LL);
          LogicalToPhysicalDPIRect(&v80, &v80, 0LL, 0LL);
          result = bSetDevPreviewRect(*gpDispInfo, **(_QWORD **)a1, *(_QWORD *)(gpsi + 5368LL));
        }
        else
        {
          result = bSetDevDragRect((HDEV)*gpDispInfo, (__int64)&v79, &v80, v66);
        }
      }
    }
    else
    {
      v25 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
      if ( v25 != gptiCurrent )
        LockW32Thread(v25, (__int64)v78);
      *(_DWORD *)(v25 + 440) |= 0x8000u;
      if ( a2 )
        *(_OWORD *)a4 = *(_OWORD *)a2;
      v26 = *(_QWORD *)a1;
      v27 = *(_QWORD *)(*(_QWORD *)a1 + 88LL);
      v69 = *(_OWORD *)a4;
      if ( v27
        && !(unsigned int)IsTopLevelWindow(v26)
        && (ScreenToClient(v28, &v69), ScreenToClient(v29, (_DWORD *)&v69 + 2), (*(_BYTE *)(v30 + 50) & 0x40) != 0) )
      {
        v31 = v69;
        v32 = DWORD2(v69);
      }
      else
      {
        v31 = DWORD2(v69);
        v32 = v69;
      }
      if ( *(char *)(v26 + 40) < 0 )
      {
        v74 = *(_OWORD *)(v26 + 112);
        if ( a2 )
        {
          if ( (unsigned int)IntersectRect(&v74, (int *)&v74, a2) )
          {
            Spb = FindSpb((__int64 *)v26);
            FreeSpb((__int64)Spb, v34, v35);
          }
        }
      }
      RectRgnIndirect = GreCreateRectRgnIndirect(*(_QWORD *)a1 + 112LL);
      v37 = RectRgnIndirect;
      v38 = *(_QWORD *)(*(_QWORD *)a1 + 200LL);
      if ( v38 )
        GreCombineRgn(RectRgnIndirect, RectRgnIndirect, v38, 1LL);
      v39 = *(_QWORD *)a1;
      v72 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v72;
      v73 = v39;
      if ( v39 )
        ++*(_DWORD *)(v39 + 8);
      xxxSetWindowPos(*(struct tagWND **)a1, 0LL, v32, DWORD1(v69), v31 - v32, HIDWORD(v69) - DWORD1(v69), 20);
      if ( (*((_DWORD *)a1 + 45) & 0x20000000) != 0 )
      {
        v42 = ValidateHmonitor(*(_QWORD *)(*(_QWORD *)a1 + 344LL));
        v43 = *(_QWORD *)a1;
        *((_QWORD *)a1 + 23) = v42;
        if ( (unsigned int)IsTopLevelWindow(v43)
          && (*(_DWORD *)(v44 + 352) & 0xF) == 2
          && (*(_DWORD *)(*(_QWORD *)(v44 + 16) + 568LL) & 0x2000000) == 0 )
        {
          if ( a2 )
            *(_OWORD *)a2 = *(_OWORD *)(v44 + 112);
          *(_OWORD *)a4 = *(_OWORD *)(*(_QWORD *)a1 + 112LL);
          v45 = *(_OWORD *)(*(_QWORD *)a1 + 112LL);
          *(_QWORD *)((char *)a1 + 268) = *(_QWORD *)((char *)a1 + 276);
          *(_OWORD *)((char *)a1 + 104) = v45;
          *((_DWORD *)a1 + 67) -= *((_DWORD *)a1 + 26);
          *((_DWORD *)a1 + 68) -= *((_DWORD *)a1 + 27);
        }
        *((_DWORD *)a1 + 45) &= ~0x20000000u;
      }
      ThreadUnlock1(v41, v40);
      if ( *(struct _MOVESIZEDATA **)(v25 + 592) == a1 )
      {
        v46 = GreCreateRectRgnIndirect(*(_QWORD *)a1 + 112LL);
        v47 = v46;
        v48 = *(_QWORD *)(*(_QWORD *)a1 + 200LL);
        if ( v48 )
          GreCombineRgn(v46, v46, v48, 1LL);
        if ( v47 )
        {
          if ( v37 )
            GreCombineRgn(v37, v37, v47, 4LL);
        }
        else if ( v37 )
        {
          GreDeleteObject(v37);
          v37 = 0LL;
        }
        v49 = *(_QWORD *)(GetDesktopWindow(*(_QWORD *)a1) + 96);
        v72 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v72;
        v73 = v49;
        if ( v49 )
          ++*(_DWORD *)(v49 + 8);
        v50 = gptiCurrent;
        xxxUpdateThreadsWindows(gptiCurrent, v49, v37);
        ThreadUnlock1(v52, v51);
        GreDeleteObject(v47);
      }
      else
      {
        v50 = gptiCurrent;
      }
      result = GreDeleteObject(v37);
      *(_DWORD *)(v25 + 440) &= ~0x8000u;
      if ( v25 != v50 )
        result = PopAndFreeW32ThreadLock((__int64)v78, v53, v54, v55);
    }
    if ( v68 && *((_DWORD *)a1 + 40) == 9 )
    {
      v67 = GetMonitorFlagsFromWindow(*(_QWORD *)a1);
      PhysicalToLogicalDPIPoint(v70, (char *)a1 + 284, v67);
      *((_DWORD *)a1 + 38) = v71.left - v70[0];
      result = (unsigned int)(v71.top - v70[1]);
      *((_DWORD *)a1 + 39) = result;
    }
    return result;
  }
  v16 = *((_QWORD *)a1 + 1) - *(_QWORD *)a2;
  if ( !v16 )
    v16 = *((_QWORD *)a1 + 2) - *((_QWORD *)a2 + 1);
  if ( v16 )
  {
    v17 = (struct tagRECT *)a2;
    goto LABEL_14;
  }
  return result;
}
