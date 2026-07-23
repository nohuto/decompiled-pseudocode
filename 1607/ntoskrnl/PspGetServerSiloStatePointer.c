/*
 * XREFs of PspGetServerSiloStatePointer @ 0x140171E30
 * Callers:
 *     NtSetInformationJobObject @ 0x140463AA8 (NtSetInformationJobObject.c)
 *     PsStartSiloMonitor @ 0x14055FD28 (PsStartSiloMonitor.c)
 *     PspBeginServerSiloShutdown @ 0x14067E34C (PspBeginServerSiloShutdown.c)
 *     PsUnregisterSiloMonitor @ 0x140681148 (PsUnregisterSiloMonitor.c)
 *     PspNotifyServerSiloCreation @ 0x1406812E4 (PspNotifyServerSiloCreation.c)
 *     PspNotifyServerSiloTermination @ 0x1406813C0 (PspNotifyServerSiloTermination.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetServerSiloStatePointer(__int64 a1)
{
  return *(_QWORD *)(a1 + 1256) + 992LL;
}
