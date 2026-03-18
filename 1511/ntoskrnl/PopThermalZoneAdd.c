/*
 * XREFs of PopThermalZoneAdd @ 0x14054C0D8
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeTimerEx @ 0x14002C018 (KeInitializeTimerEx.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeInitializeDpc @ 0x140093330 (KeInitializeDpc.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140142C6C (PopThermalUpdateTelemetryClientCount.c)
 *     PopAcquirePolicyLock @ 0x14039C560 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x14039CE60 (PopReleasePolicyLock.c)
 *     PopChangeCapability @ 0x14053DEF8 (PopChangeCapability.c)
 */

void __fastcall PopThermalZoneAdd(char *DeferredContext)
{
  __int64 v2; // rax
  __int64 v3; // rdx

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
    LOBYTE(v3) = 1;
    PopChangeCapability(byte_1402DDF6D, v3);
    PopReleasePolicyLock();
  }
  PopThermalUpdateTelemetryClientCount(1);
  ExQueueWorkItem((PWORK_QUEUE_ITEM)DeferredContext + 12, DelayedWorkQueue);
}
