/*
 * XREFs of _std::make_shared_ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue_unsigned_short_const_____ptr64__FILETIME__::_1_::dtor$1 @ 0x18005B839
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@std@@QEAA@XZ @ 0x180036FEC (--1-$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentMa.c)
 */

__int64 __fastcall std::make_shared_ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue_unsigned_short_const_____ptr64__FILETIME__::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>::~shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>(*(_QWORD *)(a2 + 96));
  }
  return result;
}
