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

__int64 __fastcall RtlpWnfProcessCurrentDescriptor(_WNF_STATE_NAME *BaseAddress, int a2)
{
  ULONG v4; // esi
  int v5; // r15d
  _QWORD *v6; // r8
  _QWORD *v7; // rbx
  int v8; // eax
  __int64 *v9; // r14
  __int64 *v10; // rax
  _RTL_SRWLOCK *v12; // rcx
  __int64 *v13; // rdx
  int v14; // r8d
  __int64 v15; // rax

  v4 = 0;
  v5 = 0;
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_180146F28 + 8));
  v6 = *(_QWORD **)(qword_180146F28 + 16);
  if ( v6 == (_QWORD *)(qword_180146F28 + 16) )
    goto LABEL_4;
  while ( 1 )
  {
    v7 = v6 - 4;
    if ( *(v6 - 2) == *(_QWORD *)&BaseAddress[1] && v7[1] == *BaseAddress )
      break;
    v6 = (_QWORD *)*v6;
    if ( v6 == (_QWORD *)(qword_180146F28 + 16) )
      goto LABEL_4;
  }
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v7 + 7);
  v8 = *((_DWORD *)v7 + 32);
  if ( v8 != 2 )
  {
    if ( v8 != 1 )
      goto LABEL_8;
    v12 = (_RTL_SRWLOCK *)(v7 + 7);
    if ( !a2 )
    {
      v7[15] = BaseAddress;
      RtlReleaseSRWLockExclusive(v12);
      v4 = 259;
      goto LABEL_4;
    }
LABEL_28:
    RtlReleaseSRWLockExclusive(v12);
    v4 = 128;
LABEL_4:
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(qword_180146F28 + 8));
    goto LABEL_21;
  }
  if ( a2 )
  {
    v12 = (_RTL_SRWLOCK *)(v7 + 7);
    goto LABEL_28;
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v7[15]);
  v7[15] = 0LL;
  *((_DWORD *)v7 + 32) = 0;
LABEL_8:
  _InterlockedIncrement((volatile signed __int32 *)v7 + 27);
  *((_DWORD *)v7 + 32) = 1;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v7 + 7);
  RtlReleaseSRWLockShared((PRTL_SRWLOCK)(qword_180146F28 + 8));
  v9 = v7 + 8;
  while ( 1 )
  {
    v4 = 0;
    if ( (unsigned int)RtlpWnfWalkUserSubscriptionList(BaseAddress, v7, 0LL) == -1073741267 )
      v4 = -1073741267;
    if ( (unsigned int)RtlpWnfWalkUserSubscriptionList(BaseAddress, v7, 1LL) == -1073741267 )
      v4 = -1073741267;
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v7 + 7);
    v10 = (__int64 *)*v9;
    ++v5;
    while ( v10 != v9 )
    {
      *((_DWORD *)v10 + 38) = 0;
      v10 = (__int64 *)*v10;
    }
    if ( !v7[15] )
      break;
    BaseAddress = (_WNF_STATE_NAME *)v7[15];
    v7[15] = 0LL;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v7 + 7);
  }
  if ( v4 )
  {
    v13 = (__int64 *)*v9;
    v14 = 1;
    v7[15] = BaseAddress;
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
    if ( !*((_DWORD *)v7 + 6) || (signed int)(BaseAddress[2].Data[0] - *((_DWORD *)v7 + 6)) > 0 )
      *((_DWORD *)v7 + 6) = BaseAddress[2].Data[0];
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v7 + 7);
  RtlpDecRefWnfNameSubscription(v7);
LABEL_21:
  if ( v5 > 1 )
  {
    NtGetCompleteWnfStateSubscription(BaseAddress + 1, (ULONG64 *)BaseAddress, BaseAddress[3].Data[0], v4, 0LL, 0);
    if ( !v4 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    return 128;
  }
  return v4;
}
