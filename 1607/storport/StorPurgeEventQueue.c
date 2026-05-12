/*
 * XREFs of StorPurgeEventQueue @ 0x1C002BB98
 * Callers:
 *     RaidCompletionDpcRoutine @ 0x1C00297C0 (RaidCompletionDpcRoutine.c)
 * Callees:
 *     RaidCompleteMiniportRequestCallback @ 0x1C00343F4 (RaidCompleteMiniportRequestCallback.c)
 */

__int64 __fastcall StorPurgeEventQueue(_DWORD *a1, __int64 a2, int a3)
{
  unsigned int v5; // esi
  unsigned int v6; // eax
  _QWORD *v7; // rbx
  __int64 v8; // rbp
  _QWORD *v9; // rdi
  int v10; // r9d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v5 = 0;
  v6 = KeQueryHighestNodeNumber() + 1;
  if ( v6 )
  {
    v7 = a1 + 16;
    v8 = v6;
    do
    {
      KeAcquireInStackQueuedSpinLock(v7 + 5, &LockHandle);
      v9 = (_QWORD *)*v7;
      while ( v9 != v7 )
      {
        v10 = (int)v9;
        v9 = (_QWORD *)*v9;
        ++v5;
        RaidCompleteMiniportRequestCallback((_DWORD)v7, a3, *a1, v10, (__int64)StorRemoveEventQueueInternal);
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v7 += 7;
      --v8;
    }
    while ( v8 );
  }
  return v5;
}
