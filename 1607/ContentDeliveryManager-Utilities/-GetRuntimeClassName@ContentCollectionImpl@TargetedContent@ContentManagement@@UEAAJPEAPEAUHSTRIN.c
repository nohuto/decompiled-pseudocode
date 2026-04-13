/*
 * XREFs of ?GetRuntimeClassName@ContentCollectionImpl@TargetedContent@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18003B670
 * Callers:
 *     ?GetRuntimeClassName@ContentCollectionImpl@TargetedContent@ContentManagement@@WCI@EAAJPEAPEAUHSTRING__@@@Z @ 0x180048350 (-GetRuntimeClassName@ContentCollectionImpl@TargetedContent@ContentManagement@@WCI@EAAJPEAPEAUHST.c)
 *     ?GetRuntimeClassName@ContentCollectionImpl@TargetedContent@ContentManagement@@WDA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180048480 (-GetRuntimeClassName@ContentCollectionImpl@TargetedContent@ContentManagement@@WDA@EAAJPEAPEAUHST.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::TargetedContent::ContentCollectionImpl::GetRuntimeClassName(
        ContentManagement::TargetedContent::ContentCollectionImpl *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"ContentManagement.TargetedContent.TargetedContentCollection", 0x3Bu, a2);
}
