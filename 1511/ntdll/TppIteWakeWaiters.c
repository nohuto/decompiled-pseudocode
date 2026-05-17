/*
 * XREFs of TppIteWakeWaiters @ 0x180004434
 * Callers:
 *     TppBarrierAdjust @ 0x1800042B4 (TppBarrierAdjust.c)
 *     TppSingleTimerExpiration @ 0x18000B6E0 (TppSingleTimerExpiration.c)
 *     TppCallbackEpilog @ 0x18002C870 (TppCallbackEpilog.c)
 *     TppAlpcpExecuteCallback @ 0x18002E130 (TppAlpcpExecuteCallback.c)
 * Callees:
 *     ZwAlertThreadByThreadId @ 0x1800A5E70 (ZwAlertThreadByThreadId.c)
 */

__int64 __fastcall TppIteWakeWaiters(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  if ( a1 )
  {
    do
    {
      v1 = (_QWORD *)*a1;
      result = ZwAlertThreadByThreadId(a1[1]);
      a1 = v1;
    }
    while ( v1 );
  }
  return result;
}
