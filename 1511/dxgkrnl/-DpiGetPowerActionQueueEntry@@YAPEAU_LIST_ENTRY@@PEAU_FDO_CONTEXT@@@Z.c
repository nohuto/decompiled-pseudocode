/*
 * XREFs of ?DpiGetPowerActionQueueEntry@@YAPEAU_LIST_ENTRY@@PEAU_FDO_CONTEXT@@@Z @ 0x1C000D670
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C00E8F50 (DpiPowerArbiterThread.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall DpiGetPowerActionQueueEntry(KSPIN_LOCK *a1)
{
  __int64 **v2; // rbx
  __int64 *v3; // rdi
  __int64 v4; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(a1 + 339, &LockHandle);
  v2 = (__int64 **)(a1 + 326);
  v3 = 0LL;
  if ( *v2 != (__int64 *)v2 )
  {
    v3 = *v2;
    v4 = **v2;
    if ( (__int64 **)(*v2)[1] != v2 || *(__int64 **)(v4 + 8) != v3 )
      __fastfail(3u);
    *v2 = (__int64 *)v4;
    *(_QWORD *)(v4 + 8) = v2;
    *v3 = 0LL;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return (struct _LIST_ENTRY *)v3;
}
