/*
 * XREFs of MiInsertNewCombineBlocks @ 0x14012B8A4
 * Callers:
 *     MiAllocateCombineProto @ 0x140128770 (MiAllocateCombineProto.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     MiLockPagedAddress @ 0x14009A36C (MiLockPagedAddress.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiUnlockPagedAddress @ 0x1400F3224 (MiUnlockPagedAddress.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 *__fastcall MiInsertNewCombineBlocks(__int64 a1, __int64 *a2)
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
    if ( !(unsigned int)MiLockPagedAddress((ULONG_PTR)a2 + v4) )
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
    *a2 = *v7;
    a2[1] = (__int64)v7;
    if ( *(__int64 **)(v8 + 8) != v7 )
      __fastfail(3u);
    *(_QWORD *)(v8 + 8) = a2;
    *v7 = (__int64)a2;
    a2 += 7;
    --v6;
  }
  while ( v6 );
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return a2;
}
