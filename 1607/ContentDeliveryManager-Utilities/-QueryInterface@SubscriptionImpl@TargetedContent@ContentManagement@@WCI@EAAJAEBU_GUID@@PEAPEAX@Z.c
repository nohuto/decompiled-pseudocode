/*
 * XREFs of ?QueryInterface@SubscriptionImpl@TargetedContent@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800484B0
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
           (ContentManagement::TargetedContent::SubscriptionImpl *)(a1 - 40),
           a2,
           a3);
}
