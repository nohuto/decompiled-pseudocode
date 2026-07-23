/*
 * XREFs of RtlGetSuiteMask @ 0x1404C1864
 * Callers:
 *     RtlGetVersion @ 0x1404C17B0 (RtlGetVersion.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14008BD70 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400C1B90 (PsIsCurrentThreadInServerSilo.c)
 */

ULONG RtlGetSuiteMask(void)
{
  if ( PsIsCurrentThreadInServerSilo() )
    return *((_DWORD *)PsGetCurrentServerSiloGlobals() + 257);
  else
    return MEMORY[0xFFFFF780000002D0];
}
