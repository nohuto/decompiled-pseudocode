/*
 * XREFs of ?GetRuntimeClassName@SetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18001BF20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Gaming::Preview::GamesEnumeration::SetCategoryOperation::GetRuntimeClassName(
        Windows::Gaming::Preview::GamesEnumeration::SetCategoryOperation *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"RuntimeClass_Windows_Gaming_Preview_GamesEnumeration_SetCategoryOperation", 0x49u, a2);
}
