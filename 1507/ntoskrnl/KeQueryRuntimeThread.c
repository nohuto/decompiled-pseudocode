/*
 * XREFs of KeQueryRuntimeThread @ 0x1401706C4
 * Callers:
 *     VerifierKeQueryRuntimeThread @ 0x1407421BC (VerifierKeQueryRuntimeThread.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall KeQueryRuntimeThread(PKTHREAD Thread, PULONG UserTime)
{
  *UserTime = Thread->UserTime;
  return Thread->SchedulerApc.SpareLong0;
}
