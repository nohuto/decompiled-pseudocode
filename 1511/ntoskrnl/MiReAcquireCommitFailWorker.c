/*
 * XREFs of MiReAcquireCommitFailWorker @ 0x1401D0384
 * Callers:
 *     <none>
 * Callees:
 *     KeForceResumeProcess @ 0x1400946B4 (KeForceResumeProcess.c)
 *     PsTerminateProcess @ 0x140452368 (PsTerminateProcess.c)
 */

LONG_PTR __fastcall MiReAcquireCommitFailWorker(void *a1)
{
  PsTerminateProcess(a1, 3221225773LL);
  KeForceResumeProcess((__int64)a1);
  return ObfDereferenceObjectWithTag(a1, 0x746C6644u);
}
