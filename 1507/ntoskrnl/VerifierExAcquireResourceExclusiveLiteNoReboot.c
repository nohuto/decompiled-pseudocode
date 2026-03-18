/*
 * XREFs of VerifierExAcquireResourceExclusiveLiteNoReboot @ 0x14074BD78
 * Callers:
 *     <none>
 * Callees:
 *     ViResourceAcquireSanityChecks @ 0x14074C588 (ViResourceAcquireSanityChecks.c)
 */

BOOLEAN __fastcall VerifierExAcquireResourceExclusiveLiteNoReboot(PERESOURCE Resource, BOOLEAN a2)
{
  ViResourceAcquireSanityChecks((ULONG_PTR)Resource);
  return pXdvExAcquireResourceExclusiveLite(Resource, a2);
}
