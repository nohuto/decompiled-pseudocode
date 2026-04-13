/*
 * XREFs of ?GetRuntimeClassName@AppManager@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180009040
 * Callers:
 *     ?GetRuntimeClassName@AppManager@ContentManagement@@WCI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800179E0 (-GetRuntimeClassName@AppManager@ContentManagement@@WCI@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::AppManager::GetRuntimeClassName(ContentManagement::AppManager *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"ContentManagement.AppManager", 0x1Cu, a2);
}
