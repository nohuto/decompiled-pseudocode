/*
 * XREFs of HUBDESC_ShouldEnforceWin8ValidationImmutable @ 0x1C0028C00
 * Callers:
 *     HUBDESC_InternalValidateCommonDescriptorHeader @ 0x1C0028E50 (HUBDESC_InternalValidateCommonDescriptorHeader.c)
 *     HUBDESC_InternalValidateConfigDescriptor @ 0x1C0029068 (HUBDESC_InternalValidateConfigDescriptor.c)
 *     HUBDESC_InternalValidateLastInterface @ 0x1C0029480 (HUBDESC_InternalValidateLastInterface.c)
 *     HUBDESC_InternalValidateEndpointDescriptor @ 0x1C0029588 (HUBDESC_InternalValidateEndpointDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor @ 0x1C002A3F0 (HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor @ 0x1C002AC78 (HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor.c)
 *     HUBDESC_InternalValidateInterfaceDescriptor @ 0x1C002AF80 (HUBDESC_InternalValidateInterfaceDescriptor.c)
 *     HUBDESC_InternalValidateIADescriptor @ 0x1C002B408 (HUBDESC_InternalValidateIADescriptor.c)
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C002B76C (HUBDESC_ValidateConfigurationDescriptorSet.c)
 *     HUBDESC_InternalValidateContainerIDCapabilityDescriptor @ 0x1C002BADC (HUBDESC_InternalValidateContainerIDCapabilityDescriptor.c)
 *     HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor @ 0x1C002BD38 (HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor.c)
 *     HUBDESC_InternalValidatePlatformCapabilityDescriptor @ 0x1C002BFA0 (HUBDESC_InternalValidatePlatformCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateBillboardCapabilityDescriptor @ 0x1C002C49C (HUBDESC_InternalValidateBillboardCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor @ 0x1C002C6F8 (HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor @ 0x1C002CE30 (HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor @ 0x1C002D2E4 (HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x1C002D690 (HUBDESC_InternalValidateDeviceCapabilityDescriptor.c)
 *     HUBDESC_ValidateMSOSExtendedConfigDescriptor @ 0x1C002E828 (HUBDESC_ValidateMSOSExtendedConfigDescriptor.c)
 *     HUBDESC_Validate20HubDescriptor @ 0x1C002ED18 (HUBDESC_Validate20HubDescriptor.c)
 * Callees:
 *     <none>
 */

bool __fastcall HUBDESC_ShouldEnforceWin8ValidationImmutable(__int64 a1)
{
  return *(_WORD *)a1 > 0x200u || *(_BYTE *)(a1 + 12) != 0;
}
