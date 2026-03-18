/*
 * XREFs of PsDereferenceImpersonationToken @ 0x1404B5E58
 * Callers:
 *     VerifierPsDereferenceImpersonationToken @ 0x1406C0BF4 (VerifierPsDereferenceImpersonationToken.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 */

void __stdcall PsDereferenceImpersonationToken(PACCESS_TOKEN ImpersonationToken)
{
  if ( ImpersonationToken )
    ObfDereferenceObject(ImpersonationToken);
}
