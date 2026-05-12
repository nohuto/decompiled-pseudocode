/*
 * XREFs of StorPurgeEventQueue @ 0x1C0026578
 * Callers:
 *     RaidCompletionDpcRoutine @ 0x1C00238C0 (RaidCompletionDpcRoutine.c)
 * Callees:
 *     RaidCompleteMiniportRequestCallback @ 0x1C002FFA0 (RaidCompleteMiniportRequestCallback.c)
 */

__int64 __fastcall StorPurgeEventQueue(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // esi
  unsigned int v6; // eax
  __int64 v7; // rbp
  _QWORD *v8; // rdi
  _QWORD *v9; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0;
  v6 = KeQueryHighestNodeNumber() + 1;
  if ( v6 )
  {
    v7 = v6;
    do
    {
      KeAcquireInStackQueuedSpinLock(a1 + 5, &LockHandle);
      v8 = (_QWORD *)*a1;
      while ( v8 != a1 )
      {
        v9 = v8;
        v8 = (_QWORD *)*v8;
        ++v5;
        RaidCompleteMiniportRequestCallback(a1, a3, v9, StorRemoveEventQueueInternal);
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      a1 += 7;
      --v7;
    }
    while ( v7 );
  }
  return v5;
}
