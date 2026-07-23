/*
 * XREFs of TtmpDereferenceSessionMaybeLast @ 0x14067907C
 * Callers:
 *     TtmiSessionTerminalListWorker @ 0x140677C10 (TtmiSessionTerminalListWorker.c)
 *     TtmCleanupCurrentSession @ 0x1406785E0 (TtmCleanupCurrentSession.c)
 *     TtmpSessionWorker @ 0x140679130 (TtmpSessionWorker.c)
 *     TtmpDeleteQueue @ 0x14067A3B0 (TtmpDeleteQueue.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall TtmpDereferenceSessionMaybeLast(volatile signed __int32 *a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement(a1 + 2);
  if ( !v1 )
    ExFreePoolWithTag((PVOID)a1, 0x536D7454u);
  return v1;
}
