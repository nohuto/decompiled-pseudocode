/*
 * XREFs of ?QueryInterface@DesktopAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001DF80
 * Callers:
 *     ?QueryInterface@DesktopAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001D3F0 (-QueryInterface@DesktopAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAJAEBU_.c)
 *     ?QueryInterface@DesktopAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001D530 (-QueryInterface@DesktopAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAJAEB.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::DesktopAppDisplayInfoServer::QueryInterface(
        __int64 this,
        _DWORD *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::ApplicationModel::IAppDisplayInfo,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::QueryInterface(
           this,
           a2,
           a3);
}
