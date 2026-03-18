/*
 * XREFs of Template_p @ 0x1C0006168
 * Callers:
 *     HUBPARENT_ResetHub @ 0x1C0006A1C (HUBPARENT_ResetHub.c)
 *     HUBHSM_CheckingIfResetRecoveryHasBeenInvokedTooManyTimes @ 0x1C0007190 (HUBHSM_CheckingIfResetRecoveryHasBeenInvokedTooManyTimes.c)
 *     HUBHSM_NotifyingHubResumeWithResetToDevicesOnFailure @ 0x1C00075B0 (HUBHSM_NotifyingHubResumeWithResetToDevicesOnFailure.c)
 *     HUBHSM_WaitingForPortsToAcquireReferenceOnResumeWithReset @ 0x1C0007E50 (HUBHSM_WaitingForPortsToAcquireReferenceOnResumeWithReset.c)
 *     HUBFDO_EvtDeviceCleanupCallback @ 0x1C000ACE0 (HUBFDO_EvtDeviceCleanupCallback.c)
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C0012AB0 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 *     HUBPDO_EvtDeviceCleanup @ 0x1C0014050 (HUBPDO_EvtDeviceCleanup.c)
 *     HUBDSM_ValidatingMSOSContainerIdDescriptor @ 0x1C00192C0 (HUBDSM_ValidatingMSOSContainerIdDescriptor.c)
 *     HUBDSM_ValidatingMSOSDescriptor @ 0x1C0019420 (HUBDSM_ValidatingMSOSDescriptor.c)
 *     HUBDSM_ValidatingMSOSExtendedConfigDescriptor @ 0x1C0019500 (HUBDSM_ValidatingMSOSExtendedConfigDescriptor.c)
 *     HUBDSM_ValidatingAndLoggingAlternateModeStringDescriptor @ 0x1C0019CF0 (HUBDSM_ValidatingAndLoggingAlternateModeStringDescriptor.c)
 *     HUBDSM_ValidatingAndLoggingBillboardStringDescriptor @ 0x1C0019E70 (HUBDSM_ValidatingAndLoggingBillboardStringDescriptor.c)
 *     HUBDSM_ValidatingMsOs20DescriptorSetIfPresent @ 0x1C0019FE0 (HUBDSM_ValidatingMsOs20DescriptorSetIfPresent.c)
 *     HUBDSM_ValidatingDeviceQualifierDescriptor @ 0x1C001A1F0 (HUBDSM_ValidatingDeviceQualifierDescriptor.c)
 *     HUBDSM_ValidatingMSOSExtendedPropertyDescriptorHeader @ 0x1C001B980 (HUBDSM_ValidatingMSOSExtendedPropertyDescriptorHeader.c)
 *     HUBDTX_ValidateAndCacheBOSDescriptor @ 0x1C0020BD4 (HUBDTX_ValidateAndCacheBOSDescriptor.c)
 *     HUBDTX_ValidateAndCacheBOSDescriptorHeader @ 0x1C0020FB0 (HUBDTX_ValidateAndCacheBOSDescriptorHeader.c)
 *     HUBDTX_ValidateAndCacheConfigDescriptor @ 0x1C0021554 (HUBDTX_ValidateAndCacheConfigDescriptor.c)
 *     HUBDTX_ValidateAndCacheDeviceDescriptor @ 0x1C0021974 (HUBDTX_ValidateAndCacheDeviceDescriptor.c)
 *     HUBDTX_ValidateFirstDeviceDescriptorFor20 @ 0x1C0021BAC (HUBDTX_ValidateFirstDeviceDescriptorFor20.c)
 *     HUBDTX_ValidateAndCacheLanguageIdStringDescriptor @ 0x1C0021D8C (HUBDTX_ValidateAndCacheLanguageIdStringDescriptor.c)
 *     HUBDTX_ValidateAndCacheMSOSContainerIdDescriptorHeader @ 0x1C0021F48 (HUBDTX_ValidateAndCacheMSOSContainerIdDescriptorHeader.c)
 *     HUBDTX_ValidateAndCacheMSOSExtendedConfigDescriptorHeader @ 0x1C0022268 (HUBDTX_ValidateAndCacheMSOSExtendedConfigDescriptorHeader.c)
 *     HUBDTX_ValidateAndCacheProductIdStringDescriptor @ 0x1C0022478 (HUBDTX_ValidateAndCacheProductIdStringDescriptor.c)
 *     HUBDTX_ValidateAndCacheSerialNumberStringDescriptor @ 0x1C0022634 (HUBDTX_ValidateAndCacheSerialNumberStringDescriptor.c)
 *     HUBMISC_LogDeviceReEnumeration @ 0x1C0023D4C (HUBMISC_LogDeviceReEnumeration.c)
 *     HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax @ 0x1C0023DD0 (HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax.c)
 *     HUBMISC_ValidateAndCacheMSOSExtendedPropertyDescriptor @ 0x1C00272B8 (HUBMISC_ValidateAndCacheMSOSExtendedPropertyDescriptor.c)
 *     HUBMISC_LogResetTimeout @ 0x1C0027E60 (HUBMISC_LogResetTimeout.c)
 *     HUBIDLE_AddEvent @ 0x1C0030148 (HUBIDLE_AddEvent.c)
 *     HUBFDO_EvtDevicePrepareHardware @ 0x1C0063E60 (HUBFDO_EvtDevicePrepareHardware.c)
 *     HUBFDO_EvtDeviceReleaseHardware @ 0x1C00645E0 (HUBFDO_EvtDeviceReleaseHardware.c)
 *     HUBFDO_EvtDeviceSurpriseRemoval @ 0x1C00647D0 (HUBFDO_EvtDeviceSurpriseRemoval.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C00674F0 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBPDO_EvtDeviceReleaseHardware @ 0x1C0067E70 (HUBPDO_EvtDeviceReleaseHardware.c)
 *     HUBPDO_EvtDeviceSurpriseRemoval @ 0x1C00683D0 (HUBPDO_EvtDeviceSurpriseRemoval.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0034DE0 (__security_check_cookie.c)
 */

NTSTATUS Template_p(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-28h] BYREF
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  va_copy((va_list)v4.Ptr, va);
  v4.Reserved = 0;
  v4.Size = 8;
  return EtwWrite(Microsoft_Windows_USB_USBHUB3Handle, a2, a3, 1u, &v4);
}
