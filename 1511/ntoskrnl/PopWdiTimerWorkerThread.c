/*
 * XREFs of PopWdiTimerWorkerThread @ 0x1401F114C
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     PopDiagTraceSleepStudyStart @ 0x140639C18 (PopDiagTraceSleepStudyStart.c)
 *     PopDiagTraceSleepStudyStop @ 0x140639CD8 (PopDiagTraceSleepStudyStop.c)
 */

LONG PopWdiTimerWorkerThread()
{
  KeWaitForSingleObject(&PopWdiTimerMutex, Executive, 0, 0, 0LL);
  PopDiagTraceSleepStudyStop();
  if ( PopWdiNewScenarioWaiting )
  {
    PopDiagTraceSleepStudyStart();
    PopWdiNewScenarioWaiting = 0;
  }
  PopWdiTimerQueued = 0;
  return KeReleaseMutex(&PopWdiTimerMutex, 0);
}
