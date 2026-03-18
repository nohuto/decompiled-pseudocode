/*
 * XREFs of ProcessQueuedMouseEvents @ 0x1C00852E0
 * Callers:
 *     ?xxxMouseEventDirect@@YAHKKKKK_K0@Z @ 0x1C0084AE8 (-xxxMouseEventDirect@@YAHKKKKK_K0@Z.c)
 *     RawInputThread @ 0x1C009B5A0 (RawInputThread.c)
 *     UserProcessDwmInput @ 0x1C00F7160 (UserProcessDwmInput.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C023ABBC (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 * Callees:
 *     ?PostRawMouseInput@@YAHPEAUtagQ@@KPEAXPEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C00021AC (-PostRawMouseInput@@YAHPEAUtagQ@@KPEAXPEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ?WakeInjectedFlushWaiter@@YAXXZ @ 0x1C000C7A4 (-WakeInjectedFlushWaiter@@YAXXZ.c)
 *     HasHidTable @ 0x1C0053C70 (HasHidTable.c)
 *     PostMoveToPwnd @ 0x1C0065C2C (PostMoveToPwnd.c)
 *     zzzSetFMouseMovedWorker @ 0x1C0065D9C (zzzSetFMouseMovedWorker.c)
 *     UpdateLogicalCursorPos @ 0x1C0066B68 (UpdateLogicalCursorPos.c)
 *     UpdateInputGlobalsEx @ 0x1C0084630 (UpdateInputGlobalsEx.c)
 *     UnqueueMouseEvent @ 0x1C0085604 (UnqueueMouseEvent.c)
 *     RawInputRequestedForMouse @ 0x1C0085724 (RawInputRequestedForMouse.c)
 *     GetMouseEventInputSource @ 0x1C00858D0 (GetMouseEventInputSource.c)
 *     ValidatePtiMouse @ 0x1C008591C (ValidatePtiMouse.c)
 *     ?xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z @ 0x1C00874E8 (-xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 ProcessQueuedMouseEvents()
{
  unsigned __int64 *v1; // r15
  int v2; // eax
  int v3; // edi
  __int64 v4; // rcx
  unsigned __int64 v5; // rax
  int v6; // r8d
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 *v12; // r8
  __int64 v13; // rcx
  int v14; // r14d
  __int64 v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 MonitorFlags; // rbx
  __int64 v20; // [rsp+38h] [rbp-49h] BYREF
  __int64 v21; // [rsp+40h] [rbp-41h] BYREF
  unsigned __int16 v22; // [rsp+48h] [rbp-39h] BYREF
  __int64 v23; // [rsp+50h] [rbp-31h]
  __int64 v24; // [rsp+58h] [rbp-29h]
  unsigned int v25; // [rsp+60h] [rbp-21h]
  __int64 v26; // [rsp+68h] [rbp-19h]
  void *v27; // [rsp+70h] [rbp-11h]
  int v28; // [rsp+78h] [rbp-9h]
  unsigned __int64 v29; // [rsp+7Ch] [rbp-5h] BYREF
  int v30; // [rsp+84h] [rbp+3h]
  _MOUSE_INPUT_DATA v31; // [rsp+88h] [rbp+7h] BYREF
  __int64 v32; // [rsp+A0h] [rbp+1Fh]

  EtwTraceStartProcessQueuedMouseEvents();
  while ( (unsigned int)UnqueueMouseEvent(&v22) )
  {
    EnterCrit(0LL, 1LL);
    v1 = 0LL;
    v2 = IsDwmInputThread();
    v3 = v28;
    if ( v2 && (v28 & 1) != 0 && (v28 & 0x400) != 0 )
    {
      v5 = v29;
      v1 = &v29;
      v6 = v30;
    }
    else
    {
      v4 = *(_QWORD *)(gptiCurrent + 376LL);
      v5 = *(_QWORD *)(v4 + 832);
      v6 = *(_DWORD *)(v4 + 12) >> 31;
    }
    if ( (v28 & 0x20) == 0 && (v28 & 1) != 0 )
    {
      if ( gpqForeground )
      {
        v7 = *(_QWORD *)(gpqForeground + 372LL);
        if ( gbEnforceUIPI )
        {
          if ( (unsigned int)v5 <= (unsigned int)v7 )
          {
            if ( (_DWORD)v5 != (_DWORD)v7
              || (v8 = HIDWORD(v5), v9 = HIDWORD(v7), (_DWORD)v8 != (_DWORD)v9) && (_DWORD)v9 != -1 && (_DWORD)v8 != -1 )
            {
              if ( !v6 )
              {
                EtwTraceUIPIInputError(gptiCurrent, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 372LL), 1);
                goto LABEL_24;
              }
            }
          }
        }
      }
    }
    v10 = v25;
    gMouseLastButtonFlags = v22;
    UpdateInputGlobalsEx(v25, -(v28 & 1), 1u, 1);
    *(_QWORD *)(gpsi + 3976LL) = v24;
    *(_QWORD *)(gpsi + 3968LL) = v32;
    if ( (unsigned int)RawInputRequestedForMouse() )
    {
      PostRawMouseInput(gpqForeground, v10, v27, &v31);
      v12 = (__int64 *)gpsi;
      v3 = v28;
      v10 = v25;
    }
    v13 = *v12;
    if ( qword_1C03238B8 != *(_QWORD *)(*v12 + 3976) )
    {
      v14 = 1;
LABEL_17:
      v15 = v23;
      qword_1C03238B8 = *(_QWORD *)(v13 + 3976);
      qword_1C03238B0 = *(_QWORD *)(v13 + 3968);
      gdwMouseMoveExtraInfo = v23;
      if ( dword_1C032171C )
      {
        PostRawMouseInput(gpqForeground, v10, v27, &v31);
        v3 = v28;
        v15 = v23;
      }
      v16 = ValidatePtiMouse(gpqForeground);
      if ( (unsigned int)HasHidTable(v16)
        && (v18 = *(_QWORD *)(v16 + 376), (*(_DWORD *)(*(_QWORD *)(v18 + 784) + 100LL) & 2) != 0) )
      {
        MonitorFlags = (unsigned int)GetMonitorFlags(v18);
        PhysicalToLogicalDPIPoint(&v21, gpsi + 3976LL, MonitorFlags, 0LL);
        UpdateLogicalCursorPos(v21, MonitorFlags);
      }
      else
      {
        GetMouseEventInputSource(&v22, &v20);
        v17 = zzzSetFMouseMovedWorker(v26, &v20, __CFSHR__(v3, 2), v1, v14 == 0);
        if ( v17 )
        {
          if ( __CFSHR__(v3, 2) )
          {
            v13 = *(unsigned int *)(v17 + 332);
            if ( (v13 & 0x20) != 0 )
            {
              gdwMouseMoveExtraInfo = v15;
              PostMoveToPwnd(v17, 0LL, 1);
            }
          }
        }
      }
      gdwMouseMoveExtraInfo = v15;
      goto LABEL_22;
    }
    v14 = 0;
    if ( qword_1C03238B0 != *(_QWORD *)(v13 + 3968) )
      goto LABEL_17;
LABEL_22:
    if ( v22 )
    {
      xxxDoButtonEvent((struct tagMOUSEEVENT *)&v22);
      LOBYTE(v3) = v28;
    }
LABEL_24:
    if ( (v3 & 0x80u) != 0 )
      WakeInjectedFlushWaiter();
    UserSessionSwitchLeaveCrit(v13, v11);
  }
  return EtwTraceStopProcessQueuedMouseEvents();
}
