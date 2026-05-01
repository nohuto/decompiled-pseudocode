/*
 * XREFs of ?GetRuntimeClassName@DesktopAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18001D630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Gaming::Preview::GamesEnumeration::DesktopAppDisplayInfoServer::GetRuntimeClassName(
        Windows::Gaming::Preview::GamesEnumeration::DesktopAppDisplayInfoServer *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Gaming.Preview.GamesEnumeration.DesktopAppDisplayInfoServer", 0x43u, a2);
}
