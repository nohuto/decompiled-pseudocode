/*
 * XREFs of PoFxIdleComponent @ 0x1400DC4C8
 * Callers:
 *     PopFxIdleWorkerTail @ 0x1400DB11C (PopFxIdleWorkerTail.c)
 *     VerifierPoFxIdleComponent @ 0x1406C0B58 (VerifierPoFxIdleComponent.c)
 * Callees:
 *     PopFxIdleComponent @ 0x1400DC4DC (PopFxIdleComponent.c)
 */

__int64 __fastcall PoFxIdleComponent(ULONG_PTR a1, ULONG_PTR a2)
{
  return PopFxIdleComponent(a1, a2);
}
