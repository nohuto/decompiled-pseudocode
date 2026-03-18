/*
 * XREFs of TtmpSetTerminalPendingCleanup @ 0x140678184
 * Callers:
 *     TtmiCreateTerminal @ 0x140677760 (TtmiCreateTerminal.c)
 *     TtmpCloseTerminalHandle @ 0x140677F30 (TtmpCloseTerminalHandle.c)
 * Callees:
 *     TtmiScheduleSessionWorker @ 0x140678D08 (TtmiScheduleSessionWorker.c)
 */

char __fastcall TtmpSetTerminalPendingCleanup(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 32) |= 1u;
  TtmiScheduleSessionWorker(a1, 2LL);
  return TtmpResetEvaluationTimer((char *)a2, 0LL);
}
