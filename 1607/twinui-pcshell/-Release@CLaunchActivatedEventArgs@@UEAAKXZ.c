/*
 * XREFs of ?Release@CLaunchActivatedEventArgs@@UEAAKXZ @ 0x180028DA0
 * Callers:
 *     ?Release@CLaunchActivatedEventArgs@@WHA@EAAKXZ @ 0x18002A840 (-Release@CLaunchActivatedEventArgs@@WHA@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WLA@EAAKXZ @ 0x18002A990 (-Release@CLaunchActivatedEventArgs@@WLA@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WNA@EAAKXZ @ 0x18002AA00 (-Release@CLaunchActivatedEventArgs@@WNA@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WBI@EAAKXZ @ 0x18002AAD0 (-Release@CLaunchActivatedEventArgs@@WBI@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WHI@EAAKXZ @ 0x18002AC00 (-Release@CLaunchActivatedEventArgs@@WHI@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WLI@EAAKXZ @ 0x18002AD10 (-Release@CLaunchActivatedEventArgs@@WLI@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WNI@EAAKXZ @ 0x18002AD80 (-Release@CLaunchActivatedEventArgs@@WNI@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WCA@EAAKXZ @ 0x18002AE80 (-Release@CLaunchActivatedEventArgs@@WCA@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WIA@EAAKXZ @ 0x18002B020 (-Release@CLaunchActivatedEventArgs@@WIA@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@W7EAAKXZ @ 0x18002B1A0 (-Release@CLaunchActivatedEventArgs@@W7EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WCI@EAAKXZ @ 0x18002B1F0 (-Release@CLaunchActivatedEventArgs@@WCI@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WGI@EAAKXZ @ 0x18002B360 (-Release@CLaunchActivatedEventArgs@@WGI@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WMI@EAAKXZ @ 0x18002B430 (-Release@CLaunchActivatedEventArgs@@WMI@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WBA@EAAKXZ @ 0x18002B530 (-Release@CLaunchActivatedEventArgs@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CLaunchActivatedEventArgs::Release(CLaunchActivatedEventArgs *this)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CActivatedEventArgsWithPrelaunchAndViewIdBase,Microsoft::WRL::Details::InterfaceList<Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Microsoft::WRL::Details::InterfaceList<Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(this);
}
