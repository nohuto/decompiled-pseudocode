/*
 * XREFs of VerifierKeInitializeMutex @ 0x14071202C
 * Callers:
 *     <none>
 * Callees:
 *     ViKeInitializeMutexCommon @ 0x140712ED8 (ViKeInitializeMutexCommon.c)
 */

__int64 __fastcall VerifierKeInitializeMutex(__int64 a1)
{
  __int64 v2; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]

  ViKeInitializeMutexCommon();
  return VfDeadlockInitializeResource(a1, v2, retaddr);
}
