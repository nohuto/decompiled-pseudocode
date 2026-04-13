/*
 * XREFs of ?GetRuntimeClassName@ImageImpl@TargetedContent@ContentManagement@@WCI@EAAJPEAPEAUHSTRING__@@@Z @ 0x180053000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::TargetedContent::ImageImpl::GetRuntimeClassName(__int64 a1, HSTRING *a2)
{
  return ContentManagement::TargetedContent::ImageImpl::GetRuntimeClassName(
           (ContentManagement::TargetedContent::ImageImpl *)(a1 - 40),
           a2);
}
