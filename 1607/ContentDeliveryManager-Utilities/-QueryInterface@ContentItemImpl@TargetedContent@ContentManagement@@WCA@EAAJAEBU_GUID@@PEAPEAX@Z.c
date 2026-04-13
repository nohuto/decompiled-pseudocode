/*
 * XREFs of ?QueryInterface@ContentItemImpl@TargetedContent@ContentManagement@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180053300
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
           (ContentManagement::TargetedContent::ContentItemImpl *)(a1 - 32),
           a2,
           a3);
}
