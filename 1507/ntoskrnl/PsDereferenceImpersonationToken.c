/*
 * XREFs of PsDereferenceImpersonationToken @ 0x140550534
 * Callers:
 *     VerifierPsDereferenceImpersonationToken @ 0x140742434 (VerifierPsDereferenceImpersonationToken.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 */

void __stdcall PsDereferenceImpersonationToken(PACCESS_TOKEN ImpersonationToken)
{
  if ( ImpersonationToken )
    ObfDereferenceObject(ImpersonationToken);
}
