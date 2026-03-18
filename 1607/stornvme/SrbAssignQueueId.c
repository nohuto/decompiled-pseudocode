/*
 * XREFs of SrbAssignQueueId @ 0x1C0002B98
 * Callers:
 *     FirmwareActivate @ 0x1C0008950 (FirmwareActivate.c)
 *     FirmwareDownload @ 0x1C0008A50 (FirmwareDownload.c)
 *     FirmwareGetInfo @ 0x1C0008C4C (FirmwareGetInfo.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C0009954 (IoctlQueryTemperatureInfoProcess.c)
 *     IoctlSetTemperatureThresholdProcess @ 0x1C0009ABC (IoctlSetTemperatureThresholdProcess.c)
 *     LogSenseInformationalExceptions @ 0x1C0009D30 (LogSenseInformationalExceptions.c)
 *     LogSenseTemperature @ 0x1C0009EF4 (LogSenseTemperature.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C000A820 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     ProtocolCommandToNVMe @ 0x1C000AD38 (ProtocolCommandToNVMe.c)
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
 *     NVMeSetHostMemoryBuffer @ 0x1C000DFF0 (NVMeSetHostMemoryBuffer.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002D40 (__security_check_cookie.c)
 *     GetSrbExtension @ 0x1C0004794 (GetSrbExtension.c)
 */

__int64 __fastcall SrbAssignQueueId(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // r8
  __int64 v5; // rdi
  __int16 v6; // cx
  unsigned int v7; // r9d
  __int64 v8; // r8
  __int64 v9; // rdx
  unsigned int v10; // [rsp+20h] [rbp-30h]
  __int64 v11; // [rsp+34h] [rbp-1Ch] BYREF

  result = GetSrbExtension(a2);
  v5 = result;
  if ( (*(_BYTE *)(result + 4245) & 1) != 0 )
  {
    v6 = *(_WORD *)(a1 + 280);
  }
  else if ( *(_BYTE *)(a1 + 16) )
  {
    result = *(_QWORD *)(a1 + 544);
    v6 = *(_WORD *)(result + 40);
  }
  else
  {
    v10 = 0;
    HIDWORD(v11) = 0;
    StorPortExtendedFunction(15LL, a1, v4);
    StorPortExtendedFunction(56LL, a1, (char *)&v11 + 4);
    v7 = 0;
    if ( !*(_WORD *)(a1 + 162) )
    {
      v7 = 0 % 0u;
      v10 = 0 % 0u;
    }
    if ( !*(_QWORD *)(32LL * v7 + *(_QWORD *)(a1 + 192) + 24) )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 208) + 16LL);
      v9 = *(_QWORD *)(*(_QWORD *)(v8 + 120)
                     + 8LL
                     * ((unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 112), 1u)
                      % *(_DWORD *)(v8 + 108)));
      *(_QWORD *)(32LL * v7 + *(_QWORD *)(a1 + 192) + 24) = v9;
      ++*(_WORD *)(v9 + 52);
      v7 = v10;
    }
    result = *(_QWORD *)(a1 + 192);
    v6 = *(_WORD *)(*(_QWORD *)(32LL * v7 + result + 24) + 40LL);
  }
  *(_WORD *)(v5 + 4236) = v6;
  return result;
}
