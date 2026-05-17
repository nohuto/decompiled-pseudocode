/*
 * XREFs of RtlpWnfRetryTimerCallback @ 0x1800C8F90
 * Callers:
 *     <none>
 * Callees:
 *     RtlpWnfProcessCurrentDescriptor @ 0x18000B588 (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockShared @ 0x180030740 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180030820 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     ZwQuerySystemTime @ 0x180093EA0 (ZwQuerySystemTime.c)
 *     NtGetCompleteWnfStateSubscription @ 0x180094720 (NtGetCompleteWnfStateSubscription.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x1800C8B68 (RtlpWnfCalculateAndSetNextTimer.c)
 */

void __fastcall RtlpWnfRetryTimerCallback(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  __int64 v5; // rcx
  unsigned __int64 v6; // rdi
  char *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  char *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 *v15; // rbx
  char *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  __int64 v21; // [rsp+58h] [rbp+20h] BYREF

  if ( qword_180146F28 )
  {
    v4 = 0;
    RtlAcquireSRWLockShared((volatile signed __int64 *)(qword_180146F28 + 8), a2, a3, a4);
    v5 = qword_180146F28;
    *(_QWORD *)(qword_180146F28 + 88) = 0LL;
    RtlReleaseSRWLockShared((volatile signed __int64 *)(v5 + 8));
    while ( 1 )
    {
      v6 = 0LL;
      ZwQuerySystemTime(&v21);
      v21 += 500000LL;
      RtlAcquireSRWLockShared((volatile signed __int64 *)(qword_180146F28 + 8), v7, v8, v9);
      v13 = qword_180146F28;
      v14 = qword_180146F28 + 16;
      v15 = *(__int64 **)(qword_180146F28 + 16);
      while ( v15 != (__int64 *)v14 )
      {
        RtlAcquireSRWLockExclusive(v15 + 3, v10, v11, v12);
        if ( *((_DWORD *)v15 + 24) == 2 && v21 >= v15[13] )
        {
          v6 = v15[11];
          v15[11] = 0LL;
          *((_DWORD *)v15 + 24) = 0;
          RtlReleaseSRWLockExclusive(v15 + 3);
          v13 = qword_180146F28;
          break;
        }
        RtlReleaseSRWLockExclusive(v15 + 3);
        v13 = qword_180146F28;
        v15 = (__int64 *)*v15;
        v14 = qword_180146F28 + 16;
      }
      RtlReleaseSRWLockShared((volatile signed __int64 *)(v13 + 8));
      if ( !v6 )
        break;
      RtlpWnfCalculateAndSetNextTimer(v17, v16, v18, v19);
      v4 = 0;
      v20 = RtlpWnfProcessCurrentDescriptor(v6, 1);
      if ( v20 == -1073741267 )
      {
        v4 = 1;
      }
      else
      {
        if ( !v20 )
          NtGetCompleteWnfStateSubscription();
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
      }
    }
    if ( v4 )
      RtlpWnfCalculateAndSetNextTimer(v17, v16, v18, v19);
  }
}
