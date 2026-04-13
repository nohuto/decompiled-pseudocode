/*
 * XREFs of _lambda_e6eb226b317cc1f73aeda6968dc9daf6_::operator() @ 0x180034DD0
 * Callers:
 *     ?Run@?$CTaskWrapper@V_lambda_e6eb226b317cc1f73aeda6968dc9daf6_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x1800397E0 (-Run@-$CTaskWrapper@V_lambda_e6eb226b317cc1f73aeda6968dc9daf6_@@@ComTaskPool@Internal@Windows@@U.c)
 * Callees:
 *     ?OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x180035C78 (-OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_e6eb226b317cc1f73aeda6968dc9daf6_::operator()(
        ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl **a1)
{
  const char *v1; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::OnContentUpdated(*a1);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x32,
                           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
                           v1);
  }
  return 0LL;
}
