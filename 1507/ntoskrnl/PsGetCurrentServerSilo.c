/*
 * XREFs of PsGetCurrentServerSilo @ 0x1400CE990
 * Callers:
 *     PsGetServerSiloGlobals @ 0x140026D98 (PsGetServerSiloGlobals.c)
 *     MiGetNextSession @ 0x1400FD468 (MiGetNextSession.c)
 *     MmGetSessionById @ 0x1400FD644 (MmGetSessionById.c)
 *     SepAdtLogAuditRecord @ 0x140164DBC (SepAdtLogAuditRecord.c)
 *     MmIsSessionInCurrentServerSilo @ 0x140220A64 (MmIsSessionInCurrentServerSilo.c)
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 *     ExpSystemErrorHandler2 @ 0x1404046E4 (ExpSystemErrorHandler2.c)
 *     NtImpersonateAnonymousToken @ 0x140410C10 (NtImpersonateAnonymousToken.c)
 *     SepReferenceLogonSession @ 0x14046E1E4 (SepReferenceLogonSession.c)
 *     SeCreateClientSecurityEx @ 0x140481510 (SeCreateClientSecurityEx.c)
 *     SepCreateClientSecurityEx @ 0x140481870 (SepCreateClientSecurityEx.c)
 *     EtwpInitLoggerContext @ 0x1404B0048 (EtwpInitLoggerContext.c)
 *     EtwpFindGuidEntryByGuid @ 0x1404CE270 (EtwpFindGuidEntryByGuid.c)
 *     EtwpAddGuidEntry @ 0x1404D4348 (EtwpAddGuidEntry.c)
 *     SepCreateLogonSessionTrack @ 0x14053C348 (SepCreateLogonSessionTrack.c)
 *     MiSessionCreateInternal @ 0x14057A1FC (MiSessionCreateInternal.c)
 * Callees:
 *     <none>
 */

__int64 PsGetCurrentServerSilo()
{
  if ( KeGetCurrentIrql() < 2u )
    return PspGetThreadServerSilo(KeGetCurrentThread());
  if ( (PspDebugFlags & 2) != 0 )
    __debugbreak();
  return 0LL;
}
