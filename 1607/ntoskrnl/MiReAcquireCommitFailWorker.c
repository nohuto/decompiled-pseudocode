/*
 * XREFs of MiReAcquireCommitFailWorker @ 0x1401E042C
 * Callers:
 *     <none>
 * Callees:
 *     KeForceResumeProcess @ 0x1400C6D10 (KeForceResumeProcess.c)
 *     PsTerminateProcess @ 0x1404CE4F8 (PsTerminateProcess.c)
 */

LONG_PTR __fastcall MiReAcquireCommitFailWorker(void *a1)
{
  PsTerminateProcess(a1, 3221225773LL);
  KeForceResumeProcess((__int64)a1);
  return ObfDereferenceObjectWithTag(a1, 0x746C6644u);
}
