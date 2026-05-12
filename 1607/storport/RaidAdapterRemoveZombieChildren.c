/*
 * XREFs of RaidAdapterRemoveZombieChildren @ 0x1C00279E0
 * Callers:
 *     RaidAdapterDeleteChildren @ 0x1C0026D4C (RaidAdapterDeleteChildren.c)
 *     RaidAdapterMarkChildrenMissing @ 0x1C0027580 (RaidAdapterMarkChildrenMissing.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AA20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RaidAdapterRemoveZombieChildren(__int64 a1, __int64 (__fastcall *a2)(__int64 *))
{
  __int64 **v3; // rbx
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 *v7; // rsi
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = (__int64 **)(a1 + 200);
  while ( 1 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 192), &LockHandle);
    if ( *v3 == (__int64 *)v3 )
    {
      v7 = 0LL;
    }
    else
    {
      v5 = *v3;
      v6 = **v3;
      if ( (__int64 **)(*v3)[1] != v3 || *(__int64 **)(v6 + 8) != v5 )
        __fastfail(3u);
      *v3 = (__int64 *)v6;
      v7 = v5 - 6;
      *(_QWORD *)(v6 + 8) = v3;
      --*(_DWORD *)(a1 + 216);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( !v7 )
      break;
    if ( a2 )
    {
      result = a2(v7);
      if ( (int)result < 0 )
        return result;
    }
  }
  return 0LL;
}
