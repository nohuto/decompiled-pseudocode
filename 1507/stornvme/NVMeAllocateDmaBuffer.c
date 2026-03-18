/*
 * XREFs of NVMeAllocateDmaBuffer @ 0x1C00022EC
 * Callers:
 *     IoQueuesInitialize @ 0x1C0002AC4 (IoQueuesInitialize.c)
 *     ScsiModeSenseRequest @ 0x1C00073B4 (ScsiModeSenseRequest.c)
 *     LogSenseTemperature @ 0x1C00077F4 (LogSenseTemperature.c)
 *     LogSenseInformationalExceptions @ 0x1C00079FC (LogSenseInformationalExceptions.c)
 *     FirmwareGetInfo @ 0x1C0008D64 (FirmwareGetInfo.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C0009498 (QueryProtocolInfoIdentifyData.c)
 *     QueryProtocolInfoLogPageData @ 0x1C0009620 (QueryProtocolInfoLogPageData.c)
 *     QueryProtocolInfoFeatureData @ 0x1C000986C (QueryProtocolInfoFeatureData.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C0009E90 (IoctlQueryTemperatureInfoProcess.c)
 *     ProtocolCommandCompletion @ 0x1C000A670 (ProtocolCommandCompletion.c)
 *     NVMeGetCommandEffectsLog @ 0x1C000B448 (NVMeGetCommandEffectsLog.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C000BC64 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C000C170 (NVMeAsyncEventRequestCompletion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeAllocateDmaBuffer(__int64 a1, unsigned int a2)
{
  unsigned int v3; // esi
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 52) & 2) != 0 )
    v3 = 0x80000000;
  else
    v3 = *(_DWORD *)(a1 + 164);
  result = StorPortExtendedFunction(24LL, a1, a2, 0LL);
  if ( (_DWORD)result )
  {
    if ( v3 != 0x80000000 )
      return StorPortExtendedFunction(24LL, a1, a2, 0LL);
  }
  return result;
}
