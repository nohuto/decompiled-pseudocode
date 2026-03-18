/*
 * XREFs of ?xxxSendMouseDown@@YAXIKK@Z @ 0x1C01F6968
 * Callers:
 *     ?xxxDoTPMouseProcessing@@YA?AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@@@Z @ 0x1C01F4898 (-xxxDoTPMouseProcessing@@YA-AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@.c)
 * Callees:
 *     SetRITTimer @ 0x1C00F4780 (SetRITTimer.c)
 *     ?QueuePTPMouseEvent@@YAXUtagPOINT@@KK@Z @ 0x1C01F2154 (-QueuePTPMouseEvent@@YAXUtagPOINT@@KK@Z.c)
 */

void __fastcall xxxSendMouseDown(__int64 a1, __int64 a2, unsigned int a3)
{
  int v4; // ebx

  v4 = a2;
  UserSessionSwitchLeaveCrit(a1, a2);
  QueuePTPMouseEvent(gptCursorAsync, 2, v4);
  EnterCrit(0LL, 1LL);
  gidTapTimer = SetRITTimer(gidTapTimer, dword_1C0321F30, (__int64)xxxResolvePendingUp, 1);
  guMouseUpPending = 4;
  gdwTimeLastTap = a3;
}
