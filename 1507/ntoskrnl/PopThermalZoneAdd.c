/*
 * XREFs of PopThermalZoneAdd @ 0x1405C343C
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeTimerEx @ 0x140021284 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1400212A4 (KeInitializeDpc.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140170B24 (PopThermalUpdateTelemetryClientCount.c)
 *     PopReleasePolicyLock @ 0x1403EB86C (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1403EB8DC (PopAcquirePolicyLock.c)
 *     PopChangeCapability @ 0x1405994A8 (PopChangeCapability.c)
 */

void __fastcall PopThermalZoneAdd(char *DeferredContext)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx

  KeInitializeTimerEx((PKTIMER)(DeferredContext + 112), NotificationTimer);
  KeInitializeDpc((PRKDPC)(DeferredContext + 176), (PKDEFERRED_ROUTINE)PopThermalZoneDpc, DeferredContext);
  v2 = *((_QWORD *)DeferredContext + 7);
  *((_DWORD *)DeferredContext + 20) = 100;
  *((_DWORD *)DeferredContext + 21) = 100;
  DeferredContext[64] = 6;
  DeferredContext[67] = 2;
  *(_WORD *)(DeferredContext + 69) = -1;
  *((_DWORD *)DeferredContext + 19) = 1000;
  *(_DWORD *)(v2 + 48) = -1073741667;
  LODWORD(v2) = PopThermalZoneNextId;
  *((_DWORD *)DeferredContext + 120) = PopThermalZoneNextId;
  *((_DWORD *)DeferredContext + 87) = 100;
  PopThermalZoneNextId = v2 + 1;
  KeInitializeEvent((PRKEVENT)DeferredContext + 18, NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)DeferredContext + 19, NotificationEvent, 0);
  *((_QWORD *)DeferredContext + 48) = 0LL;
  *((_QWORD *)DeferredContext + 50) = PopThermalWorker;
  *((_QWORD *)DeferredContext + 51) = DeferredContext;
  *((_QWORD *)DeferredContext + 62) = MEMORY[0xFFFFF78000000008];
  *((_QWORD *)DeferredContext + 52) = 0LL;
  *((_QWORD *)DeferredContext + 53) = 0LL;
  *((_QWORD *)DeferredContext + 52) = 0LL;
  if ( ++PopThermalZoneCount == 1 )
  {
    PopAcquirePolicyLock();
    LOBYTE(v6) = 1;
    PopChangeCapability(byte_14032E52D, v6);
    PopReleasePolicyLock();
  }
  PopThermalUpdateTelemetryClientCount(1, v3, v4, v5);
  ExQueueWorkItem((PWORK_QUEUE_ITEM)DeferredContext + 12, DelayedWorkQueue);
}
