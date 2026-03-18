/*
 * XREFs of CiSchedulerRemoveTaskIndex @ 0x1C00026F0
 * Callers:
 *     CiTaskIndexDereference @ 0x1C0002570 (CiTaskIndexDereference.c)
 * Callees:
 *     CiSystemAcquireSpinLock @ 0x1C00011D0 (CiSystemAcquireSpinLock.c)
 *     CiSchedulerUpdateTimer @ 0x1C0001C50 (CiSchedulerUpdateTimer.c)
 *     CiSystemUpdateMediaBufferingState @ 0x1C0002790 (CiSystemUpdateMediaBufferingState.c)
 *     CiSchedulerRemoveDeadline @ 0x1C00027C0 (CiSchedulerRemoveDeadline.c)
 */

void __fastcall CiSchedulerRemoveTaskIndex(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax

  CiSystemAcquireSpinLock((KSPIN_LOCK *)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  if ( *(_QWORD *)(a1 + 80) )
  {
    CiSchedulerRemoveDeadline(a1 + 56);
    CiSchedulerUpdateTimer();
  }
  v3 = *(_DWORD *)(a1 + 144);
  if ( (v3 & 2) != 0 )
  {
    --CiTotalTasksBuffering;
    *(_DWORD *)(a1 + 144) = v3 & 0xFFFFFFFD;
    CiSystemUpdateMediaBufferingState(v2);
  }
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
}
