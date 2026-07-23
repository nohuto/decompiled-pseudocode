/*
 * XREFs of RtlGetCurrentServiceSessionId @ 0x14050D124
 * Callers:
 *     <none>
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140102754 (PsGetServerSiloGlobals.c)
 */

ULONG RtlGetCurrentServiceSessionId(void)
{
  return *(_DWORD *)PsGetServerSiloGlobals((_QWORD *)0xFFFFFFFFFFFFFFFFLL);
}
