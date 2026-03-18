/*
 * XREFs of RtlGetSuiteMask @ 0x1404DE260
 * Callers:
 *     RtlGetVersion @ 0x1404DE1AC (RtlGetVersion.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14008C610 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400C3CF0 (PsIsCurrentThreadInServerSilo.c)
 */

__int64 RtlGetSuiteMask()
{
  if ( PsIsCurrentThreadInServerSilo() )
    return *((unsigned int *)PsGetCurrentServerSiloGlobals() + 257);
  else
    return MEMORY[0xFFFFF780000002D0];
}
