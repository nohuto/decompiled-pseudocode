/*
 * XREFs of ?AddRef@ContentItemImpl@TargetedContent@ContentManagement@@W7EAAKXZ @ 0x180048250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ContentManagement::TargetedContent::ContentItemImpl::AddRef(__int64 a1)
{
  return ContentManagement::TargetedContent::ContentCollectionImpl::AddRef((ContentManagement::TargetedContent::ContentCollectionImpl *)(a1 - 8));
}
