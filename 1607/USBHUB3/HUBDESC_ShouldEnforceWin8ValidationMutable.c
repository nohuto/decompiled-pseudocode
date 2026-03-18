/*
 * XREFs of HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x1C0028C24
 * Callers:
 *     HUBDESC_InternalValidateEndpointDescriptor @ 0x1C0029588 (HUBDESC_InternalValidateEndpointDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor @ 0x1C002A3F0 (HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor @ 0x1C002AC78 (HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor.c)
 *     HUBDESC_InternalValidateContainerIDCapabilityDescriptor @ 0x1C002BADC (HUBDESC_InternalValidateContainerIDCapabilityDescriptor.c)
 *     HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor @ 0x1C002BD38 (HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateBOSDescriptor @ 0x1C002DAE4 (HUBDESC_InternalValidateBOSDescriptor.c)
 *     HUBDESC_ValidateDeviceDescriptor @ 0x1C002E3F4 (HUBDESC_ValidateDeviceDescriptor.c)
 *     HUBDESC_Validate30HubDescriptor @ 0x1C002E9E8 (HUBDESC_Validate30HubDescriptor.c)
 *     HUBDESC_Validate20HubDescriptor @ 0x1C002ED18 (HUBDESC_Validate20HubDescriptor.c)
 * Callees:
 *     <none>
 */

bool __fastcall HUBDESC_ShouldEnforceWin8ValidationMutable(__int64 a1)
{
  return (unsigned __int16)(*(_WORD *)a1 - 768) <= 0x10u
      || (unsigned __int16)(*(_WORD *)a1 - 513) <= 0xFu
      || *(_BYTE *)(a1 + 12) != 0;
}
