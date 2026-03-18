/*
 * XREFs of CiSchedulerRemoveTaskIndex @ 0x1C0001D50
 * Callers:
 *     CiTaskIndexDereference @ 0x1C0001BE0 (CiTaskIndexDereference.c)
 * Callees:
 *     CiSystemAcquireSpinLock @ 0x1C0001000 (CiSystemAcquireSpinLock.c)
 *     CiSchedulerRemoveDeadline @ 0x1C0001990 (CiSchedulerRemoveDeadline.c)
 *     CiSchedulerUpdateTimer @ 0x1C0001E10 (CiSchedulerUpdateTimer.c)
 *     CiSystemUpdateMediaBufferingState @ 0x1C0004720 (CiSystemUpdateMediaBufferingState.c)
 */

void __fastcall CiSchedulerRemoveTaskIndex(__int64 a1)
{
  char v2; // di
  int v3; // eax

  v2 = 0;
  CiSystemAcquireSpinLock((KSPIN_LOCK *)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  if ( *(_QWORD *)(a1 + 80) )
  {
    CiSchedulerRemoveDeadline(a1 + 56);
    v2 = 1;
  }
  if ( *(_QWORD *)(a1 + 120) )
  {
    CiSchedulerRemoveDeadline(a1 + 96);
  }
  else if ( !v2 )
  {
    goto LABEL_5;
  }
  CiSchedulerUpdateTimer();
LABEL_5:
  v3 = *(_DWORD *)(a1 + 184);
  if ( (v3 & 2) != 0 )
  {
    --CiTotalTasksBuffering;
    *(_DWORD *)(a1 + 184) = v3 & 0xFFFFFFFD;
    CiSystemUpdateMediaBufferingState();
  }
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
}
