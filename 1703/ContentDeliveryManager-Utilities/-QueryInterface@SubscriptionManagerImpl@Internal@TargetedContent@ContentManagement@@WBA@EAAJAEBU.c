/*
 * XREFs of ?QueryInterface@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003F860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::QueryInterface(
           (ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *)(a1 - 16),
           a2,
           a3);
}
