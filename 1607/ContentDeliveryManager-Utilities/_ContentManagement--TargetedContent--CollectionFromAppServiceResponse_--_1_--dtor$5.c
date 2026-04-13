/*
 * XREFs of _ContentManagement::TargetedContent::CollectionFromAppServiceResponse_::_1_::dtor$5 @ 0x18005BBEE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::TargetedContent::CollectionFromAppServiceResponse_::_1_::dtor_5(
        __int64 a1,
        __int64 a2)
{
  return Windows::Internal::MoveOnCopy<Windows::Internal::String>::~MoveOnCopy<Windows::Internal::String>((HSTRING *)(a2 + 120));
}
