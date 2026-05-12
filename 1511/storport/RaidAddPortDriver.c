/*
 * XREFs of RaidAddPortDriver @ 0x1C000A678
 * Callers:
 *     RaInitializeDriver @ 0x1C0050B6C (RaInitializeDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAddPortDriver(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 24), &LockHandle);
  v4 = (_QWORD *)(a2 + 24);
  v5 = *(_QWORD *)(a1 + 8);
  *v4 = v5;
  v4[1] = a1 + 8;
  if ( *(_QWORD *)(v5 + 8) != a1 + 8 )
    __fastfail(3u);
  *(_QWORD *)(v5 + 8) = v4;
  *(_QWORD *)(a1 + 8) = v4;
  ++*(_DWORD *)(a1 + 32);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
