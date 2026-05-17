/*
 * XREFs of RtlpDecRefWnfNameSubscription @ 0x1800663C8
 * Callers:
 *     RtlpRemoveUserSubFromNameSub @ 0x180065AE0 (RtlpRemoveUserSubFromNameSub.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x180065D48 (RtlpWnfProcessCurrentDescriptor.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     NtUnsubscribeWnfStateChange @ 0x1800A9B30 (NtUnsubscribeWnfStateChange.c)
 *     RtlpWnfETWEventNameSubRundown @ 0x1800D9A98 (RtlpWnfETWEventNameSubRundown.c)
 */

signed __int64 __fastcall RtlpDecRefWnfNameSubscription(unsigned __int64 a1, char *a2, __int64 a3, __int64 a4)
{
  char *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  unsigned __int64 v11; // r8

  RtlAcquireSRWLockExclusive(qword_1801530A0 + 8, a2, a3, a4);
  RtlAcquireSRWLockExclusive(a1 + 56, v5, v6, v7);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 108), 0xFFFFFFFF) == 1 )
  {
    if ( MEMORY[0x7FFE038E] )
      RtlpWnfETWEventNameSubRundown(*(_QWORD *)(a1 + 16), a1);
    NtUnsubscribeWnfStateChange(a1 + 16);
    v9 = *(_QWORD *)(a1 + 32);
    v10 = *(_QWORD **)(a1 + 40);
    if ( *(_QWORD *)(v9 + 8) != a1 + 32 || *v10 != a1 + 32 )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 56));
    v11 = *(_QWORD *)(a1 + 120);
    if ( v11 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  }
  else
  {
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 56));
  }
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(qword_1801530A0 + 8));
}
