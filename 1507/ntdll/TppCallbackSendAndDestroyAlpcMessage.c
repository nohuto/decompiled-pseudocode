/*
 * XREFs of TppCallbackSendAndDestroyAlpcMessage @ 0x18003C3A4
 * Callers:
 *     TppWorkerThread @ 0x180039390 (TppWorkerThread.c)
 *     TpCallbackSendPendingAlpcMessage @ 0x180072F30 (TpCallbackSendPendingAlpcMessage.c)
 *     TppCallbackPerformDeferredWork @ 0x180074E98 (TppCallbackPerformDeferredWork.c)
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     ZwAlpcSendWaitReceivePort @ 0x180094180 (ZwAlpcSendWaitReceivePort.c)
 */

__int64 __fastcall TppCallbackSendAndDestroyAlpcMessage(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = ZwAlpcSendWaitReceivePort(
         *(_QWORD *)(a1 + 216),
         *(unsigned int *)(a1 + 224),
         *(_QWORD *)(a1 + 208),
         0LL,
         0LL,
         0LL,
         0LL,
         0LL);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *(_QWORD *)(a1 + 208));
  return v2;
}
