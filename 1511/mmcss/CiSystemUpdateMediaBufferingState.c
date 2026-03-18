/*
 * XREFs of CiSystemUpdateMediaBufferingState @ 0x1C0001D10
 * Callers:
 *     CiSchedulerRemoveTaskIndex @ 0x1C0001C70 (CiSchedulerRemoveTaskIndex.c)
 *     CiSchedulerProcessDeadlines @ 0x1C0001D40 (CiSchedulerProcessDeadlines.c)
 *     CiSchedulerThreadFunction @ 0x1C0001D60 (CiSchedulerThreadFunction.c)
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
