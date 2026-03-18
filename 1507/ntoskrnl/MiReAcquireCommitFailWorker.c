/*
 * XREFs of MiReAcquireCommitFailWorker @ 0x14020FF34
 * Callers:
 *     <none>
 * Callees:
 *     KeForceResumeProcess @ 0x14000BA84 (KeForceResumeProcess.c)
 *     PsTerminateProcess @ 0x1405579A8 (PsTerminateProcess.c)
 */

LONG_PTR __fastcall MiReAcquireCommitFailWorker(void *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8

  PsTerminateProcess(a1, 3221225773LL);
  KeForceResumeProcess((__int64)a1, v2, v3);
  return ObfDereferenceObjectWithTag(a1, 0x746C6644u);
}
