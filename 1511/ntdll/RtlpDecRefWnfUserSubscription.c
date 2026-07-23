/*
 * XREFs of RtlpDecRefWnfUserSubscription @ 0x180008808
 * Callers:
 *     RtlpRemoveUserSubFromNameSub @ 0x180004870 (RtlpRemoveUserSubFromNameSub.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x18000840C (RtlpWnfWalkUserSubscriptionList.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlpWakeByAddress @ 0x18003023C (RtlpWakeByAddress.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     RtlpDecrementWnfSerializationGroup @ 0x1800825A0 (RtlpDecrementWnfSerializationGroup.c)
 */

LOGICAL __fastcall RtlpDecRefWnfUserSubscription(volatile signed __int32 *BaseAddress)
{
  LOGICAL result; // eax
  volatile signed __int32 **v3; // rdx
  PVOID *v4; // rcx
  _DWORD *v5; // rsi
  __int64 (__fastcall *v6)(__int64); // rdi
  __int64 v7; // rbp
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF

  result = _InterlockedExchangeAdd(BaseAddress + 20, 0xFFFFFFFF);
  if ( result == 1 )
  {
    if ( *((_QWORD *)BaseAddress + 9) )
      RtlpDecrementWnfSerializationGroup();
    v3 = (volatile signed __int32 **)*((_QWORD *)BaseAddress + 1);
    v4 = (PVOID *)*((_QWORD *)BaseAddress + 2);
    if ( v3[1] != BaseAddress + 2 || *v4 != BaseAddress + 2 )
      __fastfail(3u);
    *v4 = v3;
    v3[1] = (volatile signed __int32 *)v4;
    v5 = (_DWORD *)*((_QWORD *)BaseAddress + 11);
    v6 = (__int64 (__fastcall *)(__int64))*((_QWORD *)BaseAddress + 13);
    v7 = *((_QWORD *)BaseAddress + 14);
    result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)BaseAddress);
    if ( v5 )
    {
      *v5 = 1;
      _InterlockedOr(v8, 0);
      result = RtlpWakeByAddress(v5, 0LL);
    }
    if ( v6 )
      return v6(v7);
  }
  return result;
}
