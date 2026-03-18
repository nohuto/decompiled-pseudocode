/*
 * XREFs of PopQueueTargetDpc @ 0x14000D654
 * Callers:
 *     PopExecuteOnTargetProcessors @ 0x14000D578 (PopExecuteOnTargetProcessors.c)
 *     PopExecuteProcessorCallback @ 0x14000D610 (PopExecuteProcessorCallback.c)
 * Callees:
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     KeEnumerateNextProcessor @ 0x1400D53B0 (KeEnumerateNextProcessor.c)
 *     KiInsertQueueDpc @ 0x1400D82C0 (KiInsertQueueDpc.c)
 */

LONG __fastcall PopQueueTargetDpc(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int16 v5; // [rsp+48h] [rbp+10h] BYREF

  if ( (int)KeEnumerateNextProcessor(&v5, *(_QWORD *)(a2 + 32)) < 0 )
    return KeSetEvent(*(PRKEVENT *)(a2 + 24), 0, 0);
  *(_DWORD *)BugCheckParameter2 = 787;
  *(_QWORD *)(BugCheckParameter2 + 24) = PopExecuteProcessorCallback;
  *(_QWORD *)(BugCheckParameter2 + 32) = a2;
  *(_QWORD *)(BugCheckParameter2 + 56) = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 16) = 0LL;
  if ( !*(_QWORD *)(BugCheckParameter2 + 56) )
    *(_WORD *)(BugCheckParameter2 + 2) = v5 + 640;
  return KiInsertQueueDpc(BugCheckParameter2, 0);
}
