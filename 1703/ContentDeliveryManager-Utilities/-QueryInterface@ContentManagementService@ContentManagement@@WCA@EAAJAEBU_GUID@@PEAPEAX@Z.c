/*
 * XREFs of ?QueryInterface@ContentManagementService@ContentManagement@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180022A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::ContentManagementService::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return ContentManagement::ContentManagementService::QueryInterface(
           (ContentManagement::ContentManagementService *)(a1 - 32),
           a2,
           a3);
}
