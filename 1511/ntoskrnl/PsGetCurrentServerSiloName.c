/*
 * XREFs of PsGetCurrentServerSiloName @ 0x14063F730
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14011F74C (PsGetCurrentServerSiloGlobals.c)
 */

const wchar_t *PsGetCurrentServerSiloName()
{
  _WORD *v0; // rax
  const wchar_t *v1; // rcx

  v0 = (char *)PsGetCurrentServerSiloGlobals() + 8;
  v1 = L"$&";
  if ( *v0 )
    return v0;
  return v1;
}
