/*
 * XREFs of sub_180003B60 @ 0x180003B60
 * Callers:
 *     sub_180006350 @ 0x180006350 (sub_180006350.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall sub_180003B60(__int64 a1, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"ContentManagement.ContextualSuggestionsManager", 0x2Eu, a2);
}
