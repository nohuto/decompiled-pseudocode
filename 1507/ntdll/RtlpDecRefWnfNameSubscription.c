/*
 * XREFs of RtlpDecRefWnfNameSubscription @ 0x18000BBE0
 * Callers:
 *     RtlpRemoveUserSubFromNameSub @ 0x18000B100 (RtlpRemoveUserSubFromNameSub.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18000B588 (RtlpWnfProcessCurrentDescriptor.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     NtUnsubscribeWnfStateChange @ 0x180095400 (NtUnsubscribeWnfStateChange.c)
 *     RtlpWnfETWEventNameSubRundown @ 0x1800C8CD0 (RtlpWnfETWEventNameSubRundown.c)
 */

__int64 __fastcall RtlpDecRefWnfNameSubscription(__int64 a1)
{
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  __int64 v5; // r8

  RtlAcquireSRWLockExclusive(qword_180146F28 + 8);
  RtlAcquireSRWLockExclusive(a1 + 56);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 108), 0xFFFFFFFF) == 1 )
  {
    if ( MEMORY[0x7FFE038E] )
      RtlpWnfETWEventNameSubRundown(*(_QWORD *)(a1 + 16), a1);
    NtUnsubscribeWnfStateChange(a1 + 16);
    v3 = *(_QWORD *)(a1 + 32);
    v4 = *(_QWORD **)(a1 + 40);
    if ( *(_QWORD *)(v3 + 8) != a1 + 32 || *v4 != a1 + 32 )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    RtlReleaseSRWLockExclusive(a1 + 56);
    v5 = *(_QWORD *)(a1 + 120);
    if ( v5 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v5);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1);
  }
  else
  {
    RtlReleaseSRWLockExclusive(a1 + 56);
  }
  return RtlReleaseSRWLockExclusive(qword_180146F28 + 8);
}
