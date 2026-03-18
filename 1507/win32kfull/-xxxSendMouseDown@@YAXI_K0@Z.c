/*
 * XREFs of ?xxxSendMouseDown@@YAXI_K0@Z @ 0x1C01F6488
 * Callers:
 *     ?xxxDoTPMouseProcessing@@YA?AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@@@Z @ 0x1C01F4538 (-xxxDoTPMouseProcessing@@YA-AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@.c)
 * Callees:
 *     SetRITTimer @ 0x1C0079F80 (SetRITTimer.c)
 *     ?QueuePTPMouseEvent@@YAXUtagPOINT@@K_K@Z @ 0x1C01F1EA0 (-QueuePTPMouseEvent@@YAXUtagPOINT@@K_K@Z.c)
 */

void __fastcall xxxSendMouseDown(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  UserSessionSwitchLeaveCrit(a1, a2);
  QueuePTPMouseEvent(gptCursorAsync, 2, a2);
  EnterCrit(1LL);
  gidTapTimer = SetRITTimer(gidTapTimer, dword_1C03236D0, (int)xxxResolvePendingUp, 1);
  guMouseUpPending = 4;
  gqwTimeLastTap = a3;
}
