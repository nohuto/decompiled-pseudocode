/*
 * XREFs of ?xxxSendMouseDownAtPoint@@YAXI_K0UtagPOINT@@@Z @ 0x1C01ED9F8
 * Callers:
 *     ?xxxDoTPMouseProcessing@@YA?AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@@@Z @ 0x1C01EB354 (-xxxDoTPMouseProcessing@@YA-AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@.c)
 * Callees:
 *     SetRITTimer @ 0x1C005F490 (SetRITTimer.c)
 *     ?QueuePTPMouseEvent@@YAXUtagPOINT@@K_K@Z @ 0x1C01E836C (-QueuePTPMouseEvent@@YAXUtagPOINT@@K_K@Z.c)
 */

void __fastcall xxxSendMouseDownAtPoint(__int64 a1, __int64 a2, unsigned __int64 a3, struct tagPOINT a4)
{
  __int64 v6; // rax

  if ( gdwInAtomicOperation )
  {
    a1 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(a1, a2);
  QueuePTPMouseEvent(a4, 2, a2);
  EnterCrit(0LL, 1LL);
  v6 = SetRITTimer(gidTapTimer, dword_1C03280F0, (__int64)xxxResolvePendingUp, 1);
  gqwTimeLastTap = a3;
  gidTapTimer = v6;
  guMouseUpPending = 4;
}
