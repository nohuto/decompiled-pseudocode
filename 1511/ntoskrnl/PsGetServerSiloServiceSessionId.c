/*
 * XREFs of PsGetServerSiloServiceSessionId @ 0x14063F7A8
 * Callers:
 *     IopCheckSessionDeviceAccess @ 0x1401BB60C (IopCheckSessionDeviceAccess.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140102754 (PsGetServerSiloGlobals.c)
 */

__int64 __fastcall PsGetServerSiloServiceSessionId(_QWORD *a1)
{
  return *(unsigned int *)PsGetServerSiloGlobals(a1);
}
