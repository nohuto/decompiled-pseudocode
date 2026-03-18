/*
 * XREFs of VidSchIsMonitoredFenceSignaled @ 0x1C000614C
 * Callers:
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0035A78 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C003A67C (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C004E848 (-IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchIsMonitoredFenceSignaled(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *v4; // rax
  bool v5; // bl
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 8) + 1872LL), &LockHandle);
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
