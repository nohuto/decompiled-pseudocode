/*
 * XREFs of BuildGetLogPageCommand @ 0x1C0008830
 * Callers:
 *     FirmwareGetInfo @ 0x1C0008C4C (FirmwareGetInfo.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C0009954 (IoctlQueryTemperatureInfoProcess.c)
 *     LogSenseInformationalExceptions @ 0x1C0009D30 (LogSenseInformationalExceptions.c)
 *     LogSenseTemperature @ 0x1C0009EF4 (LogSenseTemperature.c)
 *     ProtocolCommandCompletion @ 0x1C000ABE0 (ProtocolCommandCompletion.c)
 *     QueryProtocolInfoLogPageData @ 0x1C000B420 (QueryProtocolInfoLogPageData.c)
 *     ScsiModeSenseRequest @ 0x1C000BC30 (ScsiModeSenseRequest.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C000C870 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeGetCommandEffectsLog @ 0x1C000CE34 (NVMeGetCommandEffectsLog.c)
 * Callees:
 *     <none>
 */

void __fastcall BuildGetLogPageCommand(__int64 a1, unsigned __int8 a2, unsigned int a3, __int64 a4, int a5)
{
  int v6; // r11d
  int v7; // r8d

  if ( a2 <= 5u && (v6 = 42, _bittest(&v6, a2)) || a2 == 0x80 )
    a5 = -1;
  *(_BYTE *)(a1 + 40) = a2;
  v7 = (*(_DWORD *)(a1 + 40) ^ (((a3 >> 2) - 1) << 16)) & 0xFFF0000;
  *(_BYTE *)a1 = 2;
  *(_DWORD *)(a1 + 40) ^= v7;
  *(_DWORD *)(a1 + 4) = a5;
  *(_QWORD *)(a1 + 24) = a4;
}
