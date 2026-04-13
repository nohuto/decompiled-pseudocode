/*
 * XREFs of ?GetRuntimeClassName@SubscriptionImpl@TargetedContent@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18003B560
 * Callers:
 *     ?GetRuntimeClassName@SubscriptionImpl@TargetedContent@ContentManagement@@WCI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800485C0 (-GetRuntimeClassName@SubscriptionImpl@TargetedContent@ContentManagement@@WCI@EAAJPEAPEAUHSTRING_.c)
 *     ?GetRuntimeClassName@SubscriptionImpl@TargetedContent@ContentManagement@@WDA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180048720 (-GetRuntimeClassName@SubscriptionImpl@TargetedContent@ContentManagement@@WDA@EAAJPEAPEAUHSTRING_.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::TargetedContent::SubscriptionImpl::GetRuntimeClassName(
        ContentManagement::TargetedContent::SubscriptionImpl *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"ContentManagement.TargetedContent.TargetedContentSubscription", 0x3Du, a2);
}
