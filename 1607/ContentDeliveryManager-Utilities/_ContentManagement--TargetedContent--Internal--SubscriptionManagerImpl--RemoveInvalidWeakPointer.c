/*
 * XREFs of _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RemoveInvalidWeakPointersNoLock_::_1_::dtor$0 @ 0x18005B605
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RemoveInvalidWeakPointersNoLock_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  std::vector<Microsoft::WRL::WeakRef>::~vector<Microsoft::WRL::WeakRef>(a2 + 32);
}
