/*
 * XREFs of ?GetIids@SubscriptionImpl@TargetedContent@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800481D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::TargetedContent::SubscriptionImpl::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return ContentManagement::TargetedContent::SubscriptionImpl::GetIids(
           (ContentManagement::TargetedContent::SubscriptionImpl *)(a1 - 48),
           a2,
           a3);
}
