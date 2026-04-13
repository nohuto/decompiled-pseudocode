/*
 * XREFs of ?GetIids@AppInstallInfoRecordImpl@ContentManagement@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180018560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::AppInstallInfoRecordImpl::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return ContentManagement::AppInstallInfoRecordImpl::GetIids(
           (ContentManagement::AppInstallInfoRecordImpl *)(a1 - 40),
           a2,
           a3);
}
