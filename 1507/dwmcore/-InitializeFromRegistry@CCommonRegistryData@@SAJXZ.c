/*
 * XREFs of ?InitializeFromRegistry@CCommonRegistryData@@SAJXZ @ 0x180095448
 * Callers:
 *     ?Startup@@YAJXZ @ 0x180095124 (-Startup@@YAJXZ.c)
 * Callees:
 *     ?RegReadDWORD@@YA_NPEAUHKEY__@@PEBGPEAK@Z @ 0x1800610F4 (-RegReadDWORD@@YA_NPEAUHKEY__@@PEBGPEAK@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InitializeDWMKeysFromRegistry@CCommonRegistryData@@CAJXZ @ 0x1800952A8 (-InitializeDWMKeysFromRegistry@CCommonRegistryData@@CAJXZ.c)
 *     ?GetAvalonRegistrySettingsKey@@YAJPEAPEAUHKEY__@@@Z @ 0x180095524 (-GetAvalonRegistrySettingsKey@@YAJPEAPEAUHKEY__@@@Z.c)
 */

__int64 CCommonRegistryData::InitializeFromRegistry(void)
{
  int v0; // eax
  char v1; // al
  unsigned int v2; // ecx
  char v3; // al
  unsigned int v4; // ecx
  char v5; // al
  unsigned int v6; // ecx
  unsigned int v8; // [rsp+40h] [rbp+10h] BYREF
  HKEY hKey; // [rsp+48h] [rbp+18h] BYREF

  hKey = 0LL;
  v0 = CCommonRegistryData::InitializeDWMKeysFromRegistry();
  if ( v0 >= 0 )
  {
    if ( (int)GetAvalonRegistrySettingsKey(&hKey) >= 0 )
    {
      v8 = 0;
      v1 = RegReadDWORD(hKey, L"UseD3DDebugLayer", &v8);
      v2 = CCommonRegistryData::m_fUseD3DDebugLayer;
      if ( v1 )
        v2 = v8;
      v8 = 0;
      CCommonRegistryData::m_fUseD3DDebugLayer = v2;
      v3 = RegReadDWORD(hKey, L"Force10Level9", &v8);
      v4 = CCommonRegistryData::m_fForce10Level9;
      if ( v3 )
        v4 = v8;
      v8 = 0;
      CCommonRegistryData::m_fForce10Level9 = v4;
      v5 = RegReadDWORD(hKey, L"Force10OnWDDM1_0", &v8);
      v6 = CCommonRegistryData::m_fForce10OnWDDM1_0;
      if ( v5 )
        v6 = v8;
      CCommonRegistryData::m_fForce10OnWDDM1_0 = v6;
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v0, 0xDBu);
  }
  if ( hKey )
    RegCloseKey(hKey);
  return 0LL;
}
