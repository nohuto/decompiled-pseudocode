/*
 * XREFs of MiReAcquireCommitFailWorker @ 0x1401E0600
 * Callers:
 *     <none>
 * Callees:
 *     KeForceResumeProcess @ 0x1400C8E70 (KeForceResumeProcess.c)
 *     PsTerminateProcess @ 0x1404EC470 (PsTerminateProcess.c)
 */

LONG_PTR __fastcall MiReAcquireCommitFailWorker(void *a1)
{
  PsTerminateProcess(a1, 3221225773LL);
  KeForceResumeProcess((__int64)a1);
  return ObfDereferenceObjectWithTag(a1, 0x746C6644u);
}
