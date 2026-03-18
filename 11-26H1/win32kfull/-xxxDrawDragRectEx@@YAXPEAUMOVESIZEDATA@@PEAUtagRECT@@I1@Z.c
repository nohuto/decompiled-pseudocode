/*
 * XREFs of ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140250868
 * Callers:
 *     ?xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z @ 0x14025084C (-xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z @ 0x14027B320 (-xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     FindTimer @ 0x14001FEF4 (FindTimer.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     _GetDesktopWindow @ 0x140048600 (_GetDesktopWindow.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1400494F0 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     bSetDevPreviewRect @ 0x14009B814 (bSetDevPreviewRect.c)
 *     bSetDevDragRect @ 0x14009C3F0 (bSetDevDragRect.c)
 *     ?xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z @ 0x14011D65C (-xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z.c)
 *     ?xxxUpdateThreadsWindows@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAUHRGN__@@@Z @ 0x14011E160 (-xxxUpdateThreadsWindows@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x140161F20 (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z @ 0x1401665A0 (-UnlockWorker@-$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z.c)
 *     ?xxxMoveSizeSetWindowPosOld@@YAXPEAUMOVESIZEDATA@@UtagRECT@@@Z @ 0x140178774 (-xxxMoveSizeSetWindowPosOld@@YAXPEAUMOVESIZEDATA@@UtagRECT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1401A3DAC (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     _SetSystemTimer @ 0x1401DA8CC (_SetSystemTimer.c)
 *     ?ManualLock@Win32RawLockedW32Thread@@QEAAXPEAU_W32THREAD@@@Z @ 0x14020A194 (-ManualLock@Win32RawLockedW32Thread@@QEAAXPEAU_W32THREAD@@@Z.c)
 *     _ScreenToClient @ 0x1402106F4 (_ScreenToClient.c)
 *     GetPhysicalScreenRect @ 0x14021550C (GetPhysicalScreenRect.c)
 *     bMoveDevDragRect @ 0x14021935C (bMoveDevDragRect.c)
 *     bMoveDevPreviewRect @ 0x140219C58 (bMoveDevPreviewRect.c)
 *     GreWindowResizeComplete @ 0x1402259FC (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x14022FFF0 (GreWindowResizeStarted.c)
 *     WPP_RECORDER_AND_TRACE_SF_sdddddd @ 0x140244500 (WPP_RECORDER_AND_TRACE_SF_sdddddd.c)
 *     ?DoesQualifyForResizeOptimization@@YAHPEAUMOVESIZEDATA@@@Z @ 0x140251560 (-DoesQualifyForResizeOptimization@@YAHPEAUMOVESIZEDATA@@@Z.c)
 *     ?DoesRequireResizeLayoutSynchronization@@YAHPEAUtagWND@@@Z @ 0x140257B44 (-DoesRequireResizeLayoutSynchronization@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1402C7118 (-xxxMS_FlushWigglies@@YAXXZ.c)
 *     ?xxxMoveSizeSetWindowPos@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@@Z @ 0x1402C71FC (-xxxMoveSizeSetWindowPos@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall xxxDrawDragRectEx(struct MOVESIZEDATA *a1, struct tagRECT *a2, int a3, struct tagRECT *a4)
{
  struct tagRECT *v4; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // r13d
  int v11; // eax
  int v12; // ebx
  unsigned int v13; // r12d
  __int64 v14; // rcx
  struct tagWND *v15; // rdi
  __int64 v16; // rcx
  char v17; // al
  __int64 UserSessionState; // rax
  const char *v19; // rcx
  struct tagRECT v20; // xmm0
  int v21; // eax
  __int64 *v22; // rdi
  ULONG_PTR v23; // r12
  __int64 v24; // r11
  __m128i v25; // xmm6
  __int64 v26; // r10
  __int64 v27; // r10
  __int64 v28; // r10
  __int64 v29; // r10
  int left; // ebx
  LONG right; // r13d
  __int64 RectRgnIndirect; // rax
  HRGN v33; // rsi
  __int64 v34; // r8
  _DWORD *v35; // rdx
  int v36; // eax
  Gre::Base *v37; // rbx
  int v38; // r13d
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  int v42; // eax
  int v43; // r13d
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // r15
  __int64 v50; // r8
  struct tagWND *v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // rcx
  Gre::Base *v54; // rbx
  __int64 v55; // rax
  _OWORD *PhysicalScreenRect; // rax
  __int64 **v57; // rsi
  struct tagRECT *v58; // rdx
  struct tagRECT v59; // xmm0
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rbx
  __int64 v65; // rdi
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  int v71; // ebx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rbx
  __int64 v77; // rdi
  __int64 v78; // rax
  int v79; // r8d
  struct tagRECT *v80; // rdx
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rdx
  int v85; // edi
  char v86; // si
  bool v87; // bl
  bool v88; // r14
  __int64 v89; // rax
  int v90; // r8d
  int v91; // edx
  char v92; // [rsp+88h] [rbp-80h]
  char v93; // [rsp+89h] [rbp-7Fh]
  int v94; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v95; // [rsp+90h] [rbp-78h] BYREF
  BOOL v96; // [rsp+94h] [rbp-74h]
  int v97; // [rsp+98h] [rbp-70h]
  struct tagRECT *v98; // [rsp+A0h] [rbp-68h] BYREF
  struct tagTHREADINFO *v99; // [rsp+A8h] [rbp-60h] BYREF
  struct tagWND *v100[2]; // [rsp+B0h] [rbp-58h] BYREF
  ULONG_PTR BugCheckParameter3[3]; // [rsp+C0h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v103; // [rsp+E8h] [rbp-20h]
  struct tagRECT v104; // [rsp+F8h] [rbp-10h] BYREF
  struct tagRECT v105; // [rsp+108h] [rbp+0h] BYREF

  v4 = a4;
  v98 = a4;
  v94 = a3;
  if ( !*((_QWORD *)PtiCurrent((__int64)a1) + 61)
    || (v10 = 5, (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent(v9) + 61) + 8LL) + 64LL) & 1) == 0) )
  {
    v10 = 4;
  }
  v11 = *((_DWORD *)a1 + 50);
  v12 = a3;
  v97 = a3;
  v13 = a3 & 0xFFFFFFF;
  v95 = v12;
  if ( (v11 & 0x10) == 0 && (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 27LL) & 8) == 0 )
  {
    if ( a2 )
      *v4 = *a2;
    return;
  }
  if ( !a2 )
    goto LABEL_12;
  v14 = *((_QWORD *)a1 + 3) - *(_QWORD *)&a2->left;
  if ( !v14 )
    v14 = *((_QWORD *)a1 + 4) - *(_QWORD *)&a2->right;
  if ( v14 )
  {
LABEL_12:
    v96 = 0;
    v15 = (struct tagWND *)a2;
    if ( !a2 )
      v15 = (struct tagWND *)v4;
    v100[0] = v15;
    v105 = *(struct tagRECT *)v15;
    v16 = (__int64)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (LOBYTE(v8) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v8) = 0;
    }
    v93 = v8;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v17 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v17 = 0;
    }
    v92 = v17;
    if ( (_BYTE)v8 || v17 )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v8);
      v19 = "Preview";
      if ( v97 >= 0 )
        v19 = "Drag";
      WPP_RECORDER_AND_TRACE_SF_sdddddd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v93,
        v92,
        *(_QWORD *)(UserSessionState + 69152),
        5u,
        1u,
        0x10u,
        (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
        v19,
        v105.left,
        v105.top,
        v105.right,
        v105.bottom,
        v105.right - v105.left,
        v105.bottom - v105.top);
      v12 = v95;
      v4 = v98;
      v15 = v100[0];
    }
    if ( v12 >= 0 && v13 == 3 && (unsigned int)xxxDetectNewMonitor(a1, &v105) )
    {
      v20 = v105;
      v21 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 288LL) & 0xF;
      *v4 = v105;
      v16 = v21 != 2;
      v96 = v21 != 2;
      if ( a2 )
        *a2 = v20;
      if ( v21 != 2 )
      {
        xxxMS_FlushWigglies();
        GenerateMouseMove(0LL);
      }
    }
    if ( (*((_DWORD *)a1 + 50) & 0x20) != 0 && v13 >= 2 )
    {
      v22 = (__int64 *)((char *)a1 + 16);
      v23 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL);
      v99 = PtiCurrent(v16);
      v103 = -1LL;
      BugCheckParameter3[2] = 0LL;
      v95 = 0;
      v97 = 0;
      v94 = 0;
      *(_OWORD *)BugCheckParameter2 = 0LL;
      if ( (struct tagTHREADINFO *)v23 != v99 )
        Win32RawLockedW32Thread::ManualLock(BugCheckParameter2, v23);
      _InterlockedOr((volatile signed __int32 *)(v23 + 520), 0x8000u);
      if ( a2 )
        *v4 = *a2;
      v24 = *v22;
      v25 = *(__m128i *)v4;
      v26 = *(_QWORD *)(*v22 + 104);
      v104 = *v4;
      if ( !v26 || IsTopLevelWindow(v24) )
      {
        right = _mm_cvtsi128_si32(v25);
        left = _mm_cvtsi128_si32(_mm_srli_si128(v25, 8));
      }
      else
      {
        ScreenToClient(v27, &v104);
        ScreenToClient(v28, &v104.right);
        if ( (*(_BYTE *)(*(_QWORD *)(v29 + 40) + 26LL) & 0x40) != 0 )
        {
          left = v104.left;
          right = v104.right;
          v104.left = v104.right;
          v104.right = left;
        }
        else
        {
          left = v104.right;
          right = v104.left;
        }
        v25 = (__m128i)v104;
      }
      RectRgnIndirect = GreCreateRectRgnIndirect(*(_QWORD *)(v24 + 40) + 88LL);
      v33 = (HRGN)RectRgnIndirect;
      v34 = *(_QWORD *)(*(_QWORD *)(*v22 + 40) + 168LL);
      if ( v34 )
        GreCombineRgn(RectRgnIndirect, RectRgnIndirect, v34, 1LL);
      Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, *v22);
      v100[0] = (struct tagWND *)*v22;
      v35 = (_DWORD *)*((_QWORD *)v100[0] + 5);
      if ( v35[24] - v35[22] == left - right
        && v35[25] - v35[23] == _mm_cvtsi128_si32(_mm_srli_si128(v25, 12)) - _mm_cvtsi128_si32(_mm_srli_si128(v25, 4))
        || !(unsigned int)DoesQualifyForResizeOptimization(a1) )
      {
        v43 = v94;
      }
      else
      {
        v95 = 0;
        v36 = DoesRequireResizeLayoutSynchronization(v100[0]);
        v37 = *(Gre::Base **)v100[0];
        v38 = v36;
        v97 = v36;
        v41 = W32GetUserSessionState(v40, v39);
        v42 = GreWindowResizeStarted(*(_QWORD *)(*(_QWORD *)(v41 + 56968) + 40LL), v37, v38, &v94, &v95);
        v43 = v94;
        if ( v42 && v94 )
          SetSystemTimer(*v22, 65522LL, v95, (__int64)ResizeTimerFunc, 1);
        v95 = 1;
      }
      if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
      {
        xxxMoveSizeSetWindowPos(a1, &v104);
      }
      else
      {
        v104 = (struct tagRECT)v25;
        xxxMoveSizeSetWindowPosOld(a1, &v104);
        if ( (*((_DWORD *)a1 + 50) & 0x200000) != 0 )
        {
          v44 = ValidateHmonitor(*(_QWORD *)(*(_QWORD *)(*v22 + 40) + 256LL));
          v45 = *v22;
          *((_QWORD *)a1 + 27) = v44;
          if ( IsTopLevelWindow(v45) )
          {
            v47 = *(_QWORD *)(v46 + 40);
            if ( (*(_DWORD *)(v47 + 288) & 0xF) == 2 && (*(_DWORD *)(*(_QWORD *)(v46 + 16) + 680LL) & 0x2000000) == 0 )
            {
              if ( a2 )
              {
                *a2 = *(struct tagRECT *)(v47 + 88);
                v46 = *v22;
              }
              *v98 = *(struct tagRECT *)(*(_QWORD *)(v46 + 40) + 88LL);
              *(_OWORD *)((char *)a1 + 120) = *(_OWORD *)(*(_QWORD *)(*v22 + 40) + 88LL);
            }
          }
          *((_DWORD *)a1 + 50) &= ~0x200000u;
        }
      }
      Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
      if ( *(struct MOVESIZEDATA **)(v23 + 704) == a1 )
      {
        v48 = GreCreateRectRgnIndirect(*(_QWORD *)(*v22 + 40) + 88LL);
        v49 = v48;
        v50 = *(_QWORD *)(*(_QWORD *)(*v22 + 40) + 168LL);
        if ( v50 )
          GreCombineRgn(v48, v48, v50, 1LL);
        if ( v33 )
        {
          if ( v49 )
          {
            GreCombineRgn(v33, v33, v49, 4LL);
          }
          else
          {
            GreDeleteObject(v33);
            v33 = 0LL;
          }
        }
        v51 = *(struct tagWND **)(GetDesktopWindow(*v22) + 112);
        Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)v51);
        xxxUpdateThreadsWindows(v99, v51, v33);
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
        if ( v95 )
        {
          v54 = *(Gre::Base **)*v22;
          v55 = W32GetUserSessionState(v53, v52);
          GreWindowResizeComplete(*(_QWORD *)(*(_QWORD *)(v55 + 56968) + 40LL), v54);
          if ( v43 )
          {
            if ( !v97 )
              FindTimer(*v22, 65522LL, 2u, 1, 0LL);
          }
        }
        GreDeleteObject(v49);
      }
      GreDeleteObject(v33);
      _InterlockedAnd((volatile signed __int32 *)(v23 + 520), 0xFFFF7FFF);
      Win32RawLockedItemBase<_W32THREAD,0,1,1,1>::UnlockWorker((ULONG_PTR)BugCheckParameter2, 1);
      goto LABEL_99;
    }
    v104 = *(struct tagRECT *)v15;
    PhysicalScreenRect = GetPhysicalScreenRect(BugCheckParameter3, v8);
    v57 = (__int64 **)((char *)a1 + 16);
    v58 = (struct tagRECT *)*((_QWORD *)a1 + 2);
    *(_OWORD *)v100 = *PhysicalScreenRect;
    v99 = *(struct tagTHREADINFO **)((char *)a1 + ((v94 >> 31) & 0x18) + 216);
    v59 = *WindowMargins::ReduceRect(
             (WindowMargins *)BugCheckParameter3,
             v58,
             (const struct tagWND *)&v104,
             (const struct tagRECT *)*(unsigned __int16 *)(*((_QWORD *)v99 + 5) + 60LL));
    v60 = *((_QWORD *)a1 + 2);
    v104 = v59;
    LogicalToPhysicalDPIRect(&v104, &v104, *(unsigned int *)(*(_QWORD *)(v60 + 40) + 288LL), &v99);
    if ( v96 )
    {
      v63 = W32GetUserSessionState(v62, v61);
      bSetDevDragRect(*(Gre::Base **)(*(_QWORD *)(v63 + 56968) + 40LL), (__int64)&v104, (__int64)v100, v10);
    }
    if ( a2 )
    {
      if ( v12 < 0 && (*((_DWORD *)a1 + 50) & 0x20) != 0 )
      {
        v64 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v62, v61) + 19904) + 4960LL);
        v65 = **v57;
        v68 = W32GetUserSessionState(v67, v66);
        bMoveDevPreviewRect(
          *(Gre::Base **)(*(_QWORD *)(v68 + 56968) + 40LL),
          (const struct _RECTL *)&v104,
          v10,
          v65,
          v64);
      }
      else
      {
        if ( !*((_QWORD *)PtiCurrent(v62) + 61)
          || (v71 = 1, v70 = **(_QWORD **)(*((_QWORD *)PtiCurrent(v70) + 61) + 8LL), (*(_DWORD *)(v70 + 64) & 1) == 0) )
        {
          v71 = 0;
        }
        v72 = W32GetUserSessionState(v70, v69);
        bMoveDevDragRect(*(Gre::Base **)(*(_QWORD *)(v72 + 56968) + 40LL), &v104.left, (const struct _RECTL *)v100, v71);
      }
      *v98 = *a2;
      goto LABEL_98;
    }
    if ( v13 )
    {
      v22 = (__int64 *)((char *)a1 + 16);
      if ( v13 != 1 || v12 >= 0 )
      {
LABEL_99:
        if ( v96 && *((_DWORD *)a1 + 44) == 9 )
        {
          v99 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 27);
          v83 = *v22;
          v98 = 0LL;
          PhysicalToLogicalDPIPoint(&v98, (char *)a1 + 260, *(unsigned int *)(*(_QWORD *)(v83 + 40) + 288LL), &v99);
          v85 = v105.left - (_DWORD)v98;
          v86 = LOBYTE(v105.top) - BYTE4(v98);
          *((_DWORD *)a1 + 43) = v105.top - HIDWORD(v98);
          *((_DWORD *)a1 + 42) = v85;
          v87 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
          v88 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v87 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v89 = W32GetUserSessionState(WPP_GLOBAL_Control, v84);
            LOBYTE(v90) = v88;
            LOBYTE(v91) = v87;
            WPP_RECORDER_AND_TRACE_SF_Dd(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v91,
              v90,
              *(_QWORD *)(v89 + 69152),
              4,
              1,
              17,
              (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
              v85,
              v86);
          }
        }
        return;
      }
      v76 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v62, v61) + 19904) + 4960LL);
      v77 = **v57;
      v78 = W32GetUserSessionState(v82, v81);
      v79 = 0;
      v80 = 0LL;
    }
    else
    {
      v73 = W32GetUserSessionState(v62, v61);
      if ( v12 >= 0 )
      {
        bSetDevDragRect(*(Gre::Base **)(*(_QWORD *)(v73 + 56968) + 40LL), (__int64)&v104, (__int64)v100, v10);
LABEL_98:
        v22 = (__int64 *)((char *)a1 + 16);
        goto LABEL_99;
      }
      v76 = *(_QWORD *)(*(_QWORD *)(v73 + 19904) + 4960LL);
      v77 = **v57;
      v78 = W32GetUserSessionState(v75, v74);
      v79 = v10;
      v80 = &v104;
    }
    bSetDevPreviewRect(*(HDEV *)(*(_QWORD *)(v78 + 56968) + 40LL), (__int64)v80, v79, v77, v76);
    goto LABEL_98;
  }
}
