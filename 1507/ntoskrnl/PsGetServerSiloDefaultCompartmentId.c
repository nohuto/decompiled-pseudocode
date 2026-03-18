/*
 * XREFs of PsGetServerSiloDefaultCompartmentId @ 0x1406C0B30
 * Callers:
 *     <none>
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140026D98 (PsGetServerSiloGlobals.c)
 */

__int64 __fastcall PsGetServerSiloDefaultCompartmentId(_QWORD *a1)
{
  return *((unsigned int *)PsGetServerSiloGlobals(a1) + 29);
}
