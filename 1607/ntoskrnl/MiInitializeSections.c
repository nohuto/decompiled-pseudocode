/*
 * XREFs of MiInitializeSections @ 0x14054F6D0
 * Callers:
 *     MiInitializePartition @ 0x14054F230 (MiInitializePartition.c)
 *     MiInitNucleus @ 0x1407D06B4 (MiInitNucleus.c)
 * Callees:
 *     InitializeSListHead @ 0x140002CB0 (InitializeSListHead.c)
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     KeInitializeTimerEx @ 0x1400EEAA0 (KeInitializeTimerEx.c)
 *     KeInitializeSemaphore @ 0x1400EFE80 (KeInitializeSemaphore.c)
 */

void __fastcall MiInitializeSections(__int64 a1)
{
  __int64 v2; // rcx
  char v3; // al

  v2 = a1 + 1360;
  *(_QWORD *)(v2 + 40) = v2 + 32;
  *(_QWORD *)(v2 + 32) = v2 + 32;
  *(_QWORD *)(v2 + 56) = v2 + 48;
  *(_QWORD *)(v2 + 48) = v2 + 48;
  *(_QWORD *)(v2 + 72) = v2 + 64;
  *(_QWORD *)(v2 + 64) = v2 + 64;
  KeInitializeSemaphore((PRKSEMAPHORE)v2, 0, 0x7FFFFFFF);
  *(_QWORD *)(a1 + 1448) = a1 + 1440;
  *(_QWORD *)(a1 + 1440) = a1 + 1440;
  *(_QWORD *)(a1 + 1552) = a1 + 1544;
  *(_QWORD *)(a1 + 1544) = a1 + 1544;
  *(_QWORD *)(a1 + 1568) = a1 + 1560;
  *(_QWORD *)(a1 + 1560) = a1 + 1560;
  KeInitializeEvent((PRKEVENT)(a1 + 1240), NotificationEvent, 0);
  *(_QWORD *)(a1 + 1584) = a1 + 1576;
  *(_QWORD *)(a1 + 1576) = a1 + 1576;
  KeInitializeEvent((PRKEVENT)(a1 + 1216), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 1592), SynchronizationEvent, 0);
  KeInitializeTimerEx((PKTIMER)(a1 + 1456), SynchronizationTimer);
  if ( (int *)a1 == MiSystemPartition )
  {
    KeInitializeEvent(&stru_140326978, NotificationEvent, 0);
    InitializeSListHead(&stru_140326990);
  }
  *(_QWORD *)(a1 + 1304) = 1LL;
  *(_QWORD *)(a1 + 1272) = 0LL;
  *(_QWORD *)(a1 + 1312) = 0LL;
  *(_DWORD *)(a1 + 1344) = 0;
  v3 = *(_BYTE *)(a1 + 1351) & 0xFD;
  *(_QWORD *)(a1 + 1296) = a1;
  *(_BYTE *)(a1 + 1348) = -1;
  *(_BYTE *)(a1 + 1351) = v3 | 4;
  KeInitializeEvent((PRKEVENT)(a1 + 1320), NotificationEvent, 0);
}
