/*
 * XREFs of RtlpDecrementWnfSerializationGroup @ 0x180066D88
 * Callers:
 *     RtlSubscribeWnfStateChangeNotificationInternal @ 0x18002943C (RtlSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlpDecRefWnfUserSubscription @ 0x1800662F8 (RtlpDecRefWnfUserSubscription.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlpDecrementWnfSerializationGroup(unsigned __int64 a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  _QWORD *v7; // rcx

  RtlAcquireSRWLockExclusive(qword_1801530A0 + 48, a2, a3, a4);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 32), 0xFFFFFFFF) != 1 )
    return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(qword_1801530A0 + 48));
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_QWORD **)(a1 + 16);
  if ( *(_QWORD *)(v6 + 8) != a1 + 8 || *v7 != a1 + 8 )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(qword_1801530A0 + 48));
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}
