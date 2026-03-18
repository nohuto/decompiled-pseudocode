/*
 * XREFs of memset @ 0x1C000EF40
 * Callers:
 *     NVMeControllerStartFailureEventLog @ 0x1C00010CC (NVMeControllerStartFailureEventLog.c)
 *     ControllerAllocateUncachedExtension @ 0x1C00013BC (ControllerAllocateUncachedExtension.c)
 *     NVMeHwFindAdapter @ 0x1C0001570 (NVMeHwFindAdapter.c)
 *     NVMeHwBuildIo @ 0x1C0001F40 (NVMeHwBuildIo.c)
 *     AdminQueueInitialize @ 0x1C00026C8 (AdminQueueInitialize.c)
 *     AdminQueuesFreeResources @ 0x1C00028E8 (AdminQueuesFreeResources.c)
 *     IoSqToIoCqMapping @ 0x1C00029A0 (IoSqToIoCqMapping.c)
 *     IoQueuesInitialize @ 0x1C0002BB4 (IoQueuesInitialize.c)
 *     GetProcessorGroupInformation @ 0x1C00031B8 (GetProcessorGroupInformation.c)
 *     GetProcessorInformation @ 0x1C00033A0 (GetProcessorInformation.c)
 *     GetInterruptMessageInformation @ 0x1C000373C (GetInterruptMessageInformation.c)
 *     InitializePerfOptions @ 0x1C00039C4 (InitializePerfOptions.c)
 *     IoQueuesCreation @ 0x1C0003ADC (IoQueuesCreation.c)
 *     IoQueuesDeletion @ 0x1C0003D34 (IoQueuesDeletion.c)
 *     NVMeQueuesReInit @ 0x1C0004134 (NVMeQueuesReInit.c)
 *     NVMeControllerFilterResouceRequirements @ 0x1C0004698 (NVMeControllerFilterResouceRequirements.c)
 *     NVMeControllerStop @ 0x1C0004994 (NVMeControllerStop.c)
 *     NVMeControllerRemove @ 0x1C0004AA4 (NVMeControllerRemove.c)
 *     NVMePowerInitialize @ 0x1C00050D0 (NVMePowerInitialize.c)
 *     SglToPrp @ 0x1C0006094 (SglToPrp.c)
 *     FormInquiryStandardData @ 0x1C00066B4 (FormInquiryStandardData.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C0006A1C (FormInquiryDeviceIdentifiersData.c)
 *     ScsiInquiryRequest @ 0x1C0006E78 (ScsiInquiryRequest.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C00072C0 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     ScsiModeSenseRequest @ 0x1C00074E4 (ScsiModeSenseRequest.c)
 *     LogSenseTemperature @ 0x1C0007924 (LogSenseTemperature.c)
 *     LogSenseInformationalExceptions @ 0x1C0007B2C (LogSenseInformationalExceptions.c)
 *     ScsiLogSenseRequest @ 0x1C0007CBC (ScsiLogSenseRequest.c)
 *     ScsiUnmapRequest @ 0x1C0007F64 (ScsiUnmapRequest.c)
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x1C0008BA0 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     FirmwareGetInfo @ 0x1C0008E94 (FirmwareGetInfo.c)
 *     FirmwareDownload @ 0x1C0009068 (FirmwareDownload.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C00095C8 (QueryProtocolInfoIdentifyData.c)
 *     QueryProtocolInfoLogPageData @ 0x1C0009750 (QueryProtocolInfoLogPageData.c)
 *     QueryProtocolInfoFeatureData @ 0x1C000999C (QueryProtocolInfoFeatureData.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C0009FC0 (IoctlQueryTemperatureInfoProcess.c)
 *     ProtocolCommandCompletion @ 0x1C000A7A0 (ProtocolCommandCompletion.c)
 *     ProtocolCommandToNVMe @ 0x1C000A8FC (ProtocolCommandToNVMe.c)
 *     NVMeControllerIdentify @ 0x1C000B0D0 (NVMeControllerIdentify.c)
 *     NVMeNameSpaceIdentify @ 0x1C000B234 (NVMeNameSpaceIdentify.c)
 *     NVMeGetCommandEffectsLog @ 0x1C000B578 (NVMeGetCommandEffectsLog.c)
 *     NVMeSetIoQueueCount @ 0x1C000B828 (NVMeSetIoQueueCount.c)
 *     NVMeSetInterruptCoalescing @ 0x1C000B9A4 (NVMeSetInterruptCoalescing.c)
 *     NVMeSetArbitration @ 0x1C000BAA4 (NVMeSetArbitration.c)
 *     NVMeGetTemperatureThreshold @ 0x1C000BC08 (NVMeGetTemperatureThreshold.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C000BD94 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeSetAutoPowerStateTransition @ 0x1C000BED4 (NVMeSetAutoPowerStateTransition.c)
 *     NVMeSetPowerState @ 0x1C000BFA8 (NVMeSetPowerState.c)
 *     NVMeConfigAsyncEvent @ 0x1C000C070 (NVMeConfigAsyncEvent.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C000C2A0 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeIssueAsyncEventCommand @ 0x1C000C510 (NVMeIssueAsyncEventCommand.c)
 *     NVMeMapError @ 0x1C000CFB4 (NVMeMapError.c)
 *     NVMeSetSenseData @ 0x1C000D49C (NVMeSetSenseData.c)
 *     ReadMultiSzRegistryValueAndCompareId @ 0x1C000D71C (ReadMultiSzRegistryValueAndCompareId.c)
 *     GetRegistrySettings @ 0x1C000D914 (GetRegistrySettings.c)
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
    return (void *)((__int64 (__fastcall *)(_QWORD *, _QWORD))((char *)&loc_1C000EFFD + 4 * (8 - ((Size >> 3) & 7)) + 2))(
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
