/*
 * XREFs of MiRebalanceZeroFreeLists @ 0x1401F37C4
 * Callers:
 *     <none>
 * Callees:
 *     MiDereferencePartition @ 0x140001E80 (MiDereferencePartition.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiNodeFreeZeroPages @ 0x140066170 (MiNodeFreeZeroPages.c)
 *     MiGetNodeStandbyPageCount @ 0x1401F3048 (MiGetNodeStandbyPageCount.c)
 *     MiPruneStandbyPages @ 0x1401F35CC (MiPruneStandbyPages.c)
 */

void __fastcall MiRebalanceZeroFreeLists(__int64 a1)
{
  unsigned __int16 v1; // dx
  unsigned int v3; // ebx
  unsigned int v4; // ebp
  unsigned int v5; // edi
  unsigned int v6; // r8d
  __int64 v7; // r11
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v1 = KeNumberNodes;
  v3 = 0;
  if ( KeNumberNodes )
  {
    v4 = MmNumberOfChannels;
    do
    {
      v5 = 0;
      if ( v4 )
      {
        do
        {
          if ( (unsigned __int64)MiNodeFreeZeroPages((_QWORD *)(2184LL * v3 + *(_QWORD *)(a1 + 48)), v5, 1024) < 0x200
            && (unsigned __int64)MiGetNodeStandbyPageCount(a1, v3, v5) >= 0x1000
            && v7 != 1024 )
          {
            MiPruneStandbyPages(a1, v3, v6, 1024 - v7);
            v4 = MmNumberOfChannels;
          }
          ++v5;
        }
        while ( v5 < v4 );
        v1 = KeNumberNodes;
      }
      ++v3;
    }
    while ( v3 < v1 );
  }
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  *(_QWORD *)(a1 + 5808) = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  MiDereferencePartition((_DWORD *)a1);
}
