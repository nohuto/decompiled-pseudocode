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

void __fastcall RtlpDecRefWnfNameSubscription(char *BaseAddress)
{
  char **v2; // rdx
  PVOID *v3; // rcx
  void *v4; // r8

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(qword_180146F28 + 8));
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 7);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)BaseAddress + 27, 0xFFFFFFFF) == 1 )
  {
    if ( MEMORY[0x7FFE038E] )
      RtlpWnfETWEventNameSubRundown(*((_QWORD *)BaseAddress + 2), BaseAddress);
    NtUnsubscribeWnfStateChange((PCWNF_STATE_NAME)BaseAddress + 2);
    v2 = (char **)*((_QWORD *)BaseAddress + 4);
    v3 = (PVOID *)*((_QWORD *)BaseAddress + 5);
    if ( v2[1] != BaseAddress + 32 || *v3 != BaseAddress + 32 )
      __fastfail(3u);
    *v3 = v2;
    v2[1] = (char *)v3;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 7);
    v4 = (void *)*((_QWORD *)BaseAddress + 15);
    if ( v4 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  else
  {
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 7);
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(qword_180146F28 + 8));
}
