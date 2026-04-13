/*
 * XREFs of ?GetRuntimeClassName@ContentItemImpl@TargetedContent@ContentManagement@@WDA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180053050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::TargetedContent::ContentItemImpl::GetRuntimeClassName(__int64 a1, HSTRING *a2)
{
  return ContentManagement::TargetedContent::ContentItemImpl::GetRuntimeClassName(
           (ContentManagement::TargetedContent::ContentItemImpl *)(a1 - 48),
           a2);
}
