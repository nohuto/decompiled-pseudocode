/*
 * XREFs of ?QueryInterface@UpdatedEventArgsImpl@TargetedContent@ContentManagement@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800483B0
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
           (ContentManagement::TargetedContent::UpdatedEventArgsImpl *)(a1 - 24),
           a2,
           a3);
}
