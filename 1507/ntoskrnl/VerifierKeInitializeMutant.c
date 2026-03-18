/*
 * XREFs of VerifierKeInitializeMutant @ 0x140748210
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeMutant @ 0x1400756B0 (KeInitializeMutant.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140737B44 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VfDeadlockAcquireResource @ 0x14074EDC4 (VfDeadlockAcquireResource.c)
 *     VfDeadlockInitializeResource @ 0x14074FB94 (VfDeadlockInitializeResource.c)
 */

__int64 __fastcall VerifierKeInitializeMutant(PRKMUTANT Mutant, BOOLEAN a2)
{
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  VfUtilSynchronizationObjectSanityChecks((char *)Mutant, 56LL);
  pXdvKeInitializeMutant(Mutant, a2);
  result = VfDeadlockInitializeResource(Mutant, v4, retaddr);
  if ( a2 )
    return VfDeadlockAcquireResource((_DWORD)Mutant, 1, (unsigned int)KeGetCurrentThread(), 0, retaddr);
  return result;
}
