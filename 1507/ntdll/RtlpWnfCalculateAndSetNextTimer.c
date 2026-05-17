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

unsigned __int64 __fastcall RtlpWnfCalculateAndSetNextTimer(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  int v5; // esi
  char *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 *v10; // rdi
  bool v11; // zf
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = 0;
  RtlAcquireSRWLockShared((volatile signed __int64 *)(qword_180146F28 + 8), a2, a3, a4);
  v9 = qword_180146F28;
  v10 = *(__int64 **)(qword_180146F28 + 16);
  if ( v10 != (__int64 *)(qword_180146F28 + 16) )
  {
    do
    {
      RtlAcquireSRWLockExclusive(v10 + 3, v6, v7, v8);
      if ( *((_DWORD *)v10 + 24) == 2 && (!v4 || v10[13] < v4) )
      {
        v4 = v10[13];
        v5 = 1;
      }
      RtlReleaseSRWLockExclusive(v10 + 3);
      v9 = qword_180146F28;
      v10 = (__int64 *)*v10;
    }
    while ( v10 != (__int64 *)(qword_180146F28 + 16) );
    if ( v5 )
    {
      v11 = *(_QWORD *)(qword_180146F28 + 88) == 0LL;
      v13 = v4;
      if ( v11 || *(_QWORD *)(qword_180146F28 + 88) >= v4 )
      {
        *(_QWORD *)(qword_180146F28 + 88) = v4;
        TpSetTimerEx(*(_QWORD *)(v9 + 80), (__int64)&v13, 0, 50);
        v9 = qword_180146F28;
      }
    }
  }
  return RtlReleaseSRWLockShared((volatile signed __int64 *)(v9 + 8));
}
