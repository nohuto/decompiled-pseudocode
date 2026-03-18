/*
 * XREFs of HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x1C002B6D4
 * Callers:
 *     HUBDESC_InternalValidateEndpointDescriptor @ 0x1C002C004 (HUBDESC_InternalValidateEndpointDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor @ 0x1C002CE54 (HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor @ 0x1C002D6E0 (HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor.c)
 *     HUBDESC_InternalValidateContainerIDCapabilityDescriptor @ 0x1C002E588 (HUBDESC_InternalValidateContainerIDCapabilityDescriptor.c)
 *     HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor @ 0x1C002E7E8 (HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateBOSDescriptor @ 0x1C00307B8 (HUBDESC_InternalValidateBOSDescriptor.c)
 *     HUBDESC_ValidateDeviceDescriptor @ 0x1C00310F0 (HUBDESC_ValidateDeviceDescriptor.c)
 *     HUBDESC_Validate30HubDescriptor @ 0x1C0031708 (HUBDESC_Validate30HubDescriptor.c)
 *     HUBDESC_Validate20HubDescriptor @ 0x1C0031A38 (HUBDESC_Validate20HubDescriptor.c)
 * Callees:
 *     <none>
 */

bool __fastcall HUBDESC_ShouldEnforceWin8ValidationMutable(__int64 a1)
{
  return (unsigned __int16)(*(_WORD *)a1 - 768) <= 0x10u
      || (unsigned __int16)(*(_WORD *)a1 - 513) <= 0xFu
      || *(_BYTE *)(a1 + 12) != 0;
}
