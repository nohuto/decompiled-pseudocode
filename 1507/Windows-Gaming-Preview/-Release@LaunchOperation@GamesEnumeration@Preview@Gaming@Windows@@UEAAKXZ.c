/*
 * XREFs of ?Release@LaunchOperation@GamesEnumeration@Preview@Gaming@Windows@@UEAAKXZ @ 0x180011450
 * Callers:
 *     ?Release@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@W7EAAKXZ @ 0x18000E160 (-Release@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@W7EAAKXZ.c)
 *     ?Release@LaunchOperation@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAKXZ @ 0x18000E300 (-Release@LaunchOperation@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::LaunchOperation::Release(
        volatile signed __int64 *this,
        __int64 a2,
        __int64 a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(
           this,
           a2,
           a3);
}
