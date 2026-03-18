/*
 * XREFs of VerifierKeInitializeMutex @ 0x1406C5FDC
 * Callers:
 *     <none>
 * Callees:
 *     ViKeInitializeMutexCommon @ 0x1406C6E88 (ViKeInitializeMutexCommon.c)
 */

__int64 __fastcall VerifierKeInitializeMutex(struct _KMUTANT *a1, ULONG a2)
{
  __int64 v3; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]

  ViKeInitializeMutexCommon(a1, a2);
  return VfDeadlockInitializeResource(a1, v3, retaddr);
}
