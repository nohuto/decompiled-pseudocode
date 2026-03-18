/*
 * XREFs of NVMeAllocateDmaBuffer @ 0x1C00065A0
 * Callers:
 *     IoQueuesInitialize @ 0x1C0005EFC (IoQueuesInitialize.c)
 *     FirmwareGetInfo @ 0x1C0008C4C (FirmwareGetInfo.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C0009954 (IoctlQueryTemperatureInfoProcess.c)
 *     LogSenseInformationalExceptions @ 0x1C0009D30 (LogSenseInformationalExceptions.c)
 *     LogSenseTemperature @ 0x1C0009EF4 (LogSenseTemperature.c)
 *     ProtocolCommandCompletion @ 0x1C000ABE0 (ProtocolCommandCompletion.c)
 *     QueryProtocolInfoFeatureData @ 0x1C000B054 (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C000B2AC (QueryProtocolInfoIdentifyData.c)
 *     QueryProtocolInfoLogPageData @ 0x1C000B420 (QueryProtocolInfoLogPageData.c)
 *     ScsiModeSenseRequest @ 0x1C000BC30 (ScsiModeSenseRequest.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C000C870 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C000CC78 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeGetCommandEffectsLog @ 0x1C000CE34 (NVMeGetCommandEffectsLog.c)
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
    v3 = *(_DWORD *)(a1 + 172);
  result = StorPortExtendedFunction(24LL, a1, a2);
  if ( (_DWORD)result )
  {
    if ( v3 != 0x80000000 )
      return StorPortExtendedFunction(24LL, a1, a2);
  }
  return result;
}
