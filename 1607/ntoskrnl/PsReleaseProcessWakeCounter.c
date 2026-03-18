/*
 * XREFs of PsReleaseProcessWakeCounter @ 0x140468620
 * Callers:
 *     AlpcpCancelMessage @ 0x140408B94 (AlpcpCancelMessage.c)
 *     AlpcpCancelMessagesByRequestor @ 0x14040A38C (AlpcpCancelMessagesByRequestor.c)
 *     AlpcMessageDestroyProcedure @ 0x140448980 (AlpcMessageDestroyProcedure.c)
 *     AlpcpSendMessage @ 0x14044A880 (AlpcpSendMessage.c)
 *     EtwpReleaseQueueEntry @ 0x14048E35C (EtwpReleaseQueueEntry.c)
 *     AlpcpAcceptConnectPort @ 0x1404B4A28 (AlpcpAcceptConnectPort.c)
 *     PopDisablePowerExecutionRequest @ 0x140520820 (PopDisablePowerExecutionRequest.c)
 *     PopClearSpecialRequest @ 0x14066A8E0 (PopClearSpecialRequest.c)
 *     PopSetSpecialRequest @ 0x14066AA50 (PopSetSpecialRequest.c)
 * Callees:
 *     PspChargeJobWakeCounter @ 0x140468C90 (PspChargeJobWakeCounter.c)
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
