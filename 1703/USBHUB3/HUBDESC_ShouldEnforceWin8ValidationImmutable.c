/*
 * XREFs of HUBDESC_ShouldEnforceWin8ValidationImmutable @ 0x1C002B6AC
 * Callers:
 *     HUBDESC_InternalValidateCommonDescriptorHeader @ 0x1C002B8B4 (HUBDESC_InternalValidateCommonDescriptorHeader.c)
 *     HUBDESC_InternalValidateConfigDescriptor @ 0x1C002BAD0 (HUBDESC_InternalValidateConfigDescriptor.c)
 *     HUBDESC_InternalValidateLastInterface @ 0x1C002BEF4 (HUBDESC_InternalValidateLastInterface.c)
 *     HUBDESC_InternalValidateEndpointDescriptor @ 0x1C002C004 (HUBDESC_InternalValidateEndpointDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor @ 0x1C002CE54 (HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor @ 0x1C002D6E0 (HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor.c)
 *     HUBDESC_InternalValidateInterfaceDescriptor @ 0x1C002D9EC (HUBDESC_InternalValidateInterfaceDescriptor.c)
 *     HUBDESC_InternalValidateIADescriptor @ 0x1C002DEA8 (HUBDESC_InternalValidateIADescriptor.c)
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C002E210 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 *     HUBDESC_InternalValidateContainerIDCapabilityDescriptor @ 0x1C002E588 (HUBDESC_InternalValidateContainerIDCapabilityDescriptor.c)
 *     HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor @ 0x1C002E7E8 (HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor.c)
 *     HUBDESC_InternalValidatePlatformCapabilityDescriptor @ 0x1C002EA58 (HUBDESC_InternalValidatePlatformCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateBillboardCapabilityDescriptor @ 0x1C002EF5C (HUBDESC_InternalValidateBillboardCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor @ 0x1C002F35C (HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor @ 0x1C002FA98 (HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor @ 0x1C002FF54 (HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x1C0030304 (HUBDESC_InternalValidateDeviceCapabilityDescriptor.c)
 *     HUBDESC_ValidateMSOSExtendedConfigDescriptor @ 0x1C0031540 (HUBDESC_ValidateMSOSExtendedConfigDescriptor.c)
 *     HUBDESC_Validate20HubDescriptor @ 0x1C0031A38 (HUBDESC_Validate20HubDescriptor.c)
 * Callees:
 *     <none>
 */

bool __fastcall HUBDESC_ShouldEnforceWin8ValidationImmutable(__int64 a1)
{
  return *(_WORD *)a1 > 0x200u || *(_BYTE *)(a1 + 12) != 0;
}
