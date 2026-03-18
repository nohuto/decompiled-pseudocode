/*
 * XREFs of VerifierExAcquireResourceExclusiveLite @ 0x1406C9100
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ViResourceAcquireSanityChecks @ 0x1406C98F4 (ViResourceAcquireSanityChecks.c)
 *     VfDeadlockAcquireResource @ 0x1406CB730 (VfDeadlockAcquireResource.c)
 */

BOOLEAN __fastcall VerifierExAcquireResourceExclusiveLite(PERESOURCE Resource, BOOLEAN a2)
{
  BOOLEAN v4; // bl
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  ViResourceAcquireSanityChecks((ULONG_PTR)Resource);
  v4 = pXdvExAcquireResourceExclusiveLite(Resource, a2);
  if ( v4 )
    VfDeadlockAcquireResource((_DWORD)Resource, 8, (unsigned int)KeGetCurrentThread(), a2 == 0, retaddr);
  return v4;
}
