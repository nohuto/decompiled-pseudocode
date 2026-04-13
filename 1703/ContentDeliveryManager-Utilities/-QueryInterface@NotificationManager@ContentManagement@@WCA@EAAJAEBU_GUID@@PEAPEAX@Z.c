/*
 * XREFs of ?QueryInterface@NotificationManager@ContentManagement@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001EDD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::NotificationManager::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return ContentManagement::NotificationManager::QueryInterface(
           (ContentManagement::NotificationManager *)(a1 - 32),
           a2,
           a3);
}
