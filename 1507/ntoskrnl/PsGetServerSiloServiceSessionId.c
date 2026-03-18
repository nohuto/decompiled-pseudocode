/*
 * XREFs of PsGetServerSiloServiceSessionId @ 0x1406C0B44
 * Callers:
 *     IopCheckSessionDeviceAccess @ 0x1401F6948 (IopCheckSessionDeviceAccess.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140026D98 (PsGetServerSiloGlobals.c)
 */

__int64 __fastcall PsGetServerSiloServiceSessionId(_QWORD *a1)
{
  return *(unsigned int *)PsGetServerSiloGlobals(a1);
}
