/*
 * XREFs of ?GetRuntimeClassName@ContentCollectionImpl@TargetedContent@ContentManagement@@WCI@EAAJPEAPEAUHSTRING__@@@Z @ 0x180048350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::TargetedContent::ContentCollectionImpl::GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  return ContentManagement::TargetedContent::ContentCollectionImpl::GetRuntimeClassName(
           (ContentManagement::TargetedContent::ContentCollectionImpl *)(a1 - 40),
           a2);
}
