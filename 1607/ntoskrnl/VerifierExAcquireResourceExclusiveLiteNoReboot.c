/*
 * XREFs of VerifierExAcquireResourceExclusiveLiteNoReboot @ 0x140717B44
 * Callers:
 *     <none>
 * Callees:
 *     ViResourceAcquireSanityChecks @ 0x140718304 (ViResourceAcquireSanityChecks.c)
 */

__int64 __fastcall VerifierExAcquireResourceExclusiveLiteNoReboot(ULONG_PTR a1, char a2)
{
  __int64 v4; // rdx

  ViResourceAcquireSanityChecks(a1);
  LOBYTE(v4) = a2;
  return pXdvExAcquireResourceExclusiveLite(a1, v4);
}
