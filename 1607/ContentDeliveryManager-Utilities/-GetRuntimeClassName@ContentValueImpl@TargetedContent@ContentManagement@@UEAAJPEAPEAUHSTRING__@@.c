/*
 * XREFs of ?GetRuntimeClassName@ContentValueImpl@TargetedContent@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180048AA0
 * Callers:
 *     ?GetRuntimeClassName@ContentValueImpl@TargetedContent@ContentManagement@@WCI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800530D0 (-GetRuntimeClassName@ContentValueImpl@TargetedContent@ContentManagement@@WCI@EAAJPEAPEAUHSTRING_.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::TargetedContent::ContentValueImpl::GetRuntimeClassName(
        ContentManagement::TargetedContent::ContentValueImpl *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"ContentManagement.TargetedContent.TargetedContentValue", 0x36u, a2);
}
