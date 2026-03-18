/*
 * XREFs of Match @ 0x1C0048430
 * Callers:
 *     <none>
 * Callees:
 *     IsCompatableDSDTRevision @ 0x1C001875C (IsCompatableDSDTRevision.c)
 */

__int64 __fastcall Match(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx

  if ( IsCompatableDSDTRevision() )
    return Match_64(v3, a2);
  else
    return Match_32(v3, a2);
}
