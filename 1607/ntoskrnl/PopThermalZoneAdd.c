/*
 * XREFs of PopThermalZoneAdd @ 0x14056C794
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeDpc @ 0x14000D25C (KeInitializeDpc.c)
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     KeInitializeTimerEx @ 0x1400EEAA0 (KeInitializeTimerEx.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140145550 (PopThermalUpdateTelemetryClientCount.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     PopChangeCapability @ 0x14056E438 (PopChangeCapability.c)
 */

void __fastcall PopThermalZoneAdd(char *DeferredContext)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  KeInitializeTimerEx((PKTIMER)(DeferredContext + 112), NotificationTimer);
  KeInitializeDpc((PRKDPC)(DeferredContext + 176), (PKDEFERRED_ROUTINE)PopThermalZoneDpc, DeferredContext);
  v2 = *((_QWORD *)DeferredContext + 7);
  *(_WORD *)(DeferredContext + 69) = -1;
  *((_DWORD *)DeferredContext + 20) = 100;
  *((_DWORD *)DeferredContext + 21) = 100;
  DeferredContext[64] = 6;
  DeferredContext[67] = 2;
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
    LOBYTE(v3) = 1;
    PopChangeCapability(&unk_140303EAD, v3);
    PopReleasePolicyLock();
  }
  PopThermalUpdateTelemetryClientCount(1);
  ExQueueWorkItem((PWORK_QUEUE_ITEM)DeferredContext + 12, DelayedWorkQueue);
}
