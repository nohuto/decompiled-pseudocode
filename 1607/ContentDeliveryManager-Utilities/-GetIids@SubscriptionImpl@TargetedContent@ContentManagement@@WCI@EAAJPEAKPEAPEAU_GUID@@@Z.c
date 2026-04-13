/*
 * XREFs of ?GetIids@SubscriptionImpl@TargetedContent@ContentManagement@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800485E0
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
           (ContentManagement::TargetedContent::SubscriptionImpl *)(a1 - 40),
           a2,
           a3);
}
