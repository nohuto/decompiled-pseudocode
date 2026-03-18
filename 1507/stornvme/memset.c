/*
 * XREFs of memset @ 0x1C000EE00
 * Callers:
 *     NVMeControllerStartFailureEventLog @ 0x1C00010CC (NVMeControllerStartFailureEventLog.c)
 *     ControllerAllocateUncachedExtension @ 0x1C00013BC (ControllerAllocateUncachedExtension.c)
 *     NVMeHwFindAdapter @ 0x1C0001570 (NVMeHwFindAdapter.c)
 *     NVMeHwBuildIo @ 0x1C0001E50 (NVMeHwBuildIo.c)
 *     AdminQueueInitialize @ 0x1C00025D8 (AdminQueueInitialize.c)
 *     AdminQueuesFreeResources @ 0x1C00027F8 (AdminQueuesFreeResources.c)
 *     IoSqToIoCqMapping @ 0x1C00028B0 (IoSqToIoCqMapping.c)
 *     IoQueuesInitialize @ 0x1C0002AC4 (IoQueuesInitialize.c)
 *     GetProcessorGroupInformation @ 0x1C00030C8 (GetProcessorGroupInformation.c)
 *     GetProcessorInformation @ 0x1C00032B0 (GetProcessorInformation.c)
 *     GetInterruptMessageInformation @ 0x1C000364C (GetInterruptMessageInformation.c)
 *     InitializePerfOptions @ 0x1C00038D4 (InitializePerfOptions.c)
 *     IoQueuesCreation @ 0x1C00039EC (IoQueuesCreation.c)
 *     IoQueuesDeletion @ 0x1C0003C44 (IoQueuesDeletion.c)
 *     NVMeQueuesReInit @ 0x1C0004044 (NVMeQueuesReInit.c)
 *     NVMeControllerFilterResouceRequirements @ 0x1C00045A8 (NVMeControllerFilterResouceRequirements.c)
 *     NVMeControllerStop @ 0x1C00048A4 (NVMeControllerStop.c)
 *     NVMeControllerRemove @ 0x1C00049B4 (NVMeControllerRemove.c)
 *     NVMePowerInitialize @ 0x1C0004FE0 (NVMePowerInitialize.c)
 *     SglToPrp @ 0x1C0005F6C (SglToPrp.c)
 *     FormInquiryStandardData @ 0x1C000658C (FormInquiryStandardData.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C00068F4 (FormInquiryDeviceIdentifiersData.c)
 *     ScsiInquiryRequest @ 0x1C0006D50 (ScsiInquiryRequest.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0007190 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     ScsiModeSenseRequest @ 0x1C00073B4 (ScsiModeSenseRequest.c)
 *     LogSenseTemperature @ 0x1C00077F4 (LogSenseTemperature.c)
 *     LogSenseInformationalExceptions @ 0x1C00079FC (LogSenseInformationalExceptions.c)
 *     ScsiLogSenseRequest @ 0x1C0007B8C (ScsiLogSenseRequest.c)
 *     ScsiUnmapRequest @ 0x1C0007E34 (ScsiUnmapRequest.c)
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x1C0008A70 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     FirmwareGetInfo @ 0x1C0008D64 (FirmwareGetInfo.c)
 *     FirmwareDownload @ 0x1C0008F38 (FirmwareDownload.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C0009498 (QueryProtocolInfoIdentifyData.c)
 *     QueryProtocolInfoLogPageData @ 0x1C0009620 (QueryProtocolInfoLogPageData.c)
 *     QueryProtocolInfoFeatureData @ 0x1C000986C (QueryProtocolInfoFeatureData.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C0009E90 (IoctlQueryTemperatureInfoProcess.c)
 *     ProtocolCommandCompletion @ 0x1C000A670 (ProtocolCommandCompletion.c)
 *     ProtocolCommandToNVMe @ 0x1C000A7CC (ProtocolCommandToNVMe.c)
 *     NVMeControllerIdentify @ 0x1C000AFA0 (NVMeControllerIdentify.c)
 *     NVMeNameSpaceIdentify @ 0x1C000B104 (NVMeNameSpaceIdentify.c)
 *     NVMeGetCommandEffectsLog @ 0x1C000B448 (NVMeGetCommandEffectsLog.c)
 *     NVMeSetIoQueueCount @ 0x1C000B6F8 (NVMeSetIoQueueCount.c)
 *     NVMeSetInterruptCoalescing @ 0x1C000B874 (NVMeSetInterruptCoalescing.c)
 *     NVMeSetArbitration @ 0x1C000B974 (NVMeSetArbitration.c)
 *     NVMeGetTemperatureThreshold @ 0x1C000BAD8 (NVMeGetTemperatureThreshold.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C000BC64 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeSetAutoPowerStateTransition @ 0x1C000BDA4 (NVMeSetAutoPowerStateTransition.c)
 *     NVMeSetPowerState @ 0x1C000BE78 (NVMeSetPowerState.c)
 *     NVMeConfigAsyncEvent @ 0x1C000BF40 (NVMeConfigAsyncEvent.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C000C170 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeIssueAsyncEventCommand @ 0x1C000C3E0 (NVMeIssueAsyncEventCommand.c)
 *     NVMeMapError @ 0x1C000CE84 (NVMeMapError.c)
 *     NVMeSetSenseData @ 0x1C000D36C (NVMeSetSenseData.c)
 *     ReadMultiSzRegistryValueAndCompareId @ 0x1C000D5EC (ReadMultiSzRegistryValueAndCompareId.c)
 *     GetRegistrySettings @ 0x1C000D7E4 (GetRegistrySettings.c)
 *     GsDriverEntry @ 0x1C0014000 (GsDriverEntry.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  size_t v4; // r9
  size_t i; // r8
  unsigned int v6; // ecx
  _QWORD *v7; // rcx
  size_t v8; // r10
  size_t j; // r8

  result = a1;
  if ( Size < 8 )
  {
mset20:
    for ( i = Size & 7; i; --i )
      *((char *)a1 + i - 1) = Val;
    return result;
  }
  *(_QWORD *)&Val = 0x101010101010101LL * (unsigned __int8)Val;
  if ( Size < 0x47 )
  {
    v4 = Size & 0x78;
    a1 = (char *)a1 + (Size & 0xFFFFFFFFFFFFFFF8uLL);
    do
    {
      *(_QWORD *)((char *)result + v4 - 8) = *(_QWORD *)&Val;
      v4 -= 8LL;
    }
    while ( v4 );
    goto mset20;
  }
  v6 = -(int)a1 & 7;
  if ( v6 )
  {
    Size -= v6;
    *(_QWORD *)result = *(_QWORD *)&Val;
  }
  v7 = (char *)result + v6;
  v8 = Size >> 6;
  if ( ((Size >> 3) & 7) != 0 )
    return (void *)((__int64 (__fastcall *)(_QWORD *, _QWORD))((char *)&loc_1C000EEBD + 4 * (8 - ((Size >> 3) & 7)) + 2))(
                     &v7[((Size >> 3) & 7) - 8],
                     *(_QWORD *)&Val);
  do
  {
    *v7 = *(_QWORD *)&Val;
    v7[1] = *(_QWORD *)&Val;
    v7[2] = *(_QWORD *)&Val;
    v7[3] = *(_QWORD *)&Val;
    v7[4] = *(_QWORD *)&Val;
    v7[5] = *(_QWORD *)&Val;
    v7[6] = *(_QWORD *)&Val;
    v7[7] = *(_QWORD *)&Val;
    v7 += 8;
    --v8;
  }
  while ( v8 );
  for ( j = Size & 7; j; --j )
    *((_BYTE *)v7 + j - 1) = Val;
  return result;
}
