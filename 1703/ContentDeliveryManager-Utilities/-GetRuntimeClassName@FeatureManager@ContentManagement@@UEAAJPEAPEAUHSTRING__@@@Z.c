/*
 * XREFs of ?GetRuntimeClassName@FeatureManager@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18000E460
 * Callers:
 *     ?GetRuntimeClassName@FeatureManager@ContentManagement@@WCI@EAAJPEAPEAUHSTRING__@@@Z @ 0x18001F1B0 (-GetRuntimeClassName@FeatureManager@ContentManagement@@WCI@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::FeatureManager::GetRuntimeClassName(
        ContentManagement::FeatureManager *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"ContentManagement.FeatureManager", 0x20u, a2);
}
