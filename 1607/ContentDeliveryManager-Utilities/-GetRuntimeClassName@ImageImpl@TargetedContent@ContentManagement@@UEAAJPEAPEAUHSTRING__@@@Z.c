/*
 * XREFs of ?GetRuntimeClassName@ImageImpl@TargetedContent@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180048B00
 * Callers:
 *     ?GetRuntimeClassName@ImageImpl@TargetedContent@ContentManagement@@WCI@EAAJPEAPEAUHSTRING__@@@Z @ 0x180053000 (-GetRuntimeClassName@ImageImpl@TargetedContent@ContentManagement@@WCI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@ImageImpl@TargetedContent@ContentManagement@@WDA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800531C0 (-GetRuntimeClassName@ImageImpl@TargetedContent@ContentManagement@@WDA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::TargetedContent::ImageImpl::GetRuntimeClassName(
        ContentManagement::TargetedContent::ImageImpl *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"ContentManagement.TargetedContent.TargetedContentImage", 0x36u, a2);
}
