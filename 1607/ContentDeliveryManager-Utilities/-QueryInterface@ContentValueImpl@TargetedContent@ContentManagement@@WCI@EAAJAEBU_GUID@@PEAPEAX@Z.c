/*
 * XREFs of ?QueryInterface@ContentValueImpl@TargetedContent@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180052E60
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
           (ContentManagement::TargetedContent::ContentValueImpl *)(a1 - 40),
           a2,
           a3);
}
