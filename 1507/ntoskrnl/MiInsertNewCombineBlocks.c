/*
 * XREFs of MiInsertNewCombineBlocks @ 0x14022A9B4
 * Callers:
 *     MiAllocateCombineProto @ 0x140226FF8 (MiAllocateCombineProto.c)
 * Callees:
 *     MiLockPagedAddress @ 0x140004FA4 (MiLockPagedAddress.c)
 *     MiUnlockPagedAddress @ 0x1400056EC (MiUnlockPagedAddress.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     memset @ 0x140195A80 (memset.c)
 */

_QWORD *__fastcall MiInsertNewCombineBlocks(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  _QWORD *v4; // rbx
  __int64 v5; // rax
  int v7; // edi
  __int64 *v8; // rax
  __int64 v9; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0;
  v4 = (_QWORD *)a2;
  v5 = 0LL;
  do
  {
    if ( !(unsigned int)MiLockPagedAddress((unsigned __int64)v4 + v5, a2, a3) )
    {
      while ( v3 * 8 )
      {
        v3 -= 512;
        MiUnlockPagedAddress((unsigned __int64)&v4[v3]);
      }
      return 0LL;
    }
    v3 += 512;
    v5 = v3 * 8;
  }
  while ( v3 < 0x1F8uLL );
  memset(v4, 0, 0xFC0uLL);
  v7 = 71;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 88), &LockHandle);
  v8 = (__int64 *)(a1 + 72);
  do
  {
    v9 = *v8;
    *v4 = *v8;
    v4[1] = v8;
    if ( *(__int64 **)(v9 + 8) != v8 )
      __fastfail(3u);
    *(_QWORD *)(v9 + 8) = v4;
    *v8 = (__int64)v4;
    v4 += 7;
    --v7;
  }
  while ( v7 );
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v4;
}
