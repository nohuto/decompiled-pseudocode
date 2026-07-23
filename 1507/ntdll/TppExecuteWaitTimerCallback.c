/*
 * XREFs of TppExecuteWaitTimerCallback @ 0x18000B020
 * Callers:
 *     <none>
 * Callees:
 *     TppETWCallbackDequeue @ 0x1800016FC (TppETWCallbackDequeue.c)
 */

__int64 __fastcall TppExecuteWaitTimerCallback(PTP_CALLBACK_INSTANCE Instance, __int64 a2)
{
  if ( MEMORY[0x7FFE0386] )
    TppETWCallbackDequeue(
      *(_QWORD *)(a2 - 192 + 136),
      a2,
      *(_QWORD *)(a2 - 192 + 80),
      *(_QWORD *)(a2 - 192 + 88),
      *(_QWORD *)(a2 - 192 + 104));
  return TppExecuteWaitCallback(Instance);
}
