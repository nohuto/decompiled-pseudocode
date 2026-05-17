/*
 * XREFs of TppIteWakeWaiters @ 0x180064004
 * Callers:
 *     TppAlpcpExecuteCallback @ 0x18001D460 (TppAlpcpExecuteCallback.c)
 *     TppCallbackEpilog @ 0x18001FBD0 (TppCallbackEpilog.c)
 *     TppSingleTimerExpiration @ 0x18003CC28 (TppSingleTimerExpiration.c)
 *     TppBarrierAdjust @ 0x180063E84 (TppBarrierAdjust.c)
 * Callees:
 *     ZwAlertThreadByThreadId @ 0x1800A71D0 (ZwAlertThreadByThreadId.c)
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
