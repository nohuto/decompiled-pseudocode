/*
 * XREFs of CiSchedulerRemoveTaskIndex @ 0x1C0001C70
 * Callers:
 *     CiTaskIndexDereference @ 0x1C0001AF0 (CiTaskIndexDereference.c)
 * Callees:
 *     CiSchedulerUpdateTimer @ 0x1C00011D0 (CiSchedulerUpdateTimer.c)
 *     CiSystemAcquireSpinLock @ 0x1C0001250 (CiSystemAcquireSpinLock.c)
 *     CiSchedulerRemoveDeadline @ 0x1C0001A40 (CiSchedulerRemoveDeadline.c)
 *     CiSystemUpdateMediaBufferingState @ 0x1C0001D10 (CiSystemUpdateMediaBufferingState.c)
 */

void __fastcall CiSchedulerRemoveTaskIndex(__int64 a1)
{
  int v2; // eax

  CiSystemAcquireSpinLock((KSPIN_LOCK *)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  if ( *(_QWORD *)(a1 + 80) )
  {
    CiSchedulerRemoveDeadline(a1 + 56);
    CiSchedulerUpdateTimer();
  }
  v2 = *(_DWORD *)(a1 + 144);
  if ( (v2 & 2) != 0 )
  {
    --CiTotalTasksBuffering;
    *(_DWORD *)(a1 + 144) = v2 & 0xFFFFFFFD;
    CiSystemUpdateMediaBufferingState();
  }
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
}
