/*
 * XREFs of NVMeAllocateDmaBuffer @ 0x1C00023DC
 * Callers:
 *     IoQueuesInitialize @ 0x1C0002BB4 (IoQueuesInitialize.c)
 *     ScsiModeSenseRequest @ 0x1C00074E4 (ScsiModeSenseRequest.c)
 *     LogSenseTemperature @ 0x1C0007924 (LogSenseTemperature.c)
 *     LogSenseInformationalExceptions @ 0x1C0007B2C (LogSenseInformationalExceptions.c)
 *     FirmwareGetInfo @ 0x1C0008E94 (FirmwareGetInfo.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C00095C8 (QueryProtocolInfoIdentifyData.c)
 *     QueryProtocolInfoLogPageData @ 0x1C0009750 (QueryProtocolInfoLogPageData.c)
 *     QueryProtocolInfoFeatureData @ 0x1C000999C (QueryProtocolInfoFeatureData.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C0009FC0 (IoctlQueryTemperatureInfoProcess.c)
 *     ProtocolCommandCompletion @ 0x1C000A7A0 (ProtocolCommandCompletion.c)
 *     NVMeGetCommandEffectsLog @ 0x1C000B578 (NVMeGetCommandEffectsLog.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C000BD94 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C000C2A0 (NVMeAsyncEventRequestCompletion.c)
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
