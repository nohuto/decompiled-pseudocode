/*
 * XREFs of ?GetAvalonRegistrySettingsKey@@YAJPEAPEAUHKEY__@@@Z @ 0x180095524
 * Callers:
 *     ?InitializeFromRegistry@CCommonRegistryData@@SAJXZ @ 0x180095448 (-InitializeFromRegistry@CCommonRegistryData@@SAJXZ.c)
 *     ?Initialize@CConnection@@AEAAJHPEAUIDWMCoRenderEngine@@@Z @ 0x180095788 (-Initialize@CConnection@@AEAAJHPEAUIDWMCoRenderEngine@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetAvalonRegistrySettingsKey(PHKEY phkResult)
{
  return RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Avalon.Graphics", 0, 1u, phkResult) != 0
       ? 0x80004005
       : 0;
}
