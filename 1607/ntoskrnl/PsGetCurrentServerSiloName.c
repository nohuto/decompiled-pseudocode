/*
 * XREFs of PsGetCurrentServerSiloName @ 0x14067DEFC
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14008C610 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 *PsGetCurrentServerSiloName()
{
  _WORD *v0; // rax
  __int64 *v1; // rcx

  v0 = (char *)PsGetCurrentServerSiloGlobals() + 968;
  v1 = &PspDefaultSiloName;
  if ( *v0 )
    return (__int64 *)v0;
  return v1;
}
