/*
 * XREFs of RtlpWnfProcessCurrentDescriptor @ 0x18000B588
 * Callers:
 *     RtlpWnfNotificationThread @ 0x18000B470 (RtlpWnfNotificationThread.c)
 *     RtlpWnfRetryTimerCallback @ 0x1800C8F90 (RtlpWnfRetryTimerCallback.c)
 * Callees:
 *     RtlpWnfWalkUserSubscriptionList @ 0x18000B74C (RtlpWnfWalkUserSubscriptionList.c)
 *     RtlpDecRefWnfNameSubscription @ 0x18000BBE0 (RtlpDecRefWnfNameSubscription.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockShared @ 0x180030740 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180030820 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtGetCompleteWnfStateSubscription @ 0x180094720 (NtGetCompleteWnfStateSubscription.c)
 */

__int64 __fastcall RtlpWnfProcessCurrentDescriptor(__int64 a1, int a2)
{
  unsigned int v4; // esi
  int v5; // r15d
  _QWORD *v6; // r8
  _QWORD *v7; // rbx
  int v8; // eax
  __int64 *v9; // r14
  __int64 *v10; // rax
  _QWORD *v12; // rcx
  __int64 *v13; // rdx
  int v14; // r8d
  __int64 v15; // rax
  __int64 v16; // [rsp+30h] [rbp-48h]
  __int64 v17; // [rsp+38h] [rbp-40h]

  v4 = 0;
  v5 = 0;
  RtlAcquireSRWLockShared(qword_180146F28 + 8);
  v6 = *(_QWORD **)(qword_180146F28 + 16);
  if ( v6 == (_QWORD *)(qword_180146F28 + 16) )
    goto LABEL_5;
  v16 = *(_QWORD *)(a1 + 8);
  while ( 1 )
  {
    v7 = v6 - 4;
    v17 = *(v6 - 2);
    if ( v17 == *(_QWORD *)(a1 + 8) && v7[1] == *(_QWORD *)a1 )
      break;
    v6 = (_QWORD *)*v6;
    if ( v6 == (_QWORD *)(qword_180146F28 + 16) )
      goto LABEL_5;
  }
  RtlAcquireSRWLockExclusive(v7 + 7);
  v8 = *((_DWORD *)v7 + 32);
  if ( v8 != 2 )
  {
    if ( v8 != 1 )
      goto LABEL_9;
    v12 = v7 + 7;
    if ( !a2 )
    {
      v7[15] = a1;
      RtlReleaseSRWLockExclusive(v12);
      v4 = 259;
      goto LABEL_5;
    }
LABEL_29:
    RtlReleaseSRWLockExclusive(v12);
    v4 = 128;
LABEL_5:
    RtlReleaseSRWLockShared(qword_180146F28 + 8);
    goto LABEL_22;
  }
  if ( a2 )
  {
    v12 = v7 + 7;
    goto LABEL_29;
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v7[15]);
  v7[15] = 0LL;
  *((_DWORD *)v7 + 32) = 0;
LABEL_9:
  _InterlockedIncrement((volatile signed __int32 *)v7 + 27);
  *((_DWORD *)v7 + 32) = 1;
  RtlReleaseSRWLockExclusive(v7 + 7);
  RtlReleaseSRWLockShared(qword_180146F28 + 8);
  v9 = v7 + 8;
  while ( 1 )
  {
    v4 = 0;
    if ( (unsigned int)RtlpWnfWalkUserSubscriptionList(a1, v7, 0LL) == -1073741267 )
      v4 = -1073741267;
    if ( (unsigned int)RtlpWnfWalkUserSubscriptionList(a1, v7, 1LL) == -1073741267 )
      v4 = -1073741267;
    RtlAcquireSRWLockExclusive(v7 + 7);
    v10 = (__int64 *)*v9;
    ++v5;
    while ( v10 != v9 )
    {
      *((_DWORD *)v10 + 38) = 0;
      v10 = (__int64 *)*v10;
    }
    if ( !v7[15] )
      break;
    a1 = v7[15];
    v7[15] = 0LL;
    RtlReleaseSRWLockExclusive(v7 + 7);
  }
  if ( v4 )
  {
    v13 = (__int64 *)*v9;
    v14 = 1;
    v7[15] = a1;
    v15 = 0LL;
    for ( *((_DWORD *)v7 + 32) = 2; v13 != v9; v13 = (__int64 *)*v13 )
    {
      if ( (*((_BYTE *)v13 + 52) & 4) != 0 && *((_DWORD *)v13 + 28) )
      {
        if ( !v15 || v15 > v13[15] )
          v15 = v13[15];
        if ( *((_DWORD *)v13 + 32) < *(_DWORD *)(qword_180146F28 + 72) )
          v14 = 0;
      }
    }
    v7[17] = v15;
    *((_DWORD *)v7 + 36) = v14;
  }
  else
  {
    *((_DWORD *)v7 + 32) = 0;
    if ( !*((_DWORD *)v7 + 6) || *(_DWORD *)(a1 + 16) - *((_DWORD *)v7 + 6) > 0 )
      *((_DWORD *)v7 + 6) = *(_DWORD *)(a1 + 16);
  }
  RtlReleaseSRWLockExclusive(v7 + 7);
  RtlpDecRefWnfNameSubscription(v7);
LABEL_22:
  if ( v5 > 1 )
  {
    NtGetCompleteWnfStateSubscription(a1 + 8, a1, *(unsigned int *)(a1 + 24), v4, 0LL, 0, v16, v17);
    if ( !v4 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1);
    return 128;
  }
  return v4;
}
