/*
 * XREFs of RtlpDecRefWnfUserSubscription @ 0x18000BB10
 * Callers:
 *     RtlpRemoveUserSubFromNameSub @ 0x18000B100 (RtlpRemoveUserSubFromNameSub.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x18000B74C (RtlpWnfWalkUserSubscriptionList.c)
 * Callees:
 *     RtlpDecrementWnfSerializationGroup @ 0x18000C550 (RtlpDecrementWnfSerializationGroup.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlpWakeByAddress @ 0x1800367EC (RtlpWakeByAddress.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 */

__int64 __fastcall RtlpDecRefWnfUserSubscription(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  _DWORD *v6; // rsi
  __int64 (__fastcall *v7)(__int64); // rdi
  __int64 v8; // rbp
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 80), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    v3 = *(_QWORD *)(a1 + 72);
    if ( v3 )
      RtlpDecrementWnfSerializationGroup(v3);
    v4 = *(_QWORD *)(a1 + 8);
    v5 = *(_QWORD **)(a1 + 16);
    if ( *(_QWORD *)(v4 + 8) != a1 + 8 || *v5 != a1 + 8 )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    v6 = *(_DWORD **)(a1 + 88);
    v7 = *(__int64 (__fastcall **)(__int64))(a1 + 104);
    v8 = *(_QWORD *)(a1 + 112);
    result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1);
    if ( v6 )
    {
      *v6 = 1;
      _InterlockedOr(v9, 0);
      result = RtlpWakeByAddress(v6, 0LL);
    }
    if ( v7 )
      return v7(v8);
  }
  return result;
}
