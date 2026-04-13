/*
 * XREFs of ?GetRuntimeClassName@IdentityManager@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18000E720
 * Callers:
 *     ?GetRuntimeClassName@IdentityManager@ContentManagement@@WCI@EAAJPEAPEAUHSTRING__@@@Z @ 0x18001EB20 (-GetRuntimeClassName@IdentityManager@ContentManagement@@WCI@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::IdentityManager::GetRuntimeClassName(
        ContentManagement::IdentityManager *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"ContentManagement.IdentityManager", 0x21u, a2);
}
