/*
 * XREFs of RtlIsMultiSessionSku @ 0x1404E674C
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x1401328C8 (OpenGlobalizationUserSettingsKey.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1404E6774 (SepIsImpersonationAllowedDueToCapability.c)
 *     PopPowerInformationInternal @ 0x140500704 (PopPowerInformationInternal.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x14056FD94 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     RtlCapabilityCheck @ 0x140683788 (RtlCapabilityCheck.c)
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14008BD70 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400C1B90 (PsIsCurrentThreadInServerSilo.c)
 */

BOOLEAN RtlIsMultiSessionSku(void)
{
  int v0; // eax

  if ( PsIsCurrentThreadInServerSilo() )
    LOBYTE(v0) = *((_BYTE *)PsGetCurrentServerSiloGlobals() + 1032);
  else
    return (MEMORY[0xFFFFF780000002F0] >> 8) & 1;
  return v0;
}
