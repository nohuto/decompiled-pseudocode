/*
 * XREFs of PsGetServerSiloState @ 0x140117518
 * Callers:
 *     SepQueueWorkItem @ 0x140117380 (SepQueueWorkItem.c)
 *     NtQueryInformationJobObject @ 0x1404139BC (NtQueryInformationJobObject.c)
 *     PspTerminateAllThreads @ 0x14041CBA4 (PspTerminateAllThreads.c)
 *     PspExitThread @ 0x140422830 (PspExitThread.c)
 *     PspStartMonitorDeferred @ 0x1405939AC (PspStartMonitorDeferred.c)
 *     PspShutdownServerSilos @ 0x1406C292C (PspShutdownServerSilos.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetServerSiloState(__int64 a1)
{
  if ( a1 )
    return *(unsigned int *)(*(_QWORD *)(a1 + 256) + 112LL);
  else
    return 1LL;
}
