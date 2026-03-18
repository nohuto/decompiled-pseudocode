/*
 * XREFs of VerifierExAcquireSharedWaitForExclusive @ 0x14074BEF8
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSharedWaitForExclusive @ 0x14012EDB8 (ExAcquireSharedWaitForExclusive.c)
 *     ViResourceAcquireSanityChecks @ 0x14074C588 (ViResourceAcquireSanityChecks.c)
 *     VfDeadlockAcquireResource @ 0x14074EDC4 (VfDeadlockAcquireResource.c)
 */

BOOLEAN __fastcall VerifierExAcquireSharedWaitForExclusive(PERESOURCE Resource, BOOLEAN a2)
{
  BOOLEAN v4; // bl
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  ViResourceAcquireSanityChecks((ULONG_PTR)Resource);
  v4 = pXdvExAcquireSharedWaitForExclusive(Resource, a2);
  if ( v4 )
    VfDeadlockAcquireResource((_DWORD)Resource, 8, (unsigned int)KeGetCurrentThread(), a2 == 0, retaddr);
  return v4;
}
