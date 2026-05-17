/*
 * XREFs of RtlpWnfCalculateAndSetNextTimer @ 0x1800D9958
 * Callers:
 *     RtlpWnfNotificationThread @ 0x180065C30 (RtlpWnfNotificationThread.c)
 *     RtlpWnfRetryTimerCallback @ 0x1800D9D60 (RtlpWnfRetryTimerCallback.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180042570 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180042650 (RtlAcquireSRWLockShared.c)
 *     RtlpWnfSetRetryTimer @ 0x1800D9EEC (RtlpWnfSetRetryTimer.c)
 */

unsigned __int64 __fastcall RtlpWnfCalculateAndSetNextTimer(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rdi
  int v5; // esi
  char *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 *v10; // rbx

  v4 = 0LL;
  v5 = 0;
  RtlAcquireSRWLockShared((volatile signed __int64 *)(qword_1801530A0 + 8), a2, a3, a4);
  v9 = qword_1801530A0;
  v10 = *(__int64 **)(qword_1801530A0 + 16);
  if ( v10 != (__int64 *)(qword_1801530A0 + 16) )
  {
    do
    {
      RtlAcquireSRWLockShared(v10 + 3, v6, v7, v8);
      if ( *((_DWORD *)v10 + 24) == 2 && (!v4 || v10[13] < v4) )
      {
        v4 = v10[13];
        v5 = 1;
      }
      RtlReleaseSRWLockShared(v10 + 3);
      v9 = qword_1801530A0;
      v10 = (__int64 *)*v10;
    }
    while ( v10 != (__int64 *)(qword_1801530A0 + 16) );
    if ( v5 )
    {
      RtlpWnfSetRetryTimer(v4);
      v9 = qword_1801530A0;
    }
  }
  return RtlReleaseSRWLockShared((volatile signed __int64 *)(v9 + 8));
}
