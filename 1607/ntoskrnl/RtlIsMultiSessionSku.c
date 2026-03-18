/*
 * XREFs of RtlIsMultiSessionSku @ 0x1405037BC
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x140132358 (OpenGlobalizationUserSettingsKey.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1405037E4 (SepIsImpersonationAllowedDueToCapability.c)
 *     PopPowerInformationInternal @ 0x14051D314 (PopPowerInformationInternal.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x14056F854 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     RtlCapabilityCheck @ 0x1406836A4 (RtlCapabilityCheck.c)
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14008C610 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400C3CF0 (PsIsCurrentThreadInServerSilo.c)
 */

char RtlIsMultiSessionSku()
{
  int v0; // eax

  if ( PsIsCurrentThreadInServerSilo() )
    LOBYTE(v0) = *((_BYTE *)PsGetCurrentServerSiloGlobals() + 1032);
  else
    return (MEMORY[0xFFFFF780000002F0] >> 8) & 1;
  return v0;
}
