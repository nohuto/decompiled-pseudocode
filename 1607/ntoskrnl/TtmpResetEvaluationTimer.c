/*
 * XREFs of TtmpResetEvaluationTimer @ 0x1406781A0
 * Callers:
 *     TtmpSetTerminalPendingCleanup @ 0x140678268 (TtmpSetTerminalPendingCleanup.c)
 *     TtmpUpdateTerminalState @ 0x140678460 (TtmpUpdateTerminalState.c)
 * Callees:
 *     KiSetTimerEx @ 0x140006F70 (KiSetTimerEx.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeCancelTimer @ 0x1400C1310 (KeCancelTimer.c)
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
