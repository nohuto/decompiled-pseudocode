/*
 * XREFs of VerifierExAcquireSharedStarveExclusive @ 0x14074BE50
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSharedStarveExclusive @ 0x140052F60 (ExAcquireSharedStarveExclusive.c)
 *     ViResourceAcquireSanityChecks @ 0x14074C588 (ViResourceAcquireSanityChecks.c)
 *     VfDeadlockAcquireResource @ 0x14074EDC4 (VfDeadlockAcquireResource.c)
 */

BOOLEAN __fastcall VerifierExAcquireSharedStarveExclusive(PERESOURCE Resource, BOOLEAN a2)
{
  BOOLEAN v4; // bl
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  ViResourceAcquireSanityChecks((ULONG_PTR)Resource);
  v4 = pXdvExAcquireSharedStarveExclusive(Resource, a2);
  if ( v4 )
    VfDeadlockAcquireResource((_DWORD)Resource, 8, (unsigned int)KeGetCurrentThread(), a2 == 0, retaddr);
  return v4;
}
