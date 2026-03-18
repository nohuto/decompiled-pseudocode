/*
 * XREFs of VidSchiSendToExecutionQueueWithWait @ 0x1C0040CE4
 * Callers:
 *     VidSchiSubmitPreemptionCommand @ 0x1C0040C30 (VidSchiSubmitPreemptionCommand.c)
 *     VidSchiSwitchNodeFromContext @ 0x1C0041180 (VidSchiSwitchNodeFromContext.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00A03FC (VidSchiSubmitRenderCommand.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiSendToExecutionQueueWithWait(__int64 a1, char a2)
{
  struct _KEVENT *v4; // rcx

  v4 = *(struct _KEVENT **)(*(_QWORD *)(a1 + 48) + 96LL);
  *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 72) = 8;
  v4[11].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
  KeResetEvent(v4 + 10);
  VidSchiSendToExecutionQueue(a1, a2);
}
