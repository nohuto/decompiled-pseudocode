/*
 * XREFs of RtlpWnfProcessCurrentDescriptor @ 0x180065D48
 * Callers:
 *     RtlpWnfNotificationThread @ 0x180065C30 (RtlpWnfNotificationThread.c)
 *     RtlpWnfRetryTimerCallback @ 0x1800D9D60 (RtlpWnfRetryTimerCallback.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x180042570 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180042650 (RtlAcquireSRWLockShared.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x180065F08 (RtlpWnfWalkUserSubscriptionList.c)
 *     RtlpDecRefWnfNameSubscription @ 0x1800663C8 (RtlpDecRefWnfNameSubscription.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtGetCompleteWnfStateSubscription @ 0x1800A80B0 (NtGetCompleteWnfStateSubscription.c)
 */

__int64 __fastcall RtlpWnfProcessCurrentDescriptor(unsigned __int64 a1, char *a2, __int64 a3, __int64 a4)
{
  int v5; // r14d
  unsigned int v6; // esi
  int v7; // r15d
  __int64 v8; // r9
  _QWORD *v9; // r8
  unsigned __int64 v10; // rcx
  _QWORD *v11; // rbx
  int v12; // eax
  __int64 *v13; // r14
  char *v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 *v17; // rax
  volatile signed __int64 *v19; // rcx
  __int64 *v20; // rdx
  int v21; // ecx
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // [rsp+30h] [rbp-48h]
  __int64 v24; // [rsp+38h] [rbp-40h]

  v5 = (int)a2;
  v6 = 0;
  v7 = 0;
  RtlAcquireSRWLockShared((volatile signed __int64 *)(qword_1801530A0 + 8), a2, a3, a4);
  v8 = qword_1801530A0 + 16;
  v9 = *(_QWORD **)(qword_1801530A0 + 16);
  if ( v9 == (_QWORD *)(qword_1801530A0 + 16) )
    goto LABEL_5;
  v10 = *(_QWORD *)(a1 + 8);
  v23 = v10;
  while ( 1 )
  {
    v11 = v9 - 4;
    v24 = *(v9 - 2);
    if ( v24 == v10 && v11[1] == *(_QWORD *)a1 )
      break;
    v9 = (_QWORD *)*v9;
    if ( v9 == (_QWORD *)v8 )
      goto LABEL_5;
  }
  RtlAcquireSRWLockExclusive((unsigned __int64)(v11 + 7), (char *)HIDWORD(v10), (__int64)v9, v8);
  v12 = *((_DWORD *)v11 + 32);
  if ( v12 != 2 )
  {
    if ( v12 != 1 )
      goto LABEL_9;
    v19 = v11 + 7;
    if ( !v5 )
    {
      v11[15] = a1;
      RtlReleaseSRWLockExclusive(v19);
      v6 = 259;
      goto LABEL_5;
    }
LABEL_28:
    RtlReleaseSRWLockExclusive(v19);
    v6 = 128;
LABEL_5:
    RtlReleaseSRWLockShared((volatile signed __int64 *)(qword_1801530A0 + 8));
    goto LABEL_23;
  }
  if ( v5 )
  {
    v19 = v11 + 7;
    goto LABEL_28;
  }
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11[15]);
  v11[15] = 0LL;
  *((_DWORD *)v11 + 32) = 0;
LABEL_9:
  _InterlockedIncrement((volatile signed __int32 *)v11 + 27);
  *((_DWORD *)v11 + 32) = 1;
  RtlReleaseSRWLockExclusive(v11 + 7);
  RtlReleaseSRWLockShared((volatile signed __int64 *)(qword_1801530A0 + 8));
  v13 = v11 + 8;
  while ( 1 )
  {
    v6 = 0;
    if ( (unsigned int)RtlpWnfWalkUserSubscriptionList(a1, v11, 0LL) == -1073741267 )
      v6 = -1073741267;
    if ( (unsigned int)RtlpWnfWalkUserSubscriptionList(a1, v11, 1LL) == -1073741267 )
      v6 = -1073741267;
    RtlAcquireSRWLockExclusive((unsigned __int64)(v11 + 7), v14, v15, v16);
    v17 = (__int64 *)*v13;
    ++v7;
    while ( v17 != v13 )
    {
      *((_DWORD *)v17 + 38) = 0;
      v17 = (__int64 *)*v17;
    }
    if ( !v11[15] )
      break;
    a1 = v11[15];
    v11[15] = 0LL;
    RtlReleaseSRWLockExclusive(v11 + 7);
  }
  if ( v6 )
  {
    v20 = (__int64 *)*v13;
    v21 = 1;
    v11[15] = a1;
    v22 = 0LL;
    for ( *((_DWORD *)v11 + 32) = 2; v20 != v13; v20 = (__int64 *)*v20 )
    {
      if ( (*((_BYTE *)v20 + 52) & 4) != 0 && *((_DWORD *)v20 + 28) )
      {
        if ( !v22 || v22 > v20[15] )
          v22 = v20[15];
        if ( *((_DWORD *)v20 + 32) < *(_DWORD *)(qword_1801530A0 + 72) )
          v21 = 0;
      }
    }
    v11[17] = v22;
    *((_DWORD *)v11 + 36) = v21;
  }
  else
  {
    *((_DWORD *)v11 + 32) = 0;
    if ( !*((_DWORD *)v11 + 6) || *(_DWORD *)(a1 + 16) - *((_DWORD *)v11 + 6) > 0 )
      *((_DWORD *)v11 + 6) = *(_DWORD *)(a1 + 16);
  }
  RtlReleaseSRWLockExclusive(v11 + 7);
  RtlpDecRefWnfNameSubscription(v11);
LABEL_23:
  if ( v7 > 1 )
  {
    NtGetCompleteWnfStateSubscription(a1 + 8, a1, *(unsigned int *)(a1 + 24), v6, 0LL, 0, v23, v24);
    if ( !v6 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
    return 128;
  }
  return v6;
}
