/*
 * XREFs of ?Release@LaunchOperation@GamesEnumeration@Preview@Gaming@Windows@@UEAAKXZ @ 0x1800135E0
 * Callers:
 *     ?Release@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@W7EAAKXZ @ 0x180010340 (-Release@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@W7EAAKXZ.c)
 *     ?Release@LaunchOperation@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAKXZ @ 0x1800104C0 (-Release@LaunchOperation@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::LaunchOperation::Release(volatile signed __int64 *this)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(this);
}
