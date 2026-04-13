/*
 * XREFs of ?GetRuntimeClassName@ContentItemImpl@TargetedContent@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180048A60
 * Callers:
 *     ?GetRuntimeClassName@ContentItemImpl@TargetedContent@ContentManagement@@WCI@EAAJPEAPEAUHSTRING__@@@Z @ 0x180052E70 (-GetRuntimeClassName@ContentItemImpl@TargetedContent@ContentManagement@@WCI@EAAJPEAPEAUHSTRING__.c)
 *     ?GetRuntimeClassName@ContentItemImpl@TargetedContent@ContentManagement@@WDA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180053050 (-GetRuntimeClassName@ContentItemImpl@TargetedContent@ContentManagement@@WDA@EAAJPEAPEAUHSTRING__.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::TargetedContent::ContentItemImpl::GetRuntimeClassName(
        ContentManagement::TargetedContent::ContentItemImpl *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"ContentManagement.TargetedContent.TargetedContentItem", 0x35u, a2);
}
