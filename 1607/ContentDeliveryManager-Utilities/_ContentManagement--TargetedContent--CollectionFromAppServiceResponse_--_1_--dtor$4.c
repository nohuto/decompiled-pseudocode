/*
 * XREFs of _ContentManagement::TargetedContent::CollectionFromAppServiceResponse_::_1_::dtor$4 @ 0x18005BBE2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::TargetedContent::CollectionFromAppServiceResponse_::_1_::dtor_4(
        __int64 a1,
        __int64 a2)
{
  return Windows::Internal::MoveOnCopy<Windows::Internal::String>::~MoveOnCopy<Windows::Internal::String>((HSTRING *)(a2 + 88));
}
