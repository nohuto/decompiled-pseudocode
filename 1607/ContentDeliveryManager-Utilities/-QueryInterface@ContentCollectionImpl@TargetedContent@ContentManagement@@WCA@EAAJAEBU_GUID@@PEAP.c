/*
 * XREFs of ?QueryInterface@ContentCollectionImpl@TargetedContent@ContentManagement@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180048640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::TargetedContent::ContentCollectionImpl::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return ContentManagement::TargetedContent::ContentCollectionImpl::QueryInterface(
           (ContentManagement::TargetedContent::ContentCollectionImpl *)(a1 - 32),
           a2,
           a3);
}
