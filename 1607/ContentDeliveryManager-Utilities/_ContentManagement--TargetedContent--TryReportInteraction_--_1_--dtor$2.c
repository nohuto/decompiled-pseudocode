/*
 * XREFs of _ContentManagement::TargetedContent::TryReportInteraction_::_1_::dtor$2 @ 0x18005C366
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::TargetedContent::TryReportInteraction_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return Windows::Internal::MoveOnCopy<Windows::Internal::String>::~MoveOnCopy<Windows::Internal::String>((HSTRING *)(a2 + 32));
}
