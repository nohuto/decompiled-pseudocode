/*
 * XREFs of VerifierExAcquireResourceExclusiveLiteNoReboot @ 0x1406C9178
 * Callers:
 *     <none>
 * Callees:
 *     ViResourceAcquireSanityChecks @ 0x1406C98F4 (ViResourceAcquireSanityChecks.c)
 */

BOOLEAN __fastcall VerifierExAcquireResourceExclusiveLiteNoReboot(PERESOURCE Resource, BOOLEAN a2)
{
  ViResourceAcquireSanityChecks((ULONG_PTR)Resource);
  return pXdvExAcquireResourceExclusiveLite(Resource, a2);
}
