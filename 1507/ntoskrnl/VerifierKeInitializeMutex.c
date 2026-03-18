/*
 * XREFs of VerifierKeInitializeMutex @ 0x1407482A4
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeMutex @ 0x1400756A4 (KeInitializeMutex.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140737B44 (VfUtilSynchronizationObjectSanityChecks.c)
 */

__int64 __fastcall VerifierKeInitializeMutex(PRKMUTEX Mutex, ULONG Level)
{
  __int64 v4; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]

  VfUtilSynchronizationObjectSanityChecks((char *)Mutex, 56LL);
  pXdvKeInitializeMutex(Mutex, Level);
  return VfDeadlockInitializeResource(Mutex, v4, retaddr);
}
