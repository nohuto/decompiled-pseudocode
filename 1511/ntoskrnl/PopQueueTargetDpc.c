/*
 * XREFs of PopQueueTargetDpc @ 0x14009C5CC
 * Callers:
 *     PopExecuteOnTargetProcessors @ 0x14009C4F0 (PopExecuteOnTargetProcessors.c)
 *     PopExecuteProcessorCallback @ 0x14009C588 (PopExecuteProcessorCallback.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140043D50 (KiInsertQueueDpc.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KeEnumerateNextProcessor @ 0x14009C650 (KeEnumerateNextProcessor.c)
 */

LONG __fastcall PopQueueTargetDpc(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int16 v4; // ax
  __int16 v6; // [rsp+48h] [rbp+10h] BYREF

  if ( (int)KeEnumerateNextProcessor(&v6, *(_QWORD *)(a2 + 32)) < 0 )
    return KeSetEvent(*(PRKEVENT *)(a2 + 24), 0, 0);
  *(_WORD *)BugCheckParameter2 = 787;
  *(_QWORD *)(BugCheckParameter2 + 24) = PopExecuteProcessorCallback;
  v4 = v6 + 640;
  *(_QWORD *)(BugCheckParameter2 + 32) = a2;
  *(_WORD *)(BugCheckParameter2 + 2) = v4;
  *(_QWORD *)(BugCheckParameter2 + 56) = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 16) = 0LL;
  return KiInsertQueueDpc(BugCheckParameter2, 0LL, 0LL, 0LL, 0);
}
