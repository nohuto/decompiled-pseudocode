/*
 * XREFs of TppIteWakeWaiters @ 0x18007DF04
 * Callers:
 *     TppCallbackEpilog @ 0x18003A890 (TppCallbackEpilog.c)
 *     TppAlpcpExecuteCallback @ 0x18003B9F0 (TppAlpcpExecuteCallback.c)
 *     TppSingleTimerExpiration @ 0x18003EA58 (TppSingleTimerExpiration.c)
 *     TppBarrierAdjust @ 0x18007DD84 (TppBarrierAdjust.c)
 * Callees:
 *     ZwAlertThreadByThreadId @ 0x180093FE0 (ZwAlertThreadByThreadId.c)
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
