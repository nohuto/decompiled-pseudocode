/*
 * XREFs of TppExecuteWaitTimerCallback @ 0x180087BC0
 * Callers:
 *     <none>
 * Callees:
 *     TppETWCallbackDequeue @ 0x1800013B0 (TppETWCallbackDequeue.c)
 */

__int64 __fastcall TppExecuteWaitTimerCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rbx

  v4 = (__int64 *)(a2 - 200);
  if ( MEMORY[0x7FFE0386] )
    TppETWCallbackDequeue(v4[18], a2, v4[10], v4[11], v4[13]);
  return TppExecuteWaitCallback(a1, (__int64)v4, 258LL, a4);
}
