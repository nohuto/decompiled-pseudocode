/*
 * XREFs of TtmpDereferenceSessionMaybeLast @ 0x140678F98
 * Callers:
 *     TtmiSessionTerminalListWorker @ 0x140677B2C (TtmiSessionTerminalListWorker.c)
 *     TtmCleanupCurrentSession @ 0x1406784FC (TtmCleanupCurrentSession.c)
 *     TtmpSessionWorker @ 0x14067904C (TtmpSessionWorker.c)
 *     TtmpDeleteQueue @ 0x14067A2CC (TtmpDeleteQueue.c)
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
