/*
 * XREFs of RtlGetCurrentServiceSessionId @ 0x14050D124
 * Callers:
 *     <none>
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140102754 (PsGetServerSiloGlobals.c)
 */

__int64 RtlGetCurrentServiceSessionId()
{
  return *(unsigned int *)PsGetServerSiloGlobals((_QWORD *)0xFFFFFFFFFFFFFFFFLL);
}
