/*
 * XREFs of ?QueryInterface@ThumbnailCacheHelper@ContentManagement@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180017C20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::ThumbnailCacheHelper::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return ContentManagement::ThumbnailCacheHelper::QueryInterface(
           (ContentManagement::ThumbnailCacheHelper *)(a1 - 32),
           a2,
           a3);
}
