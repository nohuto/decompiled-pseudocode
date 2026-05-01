/*
 * XREFs of ?AddRef@LaunchOperation@GamesEnumeration@Preview@Gaming@Windows@@UEAAKXZ @ 0x180007CB0
 * Callers:
 *     ?AddRef@DesktopAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAKXZ @ 0x1800098E0 (-AddRef@DesktopAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAKXZ.c)
 *     ?AddRef@SplitIterator@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@WBA@EAAKXZ @ 0x1800099D0 (-AddRef@SplitIterator@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredic.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::LaunchOperation::AddRef(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::ApplicationModel::IAppDisplayInfo,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::AddRef(this);
}
