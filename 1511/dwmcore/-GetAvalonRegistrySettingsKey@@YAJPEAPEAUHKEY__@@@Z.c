/*
 * XREFs of ?GetAvalonRegistrySettingsKey@@YAJPEAPEAUHKEY__@@@Z @ 0x1800AF5A4
 * Callers:
 *     ?Initialize@CConnection@@AEAAJHPEAUIDWMCoRenderEngine@@@Z @ 0x1800A3DE8 (-Initialize@CConnection@@AEAAJHPEAUIDWMCoRenderEngine@@@Z.c)
 *     ?InitializeFromRegistry@CCommonRegistryData@@SAJXZ @ 0x1800AF4C8 (-InitializeFromRegistry@CCommonRegistryData@@SAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetAvalonRegistrySettingsKey(PHKEY phkResult)
{
  return RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Avalon.Graphics", 0, 1u, phkResult) != 0
       ? 0x80004005
       : 0;
}
