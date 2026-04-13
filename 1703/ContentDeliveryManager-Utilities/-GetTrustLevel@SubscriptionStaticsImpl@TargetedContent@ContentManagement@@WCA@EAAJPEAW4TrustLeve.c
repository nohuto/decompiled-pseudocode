/*
 * XREFs of ?GetTrustLevel@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@WCA@EAAJPEAW4TrustLevel@@@Z @ 0x1800225A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::TargetedContent::SubscriptionStaticsImpl::GetTrustLevel(
        __int64 a1,
        enum TrustLevel *a2)
{
  return Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::GetTrustLevel(
           (Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *)(a1 - 32),
           a2);
}
