/*
 * XREFs of PsReleaseProcessWakeCounter @ 0x1403E967C
 * Callers:
 *     AlpcMessageDestroyProcedure @ 0x140426FA0 (AlpcMessageDestroyProcedure.c)
 *     AlpcpSendMessage @ 0x140429460 (AlpcpSendMessage.c)
 *     PopDisablePowerExecutionRequest @ 0x140455D84 (PopDisablePowerExecutionRequest.c)
 *     AlpcpAcceptConnectPort @ 0x14047D9CC (AlpcpAcceptConnectPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x14047F6F8 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpCancelMessage @ 0x1404815E0 (AlpcpCancelMessage.c)
 *     EtwpReleaseQueueEntry @ 0x1404CE5F0 (EtwpReleaseQueueEntry.c)
 *     PopClearSpecialRequest @ 0x14063248C (PopClearSpecialRequest.c)
 *     PopSetSpecialRequest @ 0x140632588 (PopSetSpecialRequest.c)
 * Callees:
 *     PspChargeJobWakeCounter @ 0x1403EB4DC (PspChargeJobWakeCounter.c)
 */

void __fastcall PsReleaseProcessWakeCounter(__int64 a1, __int64 a2)
{
  void *v2; // rbx
  int v3; // eax

  v2 = (void *)(a1 & 0xFFFFFFFFFFFFFFF8uLL);
  v3 = 1;
  if ( (a1 & 7) == 5 )
    v3 = 5;
  PspChargeJobWakeCounter((PVOID)(a1 & 0xFFFFFFFFFFFFFFF8uLL), v3, 0LL, a2);
  ObDereferenceObjectDeferDeleteWithTag(v2, 0x6B577350u);
}
