/*
 * XREFs of ?GetRuntimeClassName@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180040B80
 * Callers:
 *     ?GetRuntimeClassName@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@WCI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800446F0 (-GetRuntimeClassName@TargetedContentActionInternalImpl@Internal@TargetedContent@Ser_ea_1800446F0.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::GetRuntimeClassName(
        Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Services.TargetedContent.Internal.TargetedContentActionInternal", 0x47u, a2);
}
