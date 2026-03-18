/*
 * XREFs of MiInitializeSections @ 0x140520684
 * Callers:
 *     MiInitializePartition @ 0x1405201DC (MiInitializePartition.c)
 *     MmInitNucleus @ 0x140748C60 (MmInitNucleus.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x14002C018 (KeInitializeTimerEx.c)
 *     KeInitializeSemaphore @ 0x14002D400 (KeInitializeSemaphore.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     InitializeSListHead @ 0x1400F8DC8 (InitializeSListHead.c)
 */

void __fastcall MiInitializeSections(__int64 a1)
{
  *(_QWORD *)(a1 + 1312) = a1 + 1304;
  *(_QWORD *)(a1 + 1304) = a1 + 1304;
  KeInitializeSemaphore((PRKSEMAPHORE)(a1 + 1272), 0, 0x7FFFFFFF);
  *(_QWORD *)(a1 + 1328) = a1 + 1320;
  *(_QWORD *)(a1 + 1320) = a1 + 1320;
  *(_QWORD *)(a1 + 1416) = a1 + 1408;
  *(_QWORD *)(a1 + 1408) = a1 + 1408;
  *(_QWORD *)(a1 + 1432) = a1 + 1424;
  *(_QWORD *)(a1 + 1424) = a1 + 1424;
  KeInitializeEvent((PRKEVENT)(a1 + 1240), NotificationEvent, 0);
  *(_QWORD *)(a1 + 1448) = a1 + 1440;
  *(_QWORD *)(a1 + 1440) = a1 + 1440;
  KeInitializeEvent((PRKEVENT)(a1 + 1216), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 1456), SynchronizationEvent, 0);
  KeInitializeTimerEx((PKTIMER)(a1 + 1336), SynchronizationTimer);
  if ( (int *)a1 == MiSystemPartition )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    InitializeSListHead(&stru_1402FE670);
  }
}
