/*
 * XREFs of ?GetRuntimeClassName@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180018A80
 * Callers:
 *     ?GetRuntimeClassName@ContentManagementBrokerServer@ContentManagement@@WCI@EAAJPEAPEAUHSTRING__@@@Z @ 0x18001B3E0 (-GetRuntimeClassName@ContentManagementBrokerServer@ContentManagement@@WCI@EAAJPEAPEAUHSTRING__@@.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::ContentManagementBrokerServer::GetRuntimeClassName(
        ContentManagement::ContentManagementBrokerServer *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"ContentManagement.ContentManagementBroker", 0x29u, a2);
}
