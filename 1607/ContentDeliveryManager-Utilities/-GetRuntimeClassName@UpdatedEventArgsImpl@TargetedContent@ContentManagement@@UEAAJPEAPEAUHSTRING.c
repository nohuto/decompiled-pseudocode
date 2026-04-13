/*
 * XREFs of ?GetRuntimeClassName@UpdatedEventArgsImpl@TargetedContent@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18003B5C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::TargetedContent::UpdatedEventArgsImpl::GetRuntimeClassName(
        ContentManagement::TargetedContent::UpdatedEventArgsImpl *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"ContentManagement.TargetedContent.TargetedContentUpdatedEventArgs", 0x41u, a2);
}
