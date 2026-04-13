/*
 * XREFs of ?QueryInterface@UpdatedEventArgsImpl@TargetedContent@ContentManagement@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800484E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::TargetedContent::UpdatedEventArgsImpl::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return ContentManagement::TargetedContent::UpdatedEventArgsImpl::QueryInterface(
           (ContentManagement::TargetedContent::UpdatedEventArgsImpl *)(a1 - 32),
           a2,
           a3);
}
