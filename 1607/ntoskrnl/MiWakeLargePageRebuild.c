/*
 * XREFs of MiWakeLargePageRebuild @ 0x1401FDD50
 * Callers:
 *     MiUnlinkNodeLargePageHelper @ 0x14008A180 (MiUnlinkNodeLargePageHelper.c)
 *     MiSignalLargePageRebuild @ 0x1400BC5CC (MiSignalLargePageRebuild.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 */

__int64 __fastcall MiWakeLargePageRebuild(unsigned __int64 a1, unsigned int a2, char a3)
{
  __int64 v4; // rbp
  __int64 v5; // r14
  unsigned int v7; // esi
  __int64 v8; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = a2;
  v5 = 2184LL * a2 + *(_QWORD *)(a1 + 48) + 1200LL;
  if ( *(_BYTE *)(v5 + 33) || *(_BYTE *)(v5 + 34) != 8 && (a3 & 1) == 0 )
    return 1LL;
  v7 = 0;
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v8 = *(_QWORD *)(a1 + 16);
  if ( v8 )
  {
    v7 = 1;
    *(_QWORD *)(a1 + 16) = v8 + 1;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v7 == 1 )
  {
    *(_BYTE *)(v5 + 33) = 1;
    *(_QWORD *)v5 = 0LL;
    *(_QWORD *)(v5 + 16) = MiRebuildLargePages;
    *(_QWORD *)(v5 + 24) = (v4 << 58) | (a1 >> 4) & 0x3FFFFFFFFFFFFFFLL;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)v5, BackgroundWorkQueue);
  }
  return v7;
}
