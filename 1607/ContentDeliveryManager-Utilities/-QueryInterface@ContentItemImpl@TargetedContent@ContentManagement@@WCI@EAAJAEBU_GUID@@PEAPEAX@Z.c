/*
 * XREFs of ?QueryInterface@ContentItemImpl@TargetedContent@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180052DD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::TargetedContent::ContentItemImpl::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return ContentManagement::TargetedContent::ContentItemImpl::QueryInterface(
           (ContentManagement::TargetedContent::ContentItemImpl *)(a1 - 40),
           a2,
           a3);
}
