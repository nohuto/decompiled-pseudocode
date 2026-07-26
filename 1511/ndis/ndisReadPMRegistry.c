/*
 * XREFs of ndisReadPMRegistry @ 0x1C009D98C
 * Callers:
 *     ndisInitializeConfiguration @ 0x1C009D18C (ndisInitializeConfiguration.c)
 * Callees:
 *     ndisReadPMAdminConfigState @ 0x1C009DA90 (ndisReadPMAdminConfigState.c)
 */

__int64 __fastcall ndisReadPMRegistry(NDIS_HANDLE ConfigurationHandle, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)(a2 + 3968) ^= (*(_DWORD *)(a2 + 3968) ^ ndisReadPMAdminConfigState(ConfigurationHandle, &WakeOnPatternStr)) & 3;
  *(_DWORD *)(a2 + 3968) ^= (*(_DWORD *)(a2 + 3968) ^ (4
                                                     * ndisReadPMAdminConfigState(
                                                         ConfigurationHandle,
                                                         &WakeOnMagicPacketStr))) & 0xC;
  *(_DWORD *)(a2 + 3968) ^= (*(_DWORD *)(a2 + 3968) ^ (16
                                                     * ndisReadPMAdminConfigState(
                                                         ConfigurationHandle,
                                                         &DeviceSleepOnDisconnectStr))) & 0x30;
  *(_DWORD *)(a2 + 3968) ^= (*(_DWORD *)(a2 + 3968) ^ ((unsigned int)ndisReadPMAdminConfigState(
                                                                       ConfigurationHandle,
                                                                       &PMARPOffloadStr) << 6)) & 0xC0;
  *(_DWORD *)(a2 + 3968) ^= (*(_DWORD *)(a2 + 3968) ^ ((unsigned int)ndisReadPMAdminConfigState(
                                                                       ConfigurationHandle,
                                                                       &PMNSOffloadStr) << 8)) & 0x300;
  *(_DWORD *)(a2 + 3968) ^= (*(_DWORD *)(a2 + 3968) ^ ((unsigned int)ndisReadPMAdminConfigState(
                                                                       ConfigurationHandle,
                                                                       &PMWiFiRekeyOffloadStr) << 10)) & 0xC00;
  result = (*(_DWORD *)(a2 + 3968) ^ ((unsigned int)ndisReadPMAdminConfigState(
                                                      ConfigurationHandle,
                                                      &SelectiveSuspendStr) << 12)) & 0x3000;
  *(_DWORD *)(a2 + 3968) ^= result;
  return result;
}
