/*
 * XREFs of Template_p @ 0x1C000630C
 * Callers:
 *     HUBPARENT_ResetHub @ 0x1C0006BF0 (HUBPARENT_ResetHub.c)
 *     HUBHSM_CheckingIfResetRecoveryHasBeenInvokedTooManyTimes @ 0x1C00073B0 (HUBHSM_CheckingIfResetRecoveryHasBeenInvokedTooManyTimes.c)
 *     HUBHSM_NotifyingHubResumeWithResetToDevicesOnFailure @ 0x1C0007870 (HUBHSM_NotifyingHubResumeWithResetToDevicesOnFailure.c)
 *     HUBHSM_WaitingForPortsToAcquireReferenceOnResumeWithReset @ 0x1C00081E0 (HUBHSM_WaitingForPortsToAcquireReferenceOnResumeWithReset.c)
 *     HUBFDO_EvtDeviceCleanupCallback @ 0x1C000B130 (HUBFDO_EvtDeviceCleanupCallback.c)
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C0013BC0 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 *     HUBPDO_EvtDeviceCleanup @ 0x1C0015200 (HUBPDO_EvtDeviceCleanup.c)
 *     HUBDSM_ValidatingMSOSContainerIdDescriptor @ 0x1C001AE70 (HUBDSM_ValidatingMSOSContainerIdDescriptor.c)
 *     HUBDSM_ValidatingMSOSDescriptor @ 0x1C001AFF0 (HUBDSM_ValidatingMSOSDescriptor.c)
 *     HUBDSM_ValidatingMSOSExtendedConfigDescriptor @ 0x1C001B0D0 (HUBDSM_ValidatingMSOSExtendedConfigDescriptor.c)
 *     HUBDSM_ValidatingAndLoggingAlternateModeStringDescriptor @ 0x1C001B990 (HUBDSM_ValidatingAndLoggingAlternateModeStringDescriptor.c)
 *     HUBDSM_ValidatingAndLoggingBillboardStringDescriptor @ 0x1C001BB10 (HUBDSM_ValidatingAndLoggingBillboardStringDescriptor.c)
 *     HUBDSM_ValidatingMsOs20DescriptorSetIfPresent @ 0x1C001BC90 (HUBDSM_ValidatingMsOs20DescriptorSetIfPresent.c)
 *     HUBDSM_ValidatingDeviceQualifierDescriptor @ 0x1C001BEB0 (HUBDSM_ValidatingDeviceQualifierDescriptor.c)
 *     HUBDSM_ValidatingMSOSExtendedPropertyDescriptorHeader @ 0x1C001D880 (HUBDSM_ValidatingMSOSExtendedPropertyDescriptorHeader.c)
 *     HUBDTX_ValidateAndCacheBOSDescriptor @ 0x1C0022D90 (HUBDTX_ValidateAndCacheBOSDescriptor.c)
 *     HUBDTX_ValidateAndCacheBOSDescriptorHeader @ 0x1C00231AC (HUBDTX_ValidateAndCacheBOSDescriptorHeader.c)
 *     HUBDTX_ValidateAndCacheConfigDescriptor @ 0x1C0023774 (HUBDTX_ValidateAndCacheConfigDescriptor.c)
 *     HUBDTX_ValidateAndCacheDeviceDescriptor @ 0x1C0023C0C (HUBDTX_ValidateAndCacheDeviceDescriptor.c)
 *     HUBDTX_ValidateFirstDeviceDescriptorFor20 @ 0x1C0023E4C (HUBDTX_ValidateFirstDeviceDescriptorFor20.c)
 *     HUBDTX_ValidateAndCacheLanguageIdStringDescriptor @ 0x1C0024034 (HUBDTX_ValidateAndCacheLanguageIdStringDescriptor.c)
 *     HUBDTX_ValidateAndCacheMSOSContainerIdDescriptorHeader @ 0x1C00241F8 (HUBDTX_ValidateAndCacheMSOSContainerIdDescriptorHeader.c)
 *     HUBDTX_ValidateAndCacheMSOSExtendedConfigDescriptorHeader @ 0x1C0024524 (HUBDTX_ValidateAndCacheMSOSExtendedConfigDescriptorHeader.c)
 *     HUBDTX_ValidateAndCacheProductIdStringDescriptor @ 0x1C002473C (HUBDTX_ValidateAndCacheProductIdStringDescriptor.c)
 *     HUBDTX_ValidateAndCacheSerialNumberStringDescriptor @ 0x1C0024900 (HUBDTX_ValidateAndCacheSerialNumberStringDescriptor.c)
 *     HUBMISC_LogDeviceReEnumeration @ 0x1C00261F8 (HUBMISC_LogDeviceReEnumeration.c)
 *     HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax @ 0x1C0026280 (HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax.c)
 *     HUBMISC_ValidateAndCacheMSOSExtendedPropertyDescriptor @ 0x1C00297F8 (HUBMISC_ValidateAndCacheMSOSExtendedPropertyDescriptor.c)
 *     HUBMISC_LogResetTimeout @ 0x1C002A6F4 (HUBMISC_LogResetTimeout.c)
 *     HUBIDLE_AddEvent @ 0x1C0032E64 (HUBIDLE_AddEvent.c)
 *     HUBFDO_EvtDevicePrepareHardware @ 0x1C0066B50 (HUBFDO_EvtDevicePrepareHardware.c)
 *     HUBFDO_EvtDeviceReleaseHardware @ 0x1C00672E0 (HUBFDO_EvtDeviceReleaseHardware.c)
 *     HUBFDO_EvtDeviceSurpriseRemoval @ 0x1C00674D0 (HUBFDO_EvtDeviceSurpriseRemoval.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C006A240 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBPDO_EvtDeviceReleaseHardware @ 0x1C006ABC0 (HUBPDO_EvtDeviceReleaseHardware.c)
 *     HUBPDO_EvtDeviceSurpriseRemoval @ 0x1C006B140 (HUBPDO_EvtDeviceSurpriseRemoval.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0037C60 (__security_check_cookie.c)
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
