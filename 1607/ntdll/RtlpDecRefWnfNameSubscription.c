/*
 * XREFs of RtlpDecRefWnfNameSubscription @ 0x1800663B8
 * Callers:
 *     RtlpRemoveUserSubFromNameSub @ 0x180065AD0 (RtlpRemoveUserSubFromNameSub.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x180065D38 (RtlpWnfProcessCurrentDescriptor.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     NtUnsubscribeWnfStateChange @ 0x1800A9B30 (NtUnsubscribeWnfStateChange.c)
 *     RtlpWnfETWEventNameSubRundown @ 0x1800D9B58 (RtlpWnfETWEventNameSubRundown.c)
 */

void __fastcall RtlpDecRefWnfNameSubscription(char *BaseAddress)
{
  char **v2; // rdx
  PVOID *v3; // rcx
  void *v4; // r8

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(qword_1801530A0 + 8));
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
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(qword_1801530A0 + 8));
}
