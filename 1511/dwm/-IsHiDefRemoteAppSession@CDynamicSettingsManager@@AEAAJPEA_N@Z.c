/*
 * XREFs of ?IsHiDefRemoteAppSession@CDynamicSettingsManager@@AEAAJPEA_N@Z @ 0x1400017C0
 * Callers:
 *     ?GetBoolDynamicSetting@CDynamicSettingsManager@@UEAAJW4DwmDynamicSettings@@PEA_N@Z @ 0x140001920 (-GetBoolDynamicSetting@CDynamicSettingsManager@@UEAAJW4DwmDynamicSettings@@PEA_N@Z.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x140003700 (_guard_check_icall_nop.c)
 *     IsWinStationQueryInformationWPresent @ 0x140003AD0 (IsWinStationQueryInformationWPresent.c)
 */

_BOOL8 __fastcall CDynamicSettingsManager::IsHiDefRemoteAppSession(CDynamicSettingsManager *this, bool *a2)
{
  char ConnectionProperty; // bl
  char v4; // di
  CDynamicSettingsManager *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = this;
  ConnectionProperty = 0;
  *a2 = 0;
  if ( !(unsigned __int8)IsWinStationQueryInformationWPresent() )
    return 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64 *, __int64))(qword_14000A848 + 56))(&qword_14000A848, 32LL);
  if ( !v4 )
  {
    if ( GetSystemMetrics(4096) )
    {
      v6 = 0LL;
      ConnectionProperty = WinStationGetConnectionProperty(
                             0xFFFFFFFFLL,
                             &PROPERTY_TYPE_GET_REMOTEAPP_HD_SUPPORT_LEVEL,
                             &v6);
      if ( ConnectionProperty )
      {
        if ( *(_WORD *)v6 == 1 )
          v4 = *((_DWORD *)v6 + 2) != 0;
        WinStationFreePropertyValue();
      }
    }
  }
  *a2 = v4;
  return !ConnectionProperty;
}
