/*
 * XREFs of VerifierKeInitializeMutant @ 0x1406C5F80
 * Callers:
 *     <none>
 * Callees:
 *     ViKeInitializeMutantCommon @ 0x1406C6E58 (ViKeInitializeMutantCommon.c)
 *     VfDeadlockAcquireResource @ 0x1406CB730 (VfDeadlockAcquireResource.c)
 *     VfDeadlockInitializeResource @ 0x1406CC308 (VfDeadlockInitializeResource.c)
 */

__int64 __fastcall VerifierKeInitializeMutant(struct _KMUTANT *a1, char a2)
{
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  ViKeInitializeMutantCommon(a1);
  result = VfDeadlockInitializeResource(a1, v4, retaddr);
  if ( a2 )
    return VfDeadlockAcquireResource((_DWORD)a1, 1, (unsigned int)KeGetCurrentThread(), 0, retaddr);
  return result;
}
