/*
 * XREFs of ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x14005DE80
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14005C548 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxMoveSizeWithoutCapture@MoveSizeApi@@YAXPEAUtagWND@@UtagPOINT@@1W4_MOVESIZE_OPERATION@@@Z @ 0x1402C72E8 (-xxxMoveSizeWithoutCapture@MoveSizeApi@@YAXPEAUtagWND@@UtagPOINT@@1W4_MOVESIZE_OPERATION@@@Z.c)
 * Callees:
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x14002A488 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     ?Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z @ 0x1400305B4 (-Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z.c)
 *     GetDpiDependentMetric @ 0x140032058 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x140032228 (GetDpiForSystem.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x14003A510 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     _GetDesktopWindow @ 0x140048600 (_GetDesktopWindow.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1400494F0 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     WPP_RECORDER_AND_TRACE_SF_Ddd @ 0x14009A2FC (WPP_RECORDER_AND_TRACE_SF_Ddd.c)
 *     bSetDevDragRect @ 0x14009C3F0 (bSetDevDragRect.c)
 *     xxxReleaseCapture @ 0x14014AA5C (xxxReleaseCapture.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140160DC8 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?SHData_ResetRuntimeState@MOVESIZEDATA@@QEAAXXZ @ 0x14019DA2C (-SHData_ResetRuntimeState@MOVESIZEDATA@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1401A3DAC (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     _GetMessagePos @ 0x1401C790C (_GetMessagePos.c)
 *     ?SetMinimize@@YAXPEAUtagWND@@W4MinimizeCommand@@@Z @ 0x140235DB8 (-SetMinimize@@YAXPEAUtagWND@@W4MinimizeCommand@@@Z.c)
 *     ?xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z @ 0x14025084C (-xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z.c)
 *     ?MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z @ 0x140268C0C (-MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z @ 0x14027B320 (-xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z.c)
 *     ?UpdateMoveSizeDataForCancelation@@YAXPEAUMOVESIZEDATA@@@Z @ 0x14028A9FC (-UpdateMoveSizeDataForCancelation@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?AdjustFinalDragRectToKeepCaptionOnScreen@@YAXPEBUtagWND@@PEAUtagRECT@@@Z @ 0x1402C3D40 (-AdjustFinalDragRectToKeepCaptionOnScreen@@YAXPEBUtagWND@@PEAUtagRECT@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402C623C (-xxxCommitMoveSize@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1402C65EC (-xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?PtInClipRegion@MOVESIZEDATA@@QEBA_NAEBUtagPOINT@@@Z @ 0x1402EFDEC (-PtInClipRegion@MOVESIZEDATA@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memcmp @ 0x14034FDE0 (memcmp.c)
 */

void __fastcall xxxMS_TrackMove(struct tagWND *a1, int a2, __int64 a3, unsigned int a4, MOVESIZEDATA *a5)
{
  int v8; // r12d
  char v9; // si
  char v10; // di
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  char v17; // bl
  bool v18; // di
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  __int64 v22; // rdx
  struct MOVESIZEDATA *v23; // rcx
  bool v24; // al
  int v25; // r14d
  int v26; // edi
  int v27; // esi
  int v28; // ebx
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  __int128 v32; // xmm1
  char v33; // al
  int v34; // r14d
  int v35; // edi
  int v36; // esi
  int v37; // ebx
  __int64 v38; // rax
  int v39; // r8d
  int v40; // edx
  char v41; // bl
  bool v42; // di
  __int64 v43; // rax
  int v44; // r8d
  int v45; // edx
  unsigned int v46; // edx
  int v47; // esi
  int v48; // r14d
  __int16 KeyState; // ax
  __int64 v50; // rdx
  __int64 v51; // rcx
  bool v52; // zf
  unsigned int v53; // eax
  unsigned int DpiForSystem; // eax
  unsigned int v55; // eax
  unsigned int v56; // eax
  int *v57; // rdi
  int v58; // r10d
  unsigned __int64 v59; // rbx
  unsigned int MessagePos; // eax
  __int64 v61; // r9
  int *v62; // r11
  __int64 v63; // r8
  struct MOVESIZEDATA *v64; // rcx
  char v65; // di
  bool v66; // r13
  __int64 v67; // rax
  int v68; // r8d
  int v69; // edx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rax
  int v77; // esi
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rax
  int v81; // r8d
  __int64 v82; // rax
  __int64 DesktopWindow; // rax
  __int64 v84; // rdx
  int v85; // edi
  __int64 v86; // rax
  __int128 *v87; // rbx
  int v88; // eax
  int *v89; // r8
  char v90; // cl
  char v91; // al
  struct CHECKPOINT *v92; // rax
  __int128 v93; // xmm0
  __int64 v94; // rcx
  int v95; // eax
  int v96; // ecx
  int v97; // ecx
  int v98; // edx
  __int64 v99; // rax
  __int64 v100; // r9
  __int64 v101; // r10
  bool v102; // [rsp+78h] [rbp-11h]
  char v103; // [rsp+78h] [rbp-11h]
  bool v104; // [rsp+79h] [rbp-10h]
  bool v105; // [rsp+79h] [rbp-10h]
  unsigned __int64 v106; // [rsp+80h] [rbp-9h] BYREF
  struct tagPOINT v107; // [rsp+88h] [rbp-1h] BYREF
  struct tagRECT v108; // [rsp+90h] [rbp+7h] BYREF
  __int64 v109; // [rsp+A0h] [rbp+17h]
  int v110; // [rsp+100h] [rbp+77h]

  v109 = a3;
  v107.y = SHIWORD(a4);
  v106 = (unsigned __int64)PtiCurrent((__int64)a1);
  v107.x = (__int16)a4;
  v8 = 1;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v9 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v9 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v10 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v10 = 0;
  }
  if ( v9 || v10 )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
    LOBYTE(v12) = v10;
    LOBYTE(v13) = v9;
    WPP_RECORDER_AND_TRACE_SF_Ddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v13,
      v12,
      *(_QWORD *)(UserSessionState + 69152),
      5,
      1,
      69,
      (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
      a2,
      v107.x,
      v107.y);
  }
  v14 = a2 - 256;
  if ( v14 )
  {
    v15 = v14 - 4;
    if ( v15 )
    {
      v16 = v15 - 252;
      if ( v16 )
      {
        if ( v16 != 2 )
          return;
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v17 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v17 = 0;
        }
        v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v17 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v19 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
          LOBYTE(v20) = v18;
          LOBYTE(v21) = v17;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v21,
            v20,
            *(_QWORD *)(v19 + 69152),
            4,
            1,
            70,
            (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids);
        }
        xxxTM_MoveDragRect(a5, a4);
        v23 = WPP_GLOBAL_Control;
        v24 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v102 = v24;
        LOBYTE(v23) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        v104 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v24 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v25 = *((_DWORD *)a5 + 7);
          v26 = *((_DWORD *)a5 + 9);
          v27 = *((_DWORD *)a5 + 6);
          v28 = *((_DWORD *)a5 + 8);
          v29 = W32GetUserSessionState(v23, v22);
          LOBYTE(v30) = v104;
          LOBYTE(v31) = v102;
          WPP_RECORDER_AND_TRACE_SF_dddddd(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v31,
            v30,
            *(_QWORD *)(v29 + 69152),
            4,
            1,
            71,
            (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
            v27,
            v25,
            v28,
            v26,
            v28 - v27,
            v26 - v25);
        }
        if ( (*((_DWORD *)a5 + 50) & 0x80000) != 0 )
        {
          v32 = *(_OWORD *)((char *)a5 + 56);
          *(_OWORD *)((char *)a5 + 40) = *(_OWORD *)((char *)a5 + 72);
          *(_OWORD *)((char *)a5 + 24) = v32;
          v23 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v33 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v33 = 0;
          }
          v103 = v33;
          LOBYTE(v23) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          v105 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v33 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v34 = *((_DWORD *)a5 + 7);
            v35 = *((_DWORD *)a5 + 9);
            v36 = *((_DWORD *)a5 + 6);
            v37 = *((_DWORD *)a5 + 8);
            v38 = W32GetUserSessionState(v23, v22);
            LOBYTE(v39) = v105;
            LOBYTE(v40) = v103;
            WPP_RECORDER_AND_TRACE_SF_dddddd(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v40,
              v39,
              *(_QWORD *)(v38 + 69152),
              4,
              1,
              72,
              (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
              v36,
              v34,
              v37,
              v35,
              v37 - v36,
              v35 - v34);
          }
        }
        else if ( *((_DWORD *)a5 + 88) == 2 )
        {
          UpdateMoveSizeDataForCancelation(a5);
          v23 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v41 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v41 = 0;
          }
          v42 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v41 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v43 = W32GetUserSessionState(WPP_GLOBAL_Control, v22);
            LOBYTE(v44) = v42;
            LOBYTE(v45) = v41;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v45,
              v44,
              *(_QWORD *)(v43 + 69152),
              4,
              1,
              73,
              (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids);
          }
        }
        *((_DWORD *)a5 + 50) &= ~2u;
        goto LABEL_110;
      }
      v46 = a4;
LABEL_48:
      xxxTM_MoveDragRect(a5, v46);
      return;
    }
  }
  v47 = 0;
  v48 = 0;
  KeyState = _GetKeyState(17LL);
  if ( v109 != 13 )
  {
    if ( v109 == 27 )
    {
      v76 = W32GetUserSessionState(0LL, v50);
      bSetDevDragRect(*(HDEV *)(*(_QWORD *)(v76 + 56968) + 40LL));
      v77 = 0;
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v106 + 520), 0, 0) & 0x10) != 0 )
      {
        xxxDrawDragRect(a5, 0LL, 2u);
        _InterlockedAnd((volatile signed __int32 *)(v106 + 520), 0xFFFFFFEF);
      }
      UpdateMoveSizeDataForCancelation(a5);
      goto LABEL_115;
    }
    if ( v109 != 37 )
    {
      if ( v109 == 38 )
      {
LABEL_55:
        v51 = 0LL;
        if ( *((_DWORD *)a5 + 46) )
        {
          if ( KeyState < 0 || (v53 = GetDpiForSystem(), (int)GetDpiDependentMetric(13, v53) < 4) )
          {
            v47 = 1;
          }
          else
          {
            DpiForSystem = GetDpiForSystem();
            v47 = (int)GetDpiDependentMetric(13, DpiForSystem) / 2;
          }
          if ( v109 == 38 )
            v47 = -v47;
          goto LABEL_75;
        }
        v52 = *((_DWORD *)a5 + 45) == 0;
        *((_DWORD *)a5 + 46) = *(_DWORD *)&aNotTopLevel[4 * v109 + 4];
LABEL_65:
        if ( !v52 )
        {
          *((_DWORD *)a5 + 50) &= 0xEFFFFEFF;
          *((_DWORD *)a5 + 62) = 4;
          MOVESIZEDATA::SHData_ResetRuntimeState(a5);
          if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
            MakeArrangedStateObservable(a5);
        }
        *((_QWORD *)a5 + 21) = 0LL;
LABEL_75:
        v57 = (int *)((char *)a5 + 176);
        if ( *((_DWORD *)a5 + 44) == 9 )
        {
          v58 = 9;
          v59 = *((unsigned __int16 *)a5 + 12) | ((unsigned __int64)*((unsigned __int16 *)a5 + 14) << 16);
        }
        else
        {
          MessagePos = GetMessagePos(v51);
          v58 = *v57;
          v59 = MessagePos;
        }
        v61 = *((int *)a5 + 45);
        v110 = v59;
        v62 = (int *)((char *)a5 + 176);
        if ( (_DWORD)v61 )
        {
          v62 = (int *)((char *)a5 + 176);
          LOWORD(v110) = *((_WORD *)a5 + 2 * dword_140369BE0[v61] + 20) + v48;
          LODWORD(v59) = v110;
          v106 = (unsigned __int16)v110;
        }
        else
        {
          v106 = v59;
        }
        v63 = *((int *)a5 + 46);
        if ( (_DWORD)v63 )
        {
          v57 = v62;
          HIWORD(v110) = *((_WORD *)a5 + 2 * dword_140369BB0[v63] + 20) + v47;
          LODWORD(v59) = v110;
        }
        if ( v58 != 9 )
        {
          *v57 = v63 + v61;
          xxxSendMessage(a1, 0x20u);
        }
        v107.x = (__int16)v106 - *((_DWORD *)a5 + 42);
        v107.y = SWORD1(v59) - *((_DWORD *)a5 + 43);
        if ( MOVESIZEDATA::PtInClipRegion(a5, &v107) )
        {
          v64 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v65 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v65 = 0;
          }
          v66 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v65 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v67 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
            LOBYTE(v68) = v66;
            LOBYTE(v69) = v65;
            WPP_RECORDER_AND_TRACE_SF_Dd(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v69,
              v68,
              *(_QWORD *)(v67 + 69152),
              4,
              1,
              74,
              (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
              v107.x,
              v107.y);
          }
          *(_QWORD *)&v108.left = *((_QWORD *)a5 + 27);
          v106 = (unsigned __int64)v107;
          CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v64);
          LogicalToPhysicalDPIPoint(&v106, &v107, CurrentThreadDpiAwarenessContext, &v108);
          v73 = W32GetUserSessionState(v72, v71);
          if ( ((v109 - 38) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
          {
            v74 = (unsigned int)v106;
            if ( ((v109 - 37) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
            {
              v75 = HIDWORD(v106);
            }
            else
            {
              v75 = *(unsigned int *)(v73 + 19220);
              HIDWORD(v106) = *(_DWORD *)(v73 + 19220);
              if ( (_DWORD)v106 == *(_DWORD *)(v73 + 19216) )
              {
                if ( v48 <= 0 )
                  v8 = -1;
                v74 = (unsigned int)(v8 + v106);
                LODWORD(v106) = v8 + v106;
              }
            }
          }
          else
          {
            v74 = *(unsigned int *)(v73 + 19216);
            v75 = HIDWORD(v106);
            LODWORD(v106) = *(_DWORD *)(v73 + 19216);
            if ( HIDWORD(v106) == *(_DWORD *)(v73 + 19220) )
            {
              if ( v47 <= 0 )
                v8 = -1;
              v75 = (unsigned int)(v8 + HIDWORD(v106));
              HIDWORD(v106) += v8;
            }
          }
          zzzInternalSetCursorPos(v74, v75, 2, 0);
        }
        v46 = v59;
        goto LABEL_48;
      }
      if ( v109 != 39 )
      {
        if ( v109 != 40 )
          return;
        goto LABEL_55;
      }
    }
    v51 = 0LL;
    if ( *((_DWORD *)a5 + 45) )
    {
      if ( KeyState < 0 || (v55 = GetDpiForSystem(), (int)GetDpiDependentMetric(12, v55) < 4) )
      {
        v48 = 1;
      }
      else
      {
        v56 = GetDpiForSystem();
        v48 = (int)GetDpiDependentMetric(12, v56) / 2;
      }
      if ( v109 == 37 )
        v48 = -v48;
      goto LABEL_75;
    }
    v52 = *((_DWORD *)a5 + 46) == 0;
    *((_DWORD *)a5 + 45) = *(_DWORD *)&aNotTopLevel[4 * v109 + 4];
    goto LABEL_65;
  }
  GetMessagePos(0LL);
LABEL_110:
  v80 = W32GetUserSessionState(v23, v22);
  bSetDevDragRect(*(HDEV *)(*(_QWORD *)(v80 + 56968) + 40LL));
  v77 = 0;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v106 + 520), 0, 0) & 0x10) != 0 )
  {
    v81 = *((_DWORD *)a5 + 50);
    if ( (v81 & 0x200) == 0
      || (v79 = *((_QWORD *)a1 + 5), LOBYTE(v78) = ((v81 & 0x20) != 0) & *(_BYTE *)(v79 + 31), !(_BYTE)v78) )
    {
      xxxDrawDragRect(a5, 0LL, ((v81 & 0xFFF80000) << 12) | 1);
    }
    _InterlockedAnd((volatile signed __int32 *)(v106 + 520), 0xFFFFFFEF);
  }
LABEL_115:
  v82 = W32GetUserSessionState(v79, v78);
  CCursorClip::ClearClip(*(CCursorClip **)(v82 + 36272));
  xxxReleaseCapture();
  *((_DWORD *)a5 + 50) |= 8u;
  if ( (*((_DWORD *)a5 + 50) & 2) != 0 )
    zzzInternalSetCursorPos(*(_QWORD *)((char *)a5 + 188), HIDWORD(*(_QWORD *)((char *)a5 + 188)), 1, 0);
  DesktopWindow = GetDesktopWindow((__int64)a1);
  if ( v84 == DesktopWindow )
  {
    v85 = 0;
  }
  else
  {
    v86 = *(_QWORD *)(v84 + 40);
    v77 = *(_DWORD *)(v86 + 104);
    v85 = *(_DWORD *)(v86 + 108);
  }
  v87 = (__int128 *)((char *)a5 + 136);
  v88 = memcmp((char *)a5 + 24, (char *)a5 + 136, 0x10uLL);
  v89 = (int *)((char *)a5 + 24);
  if ( v88 )
  {
    if ( (unsigned int)xxxCallHook(0LL, *(_QWORD *)a1, (__int64)v89, 5) )
    {
      v93 = *v87;
      v89 = (int *)((char *)a5 + 24);
      *((_QWORD *)a5 + 27) = *((_QWORD *)a5 + 28);
      *(_OWORD *)((char *)a5 + 24) = v93;
    }
    else
    {
      v90 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
      v91 = v90 & 0x20;
      if ( *((_DWORD *)a5 + 44) == 9 )
      {
        if ( v91 )
        {
          v108.left = *(_DWORD *)v87 - v77;
          v108.right = *((_DWORD *)a5 + 36) - v77;
          v108.top = *((_DWORD *)a5 + 35) - v85;
          v108.bottom = *((_DWORD *)a5 + 37) - v85;
          v92 = CHECKPOINT::Restore(a1, &v108);
          if ( v92 )
            *((_DWORD *)v92 + 4) |= 1u;
        }
      }
      else if ( v91 )
      {
        v108.left = *(_DWORD *)v87 - v77;
        v108.right = *((_DWORD *)a5 + 36) - v77;
        v108.top = *((_DWORD *)a5 + 35) - v85;
        v108.bottom = *((_DWORD *)a5 + 37) - v85;
        CHECKPOINT::Restore(a1, &v108);
        SetMinimize(a1, 0LL);
      }
      else if ( (v90 & 1) != 0 )
      {
        SetOrClrWF(0, a1, 0xF01u, 1);
      }
      v89 = (int *)((char *)a5 + 24);
    }
  }
  v94 = *(_QWORD *)(*((_QWORD *)a1 + 13) + 40LL);
  if ( (*(_BYTE *)(v94 + 26) & 0x40) != 0 )
  {
    v95 = *(_DWORD *)(v94 + 112);
    v96 = v89[2];
    *v89 -= v95;
    v97 = v96 - v95;
    v98 = *v89;
    v89[3] -= v85;
    v89[1] -= v85;
    v89[2] = v97;
    *v89 = -v97;
    *((_DWORD *)a5 + 8) = -v98;
  }
  else
  {
    *v89 -= v77;
    v89[2] -= v77;
    v89[3] -= v85;
    v89[1] -= v85;
  }
  v99 = GetDesktopWindow((__int64)a1);
  if ( *(_QWORD *)(v101 + v100) == v99 )
    AdjustFinalDragRectToKeepCaptionOnScreen(*((struct tagRECT **)a5 + 2), (struct tagRECT *)((char *)a5 + 24));
  if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
    xxxCommitMoveSize(a5);
  else
    xxxCommitMoveSizeOld(a1, a5);
}
