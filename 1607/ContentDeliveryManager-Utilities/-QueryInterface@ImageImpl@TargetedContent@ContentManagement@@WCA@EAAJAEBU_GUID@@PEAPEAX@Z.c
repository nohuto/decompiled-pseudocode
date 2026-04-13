/*
 * XREFs of ?QueryInterface@ImageImpl@TargetedContent@ContentManagement@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800533C0
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
           (ContentManagement::TargetedContent::ImageImpl *)(a1 - 32),
           a2,
           a3);
}
