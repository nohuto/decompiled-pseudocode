/*
 * XREFs of TtmpResetEvaluationTimer @ 0x1406780BC
 * Callers:
 *     TtmpSetTerminalPendingCleanup @ 0x140678184 (TtmpSetTerminalPendingCleanup.c)
 *     TtmpUpdateTerminalState @ 0x14067837C (TtmpUpdateTerminalState.c)
 * Callees:
 *     KiSetTimerEx @ 0x140006E00 (KiSetTimerEx.c)
 *     ObfReferenceObject @ 0x14006A060 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     KeCancelTimer @ 0x1400C3480 (KeCancelTimer.c)
 */

char __fastcall TtmpResetEvaluationTimer(char *Object, __int64 a2)
{
  __int64 v3; // rbx
  char result; // al

  if ( a2 )
  {
    v3 = -a2;
    ObfReferenceObject(Object);
    result = KiSetTimerEx((__int64)(Object + 80), v3, 0, 0, (__int64)(Object + 144));
  }
  else
  {
    result = KeCancelTimer((PKTIMER)(Object + 80));
  }
  if ( result )
    return ObfDereferenceObject(Object);
  return result;
}
