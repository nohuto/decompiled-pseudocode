/*
 * XREFs of ?GetBoolDynamicSetting@CDynamicSettingsManager@@UEAAJW4DwmDynamicSettings@@PEA_N@Z @ 0x140001A50
 * Callers:
 *     <none>
 * Callees:
 *     ?IsHiDefRemoteAppSession@CDynamicSettingsManager@@AEAAJPEA_N@Z @ 0x1400018F0 (-IsHiDefRemoteAppSession@CDynamicSettingsManager@@AEAAJPEA_N@Z.c)
 */

__int64 __fastcall CDynamicSettingsManager::GetBoolDynamicSetting(CDynamicSettingsManager *a1, int a2, bool *a3)
{
  int v3; // edx

  v3 = a2 - 1;
  if ( !v3 )
    return CDynamicSettingsManager::IsHiDefRemoteAppSession(a1, a3);
  if ( v3 == 1 )
    return CDynamicSettingsManager::IsRAILRemoteAppSession(a1, a3);
  return 0LL;
}
