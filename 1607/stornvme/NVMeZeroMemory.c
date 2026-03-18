/*
 * XREFs of NVMeZeroMemory @ 0x1C000505C
 * Callers:
 *     ControllerAllocateUncachedExtension @ 0x1C00043E8 (ControllerAllocateUncachedExtension.c)
 *     NVMeHwFindAdapter @ 0x1C00048B0 (NVMeHwFindAdapter.c)
 *     AdminQueueInitialize @ 0x1C0005094 (AdminQueueInitialize.c)
 *     CompletionQueueReInit @ 0x1C00052A4 (CompletionQueueReInit.c)
 *     GetInterruptMessageInformation @ 0x1C0005448 (GetInterruptMessageInformation.c)
 *     GetProcessorGroupInformation @ 0x1C0005670 (GetProcessorGroupInformation.c)
 *     GetProcessorInformation @ 0x1C00057E8 (GetProcessorInformation.c)
 *     IoQueuesInitialize @ 0x1C0005EFC (IoQueuesInitialize.c)
 *     IoSqToIoCqMapping @ 0x1C00063A0 (IoSqToIoCqMapping.c)
 *     NVMeControllerFilterResouceRequirements @ 0x1C0006AC8 (NVMeControllerFilterResouceRequirements.c)
 *     NVMeInitHostMemoryBuffer @ 0x1C0007664 (NVMeInitHostMemoryBuffer.c)
 *     NVMePowerInitialize @ 0x1C0007AD4 (NVMePowerInitialize.c)
 *     SubmissionQueueReInit @ 0x1C00087C8 (SubmissionQueueReInit.c)
 *     FirmwareDownload @ 0x1C0008A50 (FirmwareDownload.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C0008FC4 (FormInquiryDeviceIdentifiersData.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C0009954 (IoctlQueryTemperatureInfoProcess.c)
 *     LogSenseInformationalExceptions @ 0x1C0009D30 (LogSenseInformationalExceptions.c)
 *     LogSenseSupportedLogPages @ 0x1C0009E7C (LogSenseSupportedLogPages.c)
 *     LogSenseTemperature @ 0x1C0009EF4 (LogSenseTemperature.c)
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x1C000A460 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C000A820 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     ProtocolCommandToNVMe @ 0x1C000AD38 (ProtocolCommandToNVMe.c)
 *     QueryProtocolInfoFeatureData @ 0x1C000B054 (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoLogPageData @ 0x1C000B420 (QueryProtocolInfoLogPageData.c)
 *     ScsiInquiryRequest @ 0x1C000B970 (ScsiInquiryRequest.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C000C870 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C000CC78 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeMapError @ 0x1C000D604 (NVMeMapError.c)
 *     NVMeNameSpaceIdentify @ 0x1C000DA70 (NVMeNameSpaceIdentify.c)
 *     NVMeSetSenseData @ 0x1C000E5FC (NVMeSetSenseData.c)
 *     GetRegistrySettings @ 0x1C000EF68 (GetRegistrySettings.c)
 *     ReadMultiSzRegistryValueAndCompareId @ 0x1C000FA6C (ReadMultiSzRegistryValueAndCompareId.c)
 *     WMultiStringToAscii @ 0x1C000FC34 (WMultiStringToAscii.c)
 * Callees:
 *     memset @ 0x1C0003180 (memset.c)
 */

void *__fastcall NVMeZeroMemory(void *a1, unsigned int a2)
{
  unsigned int v2; // edx
  void *result; // rax

  if ( (a2 & 3) != 0 )
  {
    if ( a2 )
      return memset(a1, 0, a2);
  }
  else
  {
    v2 = a2 >> 2;
    if ( v2 )
      return memset(a1, 0, 4LL * v2);
  }
  return result;
}
