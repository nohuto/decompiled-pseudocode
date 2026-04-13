/*
 * XREFs of ?GetIids@ContentManagementBrokerServer@ContentManagement@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18001B430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::ContentManagementBrokerServer::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return ContentManagement::ContentManagementBrokerServer::GetIids(
           (ContentManagement::ContentManagementBrokerServer *)(a1 - 40),
           a2,
           a3);
}
