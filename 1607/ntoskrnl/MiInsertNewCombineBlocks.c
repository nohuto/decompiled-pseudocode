/*
 * XREFs of MiInsertNewCombineBlocks @ 0x1401F9C70
 * Callers:
 *     MiAllocateCombineProto @ 0x1401F7974 (MiAllocateCombineProto.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiUnlockPagedAddress @ 0x1400B26D4 (MiUnlockPagedAddress.c)
 *     MiLockPagedAddress @ 0x14010973C (MiLockPagedAddress.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

_QWORD *__fastcall MiInsertNewCombineBlocks(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // edi
  __int64 v4; // rax
  int v6; // edi
  __int64 *v7; // rax
  __int64 v8; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  v4 = 0LL;
  do
  {
    if ( !(unsigned int)MiLockPagedAddress((unsigned __int64)a2 + v4) )
    {
      while ( v2 * 8 )
      {
        v2 -= 512;
        MiUnlockPagedAddress((unsigned __int64)&a2[v2]);
      }
      return 0LL;
    }
    v2 += 512;
    v4 = v2 * 8;
  }
  while ( v2 < 0x1F8uLL );
  memset(a2, 0, 0xFC0uLL);
  v6 = 71;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 88), &LockHandle);
  v7 = (__int64 *)(a1 + 72);
  do
  {
    v8 = *v7;
    if ( *(__int64 **)(*v7 + 8) != v7 )
      __fastfail(3u);
    *a2 = v8;
    a2[1] = v7;
    *(_QWORD *)(v8 + 8) = a2;
    *v7 = (__int64)a2;
    a2 += 7;
    --v6;
  }
  while ( v6 );
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return a2;
}
