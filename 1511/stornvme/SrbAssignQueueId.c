/*
 * XREFs of SrbAssignQueueId @ 0x1C000646C
 * Callers:
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C00072C0 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     ScsiModeSenseRequest @ 0x1C00074E4 (ScsiModeSenseRequest.c)
 *     ScsiModeSelectRequest @ 0x1C0007674 (ScsiModeSelectRequest.c)
 *     LogSenseTemperature @ 0x1C0007924 (LogSenseTemperature.c)
 *     LogSenseInformationalExceptions @ 0x1C0007B2C (LogSenseInformationalExceptions.c)
 *     ScsiReadWriteRequest @ 0x1C0007DE0 (ScsiReadWriteRequest.c)
 *     ScsiUnmapRequest @ 0x1C0007F64 (ScsiUnmapRequest.c)
 *     ScsiStartStopUnitRequest @ 0x1C0008160 (ScsiStartStopUnitRequest.c)
 *     ScsiSecurityProtocolInRequest @ 0x1C0008214 (ScsiSecurityProtocolInRequest.c)
 *     ScsiSecurityProtocolOutRequest @ 0x1C0008334 (ScsiSecurityProtocolOutRequest.c)
 *     ScsiSanitizeRequest @ 0x1C0008454 (ScsiSanitizeRequest.c)
 *     ScsiToNVMe @ 0x1C00088F0 (ScsiToNVMe.c)
 *     FirmwareGetInfo @ 0x1C0008E94 (FirmwareGetInfo.c)
 *     FirmwareDownload @ 0x1C0009068 (FirmwareDownload.c)
 *     FirmwareActivate @ 0x1C00093F4 (FirmwareActivate.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C00095C8 (QueryProtocolInfoIdentifyData.c)
 *     QueryProtocolInfoLogPageData @ 0x1C0009750 (QueryProtocolInfoLogPageData.c)
 *     QueryProtocolInfoFeatureData @ 0x1C000999C (QueryProtocolInfoFeatureData.c)
 *     QueryTemperatureThresholdCompletion @ 0x1C0009C00 (QueryTemperatureThresholdCompletion.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x1C0009DC0 (QueryTemperatureInfoHealthLogCompletion.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C0009FC0 (IoctlQueryTemperatureInfoProcess.c)
 *     IoctlSetTemperatureThresholdProcess @ 0x1C000A178 (IoctlSetTemperatureThresholdProcess.c)
 *     ProtocolCommandToNVMe @ 0x1C000A8FC (ProtocolCommandToNVMe.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000EAF0 (__security_check_cookie.c)
 */

__int64 __fastcall SrbAssignQueueId(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // r9
  unsigned __int16 v6; // si
  unsigned int v7; // r9d
  __int64 v8; // r8
  __int64 v9; // rdx
  unsigned int v10; // [rsp+20h] [rbp-30h] BYREF
  int v11; // [rsp+28h] [rbp-28h] BYREF
  __int64 v12; // [rsp+2Ch] [rbp-24h]
  __int64 v13; // [rsp+34h] [rbp-1Ch] BYREF

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v3 = *(_QWORD *)(a2 + 104);
  else
    v3 = *(_QWORD *)(a2 + 56);
  if ( (v3 & 0xFFF) != 0 )
    v3 = v3 - (v3 & 0xFFF) + 4096;
  if ( *(_BYTE *)(v3 + 4166) == 1 )
  {
    result = *(unsigned __int16 *)(a1 + 272);
  }
  else if ( *(_BYTE *)(a1 + 16) )
  {
    result = *(unsigned __int16 *)(*(_QWORD *)(a1 + 536) + 40LL);
  }
  else
  {
    v10 = 0;
    v11 = 2;
    v13 = 0LL;
    v12 = 20LL;
    StorPortExtendedFunction(15LL, a1, a2, &v11);
    v6 = WORD2(v12);
    if ( WORD2(v13) == 0xFFFF && BYTE6(v13) == 0xFF )
      StorPortExtendedFunction(17LL, a1, (char *)&v13 + 4, v5);
    StorPortExtendedFunction(56LL, a1, (char *)&v13 + 4, &v10);
    v7 = v10;
    if ( !*(_QWORD *)(32LL * v10 + *(_QWORD *)(a1 + 184) + 24) )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 200) + 24LL * v6 + 16);
      v9 = *(_QWORD *)(*(_QWORD *)(v8 + 120)
                     + 8LL
                     * ((unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 112), 1u)
                      % *(_DWORD *)(v8 + 108)));
      *(_QWORD *)(32LL * v7 + *(_QWORD *)(a1 + 184) + 24) = v9;
      ++*(_WORD *)(v9 + 52);
      v7 = v10;
    }
    result = *(unsigned __int16 *)(*(_QWORD *)(32LL * v7 + *(_QWORD *)(a1 + 184) + 24) + 40LL);
  }
  *(_WORD *)(v3 + 4160) = result;
  return result;
}
