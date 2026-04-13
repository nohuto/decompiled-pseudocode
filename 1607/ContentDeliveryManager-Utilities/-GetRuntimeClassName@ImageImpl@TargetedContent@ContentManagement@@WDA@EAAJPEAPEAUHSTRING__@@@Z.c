/*
 * XREFs of ?GetRuntimeClassName@ImageImpl@TargetedContent@ContentManagement@@WDA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800531C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::TargetedContent::ImageImpl::GetRuntimeClassName(__int64 a1, HSTRING *a2)
{
  return ContentManagement::TargetedContent::ImageImpl::GetRuntimeClassName(
           (ContentManagement::TargetedContent::ImageImpl *)(a1 - 48),
           a2);
}
