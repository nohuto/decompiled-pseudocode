/*
 * XREFs of LogMDAQueueOp @ 0x1C00433CC
 * Callers:
 *     SlowAppThreadInShellFrame @ 0x1C00091C4 (SlowAppThreadInShellFrame.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C0043194 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     zzzAttachThreadInput @ 0x1C004340C (zzzAttachThreadInput.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C00665FC (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0066D0C (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxRealInternalGetMessage @ 0x1C00698F0 (xxxRealInternalGetMessage.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C006B340 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     PostInputMessage @ 0x1C008C718 (PostInputMessage.c)
 *     zzzSetFMouseMovedWorker @ 0x1C008D08C (zzzSetFMouseMovedWorker.c)
 *     xxxMNLoop @ 0x1C010B494 (xxxMNLoop.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E1B7C (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01E2248 (TryDetachShellFrame.c)
 *     xxxMoveSize @ 0x1C020D52C (xxxMoveSize.c)
 * Callees:
 *     ?_LogQMsgMiP@@YAXIPEBUtagMSG@@K@Z @ 0x1C006BFD0 (-_LogQMsgMiP@@YAXIPEBUtagMSG@@K@Z.c)
 */

void __fastcall LogMDAQueueOp(unsigned int a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // [rsp+20h] [rbp-38h] BYREF
  int v5; // [rsp+28h] [rbp-30h]
  __int64 v6; // [rsp+30h] [rbp-28h]
  __int64 v7; // [rsp+38h] [rbp-20h]
  __int64 v8; // [rsp+40h] [rbp-18h]
  __int64 v9; // [rsp+48h] [rbp-10h]

  v4 = 0LL;
  v5 = 0;
  v8 = 0LL;
  v9 = 0LL;
  v6 = a2;
  v7 = a3;
  if ( (gdwPostMortemLogging & 1) != 0 )
    _LogQMsgMiP(a1, (const struct tagMSG *)&v4, a4);
}
