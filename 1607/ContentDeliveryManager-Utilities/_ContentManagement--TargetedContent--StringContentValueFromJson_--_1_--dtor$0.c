/*
 * XREFs of _ContentManagement::TargetedContent::StringContentValueFromJson_::_1_::dtor$0 @ 0x18005C4E2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::TargetedContent::StringContentValueFromJson_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return Windows::Internal::MoveOnCopy<Windows::Internal::String>::~MoveOnCopy<Windows::Internal::String>((HSTRING *)(a2 + 40));
}
