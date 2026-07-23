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
  unsigned __int32 v2; // ebx

  v2 = ZwAlpcSendWaitReceivePort(
         *(HANDLE *)(a1 + 216),
         *(_DWORD *)(a1 + 224),
         *(PPORT_MESSAGE *)(a1 + 208),
         0LL,
         0LL,
         0LL,
         0LL,
         0LL);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *(PVOID *)(a1 + 208));
  return v2;
}
