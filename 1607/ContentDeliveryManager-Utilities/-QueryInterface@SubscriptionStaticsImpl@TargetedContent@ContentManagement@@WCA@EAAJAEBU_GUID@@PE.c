/*
 * XREFs of ?QueryInterface@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001B150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::TargetedContent::SubscriptionStaticsImpl::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return ContentManagement::TargetedContent::SubscriptionStaticsImpl::QueryInterface(
           (ContentManagement::TargetedContent::SubscriptionStaticsImpl *)(a1 - 32),
           a2,
           a3);
}
