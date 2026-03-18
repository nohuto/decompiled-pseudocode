/*
 * XREFs of VerifierExAcquireResourceSharedLite @ 0x1406C91A8
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     ViResourceAcquireSanityChecks @ 0x1406C98F4 (ViResourceAcquireSanityChecks.c)
 *     VfDeadlockAcquireResource @ 0x1406CB730 (VfDeadlockAcquireResource.c)
 */

BOOLEAN __fastcall VerifierExAcquireResourceSharedLite(PERESOURCE Resource, BOOLEAN a2)
{
  BOOLEAN v4; // bl
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  ViResourceAcquireSanityChecks((ULONG_PTR)Resource);
  v4 = pXdvExAcquireResourceSharedLite(Resource, a2);
  if ( v4 )
    VfDeadlockAcquireResource((_DWORD)Resource, 8, (unsigned int)KeGetCurrentThread(), a2 == 0, retaddr);
  return v4;
}
