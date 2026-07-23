/*
 * XREFs of PspGetNextSilo @ 0x14055FE9C
 * Callers:
 *     PsStartSiloMonitor @ 0x14055FD28 (PsStartSiloMonitor.c)
 *     PsFreeSiloContextSlot @ 0x14067DF60 (PsFreeSiloContextSlot.c)
 *     PsRootSiloInformation @ 0x14067E15C (PsRootSiloInformation.c)
 *     PsShutdownSystem @ 0x14067F928 (PsShutdownSystem.c)
 *     PsUnregisterSiloMonitor @ 0x140681148 (PsUnregisterSiloMonitor.c)
 * Callees:
 *     PspIsServerSilo @ 0x1400B0D44 (PspIsServerSilo.c)
 *     PspGetNextJob @ 0x1404673D0 (PspGetNextJob.c)
 */

__int64 *__fastcall PspGetNextSilo(__int64 *a1, char a2)
{
  __int64 *NextJob; // rax
  __int64 *v4; // r8

  while ( 1 )
  {
    NextJob = PspGetNextJob(a1);
    v4 = NextJob;
    if ( !NextJob )
      return 0LL;
    if ( (NextJob[163] & 0x40000000) != 0 && (!a2 || PspIsServerSilo((__int64)NextJob)) )
      break;
    a1 = v4;
  }
  return v4;
}
