/*
 * XREFs of RtlpWnfCalculateAndSetNextTimer @ 0x1800C8B68
 * Callers:
 *     RtlpWnfNotificationThread @ 0x18000B470 (RtlpWnfNotificationThread.c)
 *     RtlpWnfRetryTimerCallback @ 0x1800C8F90 (RtlpWnfRetryTimerCallback.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x180030820 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     TpSetTimerEx @ 0x18003CE70 (TpSetTimerEx.c)
 */

void RtlpWnfCalculateAndSetNextTimer()
{
  LARGE_INTEGER Value; // rbx
  int v1; // esi
  __int64 v2; // rcx
  _RTL_SRWLOCK *v3; // rdi
  bool v4; // zf
  LARGE_INTEGER DueTime; // [rsp+30h] [rbp+8h] BYREF

  Value.QuadPart = 0LL;
  v1 = 0;
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_180146F28 + 8));
  v2 = qword_180146F28;
  v3 = *(_RTL_SRWLOCK **)(qword_180146F28 + 16);
  if ( v3 != (_RTL_SRWLOCK *)(qword_180146F28 + 16) )
  {
    do
    {
      RtlAcquireSRWLockExclusive(v3 + 3);
      if ( v3[12].0 == 2 && (!Value.QuadPart || (signed __int64)v3[13].Value < Value.QuadPart) )
      {
        Value = (LARGE_INTEGER)v3[13].Value;
        v1 = 1;
      }
      RtlReleaseSRWLockExclusive(v3 + 3);
      v2 = qword_180146F28;
      v3 = (_RTL_SRWLOCK *)v3->Value;
    }
    while ( v3 != (_RTL_SRWLOCK *)(qword_180146F28 + 16) );
    if ( v1 )
    {
      v4 = *(_QWORD *)(qword_180146F28 + 88) == 0LL;
      DueTime = Value;
      if ( v4 || *(_QWORD *)(qword_180146F28 + 88) >= Value.QuadPart )
      {
        *(LARGE_INTEGER *)(qword_180146F28 + 88) = Value;
        TpSetTimerEx(*(PTP_TIMER *)(v2 + 80), &DueTime, 0, 0x32u);
        v2 = qword_180146F28;
      }
    }
  }
  RtlReleaseSRWLockShared((PRTL_SRWLOCK)(v2 + 8));
}
