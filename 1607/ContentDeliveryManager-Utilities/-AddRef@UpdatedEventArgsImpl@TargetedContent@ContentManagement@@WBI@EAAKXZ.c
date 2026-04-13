/*
 * XREFs of ?AddRef@UpdatedEventArgsImpl@TargetedContent@ContentManagement@@WBI@EAAKXZ @ 0x1800482B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ContentManagement::TargetedContent::UpdatedEventArgsImpl::AddRef(__int64 a1)
{
  return ContentManagement::TargetedContent::ContentCollectionImpl::AddRef((ContentManagement::TargetedContent::ContentCollectionImpl *)(a1 - 24));
}
