/*
 * XREFs of ?xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HH@Z @ 0x1C01D19A4
 * Callers:
 *     ProcessMouseInputViaRim @ 0x1C00E0064 (ProcessMouseInputViaRim.c)
 *     xxxMoveEvent @ 0x1C011E61C (xxxMoveEvent.c)
 *     ?xxxSendMousePromotion@@YAXAEAUtagMOUSE_PROMOTION_ENTRY@@H@Z @ 0x1C0232B3C (-xxxSendMousePromotion@@YAXAEAUtagMOUSE_PROMOTION_ENTRY@@H@Z.c)
 * Callees:
 *     ?PostRawMouseInput@@YAHPEAUtagQ@@KPEAXPEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C00072B4 (-PostRawMouseInput@@YAHPEAUtagQ@@KPEAXPEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     SetWakeBit @ 0x1C005B6A0 (SetWakeBit.c)
 *     xxxCallHook2 @ 0x1C0083C30 (xxxCallHook2.c)
 *     TransitionCursorSuppressionState @ 0x1C0093FF0 (TransitionCursorSuppressionState.c)
 *     UsingPenCursors @ 0x1C009837C (UsingPenCursors.c)
 *     PhkFirstValid @ 0x1C00A3CFC (PhkFirstValid.c)
 *     _MonitorFromPoint @ 0x1C00AEF70 (_MonitorFromPoint.c)
 *     BoundCursor @ 0x1C00DB104 (BoundCursor.c)
 *     GreMovePointer @ 0x1C00DB180 (GreMovePointer.c)
 *     UpdateCursorImageForMonitorDpi @ 0x1C00DB460 (UpdateCursorImageForMonitorDpi.c)
 *     FixupPromotedMouseExtraInfoForHook @ 0x1C00DEF30 (FixupPromotedMouseExtraInfoForHook.c)
 *     RawInputRequestedForMouse @ 0x1C00E15EC (RawInputRequestedForMouse.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

void __fastcall xxxMoveEventAbsolute(
        int a1,
        LONG a2,
        __int64 a3,
        void *a4,
        struct _MOUSE_INPUT_DATA *a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        int a8,
        int a9)
{
  LONG v9; // r15d
  int v10; // esi
  int v12; // ebp
  unsigned int v13; // r8d
  __int64 Valid; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  bool v18; // zf
  __int64 v19; // rax
  __int64 v20; // r8
  unsigned int v21; // r8d
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int v24; // ebx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int16 v29; // bx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v35; // [rsp+38h] [rbp-80h] BYREF
  int v36[6]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v37; // [rsp+58h] [rbp-60h]

  v9 = a1;
  v10 = 0;
  if ( ((*(_DWORD *)(gptiRit + 600LL) | *(_DWORD *)(*(_QWORD *)(gptiRit + 416LL) + 24LL)) & 0x8000) == 0 )
    goto LABEL_44;
  v36[2] = 0;
  v36[1] = a2;
  v12 = 0;
  v36[0] = a1;
  v36[3] = a8;
  v36[4] = a6;
  v37 = FixupPromotedMouseExtraInfoForHook((__int64)a5, a3);
  EnterCrit(0LL, v13);
  Valid = PhkFirstValid(gptiRit, 14);
  if ( Valid )
  {
    v17 = *(_QWORD *)(gptiCurrent + 1232LL);
    *(_QWORD *)(gptiCurrent + 1232LL) = v36;
    v18 = xxxCallHook2(Valid, 0, 512LL, v36, &v35, 0) == 0;
    *(_QWORD *)(gptiCurrent + 1232LL) = v17;
    v19 = *(_QWORD *)(gptiCurrent + 400LL);
    LOBYTE(v12) = !v18;
    v15 = *(unsigned __int16 *)(v19 + 4);
    v20 = (unsigned __int16)(v15 & *(_WORD *)(v19 + 10));
    if ( (v20 & 0xFFFFFDFF) != 0 )
    {
      LODWORD(v15) = v15 & 0xFFFFFDFF;
      SetWakeBit(gptiCurrent, v15, v20);
    }
    v9 = a1;
  }
  UserSessionSwitchLeaveCrit(v16, v15);
  if ( !v12 )
  {
LABEL_44:
    if ( a5 && (unsigned int)RawInputRequestedForMouse() )
    {
      EnterCrit(0LL, v21);
      PostRawMouseInput(gpqForeground, a6, a4, a5);
      UserSessionSwitchLeaveCrit(v23, v22);
    }
    if ( (*(_DWORD *)(*(_QWORD *)(gptiRit + 416LL) + 24LL) & 4) == 0 )
    {
      v24 = 2;
      if ( a9 && gCursorSuppressionState == 2 )
      {
        EnterCrit(0LL, 1LL);
        if ( gCursorSuppressionState == 2 )
          TransitionCursorSuppressionState(8, 1);
        UserSessionSwitchLeaveCrit(v26, v25);
      }
      if ( a5 && (a5->Flags & 1) == 0 )
      {
        EnterCrit(0LL, 1LL);
        v28 = gpDispInfo;
        if ( *(_DWORD *)(gpDispInfo + 80LL) > 1u )
        {
          v10 = 2;
          if ( gspwndInternalCapture )
          {
            v28 = *(_QWORD *)(*(_QWORD *)(gspwndInternalCapture + 16LL) + 592LL);
            if ( v28 )
            {
              if ( (*(_DWORD *)(v28 + 180) & 0xC00) != 0 )
                v10 = 3;
            }
          }
        }
        UserSessionSwitchLeaveCrit(v28, v27);
      }
      if ( !_InterlockedCompareExchange(gdwMonitorBusy, 1, 0) )
      {
        gptCursorAsync.y = a2;
        gptCursorAsync.x = v9;
        BoundCursor((LONG *)&gptCursorAsync, v10);
        if ( !a5 || (a5->Flags & 0x100) == 0 )
          v24 = a8 != 0;
        if ( a9 )
        {
          if ( (unsigned int)UsingPenCursors() )
          {
            _InterlockedOr((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, 1u);
            KeSetEvent(Feedback::gpevtPointerCursorOperation, 1, 0);
          }
          EtwTraceGreMovePointerBegin((unsigned int)a6, (unsigned int)gptCursorAsync.x, (unsigned int)gptCursorAsync.y);
          GreMovePointer((HDEV)*gpDispInfo, (unsigned int)gptCursorAsync.x, (unsigned int)gptCursorAsync.y, v24);
          EtwTraceGreMovePointerEnd((unsigned int)a6, (unsigned int)gptCursorAsync.x, (unsigned int)gptCursorAsync.y);
        }
        gqpcMouseMoveTimeStamp = a7;
        v29 = 0;
        gdwMouseMoveTimeStamp = a6;
        _InterlockedExchange(gdwMonitorBusy, 0);
        if ( a9 )
        {
          EnterCrit(0LL, 1LL);
          v30 = ValidateHmonitorNoRip(ghCursorMonitor);
          if ( v30 )
            v29 = *(_WORD *)(v30 + 154);
          if ( MonitorFromPoint(*(_QWORD *)&gptCursorAsync, 0x22u) )
            ghCursorMonitor = *(_QWORD *)MonitorFromPoint(*(_QWORD *)&gptCursorAsync, 0x22u);
          else
            ghCursorMonitor = 0LL;
          UpdateCursorImageForMonitorDpi(v29);
          UserSessionSwitchLeaveCrit(v32, v31);
        }
        if ( !gProtocolType )
        {
          if ( gMouseTrails )
            _InterlockedExchange(&gMouseTrailsToHide, gMouseTrails + 1);
        }
      }
    }
  }
}
