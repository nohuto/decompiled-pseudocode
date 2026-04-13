/*
 * XREFs of ?QueryInterface@ContentManagementBrokerServer@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001B480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::ContentManagementBrokerServer::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return ContentManagement::ContentManagementBrokerServer::QueryInterface(
           (ContentManagement::ContentManagementBrokerServer *)(a1 - 8),
           a2,
           a3);
}
