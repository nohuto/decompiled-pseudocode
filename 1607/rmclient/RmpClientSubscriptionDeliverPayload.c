/*
 * XREFs of RmpClientSubscriptionDeliverPayload @ 0x18000A1BC
 * Callers:
 *     RmpClientSubscriptionWnfCallback @ 0x18000A4F0 (RmpClientSubscriptionWnfCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180006710 (_guard_dispatch_icall_nop.c)
 *     RmpClientCallbackCleanup @ 0x180009D48 (RmpClientCallbackCleanup.c)
 *     RmpClientSubscriptionAcquireLock @ 0x180009E30 (RmpClientSubscriptionAcquireLock.c)
 */

BOOLEAN __fastcall RmpClientSubscriptionDeliverPayload(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  __int64 (__fastcall *v4)(_DWORD *); // rax
  _DWORD *v5; // rcx
  BOOLEAN result; // al
  bool v9; // zf

  v4 = (__int64 (__fastcall *)(_DWORD *))a2[6];
  v5 = a3 + 2;
  if ( *a3 == 1 )
  {
    result = v4(v5);
    v9 = a3[8] == 0;
  }
  else
  {
    result = v4(v5);
    v9 = a3[6] == 0;
  }
  if ( v9 )
  {
    RmpClientSubscriptionAcquireLock(a1);
    RmpClientCallbackCleanup((__int64)a2, a1);
    *(_DWORD *)(a1 + 16) = 0;
    RtlReleaseSRWLockExclusive(a1 + 8);
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a2);
  }
  return result;
}
