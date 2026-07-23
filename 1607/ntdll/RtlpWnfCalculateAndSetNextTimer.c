/*
 * XREFs of RtlpWnfCalculateAndSetNextTimer @ 0x1800D9A18
 * Callers:
 *     RtlpWnfNotificationThread @ 0x180065C20 (RtlpWnfNotificationThread.c)
 *     RtlpWnfRetryTimerCallback @ 0x1800D9E20 (RtlpWnfRetryTimerCallback.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180042560 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180042640 (RtlAcquireSRWLockShared.c)
 *     RtlpWnfSetRetryTimer @ 0x1800D9FAC (RtlpWnfSetRetryTimer.c)
 */

void RtlpWnfCalculateAndSetNextTimer()
{
  unsigned __int64 Value; // rdi
  int v1; // esi
  _RTL_SRWLOCK *v2; // rcx
  _RTL_SRWLOCK *v3; // rbx

  Value = 0LL;
  v1 = 0;
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_1801530A0 + 8));
  v2 = (_RTL_SRWLOCK *)qword_1801530A0;
  v3 = *(_RTL_SRWLOCK **)(qword_1801530A0 + 16);
  if ( v3 != (_RTL_SRWLOCK *)(qword_1801530A0 + 16) )
  {
    do
    {
      RtlAcquireSRWLockShared(v3 + 3);
      if ( v3[12].0 == 2 && (!Value || v3[13].Value < Value) )
      {
        Value = v3[13].Value;
        v1 = 1;
      }
      RtlReleaseSRWLockShared(v3 + 3);
      v2 = (_RTL_SRWLOCK *)qword_1801530A0;
      v3 = (_RTL_SRWLOCK *)v3->Value;
    }
    while ( v3 != (_RTL_SRWLOCK *)(qword_1801530A0 + 16) );
    if ( v1 )
    {
      RtlpWnfSetRetryTimer(Value);
      v2 = (_RTL_SRWLOCK *)qword_1801530A0;
    }
  }
  RtlReleaseSRWLockShared(v2 + 1);
}
