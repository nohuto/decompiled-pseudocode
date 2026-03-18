/*
 * XREFs of xxxDrawDragRectEx @ 0x1C020B728
 * Callers:
 *     xxxReleaseCapture @ 0x1C00FB250 (xxxReleaseCapture.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C0208098 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C020A7DC (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020AB48 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxCancelTrackingForThread @ 0x1C020B640 (xxxCancelTrackingForThread.c)
 *     xxxMoveSize @ 0x1C020D52C (xxxMoveSize.c)
 * Callees:
 *     FreeSpb @ 0x1C0008718 (FreeSpb.c)
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     _ScreenToClient @ 0x1C0043114 (_ScreenToClient.c)
 *     zzzSetFMouseMoved @ 0x1C00442B0 (zzzSetFMouseMoved.c)
 *     LockW32Thread @ 0x1C00464F8 (LockW32Thread.c)
 *     _IsTopLevelWindow @ 0x1C00665B0 (_IsTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x1C00848B8 (xxxSetWindowPos.c)
 *     PopAndFreeW32ThreadLock @ 0x1C008C240 (PopAndFreeW32ThreadLock.c)
 *     IntersectRect @ 0x1C008E444 (IntersectRect.c)
 *     LogicalCursorPos @ 0x1C0090A74 (LogicalCursorPos.c)
 *     bSetDevDragRect @ 0x1C00FA430 (bSetDevDragRect.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     DetectNewMonitor @ 0x1C01E4C88 (DetectNewMonitor.c)
 *     FindSpb @ 0x1C01EA224 (FindSpb.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C0208058 (-xxxMS_FlushWigglies@@YAXXZ.c)
 *     xxxUpdateThreadsWindows @ 0x1C020DBB8 (xxxUpdateThreadsWindows.c)
 *     bMoveDevDragRect @ 0x1C027B430 (bMoveDevDragRect.c)
 *     bMoveDevPreviewRect @ 0x1C027B6F4 (bMoveDevPreviewRect.c)
 *     bSetDevPreviewRect @ 0x1C027B8BC (bSetDevPreviewRect.c)
 *     vSetDevDragRectDPI @ 0x1C027BAA4 (vSetDevDragRectDPI.c)
 */

__int64 __fastcall xxxDrawDragRectEx(struct tagRECT **a1, struct tagRECT *a2, int a3, struct tagRECT *a4)
{
  int v8; // r13d
  unsigned int v9; // edx
  unsigned int v10; // r14d
  unsigned int v11; // r15d
  __int64 result; // rax
  struct tagRECT *v13; // rax
  unsigned int v14; // r14d
  int v15; // ebx
  __int64 v16; // rcx
  BOOL v17; // eax
  DWORD LowPart; // eax
  struct tagRECT v19; // xmm0
  __int64 v20; // rcx
  __int64 v21; // r14
  struct tagRECT *v22; // rbx
  __int64 v23; // r9
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // r9
  LONG v27; // r15d
  unsigned int v28; // r13d
  __int64 **Spb; // rax
  __int64 RectRgnIndirect; // rax
  __int64 v31; // rbx
  __int64 v32; // r8
  struct tagRECT *v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  struct tagRECT *v37; // rcx
  __int64 v38; // r9
  struct tagRECT v39; // xmm0
  __int64 v40; // rax
  __int64 v41; // rsi
  __int64 v42; // r8
  struct tagRECT *v43; // rdx
  __int64 v44; // r15
  __int64 v45; // rdx
  __int64 v46; // rcx
  LONG bottom; // eax
  struct tagRECT *v48; // rbx
  LONG v49; // edx
  __int64 CurrentProcessWin32Process; // rax
  unsigned int MonitorFlags; // eax
  __int64 v52; // rax
  struct tagRECT *v53; // rdx
  __int64 v54; // r8
  char v55; // bl
  unsigned __int64 v56; // rax
  int v57; // ecx
  BOOL v58; // [rsp+40h] [rbp-99h]
  struct tagRECT v59; // [rsp+48h] [rbp-91h] BYREF
  __int64 v60; // [rsp+58h] [rbp-81h]
  struct tagRECT v61; // [rsp+60h] [rbp-79h] BYREF
  __int64 v62; // [rsp+70h] [rbp-69h] BYREF
  struct tagRECT *v63; // [rsp+78h] [rbp-61h]
  struct tagRECT v64; // [rsp+88h] [rbp-51h] BYREF
  _DWORD v65[2]; // [rsp+98h] [rbp-41h] BYREF
  __int64 v66; // [rsp+A0h] [rbp-39h]
  __int64 v67; // [rsp+A8h] [rbp-31h]
  _BYTE v68[24]; // [rsp+B8h] [rbp-21h] BYREF
  LONG left; // [rsp+D0h] [rbp-9h] BYREF
  LONG top; // [rsp+D4h] [rbp-5h]
  LONG right; // [rsp+D8h] [rbp-1h]
  LONG v72; // [rsp+DCh] [rbp+3h]
  __int128 v73; // [rsp+E0h] [rbp+7h] BYREF

  if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) )
    v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL) + 260LL) & 1;
  else
    v8 = 0;
  v9 = *((_DWORD *)a1 + 45);
  v10 = a3 & 0xF0000000;
  v11 = a3 & 0xFFFFFFF;
  if ( (v9 & 0x10) == 0 )
  {
    result = (__int64)*a1;
    if ( ((*a1)[3].left & 0x8000000) == 0 )
    {
      if ( a2 )
        *a4 = *a2;
      return result;
    }
  }
  if ( a2 )
  {
    if ( a1[1] == *(struct tagRECT **)&a2->left )
    {
      result = (__int64)a1[2];
      if ( result == *(_QWORD *)&a2->right )
        return result;
    }
    v13 = a2;
  }
  else
  {
    v13 = a4;
  }
  v58 = 0;
  v61 = *v13;
  v14 = v10 & 0x80000000;
  if ( !v14 && v11 == 3 )
  {
    v15 = (v9 >> 25) & 1;
    if ( (v9 & 0x20) != 0 )
      *((_DWORD *)a1 + 45) = v9 & 0xFDFFFFFF;
    v17 = (unsigned int)DetectNewMonitor((_BYTE **)a1, &v61)
       && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 776) & 0x4000) == 0;
    v58 = v17;
    *((_DWORD *)a1 + 45) ^= (*((_DWORD *)a1 + 45) ^ (v15 << 25)) & 0x2000000;
    if ( v17 )
    {
      xxxMS_FlushWigglies();
      LowPart = KeQueryPerformanceCounter(0LL).LowPart;
      zzzSetFMouseMoved(LowPart, 0);
      if ( a2 )
      {
        v19 = v61;
        *a4 = v61;
        *a2 = v19;
      }
    }
  }
  v20 = *((unsigned int *)a1 + 45);
  if ( (v20 & 0x20) == 0 || (v20 & 0x4000000) != 0 && v11 < 2 )
  {
    if ( a2 )
    {
      left = a2->left;
      top = a2->top;
      right = a2->right;
      bottom = a2->bottom;
    }
    else
    {
      left = a4->left;
      top = a4->top;
      right = a4->right;
      bottom = a4->bottom;
    }
    v72 = bottom;
    *(_QWORD *)&v73 = a1[9];
    DWORD2(v73) = *((_DWORD *)a1 + 20);
    result = *((unsigned int *)a1 + 21);
    HIDWORD(v73) = *((_DWORD *)a1 + 21);
    if ( a2 )
    {
      if ( (v20 & 0x10000000) != 0 )
      {
        v48 = a1[23];
        v49 = (*a1)[21].right;
        v65[1] = LOWORD(v48[9].right);
        v65[0] = v49;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v20);
        MonitorFlags = GetMonitorFlags(CurrentProcessWin32Process);
        v52 = OriginFromMonFlags(MonitorFlags, v48);
        v53 = a1[23];
        v66 = v52;
        v67 = OriginFromMonFlags(32LL, v53);
        vSetDevDragRectDPI(*gpDispInfo, v65);
        *((_DWORD *)a1 + 45) &= ~0x10000000u;
      }
      if ( v14 )
      {
        LogicalToPhysicalDPIRect(&left, &left, 0LL, 0LL);
        result = bMoveDevPreviewRect(*gpDispInfo, &left, v8 != 0, *(_QWORD *)&(*a1)->left, *(_QWORD *)(gpsi + 3976LL));
      }
      else
      {
        if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) )
          v54 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                          + 260LL) & 1;
        else
          v54 = 0LL;
        result = bMoveDevDragRect(*gpDispInfo, &left, v54);
      }
      *a4 = *a2;
    }
    else if ( v11 )
    {
      if ( v11 == 1 && v14 )
        result = bSetDevPreviewRect((HDEV)*gpDispInfo, *(_QWORD *)&(*a1)->left, *(_QWORD *)(gpsi + 3976LL));
    }
    else
    {
      v55 = v8 != 0;
      if ( (v20 & 0x4000000) != 0 )
        v55 |= 4u;
      if ( v14 )
      {
        LogicalToPhysicalDPIRect(&left, &left, 0LL, 0LL);
        LogicalToPhysicalDPIRect(&v73, &v73, 0LL, 0LL);
        result = bSetDevPreviewRect((HDEV)*gpDispInfo, *(_QWORD *)&(*a1)->left, *(_QWORD *)(gpsi + 3976LL));
      }
      else
      {
        result = bSetDevDragRect((HDEV)*gpDispInfo, (__int64)&left, &v73, v55);
      }
    }
  }
  else
  {
    v21 = *(_QWORD *)&(*a1)[1].left;
    v60 = gptiCurrent;
    if ( v21 != gptiCurrent )
      LockW32Thread(v21, (__int64)v68);
    *(_DWORD *)(v21 + 448) |= 0x8000u;
    if ( a2 )
      *a4 = *a2;
    v22 = *a1;
    v23 = *(_QWORD *)&(*a1)[5].right;
    v59 = *a4;
    if ( v23
      && !(unsigned int)IsTopLevelWindow((__int64)v22)
      && (ScreenToClient(v24, &v59), ScreenToClient(v25, &v59.right), (*(_BYTE *)(v26 + 50) & 0x40) != 0) )
    {
      v27 = v59.left;
      v28 = v59.right;
    }
    else
    {
      v27 = v59.right;
      v28 = v59.left;
    }
    if ( SLOBYTE(v22[2].right) < 0 )
    {
      v64 = v22[7];
      if ( a2 )
      {
        if ( (unsigned int)IntersectRect(&v64, &v64.left, &a2->left) )
        {
          Spb = FindSpb((__int64 *)&v22->left);
          FreeSpb((__int64)Spb);
        }
      }
    }
    RectRgnIndirect = GreCreateRectRgnIndirect(&(*a1)[7]);
    v31 = RectRgnIndirect;
    v32 = *(_QWORD *)&(*a1)[12].right;
    if ( v32 )
      GreCombineRgn(RectRgnIndirect, RectRgnIndirect, v32, 1LL);
    v33 = *a1;
    v62 = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = &v62;
    v63 = v33;
    if ( v33 )
      ++v33->right;
    xxxSetWindowPos((struct tagWND *)*a1, 0LL, v28, (unsigned int)v59.top, v27 - v28, v59.bottom - v59.top, 20);
    if ( (*((_DWORD *)a1 + 45) & 0x20000000) != 0 )
    {
      v36 = ValidateHmonitor(*(_QWORD *)&(*a1)[22].left);
      v37 = *a1;
      a1[23] = (struct tagRECT *)v36;
      if ( (unsigned int)IsTopLevelWindow((__int64)v37)
        && *(_DWORD *)(v38 + 344) == 2
        && (*(_DWORD *)(*(_QWORD *)(v38 + 16) + 576LL) & 0x2000000) == 0 )
      {
        if ( a2 )
          *a2 = *(struct tagRECT *)(v38 + 112);
        *a4 = (*a1)[7];
        v39 = (*a1)[7];
        *(struct tagRECT **)((char *)a1 + 268) = *(struct tagRECT **)((char *)a1 + 276);
        *(struct tagRECT *)(a1 + 13) = v39;
        *((_DWORD *)a1 + 67) -= *((_DWORD *)a1 + 26);
        *((_DWORD *)a1 + 68) -= *((_DWORD *)a1 + 27);
      }
      *((_DWORD *)a1 + 45) &= ~0x20000000u;
    }
    ThreadUnlock1(v35, v34);
    if ( *(struct tagRECT ***)(v21 + 600) == a1 )
    {
      v40 = GreCreateRectRgnIndirect(&(*a1)[7]);
      v41 = v40;
      v42 = *(_QWORD *)&(*a1)[12].right;
      if ( v42 )
        GreCombineRgn(v40, v40, v42, 1LL);
      if ( v41 )
      {
        if ( v31 )
          GreCombineRgn(v31, v31, v41, 4LL);
      }
      else if ( v31 )
      {
        GreDeleteObject(v31);
        v31 = 0LL;
      }
      v43 = *(struct tagRECT **)(GetDesktopWindow((__int64)*a1) + 96);
      v62 = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = &v62;
      v63 = v43;
      if ( v43 )
        ++v43->right;
      v44 = v60;
      xxxUpdateThreadsWindows(v60, v43, v31);
      ThreadUnlock1(v46, v45);
      GreDeleteObject(v41);
    }
    else
    {
      v44 = v60;
    }
    result = GreDeleteObject(v31);
    *(_DWORD *)(v21 + 448) &= ~0x8000u;
    if ( v21 != v44 )
      result = PopAndFreeW32ThreadLock((__int64)v68);
  }
  if ( v58 && *((_DWORD *)a1 + 40) == 9 )
  {
    v56 = LogicalCursorPos(gptiCurrent);
    v57 = v61.left - v56;
    result = HIDWORD(v56);
    *((_DWORD *)a1 + 38) = v57;
    *((_DWORD *)a1 + 39) = v61.top - result;
  }
  return result;
}
