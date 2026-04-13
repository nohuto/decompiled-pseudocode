/*
 * XREFs of ?QueryInterface@ContentCollectionImpl@TargetedContent@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800481B0
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
           (ContentManagement::TargetedContent::ContentCollectionImpl *)(a1 - 8),
           a2,
           a3);
}
