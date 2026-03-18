/*
 * XREFs of PsGetEffectiveServerSilo @ 0x140076688
 * Callers:
 *     MmGetSessionById @ 0x1400765C0 (MmGetSessionById.c)
 *     PsGetJobServerSilo @ 0x140076ECC (PsGetJobServerSilo.c)
 *     MiGetNextSession @ 0x140086628 (MiGetNextSession.c)
 *     SepAdtLogAuditRecord @ 0x140145330 (SepAdtLogAuditRecord.c)
 *     MmIsSessionInCurrentServerSilo @ 0x1401ECA54 (MmIsSessionInCurrentServerSilo.c)
 *     PspIsSiloInServerSilo @ 0x14020F6C8 (PspIsSiloInServerSilo.c)
 *     PspTerminateProcessesJobCallback @ 0x1404580A8 (PspTerminateProcessesJobCallback.c)
 *     ObpSetSiloDeviceMap @ 0x140579DF0 (ObpSetSiloDeviceMap.c)
 * Callees:
 *     PspIsServerSilo @ 0x1400B2DF8 (PspIsServerSilo.c)
 */

__int64 __fastcall PsGetEffectiveServerSilo(__int64 a1)
{
  __int64 v2; // rcx

  if ( !a1 )
    return 0LL;
  while ( !(unsigned __int8)PspIsServerSilo() )
    ;
  return v2;
}
