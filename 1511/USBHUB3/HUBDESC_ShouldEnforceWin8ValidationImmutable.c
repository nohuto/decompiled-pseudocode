/*
 * XREFs of HUBDESC_ShouldEnforceWin8ValidationImmutable @ 0x1C0028A04
 * Callers:
 *     HUBDESC_InternalValidateCommonDescriptorHeader @ 0x1C0028BF8 (HUBDESC_InternalValidateCommonDescriptorHeader.c)
 *     HUBDESC_InternalValidateConfigDescriptor @ 0x1C0028E10 (HUBDESC_InternalValidateConfigDescriptor.c)
 *     HUBDESC_InternalValidateLastInterface @ 0x1C0029228 (HUBDESC_InternalValidateLastInterface.c)
 *     HUBDESC_InternalValidateEndpointDescriptor @ 0x1C0029330 (HUBDESC_InternalValidateEndpointDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor @ 0x1C002A17C (HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor @ 0x1C002AA04 (HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor.c)
 *     HUBDESC_InternalValidateInterfaceDescriptor @ 0x1C002AD0C (HUBDESC_InternalValidateInterfaceDescriptor.c)
 *     HUBDESC_InternalValidateIADescriptor @ 0x1C002B1B0 (HUBDESC_InternalValidateIADescriptor.c)
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C002B514 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 *     HUBDESC_InternalValidateContainerIDCapabilityDescriptor @ 0x1C002B884 (HUBDESC_InternalValidateContainerIDCapabilityDescriptor.c)
 *     HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor @ 0x1C002BADC (HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor.c)
 *     HUBDESC_InternalValidatePlatformCapabilityDescriptor @ 0x1C002BD44 (HUBDESC_InternalValidatePlatformCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateBillboardCapabilityDescriptor @ 0x1C002C240 (HUBDESC_InternalValidateBillboardCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor @ 0x1C002C49C (HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor @ 0x1C002CBD4 (HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor @ 0x1C002D088 (HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x1C002D434 (HUBDESC_InternalValidateDeviceCapabilityDescriptor.c)
 *     HUBDESC_ValidateMSOSExtendedConfigDescriptor @ 0x1C002E5C8 (HUBDESC_ValidateMSOSExtendedConfigDescriptor.c)
 *     HUBDESC_Validate20HubDescriptor @ 0x1C002EAB8 (HUBDESC_Validate20HubDescriptor.c)
 * Callees:
 *     <none>
 */

bool __fastcall HUBDESC_ShouldEnforceWin8ValidationImmutable(__int64 a1)
{
  return *(_WORD *)a1 > 0x200u || *(_BYTE *)(a1 + 12) != 0;
}
