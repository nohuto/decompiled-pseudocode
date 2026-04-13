/*
 * XREFs of ?AddRef@ContentItemImpl@TargetedContent@ContentManagement@@WCI@EAAKXZ @ 0x1800482A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ContentManagement::TargetedContent::ContentItemImpl::AddRef(__int64 a1)
{
  return ContentManagement::TargetedContent::ContentCollectionImpl::AddRef((ContentManagement::TargetedContent::ContentCollectionImpl *)(a1 - 40));
}
