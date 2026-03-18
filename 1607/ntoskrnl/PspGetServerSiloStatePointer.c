/*
 * XREFs of PspGetServerSiloStatePointer @ 0x140171934
 * Callers:
 *     NtSetInformationJobObject @ 0x140464BD8 (NtSetInformationJobObject.c)
 *     PsStartSiloMonitor @ 0x14055F7E8 (PsStartSiloMonitor.c)
 *     PspBeginServerSiloShutdown @ 0x14067E268 (PspBeginServerSiloShutdown.c)
 *     PsUnregisterSiloMonitor @ 0x140681064 (PsUnregisterSiloMonitor.c)
 *     PspNotifyServerSiloCreation @ 0x140681200 (PspNotifyServerSiloCreation.c)
 *     PspNotifyServerSiloTermination @ 0x1406812DC (PspNotifyServerSiloTermination.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetServerSiloStatePointer(__int64 a1)
{
  return *(_QWORD *)(a1 + 1256) + 992LL;
}
