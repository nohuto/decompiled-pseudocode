/*
 * XREFs of PsDereferenceImpersonationToken @ 0x1404DB420
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 */

void __stdcall PsDereferenceImpersonationToken(PACCESS_TOKEN ImpersonationToken)
{
  if ( ImpersonationToken )
    ObfDereferenceObject(ImpersonationToken);
}
