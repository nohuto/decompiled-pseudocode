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

__int64 __fastcall RtlpWnfProcessCurrentDescriptor(_WNF_STATE_NAME *OldSubscriptionId, int a2)
{
  ULONG v4; // esi
  int v5; // r15d
  _QWORD *v6; // r8
  _QWORD *v7; // rbx
  int v9; // eax
  __int64 *v10; // r14
  __int64 *v11; // rax
  _RTL_SRWLOCK *v12; // rcx
  __int64 *v13; // rdx
  int v14; // ecx
  unsigned __int64 v15; // r8

  v4 = 0;
  v5 = 0;
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_180145FA8 + 8));
  v6 = *(_QWORD **)(qword_180145FA8 + 16);
  if ( v6 == (_QWORD *)(qword_180145FA8 + 16) )
    goto LABEL_5;
  while ( 1 )
  {
    v7 = v6 - 4;
    if ( *(v6 - 2) == *(_QWORD *)&OldSubscriptionId[1] && v7[1] == *OldSubscriptionId )
      break;
    v6 = (_QWORD *)*v6;
    if ( v6 == (_QWORD *)(qword_180145FA8 + 16) )
      goto LABEL_5;
  }
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v7 + 7);
  v9 = *((_DWORD *)v7 + 32);
  if ( v9 == 2 )
  {
    if ( !a2 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v7[15]);
      v7[15] = 0LL;
      *((_DWORD *)v7 + 32) = 0;
      goto LABEL_14;
    }
    v12 = (_RTL_SRWLOCK *)(v7 + 7);
    goto LABEL_21;
  }
  if ( v9 == 1 )
  {
    v12 = (_RTL_SRWLOCK *)(v7 + 7);
    if ( !a2 )
    {
      v7[15] = OldSubscriptionId;
      RtlReleaseSRWLockExclusive(v12);
      v4 = 259;
      goto LABEL_5;
    }
LABEL_21:
    RtlReleaseSRWLockExclusive(v12);
    v4 = 128;
LABEL_5:
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(qword_180145FA8 + 8));
    goto LABEL_6;
  }
LABEL_14:
  _InterlockedIncrement((volatile signed __int32 *)v7 + 27);
  *((_DWORD *)v7 + 32) = 1;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v7 + 7);
  RtlReleaseSRWLockShared((PRTL_SRWLOCK)(qword_180145FA8 + 8));
  v10 = v7 + 8;
  while ( 1 )
  {
    v4 = 0;
    if ( (unsigned int)RtlpWnfWalkUserSubscriptionList(OldSubscriptionId, v7, 0LL) == -1073741267 )
      v4 = -1073741267;
    if ( (unsigned int)RtlpWnfWalkUserSubscriptionList(OldSubscriptionId, v7, 1LL) == -1073741267 )
      v4 = -1073741267;
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v7 + 7);
    v11 = (__int64 *)*v10;
    ++v5;
    while ( v11 != v10 )
    {
      *((_DWORD *)v11 + 38) = 0;
      v11 = (__int64 *)*v11;
    }
    if ( !v7[15] )
      break;
    OldSubscriptionId = (_WNF_STATE_NAME *)v7[15];
    v7[15] = 0LL;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v7 + 7);
  }
  if ( v4 )
  {
    v13 = (__int64 *)*v10;
    v14 = 1;
    v7[15] = OldSubscriptionId;
    v15 = 0LL;
    for ( *((_DWORD *)v7 + 32) = 2; v13 != v10; v13 = (__int64 *)*v13 )
    {
      if ( (*((_BYTE *)v13 + 52) & 4) != 0 && *((_DWORD *)v13 + 28) )
      {
        if ( !v15 || v15 > v13[15] )
          v15 = v13[15];
        if ( *((_DWORD *)v13 + 32) < *(_DWORD *)(qword_180145FA8 + 72) )
          v14 = 0;
      }
    }
    v7[17] = v15;
    *((_DWORD *)v7 + 36) = v14;
  }
  else
  {
    *((_DWORD *)v7 + 32) = 0;
    if ( !*((_DWORD *)v7 + 6) || (signed int)(OldSubscriptionId[2].Data[0] - *((_DWORD *)v7 + 6)) > 0 )
      *((_DWORD *)v7 + 6) = OldSubscriptionId[2].Data[0];
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v7 + 7);
  RtlpDecRefWnfNameSubscription((char *)v7);
LABEL_6:
  if ( v5 > 1 )
  {
    NtGetCompleteWnfStateSubscription(
      OldSubscriptionId + 1,
      (ULONG64 *)OldSubscriptionId,
      OldSubscriptionId[3].Data[0],
      v4,
      0LL,
      0);
    if ( !v4 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, OldSubscriptionId);
    return 128;
  }
  return v4;
}
