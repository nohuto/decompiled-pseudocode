/*
 * XREFs of ?GetRuntimeClassName@ContentManagementService@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18001FA00
 * Callers:
 *     ?GetRuntimeClassName@ContentManagementService@ContentManagement@@WEA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800226F0 (-GetRuntimeClassName@ContentManagementService@ContentManagement@@WEA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@ContentManagementService@ContentManagement@@WCI@EAAJPEAPEAUHSTRING__@@@Z @ 0x180022860 (-GetRuntimeClassName@ContentManagementService@ContentManagement@@WCI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@ContentManagementService@ContentManagement@@WDA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180022A00 (-GetRuntimeClassName@ContentManagementService@ContentManagement@@WDA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@ContentManagementService@ContentManagement@@WDI@EAAJPEAPEAUHSTRING__@@@Z @ 0x180022B60 (-GetRuntimeClassName@ContentManagementService@ContentManagement@@WDI@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::ContentManagementService::GetRuntimeClassName(
        ContentManagement::ContentManagementService *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"ContentManagement.ContentManagementService", 0x2Au, a2);
}
