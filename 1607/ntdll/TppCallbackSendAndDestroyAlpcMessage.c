/*
 * XREFs of TppCallbackSendAndDestroyAlpcMessage @ 0x1800833AC
 * Callers:
 *     TppWorkerThread @ 0x18001E750 (TppWorkerThread.c)
 *     TpCallbackSendPendingAlpcMessage @ 0x180083370 (TpCallbackSendPendingAlpcMessage.c)
 *     TppCallbackPerformDeferredWork @ 0x180086388 (TppCallbackPerformDeferredWork.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1800A7510 (ZwAlpcSendWaitReceivePort.c)
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
