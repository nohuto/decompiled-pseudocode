/*
 * XREFs of CiSystemUpdateMediaBufferingState @ 0x1C0002790
 * Callers:
 *     CiSchedulerProcessDeadlines @ 0x1C0001480 (CiSchedulerProcessDeadlines.c)
 *     CiSchedulerWait @ 0x1C0001630 (CiSchedulerWait.c)
 *     CiSchedulerRemoveTaskIndex @ 0x1C00026F0 (CiSchedulerRemoveTaskIndex.c)
 * Callees:
 *     <none>
 */

__int64 CiSystemUpdateMediaBufferingState()
{
  __int64 result; // rax

  if ( (CiTotalTasksBuffering != 0) != CiCurrentMediaBufferingState )
  {
    CiCurrentMediaBufferingState = CiTotalTasksBuffering != 0;
    return PoNotifyMediaBuffering();
  }
  return result;
}
