/*
 * XREFs of PspThreadSiloNoLock @ 0x1400797D4
 * Callers:
 *     OBP_GET_CURRENT_SILO_ROOT_DIRECTORY @ 0x140079DA4 (OBP_GET_CURRENT_SILO_ROOT_DIRECTORY.c)
 *     MmGetSessionById @ 0x140091A20 (MmGetSessionById.c)
 *     EtwpEventWriteFull @ 0x14009E960 (EtwpEventWriteFull.c)
 *     MiGetNextSession @ 0x1400E6E30 (MiGetNextSession.c)
 *     PsGetServerSiloGlobals @ 0x140102754 (PsGetServerSiloGlobals.c)
 *     EtwTraceContextSwap @ 0x14011EA60 (EtwTraceContextSwap.c)
 *     SepAdtLogAuditRecord @ 0x14013C4E0 (SepAdtLogAuditRecord.c)
 *     IoRevokeHandlesForProcess @ 0x1401BBC4C (IoRevokeHandlesForProcess.c)
 *     MmIsSessionInCurrentServerSilo @ 0x1401DBD8C (MmIsSessionInCurrentServerSilo.c)
 *     PsEqualCurrentSilo @ 0x1401F5828 (PsEqualCurrentSilo.c)
 *     EtwpFailLogging @ 0x14020D250 (EtwpFailLogging.c)
 *     PsGetCurrentSilo @ 0x1404D436C (PsGetCurrentSilo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspThreadSiloNoLock(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)(a1 + 1976) == -3LL )
    return PspGetJobSilo(*(_QWORD *)(a2 + 944));
  else
    return *(_QWORD *)(a1 + 1976);
}
