/*
 * XREFs of CiSchedulerCompleteTimerResolutionTransition @ 0x1C0001610
 * Callers:
 *     CiSchedulerDeepSleep @ 0x1C00012D0 (CiSchedulerDeepSleep.c)
 *     CiSchedulerSleep @ 0x1C0001370 (CiSchedulerSleep.c)
 * Callees:
 *     CiSystemAcquireSpinLock @ 0x1C00011D0 (CiSystemAcquireSpinLock.c)
 *     CiCommitTimerResolution @ 0x1C0001CD0 (CiCommitTimerResolution.c)
 *     CiTransitionTimerResolutionState @ 0x1C0001D20 (CiTransitionTimerResolutionState.c)
 */

__int64 CiSchedulerCompleteTimerResolutionTransition()
{
  __int64 result; // rax
  unsigned int v1; // edi
  unsigned int v2; // ebx

  result = (unsigned int)CiSchedulerTimerResolutionState;
  if ( CiSchedulerTimerResolutionState == 1 )
  {
    CiSystemAcquireSpinLock((KSPIN_LOCK *)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    v1 = CiSchedulerTimerResolutionState;
    CiSchedulerTimerResolutionState = CiTransitionTimerResolutionState(
                                        3LL,
                                        (unsigned int)CiSchedulerTimerResolutionState);
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
    v2 = CiSchedulerTimerResolutionState;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
    return CiCommitTimerResolution(v1, v2);
  }
  return result;
}
