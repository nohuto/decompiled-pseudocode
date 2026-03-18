/*
 * XREFs of ProcessQueuedMouseEvents @ 0x1C00E11B4
 * Callers:
 *     RawInputThread @ 0x1C007B620 (RawInputThread.c)
 *     UserProcessDwmInput @ 0x1C00E0620 (UserProcessDwmInput.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00@Z @ 0x1C01D14C8 (-xxxMouseEventDirect@@YAHKKKK_K00@Z.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C0232668 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 *     ?GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJF@Z @ 0x1C023F438 (-GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJF@Z.c)
 * Callees:
 *     ?PostRawMouseInput@@YAHPEAUtagQ@@KPEAXPEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C00072B4 (-PostRawMouseInput@@YAHPEAUtagQ@@KPEAXPEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ?WakeInjectedFlushWaiter@@YAXXZ @ 0x1C000CEF0 (-WakeInjectedFlushWaiter@@YAXXZ.c)
 *     PostMoveToPwnd @ 0x1C0056F40 (PostMoveToPwnd.c)
 *     UpdateLogicalCursorPos @ 0x1C0058678 (UpdateLogicalCursorPos.c)
 *     zzzSetFMouseMovedWorker @ 0x1C00587A4 (zzzSetFMouseMovedWorker.c)
 *     HasHidTable @ 0x1C005C980 (HasHidTable.c)
 *     UpdateInputGlobalsEx @ 0x1C00A3FC0 (UpdateInputGlobalsEx.c)
 *     ?xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z @ 0x1C00DD764 (-xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z.c)
 *     UnqueueMouseEvent @ 0x1C00E14C8 (UnqueueMouseEvent.c)
 *     RawInputRequestedForMouse @ 0x1C00E15EC (RawInputRequestedForMouse.c)
 *     GetMouseEventInputSource @ 0x1C00E160C (GetMouseEventInputSource.c)
 *     ValidatePtiMouse @ 0x1C00E1668 (ValidatePtiMouse.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 ProcessQueuedMouseEvents()
{
  unsigned __int64 *v1; // r15
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // eax
  int v5; // edi
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  int v8; // r8d
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 *v16; // r8
  __int64 v17; // rcx
  int v18; // r14d
  __int64 v19; // rsi
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // r8
  __int64 v26; // [rsp+38h] [rbp-49h] BYREF
  __int64 v27; // [rsp+40h] [rbp-41h] BYREF
  unsigned __int16 v28; // [rsp+48h] [rbp-39h] BYREF
  __int64 v29; // [rsp+50h] [rbp-31h]
  __int64 v30; // [rsp+58h] [rbp-29h]
  unsigned int v31[2]; // [rsp+60h] [rbp-21h]
  __int64 v32; // [rsp+68h] [rbp-19h]
  void *v33; // [rsp+70h] [rbp-11h]
  int v34; // [rsp+78h] [rbp-9h]
  unsigned __int64 v35; // [rsp+7Ch] [rbp-5h] BYREF
  int v36; // [rsp+84h] [rbp+3h]
  _MOUSE_INPUT_DATA v37; // [rsp+88h] [rbp+7h] BYREF
  __int64 v38; // [rsp+A0h] [rbp+1Fh]

  EtwTraceStartProcessQueuedMouseEvents();
  while ( (unsigned int)UnqueueMouseEvent(&v28) )
  {
    EnterCrit(0LL, 1LL);
    v1 = 0LL;
    v4 = IsDwmInputThread(v3, v2);
    v5 = v34;
    if ( v4 && (v34 & 1) != 0 && (v34 & 0x800) != 0 )
    {
      v7 = v35;
      v1 = &v35;
      v8 = v36;
    }
    else
    {
      v6 = *(_QWORD *)(gptiCurrent + 376LL);
      v7 = *(_QWORD *)(v6 + 824);
      v8 = *(_DWORD *)(v6 + 12) >> 31;
    }
    if ( (v34 & 0x20) == 0 && (v34 & 1) != 0 )
    {
      if ( gpqForeground )
      {
        v9 = *(_QWORD *)(gpqForeground + 380LL);
        if ( gbEnforceUIPI )
        {
          if ( (unsigned int)v7 <= (unsigned int)v9 )
          {
            if ( (_DWORD)v7 != (_DWORD)v9
              || (v10 = HIDWORD(v7), v11 = HIDWORD(v9), (_DWORD)v10 != (_DWORD)v11)
              && (_DWORD)v11 != -1
              && (_DWORD)v10 != -1 )
            {
              if ( !v8 )
              {
                EtwTraceUIPIInputError(gptiCurrent, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 380LL), 1);
                goto LABEL_29;
              }
            }
          }
        }
      }
    }
    v12 = v31[0];
    gMouseLastButtonFlags = v28;
    UpdateInputGlobalsEx(*(__int64 *)v31, -(v34 & 1), 1u, 1);
    *(_QWORD *)(gpsi + 5368LL) = v30;
    *(_QWORD *)(gpsi + 5360LL) = v38;
    if ( (unsigned int)RawInputRequestedForMouse(gpsi, v13, gpsi, v14) )
    {
      PostRawMouseInput(gpqForeground, v12, v33, &v37);
      v16 = (__int64 *)gpsi;
      v5 = v34;
      v12 = v31[0];
    }
    v17 = *v16;
    if ( qword_1C0328F58 != *(_QWORD *)(*v16 + 5368) )
    {
      v18 = 1;
LABEL_20:
      if ( (v5 & 0x200) == 0 )
      {
        v19 = v29;
        qword_1C0328F58 = *(_QWORD *)(v17 + 5368);
        qword_1C0328F50 = *(_QWORD *)(v17 + 5360);
        gdwMouseMoveExtraInfo = v29;
        if ( dword_1C032682C )
        {
          PostRawMouseInput(gpqForeground, v12, v33, &v37);
          v5 = v34;
          v19 = v29;
        }
        v20 = ValidatePtiMouse(gpqForeground);
        if ( (unsigned int)HasHidTable(v20)
          && (v22 = *(_QWORD *)(v20 + 376), (*(_DWORD *)(*(_QWORD *)(v22 + 776) + 100LL) & 2) != 0) )
        {
          v23 = *(unsigned int *)(v20 + 340);
          if ( (int)v23 < 0 )
            v23 = *(unsigned int *)(v22 + 280);
          v24 = (unsigned int)MonitorFlagsFromDpiAwarenessContext(v23);
          PhysicalToLogicalDPIPoint(&v26, gpsi + 5368LL, v24);
          UpdateLogicalCursorPos(v26, (unsigned int)v24, v25);
        }
        else
        {
          GetMouseEventInputSource(&v28, &v27);
          v21 = zzzSetFMouseMovedWorker(v32, &v27, __CFSHR__(v5, 2), v1, v18 == 0);
          if ( v21 )
          {
            if ( __CFSHR__(v5, 2) )
            {
              v17 = *(unsigned int *)(v21 + 340);
              if ( (v17 & 0x20) != 0 )
              {
                gdwMouseMoveExtraInfo = v19;
                PostMoveToPwnd(v21, 0LL, 1);
              }
            }
          }
        }
        gdwMouseMoveExtraInfo = v19;
      }
      goto LABEL_27;
    }
    v18 = 0;
    if ( qword_1C0328F50 != *(_QWORD *)(v17 + 5360) )
      goto LABEL_20;
LABEL_27:
    if ( v28 )
    {
      xxxDoButtonEvent((struct tagMOUSEEVENT *)&v28, v15);
      LOBYTE(v5) = v34;
    }
LABEL_29:
    if ( (v5 & 0x80u) != 0 )
      WakeInjectedFlushWaiter();
    UserSessionSwitchLeaveCrit(v17, v15);
  }
  return EtwTraceStopProcessQueuedMouseEvents();
}
