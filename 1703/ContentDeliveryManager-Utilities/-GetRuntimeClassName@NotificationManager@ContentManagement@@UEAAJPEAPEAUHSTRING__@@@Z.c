/*
 * XREFs of ?GetRuntimeClassName@NotificationManager@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18000CA80
 * Callers:
 *     ?GetRuntimeClassName@NotificationManager@ContentManagement@@WCI@EAAJPEAPEAUHSTRING__@@@Z @ 0x18001F4C0 (-GetRuntimeClassName@NotificationManager@ContentManagement@@WCI@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::NotificationManager::GetRuntimeClassName(
        ContentManagement::NotificationManager *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"ContentManagement.NotificationManager", 0x25u, a2);
}
