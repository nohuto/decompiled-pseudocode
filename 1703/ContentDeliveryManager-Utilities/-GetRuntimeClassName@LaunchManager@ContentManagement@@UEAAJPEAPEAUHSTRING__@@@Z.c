/*
 * XREFs of ?GetRuntimeClassName@LaunchManager@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18000D3D0
 * Callers:
 *     ?GetRuntimeClassName@LaunchManager@ContentManagement@@WCI@EAAJPEAPEAUHSTRING__@@@Z @ 0x18001EC60 (-GetRuntimeClassName@LaunchManager@ContentManagement@@WCI@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::LaunchManager::GetRuntimeClassName(
        ContentManagement::LaunchManager *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"ContentManagement.LaunchManager", 0x1Fu, a2);
}
