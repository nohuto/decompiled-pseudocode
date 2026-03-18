/*
 * XREFs of xxxDrawDragRectEx @ 0x1C020BDC8
 * Callers:
 *     xxxReleaseCapture @ 0x1C0091ED0 (xxxReleaseCapture.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C02083DC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C020AD20 (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020B08C (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxCancelTrackingForThread @ 0x1C020BCE0 (xxxCancelTrackingForThread.c)
 *     xxxMoveSize @ 0x1C020DCC8 (xxxMoveSize.c)
 * Callees:
 *     FreeSpb @ 0x1C00098E8 (FreeSpb.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     LogicalCursorPos @ 0x1C0056358 (LogicalCursorPos.c)
 *     _IsTopLevelWindow @ 0x1C0056918 (_IsTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C00573D0 (_GetDesktopWindow.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0064370 (PopAndFreeW32ThreadLock.c)
 *     IntersectRect @ 0x1C006B798 (IntersectRect.c)
 *     xxxSetWindowPos @ 0x1C0075840 (xxxSetWindowPos.c)
 *     _ScreenToClient @ 0x1C008A44C (_ScreenToClient.c)
 *     zzzSetFMouseMoved @ 0x1C008BF80 (zzzSetFMouseMoved.c)
 *     LockW32Thread @ 0x1C008E0B4 (LockW32Thread.c)
 *     bSetDevDragRect @ 0x1C00D56E0 (bSetDevDragRect.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     DetectNewMonitor @ 0x1C01E5118 (DetectNewMonitor.c)
 *     FindSpb @ 0x1C01EA734 (FindSpb.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C020839C (-xxxMS_FlushWigglies@@YAXXZ.c)
 *     xxxUpdateThreadsWindows @ 0x1C020E344 (xxxUpdateThreadsWindows.c)
 *     bMoveDevDragRect @ 0x1C027A420 (bMoveDevDragRect.c)
 *     bMoveDevPreviewRect @ 0x1C027A6E4 (bMoveDevPreviewRect.c)
 *     bSetDevPreviewRect @ 0x1C027A8AC (bSetDevPreviewRect.c)
 *     vSetDevDragRectDPI @ 0x1C027AA94 (vSetDevDragRectDPI.c)
 */

__int64 __fastcall xxxDrawDragRectEx(_DWORD *a1, int *a2, int a3, struct tagRECT *a4)
{
  __int64 result; // rax
  int v9; // r13d
  unsigned int v10; // edx
  unsigned int v11; // r14d
  unsigned int v12; // r15d
  __int64 v13; // rcx
  struct tagRECT *v14; // rax
  unsigned int v15; // r14d
  int v16; // ebx
  __int64 v17; // rcx
  BOOL v18; // eax
  LARGE_INTEGER PerformanceCounter; // rax
  struct tagRECT v20; // xmm0
  __int64 v21; // rcx
  __int64 v22; // r14
  _BYTE *v23; // rbx
  __int64 v24; // r9
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // r9
  LONG v28; // r15d
  int v29; // r13d
  __int64 **Spb; // rax
  __int64 RectRgnIndirect; // rax
  __int64 v32; // rbx
  __int64 v33; // r8
  _BYTE *v34; // rdx
  int v35; // r8d
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  _BYTE *v39; // rcx
  __int64 v40; // r9
  __int128 v41; // xmm0
  __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // r15
  __int64 v47; // rdx
  __int64 v48; // rcx
  int bottom; // eax
  __int64 v50; // rbx
  int v51; // edx
  __int64 CurrentProcessWin32Process; // rax
  unsigned int MonitorFlags; // eax
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // r8
  char v57; // bl
  unsigned __int64 v58; // rax
  int v59; // ecx
  BOOL v60; // [rsp+40h] [rbp-99h]
  struct tagRECT v61; // [rsp+48h] [rbp-91h] BYREF
  __int64 v62; // [rsp+58h] [rbp-81h]
  struct tagRECT v63; // [rsp+60h] [rbp-79h] BYREF
  __int64 v64; // [rsp+70h] [rbp-69h] BYREF
  _BYTE *v65; // [rsp+78h] [rbp-61h]
  __int128 v66; // [rsp+88h] [rbp-51h] BYREF
  _DWORD v67[2]; // [rsp+98h] [rbp-41h] BYREF
  __int64 v68; // [rsp+A0h] [rbp-39h]
  __int64 v69; // [rsp+A8h] [rbp-31h]
  _QWORD v70[3]; // [rsp+B8h] [rbp-21h] BYREF
  int left; // [rsp+D0h] [rbp-9h] BYREF
  int top; // [rsp+D4h] [rbp-5h]
  int right; // [rsp+D8h] [rbp-1h]
  int v74; // [rsp+DCh] [rbp+3h]
  __int128 v75; // [rsp+E0h] [rbp+7h] BYREF

  result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( *(_QWORD *)(result + 408) )
  {
    result = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL);
    v9 = *(_DWORD *)(result + 244) & 1;
  }
  else
  {
    v9 = 0;
  }
  v10 = a1[45];
  v11 = a3 & 0xF0000000;
  v12 = a3 & 0xFFFFFFF;
  if ( (v10 & 0x10) == 0 )
  {
    result = *(_QWORD *)a1;
    if ( (*(_BYTE *)(*(_QWORD *)a1 + 51LL) & 8) == 0 )
    {
      if ( a2 )
        *a4 = *(struct tagRECT *)a2;
      return result;
    }
  }
  if ( !a2 )
  {
    v14 = a4;
LABEL_14:
    v60 = 0;
    v63 = *v14;
    v15 = v11 & 0x80000000;
    if ( !v15 && v12 == 3 )
    {
      v16 = (v10 >> 25) & 1;
      if ( (v10 & 0x20) != 0 )
        a1[45] = v10 & 0xFDFFFFFF;
      v18 = (unsigned int)DetectNewMonitor((_BYTE **)a1, &v63)
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17) + 776) & 0x4000) == 0;
      v60 = v18;
      a1[45] ^= (a1[45] ^ (v16 << 25)) & 0x2000000;
      if ( v18 )
      {
        xxxMS_FlushWigglies();
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        zzzSetFMouseMoved(PerformanceCounter.QuadPart, 0LL);
        if ( a2 )
        {
          v20 = v63;
          *a4 = v63;
          *(struct tagRECT *)a2 = v20;
        }
      }
    }
    v21 = (unsigned int)a1[45];
    if ( (v21 & 0x20) == 0 || (v21 & 0x4000000) != 0 && v12 < 2 )
    {
      if ( a2 )
      {
        left = *a2;
        top = a2[1];
        right = a2[2];
        bottom = a2[3];
      }
      else
      {
        left = a4->left;
        top = a4->top;
        right = a4->right;
        bottom = a4->bottom;
      }
      v74 = bottom;
      *(_QWORD *)&v75 = *((_QWORD *)a1 + 9);
      DWORD2(v75) = a1[20];
      result = (unsigned int)a1[21];
      HIDWORD(v75) = a1[21];
      if ( a2 )
      {
        if ( (v21 & 0x10000000) != 0 )
        {
          v50 = *((_QWORD *)a1 + 23);
          v51 = *(_DWORD *)(*(_QWORD *)a1 + 344LL);
          v67[1] = *(unsigned __int16 *)(v50 + 152);
          v67[0] = v51;
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v21);
          MonitorFlags = GetMonitorFlags(CurrentProcessWin32Process);
          v54 = OriginFromMonFlags(MonitorFlags, v50);
          v55 = *((_QWORD *)a1 + 23);
          v68 = v54;
          v69 = OriginFromMonFlags(32LL, v55);
          vSetDevDragRectDPI(*gpDispInfo, v67);
          a1[45] &= ~0x10000000u;
        }
        if ( v15 )
        {
          LogicalToPhysicalDPIRect(&left, &left, 0LL, 0LL);
          result = bMoveDevPreviewRect(*gpDispInfo, &left, v9 != 0, **(_QWORD **)a1, *(_QWORD *)(gpsi + 3976LL));
        }
        else
        {
          if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) )
            v56 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                            + 244LL) & 1;
          else
            v56 = 0LL;
          result = bMoveDevDragRect(*gpDispInfo, &left, v56);
        }
        *a4 = *(struct tagRECT *)a2;
      }
      else if ( v12 )
      {
        if ( v12 == 1 && v15 )
          result = bSetDevPreviewRect((HDEV)*gpDispInfo, **(_QWORD **)a1, *(_QWORD *)(gpsi + 3976LL));
      }
      else
      {
        v57 = v9 != 0;
        if ( (v21 & 0x4000000) != 0 )
          v57 |= 4u;
        if ( v15 )
        {
          LogicalToPhysicalDPIRect(&left, &left, 0LL, 0LL);
          LogicalToPhysicalDPIRect(&v75, &v75, 0LL, 0LL);
          result = bSetDevPreviewRect((HDEV)*gpDispInfo, **(_QWORD **)a1, *(_QWORD *)(gpsi + 3976LL));
        }
        else
        {
          result = bSetDevDragRect((HDEV)*gpDispInfo, (__int64)&left, &v75, v57);
        }
      }
    }
    else
    {
      v22 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
      v62 = gptiCurrent;
      if ( v22 != gptiCurrent )
        LockW32Thread(v22, v70);
      *(_DWORD *)(v22 + 440) |= 0x8000u;
      if ( a2 )
        *a4 = *(struct tagRECT *)a2;
      v23 = *(_BYTE **)a1;
      v24 = *(_QWORD *)(*(_QWORD *)a1 + 88LL);
      v61 = *a4;
      if ( v24
        && !(unsigned int)IsTopLevelWindow((__int64)v23)
        && (ScreenToClient(v25, &v61), ScreenToClient(v26, &v61.right), (*(_BYTE *)(v27 + 50) & 0x40) != 0) )
      {
        v28 = v61.left;
        v29 = v61.right;
      }
      else
      {
        v28 = v61.right;
        v29 = v61.left;
      }
      if ( (char)v23[40] < 0 )
      {
        v66 = *((_OWORD *)v23 + 7);
        if ( a2 )
        {
          if ( (unsigned int)IntersectRect(&v66, (int *)&v66, a2) )
          {
            Spb = FindSpb((__int64 *)v23);
            FreeSpb((__int64)Spb);
          }
        }
      }
      RectRgnIndirect = GreCreateRectRgnIndirect(*(_QWORD *)a1 + 112LL);
      v32 = RectRgnIndirect;
      v33 = *(_QWORD *)(*(_QWORD *)a1 + 200LL);
      if ( v33 )
        GreCombineRgn(RectRgnIndirect, RectRgnIndirect, v33, 1LL);
      v34 = *(_BYTE **)a1;
      v35 = 532;
      if ( (a1[45] & 0x300) != 0 )
        v35 = 1049108;
      v64 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v64;
      v65 = v34;
      if ( v34 )
        ++*((_DWORD *)v34 + 2);
      xxxSetWindowPos(*(struct tagWND **)a1, 0, v29, v61.top, v28 - v29, v61.bottom - v61.top, v35);
      if ( (a1[45] & 0x20000000) != 0 )
      {
        v38 = ValidateHmonitor(*(_QWORD *)(*(_QWORD *)a1 + 352LL));
        v39 = *(_BYTE **)a1;
        *((_QWORD *)a1 + 23) = v38;
        if ( (unsigned int)IsTopLevelWindow((__int64)v39)
          && *(_DWORD *)(v40 + 344) == 2
          && (*(_DWORD *)(*(_QWORD *)(v40 + 16) + 568LL) & 0x2000000) == 0 )
        {
          if ( a2 )
            *(_OWORD *)a2 = *(_OWORD *)(v40 + 112);
          *a4 = *(struct tagRECT *)(*(_QWORD *)a1 + 112LL);
          v41 = *(_OWORD *)(*(_QWORD *)a1 + 112LL);
          *(_QWORD *)(a1 + 67) = *(_QWORD *)(a1 + 69);
          *(_OWORD *)(a1 + 26) = v41;
          a1[67] -= a1[26];
          a1[68] -= a1[27];
        }
        a1[45] &= ~0x20000000u;
      }
      ThreadUnlock1(v37, v36);
      if ( *(_DWORD **)(v22 + 592) == a1 )
      {
        v42 = GreCreateRectRgnIndirect(*(_QWORD *)a1 + 112LL);
        v43 = v42;
        v44 = *(_QWORD *)(*(_QWORD *)a1 + 200LL);
        if ( v44 )
          GreCombineRgn(v42, v42, v44, 1LL);
        if ( v43 )
        {
          if ( v32 )
            GreCombineRgn(v32, v32, v43, 4LL);
        }
        else if ( v32 )
        {
          GreDeleteObject(v32);
          v32 = 0LL;
        }
        v45 = *(_QWORD *)(GetDesktopWindow(*(_QWORD *)a1) + 96);
        v64 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v64;
        v65 = (_BYTE *)v45;
        if ( v45 )
          ++*(_DWORD *)(v45 + 8);
        v46 = v62;
        xxxUpdateThreadsWindows(v62, v45, v32);
        ThreadUnlock1(v48, v47);
        GreDeleteObject(v43);
      }
      else
      {
        v46 = v62;
      }
      result = GreDeleteObject(v32);
      *(_DWORD *)(v22 + 440) &= ~0x8000u;
      if ( v22 != v46 )
        result = PopAndFreeW32ThreadLock((__int64)v70);
    }
    if ( v60 && a1[40] == 9 )
    {
      v58 = LogicalCursorPos(gptiCurrent);
      v59 = v63.left - v58;
      result = HIDWORD(v58);
      a1[38] = v59;
      a1[39] = v63.top - result;
    }
    return result;
  }
  v13 = *((_QWORD *)a1 + 1) - *(_QWORD *)a2;
  if ( !v13 )
    v13 = *((_QWORD *)a1 + 2) - *((_QWORD *)a2 + 1);
  if ( v13 )
  {
    v14 = (struct tagRECT *)a2;
    goto LABEL_14;
  }
  return result;
}
