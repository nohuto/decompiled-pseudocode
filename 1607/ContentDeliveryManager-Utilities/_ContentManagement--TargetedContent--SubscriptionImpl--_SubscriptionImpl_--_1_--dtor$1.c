/*
 * XREFs of _ContentManagement::TargetedContent::SubscriptionImpl::_SubscriptionImpl_::_1_::dtor$1 @ 0x18005BC24
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::TargetedContent::SubscriptionImpl::_SubscriptionImpl_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  return Windows::Internal::MoveOnCopy<Windows::Internal::String>::~MoveOnCopy<Windows::Internal::String>((HSTRING *)(*(_QWORD *)(a2 + 64) + 72LL));
}
