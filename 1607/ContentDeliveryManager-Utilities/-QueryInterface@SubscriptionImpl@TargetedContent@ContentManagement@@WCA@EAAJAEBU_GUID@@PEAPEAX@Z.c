/*
 * XREFs of ?QueryInterface@SubscriptionImpl@TargetedContent@ContentManagement@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180048380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::TargetedContent::SubscriptionImpl::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return ContentManagement::TargetedContent::SubscriptionImpl::QueryInterface(
           (ContentManagement::TargetedContent::SubscriptionImpl *)(a1 - 32),
           a2,
           a3);
}
