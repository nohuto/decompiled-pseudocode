/*
 * XREFs of VidSchiSendToExecutionQueueWithWait @ 0x1C005F448
 * Callers:
 *     VidSchiSwitchNodeFromContext @ 0x1C005F2A0 (VidSchiSwitchNodeFromContext.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1C005F394 (VidSchiSubmitPreemptionCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C008ABB8 (VidSchiSubmitRenderCommand.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiSendToExecutionQueueWithWait(__int64 a1, char a2)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 96LL);
  *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 72) = 8;
  *(_QWORD *)(v4 + 240) = MEMORY[0xFFFFF78000000320];
  KeResetEvent((PRKEVENT)(v4 + 200));
  VidSchiSendToExecutionQueue(a1, a2);
}
