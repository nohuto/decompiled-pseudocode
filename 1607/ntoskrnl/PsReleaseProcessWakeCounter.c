/*
 * XREFs of PsReleaseProcessWakeCounter @ 0x1404674F0
 * Callers:
 *     AlpcpCancelMessage @ 0x140407A54 (AlpcpCancelMessage.c)
 *     AlpcpCancelMessagesByRequestor @ 0x14040924C (AlpcpCancelMessagesByRequestor.c)
 *     AlpcMessageDestroyProcedure @ 0x140447850 (AlpcMessageDestroyProcedure.c)
 *     AlpcpSendMessage @ 0x140449750 (AlpcpSendMessage.c)
 *     EtwpReleaseQueueEntry @ 0x14048EDEC (EtwpReleaseQueueEntry.c)
 *     AlpcpAcceptConnectPort @ 0x14049EE08 (AlpcpAcceptConnectPort.c)
 *     PopDisablePowerExecutionRequest @ 0x140503888 (PopDisablePowerExecutionRequest.c)
 *     PopClearSpecialRequest @ 0x14066A9C4 (PopClearSpecialRequest.c)
 *     PopSetSpecialRequest @ 0x14066AB34 (PopSetSpecialRequest.c)
 * Callees:
 *     PspChargeJobWakeCounter @ 0x140467B60 (PspChargeJobWakeCounter.c)
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
