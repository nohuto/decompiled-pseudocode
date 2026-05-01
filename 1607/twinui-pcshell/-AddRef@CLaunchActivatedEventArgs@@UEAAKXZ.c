/*
 * XREFs of ?AddRef@CLaunchActivatedEventArgs@@UEAAKXZ @ 0x180028DB0
 * Callers:
 *     ?AddRef@CLaunchActivatedEventArgs@@WLI@EAAKXZ @ 0x18002A7B0 (-AddRef@CLaunchActivatedEventArgs@@WLI@EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WNI@EAAKXZ @ 0x18002A810 (-AddRef@CLaunchActivatedEventArgs@@WNI@EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WCA@EAAKXZ @ 0x18002A9C0 (-AddRef@CLaunchActivatedEventArgs@@WCA@EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WIA@EAAKXZ @ 0x18002AAA0 (-AddRef@CLaunchActivatedEventArgs@@WIA@EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@W7EAAKXZ @ 0x18002AC90 (-AddRef@CLaunchActivatedEventArgs@@W7EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WCI@EAAKXZ @ 0x18002AD30 (-AddRef@CLaunchActivatedEventArgs@@WCI@EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WGI@EAAKXZ @ 0x18002ADF0 (-AddRef@CLaunchActivatedEventArgs@@WGI@EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WMI@EAAKXZ @ 0x18002AFC0 (-AddRef@CLaunchActivatedEventArgs@@WMI@EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WBA@EAAKXZ @ 0x18002B090 (-AddRef@CLaunchActivatedEventArgs@@WBA@EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WHA@EAAKXZ @ 0x18002B180 (-AddRef@CLaunchActivatedEventArgs@@WHA@EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WLA@EAAKXZ @ 0x18002B2A0 (-AddRef@CLaunchActivatedEventArgs@@WLA@EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WNA@EAAKXZ @ 0x18002B330 (-AddRef@CLaunchActivatedEventArgs@@WNA@EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WBI@EAAKXZ @ 0x18002B420 (-AddRef@CLaunchActivatedEventArgs@@WBI@EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WHI@EAAKXZ @ 0x18002B510 (-AddRef@CLaunchActivatedEventArgs@@WHI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CLaunchActivatedEventArgs::AddRef(CLaunchActivatedEventArgs *this)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CActivatedEventArgsWithPrelaunchAndViewIdBase,Microsoft::WRL::Details::InterfaceList<Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Microsoft::WRL::Details::InterfaceList<Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::AddRef(this);
}
