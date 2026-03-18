/*
 * XREFs of VidSchIsMonitoredFenceSignaled @ 0x1C000FE58
 * Callers:
 *     ?IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C004FB68 (-IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C004FD80 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C005088C (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0059120 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchIsMonitoredFenceSignaled(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *v4; // rax
  bool v5; // bl
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 8) + 1856LL), &LockHandle);
  if ( *(_BYTE *)(a1 + 28) )
  {
    v5 = 1;
  }
  else
  {
    v4 = *(unsigned __int64 **)(a1 + 56);
    if ( *(_BYTE *)(a1 + 29) )
      v5 = *v4 >= a2;
    else
      v5 = *(_DWORD *)v4 - (int)a2 >= 0;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v5;
}
