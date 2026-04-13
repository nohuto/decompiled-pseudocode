/*
 * XREFs of ?QueryInterface@AppInstallInfoRecordImpl@ContentManagement@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180017CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::AppInstallInfoRecordImpl::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return ContentManagement::AppInstallInfoRecordImpl::QueryInterface(
           (ContentManagement::AppInstallInfoRecordImpl *)(a1 - 32),
           a2,
           a3);
}
