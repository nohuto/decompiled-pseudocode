/*
 * XREFs of ?GetRuntimeClassName@ContextualSuggestionsManager@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18000C5D0
 * Callers:
 *     ?GetRuntimeClassName@ContextualSuggestionsManager@ContentManagement@@WCI@EAAJPEAPEAUHSTRING__@@@Z @ 0x18001EBA0 (-GetRuntimeClassName@ContextualSuggestionsManager@ContentManagement@@WCI@EAAJPEAPEAUHSTRING__@@@.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::ContextualSuggestionsManager::GetRuntimeClassName(
        ContentManagement::ContextualSuggestionsManager *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"ContentManagement.ContextualSuggestionsManager", 0x2Eu, a2);
}
