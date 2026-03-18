/*
 * XREFs of SetWakeBit @ 0x1C00535C0
 * Callers:
 *     ?SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C000C3D0 (-SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     PostEventMessageEx @ 0x1C000D614 (PostEventMessageEx.c)
 *     WakeSomeone @ 0x1C0051C7C (WakeSomeone.c)
 *     InternalInvalidate3 @ 0x1C0052F58 (InternalInvalidate3.c)
 *     xxxInterSendMsgEx @ 0x1C005DAE0 (xxxInterSendMsgEx.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C005FAE0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxProcessNotifyWinEvent @ 0x1C0060EC0 (xxxProcessNotifyWinEvent.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0061810 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxProcessEventMessage @ 0x1C0063E9C (xxxProcessEventMessage.c)
 *     _PostThreadMessageEx @ 0x1C0065470 (_PostThreadMessageEx.c)
 *     zzzSetFMouseMovedWorker @ 0x1C0065D9C (zzzSetFMouseMovedWorker.c)
 *     ClearSendMessages @ 0x1C006872C (ClearSendMessages.c)
 *     ?xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@K0HH@Z @ 0x1C0087E90 (-xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@K0HH@Z.c)
 *     xxxDeactivate @ 0x1C008C738 (xxxDeactivate.c)
 *     xxxSetForegroundWindow2 @ 0x1C008D958 (xxxSetForegroundWindow2.c)
 *     PostUpdateKeyStateEvent @ 0x1C0093FF8 (PostUpdateKeyStateEvent.c)
 *     IPostQuitMessage @ 0x1C009F3C4 (IPostQuitMessage.c)
 *     xxxSystemTimerProc @ 0x1C00C6990 (xxxSystemTimerProc.c)
 *     xxxReceiverDied @ 0x1C00D07E4 (xxxReceiverDied.c)
 *     ?SenderDied@@YAXPEAUtagSMS@@@Z @ 0x1C00D0888 (-SenderDied@@YAXPEAUtagSMS@@@Z.c)
 *     _ReplyMessage @ 0x1C00F20F0 (_ReplyMessage.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C01007F8 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     _DelegateCapturePointers @ 0x1C01E179C (_DelegateCapturePointers.c)
 *     xxxCancelTrackingForThread @ 0x1C020BCE0 (xxxCancelTrackingForThread.c)
 *     IncPaintCount @ 0x1C0224528 (IncPaintCount.c)
 * Callees:
 *     UpdateRawMouseMode @ 0x1C00537A0 (UpdateRawMouseMode.c)
 *     LogicalCursorPos @ 0x1C0056358 (LogicalCursorPos.c)
 *     SetForegroundPriority @ 0x1C0081580 (SetForegroundPriority.c)
 */

int __fastcall SetWakeBit(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rax
  int v5; // r10d
  __int64 v6; // r11
  int v7; // r8d

  LODWORD(v2) = *(_DWORD *)(a1 + 440);
  if ( (v2 & 1) == 0 )
  {
    if ( (a2 & 6) != 0 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 384) + 48LL) = a1;
      UpdateRawMouseMode(*(_QWORD *)(a1 + 384));
    }
    v5 = a2 & 2;
    if ( (a2 & 2) != 0 )
      *(_QWORD *)(*(_QWORD *)(a1 + 384) + 144LL) = LogicalCursorPos(a1);
    if ( (a2 & 0x401) != 0 )
      *(_QWORD *)(*(_QWORD *)(a1 + 384) + 56LL) = a1;
    *(_WORD *)(*(_QWORD *)(a1 + 400) + 6LL) |= a2;
    *(_WORD *)(*(_QWORD *)(a1 + 400) + 4LL) |= a2;
    if ( (a2 & 0x1C07) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 376);
      v7 = *(_DWORD *)(v6 + 12);
      if ( (v7 & 0x400000) != 0
        && (!v5 || *(_DWORD *)(gpsi + 3976LL) != gptSSCursor[0] || *(_DWORD *)(gpsi + 3980LL) != gptSSCursor[1]) )
      {
        *(_DWORD *)(v6 + 12) = v7 & 0xFFBFFFFF;
        SetForegroundPriority(a1, 1LL);
      }
    }
    v2 = *(_QWORD *)(a1 + 400);
    if ( (*(_WORD *)(v2 + 10) & a2) != 0 )
      LODWORD(v2) = KeSetEvent(*(PRKEVENT *)(a1 + 648), 2, 0);
  }
  return v2;
}
