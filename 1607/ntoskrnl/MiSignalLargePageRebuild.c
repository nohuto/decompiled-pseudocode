/*
 * XREFs of MiSignalLargePageRebuild @ 0x1400BC5CC
 * Callers:
 *     MiWorkingSetManager @ 0x1400BBD98 (MiWorkingSetManager.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001B870 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiPageCombiningActive @ 0x14001D454 (MiPageCombiningActive.c)
 *     MiNodeFreeZeroPages @ 0x140066170 (MiNodeFreeZeroPages.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     MiNodeLargeFreeZeroPages @ 0x1400BEC6C (MiNodeLargeFreeZeroPages.c)
 *     MiWakeLargePageRebuild @ 0x1401FDD50 (MiWakeLargePageRebuild.c)
 */

char __fastcall MiSignalLargePageRebuild(__int64 a1)
{
  int v2; // eax
  unsigned __int8 CurrentIrql; // r13
  unsigned int i; // edi
  __int64 v5; // rbx
  unsigned __int64 v7; // r14
  unsigned int v8; // r12d
  unsigned int v9; // r15d
  unsigned __int64 j; // rsi
  int v11; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  LOBYTE(v2) = MiPageCombiningActive((int *)a1);
  if ( v2 != 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
    {
      v5 = *(_QWORD *)(a1 + 48) + 2184LL * i;
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 2176), &LockHandle);
      if ( !*(_BYTE *)(v5 + 1233) && (*(_BYTE *)(v5 + 1232))-- == 1 )
      {
        v7 = 0LL;
        v8 = MmNumberOfChannels;
        v9 = 0;
        for ( j = (-(__int64)(*(_BYTE *)(v5 + 1235) != 0) & 0xFFFFFFFFFFFFE100uLL) + 0x2000; v9 < v8; ++v9 )
          v7 += MiNodeFreeZeroPages((_QWORD *)v5, v9, 0);
        if ( v7 < j
          || (MiFlags & 0x30) == 0
          || (unsigned __int64)MiNodeLargeFreeZeroPages(v5, 4LL, 2LL) >> 3 >= v7
          || !(unsigned int)MiWakeLargePageRebuild(a1, i, (unsigned int)(v11 - 3)) )
        {
          *(_BYTE *)(v5 + 1234) = 8;
          *(_BYTE *)(v5 + 1232) = 8;
        }
      }
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    }
    LOBYTE(v2) = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return v2;
}
