/*
 * XREFs of TppExecuteWaitTimerCallback @ 0x180087BB0
 * Callers:
 *     <none>
 * Callees:
 *     TppETWCallbackDequeue @ 0x1800013B0 (TppETWCallbackDequeue.c)
 */

__int64 __fastcall TppExecuteWaitTimerCallback(PTP_CALLBACK_INSTANCE Instance, __int64 a2)
{
  __int64 *v2; // rbx

  v2 = (__int64 *)(a2 - 200);
  if ( MEMORY[0x7FFE0386] )
    TppETWCallbackDequeue(v2[18], a2, v2[10], v2[11], v2[13]);
  return TppExecuteWaitCallback(Instance, (__int64)v2, 0x102u);
}
