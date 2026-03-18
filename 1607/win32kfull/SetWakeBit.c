/*
 * XREFs of SetWakeBit @ 0x1C005B6A0
 * Callers:
 *     ClearSendMessages @ 0x1C00567F4 (ClearSendMessages.c)
 *     _PostThreadMessageEx @ 0x1C0057D1C (_PostThreadMessageEx.c)
 *     zzzSetFMouseMovedWorker @ 0x1C00587A4 (zzzSetFMouseMovedWorker.c)
 *     PostEventMessageEx @ 0x1C0059A54 (PostEventMessageEx.c)
 *     InternalInvalidate3 @ 0x1C005AD8C (InternalInvalidate3.c)
 *     WakeSomeone @ 0x1C005B3C4 (WakeSomeone.c)
 *     _ReplyMessage @ 0x1C005DE60 (_ReplyMessage.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00805A0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxProcessNotifyWinEvent @ 0x1C0085350 (xxxProcessNotifyWinEvent.c)
 *     xxxInterSendMsgEx @ 0x1C0085BE0 (xxxInterSendMsgEx.c)
 *     xxxProcessEventMessage @ 0x1C00889B8 (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     PostUpdateKeyStateEvent @ 0x1C0096168 (PostUpdateKeyStateEvent.c)
 *     xxxSystemTimerProc @ 0x1C0096EA0 (xxxSystemTimerProc.c)
 *     xxxDeactivate @ 0x1C0098E24 (xxxDeactivate.c)
 *     xxxSetForegroundWindow2 @ 0x1C009D654 (xxxSetForegroundWindow2.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C00DB608 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     IPostQuitMessage @ 0x1C00ED274 (IPostQuitMessage.c)
 *     xxxReceiverDied @ 0x1C01067A8 (xxxReceiverDied.c)
 *     ?SenderDied@@YAXPEAUtagSMS@@@Z @ 0x1C0106828 (-SenderDied@@YAXPEAUtagSMS@@@Z.c)
 *     ?xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HH@Z @ 0x1C01D19A4 (-xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HH@Z.c)
 *     _DelegateCapturePointers @ 0x1C01D7AF4 (_DelegateCapturePointers.c)
 *     ?SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01D82CC (-SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxCancelTrackingForThread @ 0x1C0202E30 (xxxCancelTrackingForThread.c)
 *     IncPaintCount @ 0x1C02250F0 (IncPaintCount.c)
 * Callees:
 *     UpdateRawMouseMode @ 0x1C005B7C4 (UpdateRawMouseMode.c)
 *     ?LogicalCursorPosFromDpiAwarenessContext@@YA?AUtagPOINT@@K@Z @ 0x1C005C35C (-LogicalCursorPosFromDpiAwarenessContext@@YA-AUtagPOINT@@K@Z.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     SetForegroundPriority @ 0x1C00A8060 (SetForegroundPriority.c)
 */

int __fastcall SetWakeBit(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned __int16 v4; // di
  __int64 v6; // r10
  int v7; // r8d
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int CurrentThreadDpiAwarenessContext; // eax

  LODWORD(v3) = *(_DWORD *)(a1 + 440);
  v4 = a2;
  if ( (v3 & 1) == 0 )
  {
    if ( (a2 & 6) != 0 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 384) + 56LL) = a1;
      UpdateRawMouseMode(*(_QWORD *)(a1 + 384));
    }
    if ( (v4 & 2) != 0 )
    {
      v8 = *(_QWORD *)(a1 + 384);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 88);
        if ( v9 )
          v10 = *(_QWORD *)(v9 + 16);
        else
          v10 = *(_QWORD *)(v8 + 64);
        CurrentThreadDpiAwarenessContext = *(_DWORD *)(*(_QWORD *)(v10 + 376) + 280LL);
      }
      else
      {
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1, a2, a3);
      }
      *(struct tagPOINT *)(*(_QWORD *)(a1 + 384) + 152LL) = LogicalCursorPosFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext);
    }
    if ( (v4 & 0x401) != 0 )
      *(_QWORD *)(*(_QWORD *)(a1 + 384) + 64LL) = a1;
    *(_WORD *)(*(_QWORD *)(a1 + 400) + 6LL) |= v4;
    *(_WORD *)(*(_QWORD *)(a1 + 400) + 4LL) |= v4;
    if ( (v4 & 0x1C07) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 376);
      v7 = *(_DWORD *)(v6 + 12);
      if ( (v7 & 0x400000) != 0
        && ((v4 & 2) == 0 || *(_DWORD *)(gpsi + 5368LL) != gptSSCursor[0]
                          || *(_DWORD *)(gpsi + 5372LL) != gptSSCursor[1]) )
      {
        *(_DWORD *)(v6 + 12) = v7 & 0xFFBFFFFF;
        SetForegroundPriority(a1, 1LL);
      }
    }
    v3 = *(_QWORD *)(a1 + 400);
    if ( (*(_WORD *)(v3 + 10) & v4) != 0 )
      LODWORD(v3) = KeSetEvent(*(PRKEVENT *)(a1 + 648), 2, 0);
  }
  return v3;
}
