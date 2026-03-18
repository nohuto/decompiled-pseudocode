/*
 * XREFs of ?xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HH@Z @ 0x1C01D9478
 * Callers:
 *     xxxMoveEvent @ 0x1C00F6C78 (xxxMoveEvent.c)
 *     ProcessMouseInputViaRim @ 0x1C012D104 (ProcessMouseInputViaRim.c)
 *     ProcessMouseInput @ 0x1C01D9FE0 (ProcessMouseInput.c)
 *     ?xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@H@Z @ 0x1C023AE50 (-xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@H@Z.c)
 * Callees:
 *     TransitionCursorSuppressionState @ 0x1C003A4A0 (TransitionCursorSuppressionState.c)
 *     UsingPenCursors @ 0x1C003DE14 (UsingPenCursors.c)
 *     BoundCursor @ 0x1C00407FC (BoundCursor.c)
 *     GreMovePointer @ 0x1C0040870 (GreMovePointer.c)
 *     UpdateCursorImageForMonitorDpi @ 0x1C0040B44 (UpdateCursorImageForMonitorDpi.c)
 *     PhkFirstValid @ 0x1C004A274 (PhkFirstValid.c)
 *     ?PostRawMouseInput@@YAHPEAUtagQ@@KPEAXPEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C004B55C (-PostRawMouseInput@@YAHPEAUtagQ@@KPEAXPEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     RawInputRequestedForMouse @ 0x1C004B914 (RawInputRequestedForMouse.c)
 *     FixupPromotedMouseExtraInfoForHook @ 0x1C004CCB4 (FixupPromotedMouseExtraInfoForHook.c)
 *     xxxCallHook2 @ 0x1C006C0B0 (xxxCallHook2.c)
 *     _MonitorFromPoint @ 0x1C0082CA0 (_MonitorFromPoint.c)
 *     SetWakeBit @ 0x1C00904B0 (SetWakeBit.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
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
  unsigned int v20; // r8d
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // eax
  unsigned __int16 v29; // bx
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v37; // [rsp+38h] [rbp-80h] BYREF
  int v38[6]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v39; // [rsp+58h] [rbp-60h]

  v9 = a1;
  v10 = 0;
  if ( ((*(_DWORD *)(gptiRit + 608LL) | *(_DWORD *)(*(_QWORD *)(gptiRit + 424LL) + 24LL)) & 0x8000) == 0 )
    goto LABEL_44;
  v38[2] = 0;
  v38[1] = a2;
  v12 = 0;
  v38[0] = a1;
  v38[3] = a8;
  v38[4] = a6;
  v39 = FixupPromotedMouseExtraInfoForHook((__int64)a5, a3);
  EnterCrit(v13);
  Valid = PhkFirstValid(gptiRit, 14);
  if ( Valid )
  {
    v17 = *(_QWORD *)(gptiCurrent + 1216LL);
    *(_QWORD *)(gptiCurrent + 1216LL) = v38;
    v18 = xxxCallHook2(Valid, 0, 512LL, v38, &v37) == 0;
    *(_QWORD *)(gptiCurrent + 1216LL) = v17;
    v19 = *(_QWORD *)(gptiCurrent + 408LL);
    LOBYTE(v12) = !v18;
    v15 = *(unsigned __int16 *)(v19 + 4);
    if ( ((unsigned __int16)v15 & *(_WORD *)(v19 + 10) & 0xFDFF) != 0 )
      SetWakeBit(gptiCurrent, v15 & 0xFDFF);
    v9 = a1;
  }
  UserSessionSwitchLeaveCrit(v16, v15);
  if ( !v12 )
  {
LABEL_44:
    if ( a5 && (unsigned int)RawInputRequestedForMouse() )
    {
      EnterCrit(v20);
      PostRawMouseInput(gpqForeground, a6, a4, a5);
      UserSessionSwitchLeaveCrit(v22, v21);
    }
    if ( (*(_DWORD *)(*(_QWORD *)(gptiRit + 424LL) + 24LL) & 4) == 0 )
    {
      v23 = 2;
      if ( a9 && gCursorSuppressionState == 2 )
      {
        EnterCrit(1LL);
        if ( gCursorSuppressionState == 2 )
          TransitionCursorSuppressionState(8, 1);
        UserSessionSwitchLeaveCrit(v25, v24);
      }
      if ( a5 && (a5->Flags & 1) == 0 )
      {
        EnterCrit(1LL);
        v27 = gpDispInfo;
        if ( *(_DWORD *)(gpDispInfo + 80LL) > 1u )
        {
          v10 = 2;
          if ( gspwndInternalCapture )
          {
            v27 = *(_QWORD *)(*(_QWORD *)(gspwndInternalCapture + 16LL) + 600LL);
            if ( v27 )
            {
              v28 = *(_DWORD *)(v27 + 180);
              v27 = 3LL;
              if ( (v28 & 0xC00) != 0 )
                v10 = 3;
            }
          }
        }
        UserSessionSwitchLeaveCrit(v27, v26);
      }
      if ( !_InterlockedCompareExchange(gdwMonitorBusy, 1, 0) )
      {
        gptCursorAsync.y = a2;
        gptCursorAsync.x = v9;
        BoundCursor((LONG *)&gptCursorAsync, v10);
        if ( !a5 || (a5->Flags & 0x100) == 0 )
          v23 = a8 != 0;
        if ( a9 )
        {
          if ( (unsigned int)UsingPenCursors() )
          {
            _InterlockedOr((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, 1u);
            KeSetEvent(Feedback::gpevtPointerCursorOperation, 1, 0);
          }
          EtwTraceGreMovePointerBegin((unsigned int)a6, (unsigned int)gptCursorAsync.x, (unsigned int)gptCursorAsync.y);
          GreMovePointer((HDEV)*gpDispInfo, gptCursorAsync.x, gptCursorAsync.y, v23);
          EtwTraceGreMovePointerEnd((unsigned int)a6, (unsigned int)gptCursorAsync.x, (unsigned int)gptCursorAsync.y);
        }
        gqpcMouseMoveTimeStamp = a7;
        v29 = 0;
        gdwMouseMoveTimeStamp = a6;
        _InterlockedExchange(gdwMonitorBusy, 0);
        if ( a9 )
        {
          EnterCrit(1LL);
          v30 = ValidateHmonitorNoRip(ghCursorMonitor);
          if ( v30 )
            v29 = *(_WORD *)(v30 + 152);
          if ( MonitorFromPoint(*(_QWORD *)&gptCursorAsync, 34LL, v31) )
            ghCursorMonitor = *(_QWORD *)MonitorFromPoint(*(_QWORD *)&gptCursorAsync, 34LL, v32);
          else
            ghCursorMonitor = 0LL;
          UpdateCursorImageForMonitorDpi(v29);
          UserSessionSwitchLeaveCrit(v34, v33);
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
