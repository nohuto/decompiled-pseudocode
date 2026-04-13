/*
 * XREFs of ?AddRef@AppInstallInfoRecordImpl@ContentManagement@@WCA@EAAKXZ @ 0x180017D20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ContentManagement::AppInstallInfoRecordImpl::AddRef(__int64 a1)
{
  return ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::AddRef((ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *)(a1 - 32));
}
