/*
 * XREFs of GetSrbExtension @ 0x1C0004794
 * Callers:
 *     RequestPendingCompletion @ 0x1C00029B0 (RequestPendingCompletion.c)
 *     SrbAssignQueueId @ 0x1C0002B98 (SrbAssignQueueId.c)
 *     NVMeCompleteSubmissionQueueRequests @ 0x1C000666C (NVMeCompleteSubmissionQueueRequests.c)
 *     FirmwareActivate @ 0x1C0008950 (FirmwareActivate.c)
 *     FirmwareDownload @ 0x1C0008A50 (FirmwareDownload.c)
 *     FirmwareGetInfo @ 0x1C0008C4C (FirmwareGetInfo.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C0009954 (IoctlQueryTemperatureInfoProcess.c)
 *     IoctlSetTemperatureThresholdProcess @ 0x1C0009ABC (IoctlSetTemperatureThresholdProcess.c)
 *     LogSenseInformationalExceptions @ 0x1C0009D30 (LogSenseInformationalExceptions.c)
 *     LogSenseTemperature @ 0x1C0009EF4 (LogSenseTemperature.c)
 *     NVMeFirmwareActivateCompletion @ 0x1C000A100 (NVMeFirmwareActivateCompletion.c)
 *     NVMeFirmwareActivateCompletionAfterReset @ 0x1C000A240 (NVMeFirmwareActivateCompletionAfterReset.c)
 *     NVMeFirmwareDownloadCompletion @ 0x1C000A290 (NVMeFirmwareDownloadCompletion.c)
 *     NVMeGetErrorInfoLogPageCompletion @ 0x1C000A2F0 (NVMeGetErrorInfoLogPageCompletion.c)
 *     NVMeGetFeaturesCacheCompletion @ 0x1C000A390 (NVMeGetFeaturesCacheCompletion.c)
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x1C000A460 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     NVMeGetLogPageHealthInfoCompletion @ 0x1C000A6E0 (NVMeGetLogPageHealthInfoCompletion.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C000A820 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     ProtocolCommandCompletion @ 0x1C000ABE0 (ProtocolCommandCompletion.c)
 *     ProtocolCommandToNVMe @ 0x1C000AD38 (ProtocolCommandToNVMe.c)
 *     QueryProtocolInfoCompletion @ 0x1C000AFA0 (QueryProtocolInfoCompletion.c)
 *     QueryProtocolInfoFeatureData @ 0x1C000B054 (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C000B2AC (QueryProtocolInfoIdentifyData.c)
 *     QueryProtocolInfoLogPageData @ 0x1C000B420 (QueryProtocolInfoLogPageData.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x1C000B620 (QueryTemperatureInfoHealthLogCompletion.c)
 *     QueryTemperatureThresholdCompletion @ 0x1C000B7F0 (QueryTemperatureThresholdCompletion.c)
 *     ScsiModeSelectRequest @ 0x1C000BAE8 (ScsiModeSelectRequest.c)
 *     ScsiModeSenseRequest @ 0x1C000BC30 (ScsiModeSenseRequest.c)
 *     ScsiSanitizeRequest @ 0x1C000BE7C (ScsiSanitizeRequest.c)
 *     ScsiSecurityProtocolInRequest @ 0x1C000C014 (ScsiSecurityProtocolInRequest.c)
 *     ScsiSecurityProtocolOutRequest @ 0x1C000C13C (ScsiSecurityProtocolOutRequest.c)
 *     ScsiStartStopUnitRequest @ 0x1C000C264 (ScsiStartStopUnitRequest.c)
 *     ScsiSyncCacheRequest @ 0x1C000C30C (ScsiSyncCacheRequest.c)
 *     ScsiUnmapRequest @ 0x1C000C394 (ScsiUnmapRequest.c)
 *     SglToPrp @ 0x1C000C614 (SglToPrp.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C000C870 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeGetAutoPowerStateTransitionCompletion @ 0x1C000CDC0 (NVMeGetAutoPowerStateTransitionCompletion.c)
 *     NVMeGetLogPageCompletion @ 0x1C000CF90 (NVMeGetLogPageCompletion.c)
 *     NVMeGetTemperatureThresholdCompletion @ 0x1C000D150 (NVMeGetTemperatureThresholdCompletion.c)
 *     NVMeMapError @ 0x1C000D604 (NVMeMapError.c)
 *     NVMeSetIoQueueCountCompletion @ 0x1C000E410 (NVMeSetIoQueueCountCompletion.c)
 *     ProcessCommandInSpecificQueue @ 0x1C000E6E8 (ProcessCommandInSpecificQueue.c)
 *     RecordCommandTimingHistory @ 0x1C000EAEC (RecordCommandTimingHistory.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000ED04 (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetSrbExtension(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 2) == 40 )
    result = *(_QWORD *)(a1 + 104);
  else
    result = *(_QWORD *)(a1 + 56);
  if ( (result & 0xFFF) != 0 )
    return result - (result & 0xFFF) + 4096;
  return result;
}
