/*
 * XREFs of KeQueryRuntimeThread @ 0x1401428A0
 * Callers:
 *     VerifierKeQueryRuntimeThread @ 0x1406C09C4 (VerifierKeQueryRuntimeThread.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall KeQueryRuntimeThread(PKTHREAD Thread, PULONG UserTime)
{
  *UserTime = Thread->UserTime;
  return Thread->SchedulerApc.SpareLong0;
}
