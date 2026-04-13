/*
 * XREFs of ?GetRuntimeClassName@ActionHelper@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18000EC90
 * Callers:
 *     ?GetRuntimeClassName@ActionHelper@ContentManagement@@WCI@EAAJPEAPEAUHSTRING__@@@Z @ 0x18001F180 (-GetRuntimeClassName@ActionHelper@ContentManagement@@WCI@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::ActionHelper::GetRuntimeClassName(
        ContentManagement::ActionHelper *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"ContentManagement.ActionHelper", 0x1Eu, a2);
}
