/*
 * XREFs of _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RegisterSubscription_::_1_::dtor$14 @ 0x18005B4AA
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@std@@QEAA@XZ @ 0x180036FEC (--1-$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentMa.c)
 */

__int64 __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RegisterSubscription_::_1_::dtor_14(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 52) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 52) &= ~1u;
    return std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>::~shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>(a2 + 256);
  }
  return result;
}
