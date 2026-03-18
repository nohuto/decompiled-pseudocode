/*
 * XREFs of GetSrbDataBuffer @ 0x1C0001F4C
 * Callers:
 *     NVMeHwBuildIo @ 0x1C0001000 (NVMeHwBuildIo.c)
 *     ScsiReadCapacityRequest @ 0x1C0001D38 (ScsiReadCapacityRequest.c)
 *     FirmwareActivate @ 0x1C0008950 (FirmwareActivate.c)
 *     FirmwareDownload @ 0x1C0008A50 (FirmwareDownload.c)
 *     FirmwareGetInfo @ 0x1C0008C4C (FirmwareGetInfo.c)
 *     FormInquiryBlockLimitsData @ 0x1C0008D88 (FormInquiryBlockLimitsData.c)
 *     FormInquiryBlockProvisioningData @ 0x1C0008E74 (FormInquiryBlockProvisioningData.c)
 *     FormInquiryDeviceCharacteristicsData @ 0x1C0008F5C (FormInquiryDeviceCharacteristicsData.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C0008FC4 (FormInquiryDeviceIdentifiersData.c)
 *     FormInquirySerialNumberData @ 0x1C0009214 (FormInquirySerialNumberData.c)
 *     FormInquiryStandardData @ 0x1C00093DC (FormInquiryStandardData.c)
 *     FormInquiryVpdSupportedPagesData @ 0x1C0009554 (FormInquiryVpdSupportedPagesData.c)
 *     IoctlFirmwareProcess @ 0x1C00097FC (IoctlFirmwareProcess.c)
 *     IoctlQueryProtocolInfoProcess @ 0x1C00098A8 (IoctlQueryProtocolInfoProcess.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C0009954 (IoctlQueryTemperatureInfoProcess.c)
 *     IoctlSetTemperatureThresholdProcess @ 0x1C0009ABC (IoctlSetTemperatureThresholdProcess.c)
 *     IoctlToNVMe @ 0x1C0009BF0 (IoctlToNVMe.c)
 *     LogSenseInformationalExceptions @ 0x1C0009D30 (LogSenseInformationalExceptions.c)
 *     LogSenseSupportedLogPages @ 0x1C0009E7C (LogSenseSupportedLogPages.c)
 *     LogSenseTemperature @ 0x1C0009EF4 (LogSenseTemperature.c)
 *     NVMeGetFeaturesCacheCompletion @ 0x1C000A390 (NVMeGetFeaturesCacheCompletion.c)
 *     NVMeGetLogPageHealthInfoCompletion @ 0x1C000A6E0 (NVMeGetLogPageHealthInfoCompletion.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C000A820 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     NVMeValidateProtocolCommandRequest @ 0x1C000A9E8 (NVMeValidateProtocolCommandRequest.c)
 *     ProtocolCommandToNVMe @ 0x1C000AD38 (ProtocolCommandToNVMe.c)
 *     QueryProtocolInfoFeatureData @ 0x1C000B054 (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C000B2AC (QueryProtocolInfoIdentifyData.c)
 *     QueryProtocolInfoLogPageData @ 0x1C000B420 (QueryProtocolInfoLogPageData.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x1C000B620 (QueryTemperatureInfoHealthLogCompletion.c)
 *     QueryTemperatureThresholdCompletion @ 0x1C000B7F0 (QueryTemperatureThresholdCompletion.c)
 *     ScsiInquiryRequest @ 0x1C000B970 (ScsiInquiryRequest.c)
 *     ScsiModeSelectRequest @ 0x1C000BAE8 (ScsiModeSelectRequest.c)
 *     ScsiModeSenseRequest @ 0x1C000BC30 (ScsiModeSenseRequest.c)
 *     ScsiReportLunsCommand @ 0x1C000BDB4 (ScsiReportLunsCommand.c)
 *     ScsiSecurityProtocolInRequest @ 0x1C000C014 (ScsiSecurityProtocolInRequest.c)
 *     ScsiSecurityProtocolOutRequest @ 0x1C000C13C (ScsiSecurityProtocolOutRequest.c)
 *     ScsiUnmapRequest @ 0x1C000C394 (ScsiUnmapRequest.c)
 *     RecordCommandTimingHistory @ 0x1C000EAEC (RecordCommandTimingHistory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetSrbDataBuffer(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8

  if ( *(_BYTE *)(a1 + 2) == 40 )
  {
    v2 = *(_QWORD *)(a1 + 64);
    if ( a2 )
      *a2 = a1 + 60;
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 24);
    if ( a2 )
      *a2 = a1 + 16;
  }
  return v2;
}
