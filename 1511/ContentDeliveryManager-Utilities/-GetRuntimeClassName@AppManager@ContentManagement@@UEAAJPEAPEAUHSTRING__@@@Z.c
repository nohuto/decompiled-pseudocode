/*
 * XREFs of ?GetRuntimeClassName@AppManager@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180003430
 * Callers:
 *     ?GetRuntimeClassName@AppManager@ContentManagement@@WCI@EAAJPEAPEAUHSTRING__@@@Z @ 0x180005FF0 (-GetRuntimeClassName@AppManager@ContentManagement@@WCI@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::AppManager::GetRuntimeClassName(ContentManagement::AppManager *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"ContentManagement.AppManager", 0x1Cu, a2);
}
