/*
 * XREFs of RtlpDecRefWnfUserSubscription @ 0x1800662E8
 * Callers:
 *     RtlpRemoveUserSubFromNameSub @ 0x180065AD0 (RtlpRemoveUserSubFromNameSub.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x180065EF8 (RtlpWnfWalkUserSubscriptionList.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlpWakeByAddress @ 0x180066500 (RtlpWakeByAddress.c)
 *     RtlpDecrementWnfSerializationGroup @ 0x180066D78 (RtlpDecrementWnfSerializationGroup.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

LOGICAL __fastcall RtlpDecRefWnfUserSubscription(volatile signed __int32 *BaseAddress)
{
  LOGICAL result; // eax
  __int64 v3; // rcx
  volatile signed __int32 **v4; // rdx
  PVOID *v5; // rcx
  _DWORD *v6; // rdi
  __int64 (__fastcall *v7)(__int64); // rsi
  __int64 v8; // rbp
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF

  result = _InterlockedExchangeAdd(BaseAddress + 20, 0xFFFFFFFF);
  if ( result == 1 )
  {
    v3 = *((_QWORD *)BaseAddress + 9);
    if ( v3 )
      RtlpDecrementWnfSerializationGroup(v3);
    v4 = (volatile signed __int32 **)*((_QWORD *)BaseAddress + 1);
    v5 = (PVOID *)*((_QWORD *)BaseAddress + 2);
    if ( v4[1] != BaseAddress + 2 || *v5 != BaseAddress + 2 )
      __fastfail(3u);
    *v5 = v4;
    v4[1] = (volatile signed __int32 *)v5;
    v6 = (_DWORD *)*((_QWORD *)BaseAddress + 11);
    v7 = (__int64 (__fastcall *)(__int64))*((_QWORD *)BaseAddress + 13);
    v8 = *((_QWORD *)BaseAddress + 14);
    result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)BaseAddress);
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
