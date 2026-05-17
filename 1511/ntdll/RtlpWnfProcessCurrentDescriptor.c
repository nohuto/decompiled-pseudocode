/*
 * XREFs of RtlpWnfProcessCurrentDescriptor @ 0x180007370
 * Callers:
 *     RtlpWnfNotificationThread @ 0x180005410 (RtlpWnfNotificationThread.c)
 *     RtlpWnfRetryTimerCallback @ 0x1800D19B0 (RtlpWnfRetryTimerCallback.c)
 * Callees:
 *     RtlpDecRefWnfNameSubscription @ 0x18000533C (RtlpDecRefWnfNameSubscription.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x18000840C (RtlpWnfWalkUserSubscriptionList.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x1800276F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x1800277C0 (RtlAcquireSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtGetCompleteWnfStateSubscription @ 0x1800A6D10 (NtGetCompleteWnfStateSubscription.c)
 */

__int64 __fastcall RtlpWnfProcessCurrentDescriptor(__int64 a1, int a2)
{
  unsigned int v4; // esi
  int v5; // r15d
  _QWORD *v6; // r8
  __int64 v7; // rbx
  int v9; // eax
  __int64 *v10; // r14
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 *v13; // rdx
  int v14; // ecx
  unsigned __int64 v15; // r8
  __int64 v16; // [rsp+30h] [rbp-48h]
  __int64 v17; // [rsp+38h] [rbp-40h]

  v4 = 0;
  v5 = 0;
  RtlAcquireSRWLockShared(qword_180145FA8 + 8);
  v6 = *(_QWORD **)(qword_180145FA8 + 16);
  if ( v6 == (_QWORD *)(qword_180145FA8 + 16) )
    goto LABEL_6;
  v16 = *(_QWORD *)(a1 + 8);
  while ( 1 )
  {
    v7 = (__int64)(v6 - 4);
    v17 = *(v6 - 2);
    if ( v17 == *(_QWORD *)(a1 + 8) && *(_QWORD *)(v7 + 8) == *(_QWORD *)a1 )
      break;
    v6 = (_QWORD *)*v6;
    if ( v6 == (_QWORD *)(qword_180145FA8 + 16) )
      goto LABEL_6;
  }
  RtlAcquireSRWLockExclusive(v7 + 56);
  v9 = *(_DWORD *)(v7 + 128);
  if ( v9 == 2 )
  {
    if ( !a2 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, *(_QWORD *)(v7 + 120));
      *(_QWORD *)(v7 + 120) = 0LL;
      *(_DWORD *)(v7 + 128) = 0;
      goto LABEL_15;
    }
    v12 = v7 + 56;
    goto LABEL_22;
  }
  if ( v9 == 1 )
  {
    v12 = v7 + 56;
    if ( !a2 )
    {
      *(_QWORD *)(v7 + 120) = a1;
      RtlReleaseSRWLockExclusive(v12);
      v4 = 259;
      goto LABEL_6;
    }
LABEL_22:
    RtlReleaseSRWLockExclusive(v12);
    v4 = 128;
LABEL_6:
    RtlReleaseSRWLockShared(qword_180145FA8 + 8);
    goto LABEL_7;
  }
LABEL_15:
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 108));
  *(_DWORD *)(v7 + 128) = 1;
  RtlReleaseSRWLockExclusive(v7 + 56);
  RtlReleaseSRWLockShared(qword_180145FA8 + 8);
  v10 = (__int64 *)(v7 + 64);
  while ( 1 )
  {
    v4 = 0;
    if ( (unsigned int)RtlpWnfWalkUserSubscriptionList(a1, v7, 0LL) == -1073741267 )
      v4 = -1073741267;
    if ( (unsigned int)RtlpWnfWalkUserSubscriptionList(a1, v7, 1LL) == -1073741267 )
      v4 = -1073741267;
    RtlAcquireSRWLockExclusive(v7 + 56);
    v11 = (__int64 *)*v10;
    ++v5;
    while ( v11 != v10 )
    {
      *((_DWORD *)v11 + 38) = 0;
      v11 = (__int64 *)*v11;
    }
    if ( !*(_QWORD *)(v7 + 120) )
      break;
    a1 = *(_QWORD *)(v7 + 120);
    *(_QWORD *)(v7 + 120) = 0LL;
    RtlReleaseSRWLockExclusive(v7 + 56);
  }
  if ( v4 )
  {
    v13 = (__int64 *)*v10;
    v14 = 1;
    *(_QWORD *)(v7 + 120) = a1;
    v15 = 0LL;
    for ( *(_DWORD *)(v7 + 128) = 2; v13 != v10; v13 = (__int64 *)*v13 )
    {
      if ( (*((_BYTE *)v13 + 52) & 4) != 0 && *((_DWORD *)v13 + 28) )
      {
        if ( !v15 || v15 > v13[15] )
          v15 = v13[15];
        if ( *((_DWORD *)v13 + 32) < *(_DWORD *)(qword_180145FA8 + 72) )
          v14 = 0;
      }
    }
    *(_QWORD *)(v7 + 136) = v15;
    *(_DWORD *)(v7 + 144) = v14;
  }
  else
  {
    *(_DWORD *)(v7 + 128) = 0;
    if ( !*(_DWORD *)(v7 + 24) || *(_DWORD *)(a1 + 16) - *(_DWORD *)(v7 + 24) > 0 )
      *(_DWORD *)(v7 + 24) = *(_DWORD *)(a1 + 16);
  }
  RtlReleaseSRWLockExclusive(v7 + 56);
  RtlpDecRefWnfNameSubscription(v7);
LABEL_7:
  if ( v5 > 1 )
  {
    NtGetCompleteWnfStateSubscription(a1 + 8, a1, *(unsigned int *)(a1 + 24), v4, 0LL, 0, v16, v17);
    if ( !v4 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1);
    return 128;
  }
  return v4;
}
