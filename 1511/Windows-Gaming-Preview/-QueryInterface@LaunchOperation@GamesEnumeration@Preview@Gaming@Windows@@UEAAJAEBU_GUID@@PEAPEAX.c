/*
 * XREFs of ?QueryInterface@LaunchOperation@GamesEnumeration@Preview@Gaming@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000E4D0
 * Callers:
 *     ?QueryInterface@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000DFE0 (-QueryInterface@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@W7EAAJAEBU_GUID@@PEAPE.c)
 *     ?QueryInterface@LaunchOperation@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000E100 (-QueryInterface@LaunchOperation@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAJAEBU_GUID@@PEAP.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::LaunchOperation::QueryInterface(
        __int64 this,
        _DWORD *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::QueryInterface(
           this,
           a2,
           a3);
}
