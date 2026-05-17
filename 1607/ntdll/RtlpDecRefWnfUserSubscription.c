/*
 * XREFs of RtlpDecRefWnfUserSubscription @ 0x1800662F8
 * Callers:
 *     RtlpRemoveUserSubFromNameSub @ 0x180065AE0 (RtlpRemoveUserSubFromNameSub.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x180065F08 (RtlpWnfWalkUserSubscriptionList.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlpWakeByAddress @ 0x180066510 (RtlpWakeByAddress.c)
 *     RtlpDecrementWnfSerializationGroup @ 0x180066D88 (RtlpDecrementWnfSerializationGroup.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpDecRefWnfUserSubscription(unsigned __int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  _DWORD *v6; // rdi
  __int64 (__fastcall *v7)(__int64); // rsi
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
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
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
