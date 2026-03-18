/*
 * XREFs of MiInitializeSections @ 0x140597028
 * Callers:
 *     MiInitializePartition @ 0x140596C34 (MiInitializePartition.c)
 *     MmInitNucleus @ 0x1407D42F4 (MmInitNucleus.c)
 * Callees:
 *     KeInitializeSemaphore @ 0x14002123C (KeInitializeSemaphore.c)
 *     KeInitializeTimerEx @ 0x140021284 (KeInitializeTimerEx.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     InitializeSListHead @ 0x1400D9F4C (InitializeSListHead.c)
 */

char __fastcall MiInitializeSections(__int64 a1)
{
  __int16 *v2; // rax
  int v3; // ecx

  *(_QWORD *)(a1 + 1264) = a1 + 1256;
  *(_QWORD *)(a1 + 1256) = a1 + 1256;
  KeInitializeSemaphore((PRKSEMAPHORE)(a1 + 1224), 0, 0x7FFFFFFF);
  *(_QWORD *)(a1 + 1280) = a1 + 1272;
  *(_QWORD *)(a1 + 1272) = a1 + 1272;
  *(_QWORD *)(a1 + 1368) = a1 + 1360;
  *(_QWORD *)(a1 + 1360) = a1 + 1360;
  *(_QWORD *)(a1 + 1384) = a1 + 1376;
  *(_QWORD *)(a1 + 1376) = a1 + 1376;
  KeInitializeEvent((PRKEVENT)(a1 + 1192), NotificationEvent, 0);
  *(_QWORD *)(a1 + 1400) = a1 + 1392;
  *(_QWORD *)(a1 + 1392) = a1 + 1392;
  KeInitializeEvent((PRKEVENT)(a1 + 1168), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 1408), SynchronizationEvent, 0);
  KeInitializeTimerEx((PKTIMER)(a1 + 1288), SynchronizationTimer);
  v2 = MiSystemPartition;
  if ( (__int16 *)a1 == MiSystemPartition )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    InitializeSListHead(&ListHead);
    v3 = 6;
    LOBYTE(v2) = BYTE2(MiFlags) & 3;
    if ( (BYTE2(MiFlags) & 3u) > 1 )
      v3 = 4;
    dword_14034E7B4 = v3;
  }
  return (char)v2;
}
