/*
 * XREFs of ?GetRuntimeClassName@ThumbnailCacheHelper@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18000A120
 * Callers:
 *     ?GetRuntimeClassName@ThumbnailCacheHelper@ContentManagement@@WCI@EAAJPEAPEAUHSTRING__@@@Z @ 0x180018180 (-GetRuntimeClassName@ThumbnailCacheHelper@ContentManagement@@WCI@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::ThumbnailCacheHelper::GetRuntimeClassName(
        ContentManagement::ThumbnailCacheHelper *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"ContentManagement.ThumbnailCacheHelper", 0x26u, a2);
}
