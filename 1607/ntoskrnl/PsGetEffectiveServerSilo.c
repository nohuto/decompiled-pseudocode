/*
 * XREFs of PsGetEffectiveServerSilo @ 0x140076708
 * Callers:
 *     MmGetSessionById @ 0x140076640 (MmGetSessionById.c)
 *     PsGetJobServerSilo @ 0x140076F4C (PsGetJobServerSilo.c)
 *     MiGetNextSession @ 0x140087F18 (MiGetNextSession.c)
 *     SepAdtLogAuditRecord @ 0x1401458A0 (SepAdtLogAuditRecord.c)
 *     MmIsSessionInCurrentServerSilo @ 0x1401EC880 (MmIsSessionInCurrentServerSilo.c)
 *     PspIsSiloInServerSilo @ 0x14020F4F4 (PspIsSiloInServerSilo.c)
 *     PspTerminateProcessesJobCallback @ 0x140456F78 (PspTerminateProcessesJobCallback.c)
 *     ObpSetSiloDeviceMap @ 0x14057A330 (ObpSetSiloDeviceMap.c)
 * Callees:
 *     PspIsServerSilo @ 0x1400B0D44 (PspIsServerSilo.c)
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
