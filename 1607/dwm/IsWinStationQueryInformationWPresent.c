/*
 * XREFs of IsWinStationQueryInformationWPresent @ 0x1400039E0
 * Callers:
 *     ?IsHiDefRemoteAppSession@CDynamicSettingsManager@@AEAAJPEA_N@Z @ 0x1400018F0 (-IsHiDefRemoteAppSession@CDynamicSettingsManager@@AEAAJPEA_N@Z.c)
 *     ?IsRAILRemoteAppSession@CDynamicSettingsManager@@AEAAJPEA_N@Z @ 0x1400019B0 (-IsRAILRemoteAppSession@CDynamicSettingsManager@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x140003DC0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsWinStationQueryInformationWPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_14000A758 == 1 )
    return 1;
  if ( dword_14000A758 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"@B", &v1) < 0 )
    return 0;
  result = v1;
  dword_14000A758 = 2 - (v1 != 0);
  return result;
}
