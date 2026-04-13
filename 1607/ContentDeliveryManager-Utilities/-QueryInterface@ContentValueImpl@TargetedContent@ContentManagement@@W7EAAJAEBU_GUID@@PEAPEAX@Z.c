/*
 * XREFs of ?QueryInterface@ContentValueImpl@TargetedContent@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180052DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::TargetedContent::ContentValueImpl::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return ContentManagement::TargetedContent::ContentValueImpl::QueryInterface(
           (ContentManagement::TargetedContent::ContentValueImpl *)(a1 - 8),
           a2,
           a3);
}
