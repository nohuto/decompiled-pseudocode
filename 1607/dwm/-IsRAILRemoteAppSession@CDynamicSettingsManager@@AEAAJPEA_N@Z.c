/*
 * XREFs of ?IsRAILRemoteAppSession@CDynamicSettingsManager@@AEAAJPEA_N@Z @ 0x1400019B0
 * Callers:
 *     ?GetBoolDynamicSetting@CDynamicSettingsManager@@UEAAJW4DwmDynamicSettings@@PEA_N@Z @ 0x140001A50 (-GetBoolDynamicSetting@CDynamicSettingsManager@@UEAAJW4DwmDynamicSettings@@PEA_N@Z.c)
 * Callees:
 *     IsWinStationQueryInformationWPresent @ 0x1400039E0 (IsWinStationQueryInformationWPresent.c)
 */

__int64 __fastcall CDynamicSettingsManager::IsRAILRemoteAppSession(CDynamicSettingsManager *this, bool *a2)
{
  DWORD CurrentProcessId; // eax
  CDynamicSettingsManager *v5; // [rsp+40h] [rbp+8h] BYREF
  DWORD pSessionId; // [rsp+48h] [rbp+10h] BYREF
  int v7; // [rsp+50h] [rbp+18h] BYREF

  v5 = this;
  *a2 = 0;
  if ( !(unsigned __int8)IsWinStationQueryInformationWPresent() )
    return 0LL;
  LODWORD(v5) = 0;
  CurrentProcessId = GetCurrentProcessId();
  if ( ProcessIdToSessionId(CurrentProcessId, &pSessionId)
    && GetSystemMetrics(4096)
    && (unsigned __int8)WinStationQueryInformationW(0LL, pSessionId, 39LL, &v7, 4, &v5) )
  {
    *a2 = v7 == 5;
    return 0LL;
  }
  return 1LL;
}
