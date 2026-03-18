/*
 * XREFs of PspGetServerSiloForSilo @ 0x140077710
 * Callers:
 *     PsGetJobServerSilo @ 0x1400222FC (PsGetJobServerSilo.c)
 *     EtwpGetSiloDriverState @ 0x140077640 (EtwpGetSiloDriverState.c)
 *     OBP_GET_CURRENT_SILO_ROOT_DIRECTORY @ 0x140079DA4 (OBP_GET_CURRENT_SILO_ROOT_DIRECTORY.c)
 *     MmGetSessionById @ 0x140091A20 (MmGetSessionById.c)
 *     EtwpEventWriteFull @ 0x14009E960 (EtwpEventWriteFull.c)
 *     MiGetNextSession @ 0x1400E6E30 (MiGetNextSession.c)
 *     PsGetServerSiloGlobals @ 0x140102754 (PsGetServerSiloGlobals.c)
 *     EtwTraceContextSwap @ 0x14011EA60 (EtwTraceContextSwap.c)
 *     SepAdtLogAuditRecord @ 0x14013C4E0 (SepAdtLogAuditRecord.c)
 *     IoRevokeHandlesForProcess @ 0x1401BBC4C (IoRevokeHandlesForProcess.c)
 *     MmIsSessionInCurrentServerSilo @ 0x1401DBD8C (MmIsSessionInCurrentServerSilo.c)
 *     EtwpFailLogging @ 0x14020D250 (EtwpFailLogging.c)
 *     NtQueryInformationJobObject @ 0x1403E9B88 (NtQueryInformationJobObject.c)
 *     ObpLookupObjectName @ 0x14040E3D0 (ObpLookupObjectName.c)
 *     PsGetProcessServerSilo @ 0x14041CF3C (PsGetProcessServerSilo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetServerSiloForSilo(__int64 a1)
{
  __int64 v2; // rax

  if ( !a1 )
    return 0LL;
  do
  {
    v2 = *(_QWORD *)(a1 + 1248);
    if ( *(_QWORD *)(v2 + 136) )
      break;
    a1 = *(_QWORD *)(v2 + 128);
  }
  while ( a1 );
  return a1;
}
