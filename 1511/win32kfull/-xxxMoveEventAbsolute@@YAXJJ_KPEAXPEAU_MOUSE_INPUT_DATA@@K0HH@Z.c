/*
 * XREFs of ?xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@K0HH@Z @ 0x1C0087E90
 * Callers:
 *     xxxMoveEvent @ 0x1C0088630 (xxxMoveEvent.c)
 *     ProcessMouseInputViaRim @ 0x1C014F024 (ProcessMouseInputViaRim.c)
 *     ProcessMouseInput @ 0x1C01DA5F0 (ProcessMouseInput.c)
 *     ?xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@H@Z @ 0x1C023B028 (-xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@H@Z.c)
 * Callees:
 *     ?PostRawMouseInput@@YAHPEAUtagQ@@KPEAXPEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C00021AC (-PostRawMouseInput@@YAHPEAUtagQ@@KPEAXPEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     SetWakeBit @ 0x1C00535C0 (SetWakeBit.c)
 *     xxxCallHook2 @ 0x1C005BCC0 (xxxCallHook2.c)
 *     _MonitorFromPoint @ 0x1C0077F10 (_MonitorFromPoint.c)
 *     PhkFirstValid @ 0x1C0084424 (PhkFirstValid.c)
 *     RawInputRequestedForMouse @ 0x1C0085724 (RawInputRequestedForMouse.c)
 *     FixupPromotedMouseExtraInfoForHook @ 0x1C0086DAC (FixupPromotedMouseExtraInfoForHook.c)
 *     UpdateCursorImageForMonitorDpi @ 0x1C008823C (UpdateCursorImageForMonitorDpi.c)
 *     GreMovePointer @ 0x1C00882C0 (GreMovePointer.c)
 *     UsingPenCursors @ 0x1C00885A0 (UsingPenCursors.c)
 *     BoundCursor @ 0x1C00885BC (BoundCursor.c)
 *     TransitionCursorSuppressionState @ 0x1C00987A0 (TransitionCursorSuppressionState.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

void __fastcall xxxMoveEventAbsolute(
        int a1,
        LONG a2,
        __int64 a3,
        void *a4,
        struct _MOUSE_INPUT_DATA *a5,
        unsigned int a6,
        unsigned __int64 a7,
        int a8,
        int a9)
{
  LONG v9; // r15d
  unsigned int v10; // esi
  __int64 v12; // r9
  __int64 v13; // r8
  int v14; // ebp
  unsigned int v15; // r8d
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 Valid; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  bool v22; // zf
  __int64 v23; // rax
  int v24; // ebx
  unsigned __int16 v25; // bx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // eax
  _BYTE v38[8]; // [rsp+38h] [rbp-80h] BYREF
  int v39[6]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v40; // [rsp+58h] [rbp-60h]

  v9 = a1;
  v10 = 0;
  v12 = a3;
  v13 = 1LL;
  if ( ((*(_DWORD *)(gptiRit + 600LL) | *(_DWORD *)(*(_QWORD *)(gptiRit + 416LL) + 24LL)) & 0x8000) == 0 )
    goto LABEL_8;
  v39[2] = 0;
  v39[1] = a2;
  v14 = 0;
  v39[0] = a1;
  v39[3] = a8;
  v39[4] = a6;
  v40 = FixupPromotedMouseExtraInfoForHook((__int64)a5, v12);
  EnterCrit(0LL, v15);
  Valid = PhkFirstValid(gptiRit, 14LL, v16, v17);
  if ( Valid )
  {
    v21 = *(_QWORD *)(gptiCurrent + 1208LL);
    *(_QWORD *)(gptiCurrent + 1208LL) = v39;
    v22 = xxxCallHook2(Valid, 0, 512LL, v39, (__int64)v38) == 0;
    *(_QWORD *)(gptiCurrent + 1208LL) = v21;
    v23 = *(_QWORD *)(gptiCurrent + 400LL);
    LOBYTE(v14) = !v22;
    v19 = *(unsigned __int16 *)(v23 + 4);
    if ( ((unsigned __int16)v19 & *(_WORD *)(v23 + 10) & 0xFDFF) != 0 )
      SetWakeBit(gptiCurrent, v19 & 0xFDFF);
    v9 = a1;
  }
  UserSessionSwitchLeaveCrit(v20, v19);
  if ( !v14 )
  {
    v13 = 1LL;
LABEL_8:
    if ( a5 && (unsigned int)RawInputRequestedForMouse() )
    {
      EnterCrit(0LL, (unsigned int)v13);
      PostRawMouseInput(gpqForeground, a6, a4, a5);
      UserSessionSwitchLeaveCrit(v32, v31);
    }
    if ( (*(_DWORD *)(*(_QWORD *)(gptiRit + 416LL) + 24LL) & 4) == 0 )
    {
      v24 = 2;
      if ( a9 && gCursorSuppressionState == 2 )
      {
        EnterCrit(0LL, 1LL);
        if ( gCursorSuppressionState == 2 )
          TransitionCursorSuppressionState(8LL);
        UserSessionSwitchLeaveCrit(v34, v33);
      }
      if ( a5 && (a5->Flags & 1) == 0 )
      {
        EnterCrit(0LL, 1LL);
        v30 = gpDispInfo;
        if ( *(_DWORD *)(gpDispInfo + 80LL) > 1u )
        {
          v10 = 2;
          if ( gspwndInternalCapture )
          {
            v30 = *(_QWORD *)(*(_QWORD *)(gspwndInternalCapture + 16LL) + 592LL);
            if ( v30 )
            {
              v35 = *(_DWORD *)(v30 + 180);
              v30 = 3LL;
              if ( (v35 & 0xC00) != 0 )
                v10 = 3;
            }
          }
        }
        UserSessionSwitchLeaveCrit(v30, v29);
      }
      if ( !_InterlockedCompareExchange(gdwMonitorBusy, 1, 0) )
      {
        gptCursorAsync.y = a2;
        gptCursorAsync.x = v9;
        BoundCursor(&gptCursorAsync, v10, v13, v12);
        if ( !a5 || (a5->Flags & 0x100) == 0 )
          v24 = a8 != 0;
        if ( a9 )
        {
          if ( (unsigned int)UsingPenCursors() )
          {
            _InterlockedOr((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, 1u);
            KeSetEvent(Feedback::gpevtPointerCursorOperation, 1, 0);
          }
          EtwTraceGreMovePointerBegin(a6, (unsigned int)gptCursorAsync.x, (unsigned int)gptCursorAsync.y);
          GreMovePointer((HDEV)*gpDispInfo, gptCursorAsync.x, gptCursorAsync.y, v24);
          EtwTraceGreMovePointerEnd(a6, (unsigned int)gptCursorAsync.x, (unsigned int)gptCursorAsync.y);
        }
        gqpcMouseMoveTimeStamp = a7;
        v25 = 0;
        gdwMouseMoveTimeStamp = a6;
        _InterlockedExchange(gdwMonitorBusy, 0);
        if ( a9 )
        {
          EnterCrit(0LL, 1LL);
          v26 = ValidateHmonitorNoRip(ghCursorMonitor);
          if ( v26 )
            v25 = *(_WORD *)(v26 + 152);
          if ( MonitorFromPoint(*(_QWORD *)&gptCursorAsync, 0x22u) )
            ghCursorMonitor = *(_QWORD *)MonitorFromPoint(*(_QWORD *)&gptCursorAsync, 0x22u);
          else
            ghCursorMonitor = 0LL;
          UpdateCursorImageForMonitorDpi(v25);
          UserSessionSwitchLeaveCrit(v28, v27);
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
