/*
 * XREFs of SetWakeBit @ 0x140055960
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140021BA8 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400245B8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxInterSendMsgEx @ 0x140051EE4 (xxxInterSendMsgEx.c)
 *     ClearSendMessages @ 0x1400538B0 (ClearSendMessages.c)
 *     ?GetRawInputBuffer_NoUserCrit@@YAIPEAUtagTHREADINFO@@PEAUtagRAWINPUT@@PEAII@Z @ 0x140053CD4 (-GetRawInputBuffer_NoUserCrit@@YAIPEAUtagTHREADINFO@@PEAUtagRAWINPUT@@PEAII@Z.c)
 *     ?SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z @ 0x140054E50 (-SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     IPostQuitMessage @ 0x140054E7C (IPostQuitMessage.c)
 *     xxxReceiverDied @ 0x140054ED4 (xxxReceiverDied.c)
 *     _ReplyMessage @ 0x1400550E0 (_ReplyMessage.c)
 *     ?WakeSomeoneAfterUnlockingOrUndeferring@@YAXPEAUtagQMSG@@@Z @ 0x140055200 (-WakeSomeoneAfterUnlockingOrUndeferring@@YAXPEAUtagQMSG@@@Z.c)
 *     NtUserScheduleDispatchNotification @ 0x140055AF0 (NtUserScheduleDispatchNotification.c)
 *     SendMsgCleanup @ 0x140056310 (SendMsgCleanup.c)
 *     ?SenderDied@@YAXPEAUtagSMS@@@Z @ 0x1400566D4 (-SenderDied@@YAXPEAUtagSMS@@@Z.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1400932CC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x140096DC8 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     _DelegateCapturePointers @ 0x140135024 (_DelegateCapturePointers.c)
 *     xxxProcessEventMessage @ 0x14013B240 (xxxProcessEventMessage.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x140153BB4 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_CommitMousePosAndMoveOptions@@PEAU_MousePacketPerf@@@Z @ 0x1401AE4CC (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_C.c)
 *     _PostThreadMessageEx @ 0x1401D3210 (_PostThreadMessageEx.c)
 *     xxxSystemTimerProc @ 0x14024E4E0 (xxxSystemTimerProc.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x140271C80 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxCancelTrackingForThread @ 0x1402C88E0 (xxxCancelTrackingForThread.c)
 * Callees:
 *     EditionUpdateRawMouseMode @ 0x1400548C0 (EditionUpdateRawMouseMode.c)
 */

int __fastcall SetWakeBit(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 v4; // rax
  __int64 *v5; // rdi
  __int64 v6; // rdx
  __int64 UserSessionState; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx

  v2 = a2;
  LODWORD(v4) = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 520), 0, 0);
  if ( (v4 & 1) == 0 )
  {
    v5 = (__int64 *)(a1 + 464);
    if ( (a2 & 6) != 0 )
    {
      *(_QWORD *)(*v5 + 96) = a1;
      EditionUpdateRawMouseMode(*v5, a2);
    }
    if ( (v2 & 2) != 0 )
      CaptureLogicalCursorPosToQMouseMove(*v5);
    if ( (v2 & 0x401) != 0 )
      *(_QWORD *)(*v5 + 104) = a1;
    _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(a1 + 480) + 8LL), v2);
    _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(a1 + 480) + 4LL), v2);
    UserSessionState = W32GetUserSessionState(a1, a2);
    if ( (v2 & 0x1C07) != 0 )
    {
      v8 = *(_QWORD *)(a1 + 456);
      if ( (*(_DWORD *)(v8 + 12) & 0x400000) != 0 )
      {
        if ( (v2 & 2) == 0
          || (v10 = *(_QWORD *)(W32GetUserSessionState(v8, v6) + 19904),
              *(_DWORD *)(v10 + 4960) != *(_DWORD *)(UserSessionState + 36256))
          || *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v10, v9) + 19904) + 4964LL) != *(_DWORD *)(UserSessionState + 36260) )
        {
          *(_DWORD *)(*(_QWORD *)(a1 + 456) + 12LL) &= ~0x400000u;
          ForegroundBoost::SetForegroundPriority(a1, 1LL, 8LL);
        }
      }
    }
    v4 = *(_QWORD *)(a1 + 480);
    if ( (*(_DWORD *)(v4 + 16) & v2) != 0 )
      LODWORD(v4) = KeSetEvent(*(PRKEVENT *)(a1 + 760), 2, 0);
  }
  return v4;
}
