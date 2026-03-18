/*
 * XREFs of SetWakeBit @ 0x1C00904B0
 * Callers:
 *     ?SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0001374 (-SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     _ReplyMessage @ 0x1C00030B0 (_ReplyMessage.c)
 *     PostUpdateKeyStateEvent @ 0x1C0042520 (PostUpdateKeyStateEvent.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C0043194 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     xxxSetForegroundWindow2 @ 0x1C0045D90 (xxxSetForegroundWindow2.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0070100 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxProcessNotifyWinEvent @ 0x1C0071500 (xxxProcessNotifyWinEvent.c)
 *     xxxProcessEventMessage @ 0x1C0071E4C (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxSystemTimerProc @ 0x1C00775B0 (xxxSystemTimerProc.c)
 *     xxxReceiverDied @ 0x1C007B2C4 (xxxReceiverDied.c)
 *     ?SenderDied@@YAXPEAUtagSMS@@@Z @ 0x1C007B418 (-SenderDied@@YAXPEAUtagSMS@@@Z.c)
 *     xxxDeactivate @ 0x1C007D9B8 (xxxDeactivate.c)
 *     ClearSendMessages @ 0x1C008B114 (ClearSendMessages.c)
 *     zzzSetFMouseMovedWorker @ 0x1C008D08C (zzzSetFMouseMovedWorker.c)
 *     InternalInvalidate3 @ 0x1C008F748 (InternalInvalidate3.c)
 *     WakeSomeone @ 0x1C0090208 (WakeSomeone.c)
 *     _PostThreadMessageEx @ 0x1C0090C10 (_PostThreadMessageEx.c)
 *     PostEventMessageEx @ 0x1C00E79A8 (PostEventMessageEx.c)
 *     IPostQuitMessage @ 0x1C00F8FD4 (IPostQuitMessage.c)
 *     ?xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HH@Z @ 0x1C01D9478 (-xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HH@Z.c)
 *     _DelegateCapturePointers @ 0x1C01E118C (_DelegateCapturePointers.c)
 *     xxxCancelTrackingForThread @ 0x1C020B640 (xxxCancelTrackingForThread.c)
 *     IncPaintCount @ 0x1C0225018 (IncPaintCount.c)
 * Callees:
 *     SetForegroundPriority @ 0x1C0046FC0 (SetForegroundPriority.c)
 *     UpdateRawMouseMode @ 0x1C0090674 (UpdateRawMouseMode.c)
 *     LogicalCursorPos @ 0x1C0090A74 (LogicalCursorPos.c)
 */

int __fastcall SetWakeBit(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rax
  int v5; // r10d
  __int64 v6; // r11
  int v7; // r8d

  LODWORD(v2) = *(_DWORD *)(a1 + 448);
  if ( (v2 & 1) == 0 )
  {
    if ( (a2 & 6) != 0 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 392) + 48LL) = a1;
      UpdateRawMouseMode(*(_QWORD *)(a1 + 392));
    }
    v5 = a2 & 2;
    if ( (a2 & 2) != 0 )
      *(_QWORD *)(*(_QWORD *)(a1 + 392) + 144LL) = LogicalCursorPos(a1);
    if ( (a2 & 0x401) != 0 )
      *(_QWORD *)(*(_QWORD *)(a1 + 392) + 56LL) = a1;
    *(_WORD *)(*(_QWORD *)(a1 + 408) + 6LL) |= a2;
    *(_WORD *)(*(_QWORD *)(a1 + 408) + 4LL) |= a2;
    if ( (a2 & 0x1C07) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 384);
      v7 = *(_DWORD *)(v6 + 12);
      if ( (v7 & 0x400000) != 0
        && (!v5 || *(_DWORD *)(gpsi + 3976LL) != gptSSCursor[0] || *(_DWORD *)(gpsi + 3980LL) != gptSSCursor[1]) )
      {
        *(_DWORD *)(v6 + 12) = v7 & 0xFFBFFFFF;
        SetForegroundPriority(a1, 1);
      }
    }
    v2 = *(_QWORD *)(a1 + 408);
    if ( (*(_WORD *)(v2 + 10) & a2) != 0 )
      LODWORD(v2) = KeSetEvent(*(PRKEVENT *)(a1 + 656), 2, 0);
  }
  return v2;
}
