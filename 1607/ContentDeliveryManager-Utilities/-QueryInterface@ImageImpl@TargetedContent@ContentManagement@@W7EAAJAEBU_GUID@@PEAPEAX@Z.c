/*
 * XREFs of ?QueryInterface@ImageImpl@TargetedContent@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180052ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::TargetedContent::ImageImpl::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return ContentManagement::TargetedContent::ImageImpl::QueryInterface(
           (ContentManagement::TargetedContent::ImageImpl *)(a1 - 8),
           a2,
           a3);
}
