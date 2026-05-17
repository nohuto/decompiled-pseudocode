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

__int64 __fastcall RtlpDecRefWnfUserSubscription(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  _DWORD *v5; // rsi
  __int64 (__fastcall *v6)(__int64); // rdi
  __int64 v7; // rbp
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 80), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    if ( *(_QWORD *)(a1 + 72) )
      RtlpDecrementWnfSerializationGroup();
    v3 = *(_QWORD *)(a1 + 8);
    v4 = *(_QWORD **)(a1 + 16);
    if ( *(_QWORD *)(v3 + 8) != a1 + 8 || *v4 != a1 + 8 )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    v5 = *(_DWORD **)(a1 + 88);
    v6 = *(__int64 (__fastcall **)(__int64))(a1 + 104);
    v7 = *(_QWORD *)(a1 + 112);
    result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1);
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
